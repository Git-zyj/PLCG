# THIS CODE WILL BE REFACTORED!!!
# todo use ast eval, since eval is unsafe!
import random
import math
import numpy as np

from collections import defaultdict
from typing import List, Set, Tuple
from itertools import product, combinations_with_replacement

# from parse_input_v2_0 import parse_data
from parse_input import parse_data
from settings import ArrayData, Arrays_total, Schedule_tree, json_input_path, target_path, max_degree
from polybench_files_generation import polybench_pipeline_single_file

class CodeGenerator:
    def __init__(self):
        
        self.filename = None
        self._parsed_data = None

        self.arrays_total = Arrays_total()
        self.bounds_data = dict()
        self.variables = []
        
        self.schedule_tree = Schedule_tree()
        self.loop_structure = dict()
        self.SCoP = []
    
    def generate_c_code(self, filename):
        
        self.__init__()
        
        self.filename = filename
        self._parsed_data = parse_data(self.filename)
        
        # print(f'[zyj-debug] _parsed_data: {self._parsed_data}\n')
        
        # print(f'Generation start for "{self.filename}".\n')
        
        self.extract_instructions()
        # print(f'[zyj-debug] arrays_write: {self.arrays_total.arrays_write}\n')
        # print(f'[zyj-debug] arrays_read: {self.arrays_total.arrays_read}\n')
        
        self.create_bounds_data()
        # print(f'[zyj-debug] bounds_data: {self.bounds_data}\n')
        
        arrays_in_stmts = self.parse_arrays()
        # print(f'[zyj-debug] arrays_in_stmts: {arrays_in_stmts}\n')
        
        self.convert_statements_to_expressions(arrays_in_stmts)
        # print(f'[zyj-debug] loop_body: {self.SCoP}\n')
        
        self.translate_calculated_values_to_bounds()
        # print(f'[zyj-debug] loop_structure: {self.loop_structure}\n')
        # print(f'[zyj-debug] bounds_data: {self.bounds_data}\n')
        
        self.get_final_loop()
        scop = '\n'.join(self.SCoP)
        print(f'[zyj-debug] SCoP: \n{scop}\n')
        
        polybench_pipeline_single_file(self.filename, json_input_path, self.SCoP, target_path)

    # todo parse_input_v1.py
    # todo get rid of array_sizes__ the last two chars
    def extract_instructions(self):
        """Extract 'dependency' and 'additional_computation' instructions from the DSL"""
        id = 0
        schedules = []
        branchs = []
        self.arrays_total.arrays_write = defaultdict(ArrayData)
        self.arrays_total.arrays_read = defaultdict(list)
        for i in range(len(self._parsed_data.instructions)):
            instruction = self._parsed_data.instructions[i]
            # print(f'[zyj-debug] instruction: {instruction}\n')
            schedules.append(instruction['schedule'])
            branchs.append(instruction['branch'])
            
            self.variables.append([instruction['schedule'][j] for j in range(len(instruction['schedule'])) if j % 2 == 1])
            
            self.arrays_total.arrays_read[i] = []
            
            if 'dependency' in instruction:
                dependency = instruction['dependency']
                for dep in dependency:
                    if dep['category'] == "write": # get source array info when dep in WAW, or get write array info when dep is WAR or RAW
                        write_distance = dep['distance']
                        write_stmt_id = dep['write_stmt_id']
                        write_array = ArrayData(distance = write_distance, write_stmt_id = write_stmt_id)
                        self.arrays_total.arrays_write[i] = write_array
                        break
                self.extract_dependency(i, dependency)

            if 'additional_computation' in instruction:
                additional_computation = instruction['additional_computation']
                for comp in additional_computation:
                    if comp['array_type'] == "write": # get write array info for stmt
                        write_distance = write_stmt_id = None
                        if self.arrays_total.arrays_write[i]:
                            write_distance = self.arrays_total.arrays_write[i].distance
                            write_stmt_id =  self.arrays_total.arrays_write[i].write_stmt_id
                        write_name = comp['array_name']
                        write_access = comp['array_access_function']
                        write_array = ArrayData(write_name, write_access,write_distance, write_stmt_id)
                        self.arrays_total.arrays_write[i] = write_array
                        break
                self.extract_additional_computation(i, additional_computation)

            id += 1
            
        self.schedule_tree.add_paths(schedules, branchs)
        self.schedule_tree.check_tree()
        
        scop_init = '\n'.join(self.schedule_tree.extract_tree('code'))
        print(f'[zyj-debug] initial scop: \n{scop_init}\n')
        
        # print(f'[zyj-debug] arrays_write before check: {self.arrays_total.arrays_write}\n')
        
        for stmt_id in self.arrays_total.arrays_read.keys():
            check_output = self.arrays_total.check_array_dependence(stmt_id)
            if check_output != -1:
                if check_output[1] == 0:
                    error_msg = f'Stmt {check_output[0]}: No additional computation or dependence info for Write array in file {self.filename}.'
                    raise ValueError(error_msg)
                elif check_output[1] == 1:
                    error_msg = f'Stmt {check_output[0]}: No available dependence or additional computation info for Write array in file {self.filename}'
                    raise ValueError(error_msg)
                        
            
        # print(f'[zyj-debug] arrays_write after check: {self.arrays_total.arrays_write}\n')
        # print(f'[zyj-debug] arrays_read: {self.arrays_total.arrays_read}\n')
        # print(f'[zyj-debug] variables: {self.variables}\n')

    # todo parse
    def extract_dependency(self, id: int, dependency: List):
        """For each distance Tuple translate array name, distance value and id for source array (WAW) or write array (WAR or RAW) to ArrayData. Assign the source array to the target array Dict."""
        for dep in dependency:
            if not dep["category"] == "write":
                source_array = ArrayData(distance = dep['distance'], write_stmt_id = dep['write_stmt_id'])
                self.arrays_total.arrays_read[id].append(source_array)

    # todo parse
    def extract_additional_computation(self, id: int, additional_computation: List):
        """For each additional computation translate array name, and array access function to ArrayData. Assign the source array to the target array Dict."""
        for computation in additional_computation:
            if not computation["array_type"] == "write":
                source_array = ArrayData(array_name = computation['array_name'], array_access_function = computation['array_access_function'])
                self.arrays_total.arrays_read[id].append(source_array)
        
    def create_bounds_data(self):
        """Create a dict that will store loop bounds for each loop variable."""
        vars = set([x for tmp in self.variables for x in tmp])
        for var in vars:
            self.bounds_data[var] = {
                'min': {'numerical': set(), 'string': set(), 'variable': defaultdict(set), 'bound_value': None},
                'max': {'numerical': set(), 'string': set(), 'variable': defaultdict(set), 'bound_value': None}}
        
        if self._parsed_data.loop_bounds and self._parsed_data.params: # check assigned loop_bounds
            # print(f'[zyj-debug] loop_bounds: {loop_bounds}\n')
            for key, value in self._parsed_data.loop_bounds.items():
                # print(f'[zyj-debug] key: {key}, value: {value}\n')
                min_value, max_value = value
                if isinstance(min_value, str):
                    for var in vars: # check variable in loop_bounds
                        if var in min_value:
                            self.bounds_data[key]['min']['variable'][var].add(min_value)
                            break
                    else:
                        self.bounds_data[key]['min']['string'].add(min_value)
                else:
                    self.bounds_data[key]['min']['numerical'].add(min_value)
                if isinstance(max_value, str):
                    for var in vars:
                        if var in max_value:
                            self.bounds_data[key]['max']['variable'][var].add(max_value)
                            break
                    else:
                        self.bounds_data[key]['max']['string'].add(max_value)
                else:
                    self.bounds_data[key]['max']['numerical'].add(max_value)
    
    def parse_arrays(self):
        """Transfer access info to array index and update loop bounds"""
        arrays_in_stmts = []    
        for stmt_id in self.arrays_total.arrays_read.keys():
            array_write = self.arrays_total.arrays_write[stmt_id]
            arrays_in_stmt = []
            
            if not array_write.write_stmt_id == None:
                array_write = self.get_initial_array_info(array_write) # recursively get array access function
                self.arrays_total.arrays_write[stmt_id] = array_write
                
            indexed_array_access = self.get_indexed_array_access(stmt_id, array_write.array_access_function)
                
            for j, access_function in enumerate(array_write.array_access_function):
                self.calculate_bounds(stmt_id, array_write.array_name, access_function, j)
                
            arrays_in_stmt.append(array_write.array_name + self.concatenate_with_square_brackets(indexed_array_access))
                
                
            for i, array_read in enumerate(self.arrays_total.arrays_read[stmt_id]):
                if not array_read.write_stmt_id == None:
                    array_read = self.get_initial_array_info(array_read)
                    self.arrays_total.arrays_read[stmt_id][i] = array_read
                
                indexed_array_access = self.get_indexed_array_access(stmt_id, array_read.array_access_function)
                
                for j, access_function in enumerate(array_read.array_access_function):
                    self.calculate_bounds(stmt_id, array_read.array_name, access_function, j)

                arrays_in_stmt.append(array_read.array_name + self.concatenate_with_square_brackets(indexed_array_access))    
                
            arrays_in_stmts.append(arrays_in_stmt)
            
        # print(f'[zyj-debug] arrays_write: {self.arrays_total.arrays_write}\n')
        # print(f'[zyj-debug] arrays_read: {self.arrays_total.arrays_read}\n')
        # print(f'bounds_data before calc:\n{self.bounds_data}\n')
        
        return arrays_in_stmts
    
    # todo rename
    def get_indexed_array_access(self, stmt_id: int, array_access_function: List[List[int]]) -> List[str]:
        """ Translate all access functions within an array expressed as a matrix of numbers to expression with loop indexes. Respect loop nest depth when creating index letters.
        Example:
            array_name = 'A', array_access_function = [[2, 0, 0, -3], [1, 1, 1, 8]]
            -> 'A', ['2*i-3', 'i+j+k+8']
        """
        index_letters = self.variables[stmt_id]
        # print(f'[zyj-debug] index_letters: {index_letters}\n')
        # print(f'[zyj-debug] array_access_function: {array_access_function}\n')
        
        indexed_array_access = []
        for access_fun in array_access_function:
            access_fun_str = self.translate_access_function_to_indexes(access_fun, index_letters)
            indexed_array_access.append(access_fun_str)
        # print(f'[zyj-debug] indexed_array_access: {indexed_array_access}\n')
        
        return indexed_array_access

    def translate_access_function_to_indexes(self, access_fun: List[int], index_letters: List[str]) -> str:
        """ Return a string representation of access function expressed with loop indexes.
        Example:
            access_fun = [1, 1, 2, -1], index_letters = ['i','j','k']
            -> 'i+j+2*k-1'
        """
        terms = self.generate_terms(index_letters, max_degree)
        parts = []
        
        for coef, term in zip(access_fun, terms):
            if coef == 0:
                continue
            
            # 构造项表达式
            term_str = ''
            if term:  # 非常数项
                term_str = '*'.join([index_letters[v] for v in term])
            
            # 添加系数
            if coef == 1 and term:
                parts.append(f"{term_str}")
            elif coef == -1 and term:
                parts.append(f"-{term_str}")
            elif not term: # 常数项
                parts.append(f"{coef}")
            else:
                parts.append(f"{coef}*{term_str}")
        
        if not parts:
            return "0"
        
        expr = ' + '.join(parts).replace('+ -', '- ')

        return expr

    def stringify_multiplication(self, n: int, index_letter: str) -> str:
        """Return an integer and an index letter formatted to multiplication expression.
        When n is 0, 1 or -1 the result is compressed. """
        if n == 0:
            return ''
        elif n == 1:
            return '+' + str(index_letter)
        elif n == -1:
            return '-' + str(index_letter)
        else:
            n_str = self.stringify_int(n)
            return n_str + '*' + str(index_letter)

    def stringify_int(self, number):
        """Convert as signed number represented by a string."""
        return '{:+}'.format(number)

    def get_initial_array_info(self, array_data: ArrayData, check_list: Set[int] = set()) -> Tuple[str, List[List[int]]]:
        """Return array with array access from write array (in WAR or RAW dep) or source array (in WAW) using write_stmt_id and distance. 
        When the write array or source array doesn't have array access since it also depends on another array, try to recursively get array access from the initial array
        Example:
            array_data: write_stmt_id = 0, distance = [1,-1]
            array_write in stmt {0}: array_name = 'A', array_access_function = [[2, 0, 0, -3], [1, 1, 1, 8]]
            -> 'A', [[2, 0, 0, -2], [1, 1, 1, 7]]
        """
        # print(f'[zyj-debug] get_initial_array_info:\n array_data: {array_data}\n')
        
        array_write = self.arrays_total.arrays_write[array_data.write_stmt_id] 
        if not array_write.array_access_function:
            array_write = self.get_initial_array_info(array_write)
        
        array_access_function = array_write.array_access_function
        array_name = array_write.array_name
        
        if array_data.distance:
            terms = self.generate_terms(range(len(array_data.distance)), max_degree)
            self.apply_offsets_to_coeffs(array_access_function, terms, array_data.distance)
            
        array_data = ArrayData(array_name = array_name, array_access_function = array_access_function)
        # print(f'[zyj-debug] get_initial_array_info:\n new array_data: {array_data}\n')
        
        return array_data

    def generate_terms(self, variables, max_degree):
        """生成所有可能的项（常数项、线性项、二次项等）"""
        terms = [()]
        for d in range(1, max_degree + 1):
            terms += list(combinations_with_replacement(range(len(variables)), d))
        return terms

    def create_offset_var(self, var_idx, offset):
        """创建 (var + offset) 表达式"""
        if offset == 0:
            return {(var_idx,): 1}
        return {(var_idx,): 1, (): offset}

    def expand_product(self, factors):
        """展开乘积项（如 (i+1)*(j-1)）"""
        result = {(): 1}
        
        for factor in factors:
            new_result = defaultdict(int)
            for t1, c1 in result.items():
                for t2, c2 in factor.items():
                    # 合并变量索引（保持排序以识别同类项）
                    merged_term = tuple(sorted(t1 + t2))
                    new_result[merged_term] += c1 * c2
            result = new_result
            
        return dict(result)

    def apply_offsets_to_poly(self, term_dict, offsets):
        """将偏移量应用到多项式并展开"""
        new_poly = defaultdict(int)
        
        for term, coeff in term_dict.items():
            # 初始化 substituted 为 {(): 1}（代表常数项1）
            substituted = {(): 1}
            
            # 对term中的每个变量应用偏移
            for var_idx in term:
                # 创建 (var + offset) 的表达式
                offset_var = self.create_offset_var(var_idx, offsets[var_idx])
                
                # 计算 substituted * (var + offset)
                new_substituted = defaultdict(int)
                for (t1, c1), (t2, c2) in product(substituted.items(), offset_var.items()):
                    merged_term = tuple(sorted(t1 + t2))
                    new_substituted[merged_term] += c1 * c2
                substituted = new_substituted
            
            # 合并到新多项式
            for t, c in substituted.items():
                new_poly[t] += coeff * c
                
        return dict(new_poly)

    def apply_offsets_to_coeffs(self, coeff_matrix, terms, offsets):
        """
        应用偏移量到系数矩阵
        :param coeff_matrix: 原始系数矩阵（每行对应一个访问函数）
        :param terms: 所有可能的项列表
        :param offsets: 偏移向量，如 [1, -1, 0] 表示 i→i+1, j→j-1, k→k+0
        :return: 新的系数矩阵
        """
        new_coeffs = []
        for coeffs in coeff_matrix:
            # 将系数映射到项字典
            term_dict = {term: coeff for term, coeff in zip(terms, coeffs) if coeff != 0}
            
            # 应用偏移量并展开新多项式
            new_poly = self.apply_offsets_to_poly(term_dict, offsets)
            
            # 将新多项式转换回系数向量
            new_coeff = [new_poly.get(term, 0) for term in terms]
            new_coeffs.append(new_coeff)
            
        return np.array(new_coeffs)

    def calculate_bounds(self, stmt_id, array_name: str, access_function: List[int], position: int):
        """Based on rank of the array_access_function update the min and max bounds."""

        # print(self.variables, stmt_id)

        rank = self.get_rank(access_function[:1+len(self.variables[stmt_id])])  # don't pass the numerical value

        if rank == -1:  # we don't want to have an expression like C[-1] when access fun is [0,0,0, -1]
            value = access_function[0]
            param = self._parsed_data.array_sizes[array_name][position]
            max_array_size = self._parsed_data.params[param]
            if value not in range(0, max_array_size):
                print(f'[zyj-debug] Constant array access function not within the array size bounds: {array_name + str(access_function)}, reverse the array access function for available generation\n')
                access_function[0] = -access_function[0]
                self.calculate_bounds(stmt_id, array_name, access_function, position)
        else:
            value_at_rank = access_function[rank]

            access_function_low = access_function[:1+len(self.variables[stmt_id])]  # use lower terms of access function

            access_function_low[rank] = 0  # very important step!

            right_bound = self._parsed_data.array_sizes[array_name][position]  # left bound is always 0 in C
            fun = None
            lower_bound, upper_bound = [], []
            if value_at_rank == 1:
                lower_bound = self.get_opposite_numbers(access_function_low)
                upper_bound = lower_bound[:]
                upper_bound[0] = self.var_add_num(right_bound, upper_bound[0])

            elif value_at_rank == -1:
                upper_bound = access_function_low[:]
                lower_bound = upper_bound[:]
                lower_bound[0] = self.var_add_num(right_bound, lower_bound[0], 1)

            elif value_at_rank > 1:
                alpha = value_at_rank
                alpha_min_1 = alpha - 1

                lower_bound = self.get_opposite_numbers(access_function_low)
                lower_bound[0] += alpha_min_1
                upper_bound = lower_bound[:]
                upper_bound[0] = self.var_add_num(right_bound, upper_bound[0])
                fun = self.write_as_fraction

            elif value_at_rank < -1:
                alpha = value_at_rank * (-1)
                alpha_min_1 = alpha - 1

                lower_bound = access_function_low[:]
                lower_bound[0] = self.var_add_num(right_bound, alpha_min_1 + lower_bound[0], 1)

                upper_bound = access_function_low[:]
                upper_bound[0] = alpha_min_1 + upper_bound[0]
                fun = self.write_as_fraction
                
            # print(f'[zyj-debug] upp: {upper_bound}\n')
            # print(f'[zyj-debug] low: {lower_bound}\n')
            
            if lower_bound and upper_bound:
                self.update_bounds_based_on_access_function(stmt_id, [lower_bound],  rank, 'min', value_at_rank, fun)
                self.update_bounds_based_on_access_function(stmt_id, [upper_bound],  rank, 'max', value_at_rank, fun)
    
    def get_rank(self, sequence) -> int:
        """Return the position in the sequence that is the last one to have the value != 0."""
        for i, el in enumerate(reversed(sequence)):
            if el != 0:
                return len(sequence) - i - 1
        return -1  # todo custom exception    
    
    def get_opposite_numbers(self, sequence) -> List[int]:
        """Multiply each element in a sequence by -1 and return as a list."""
        return [(-1) * el for el in sequence]    
    
    def var_add_num(self, var, num, opt = 0) -> str:
        """Return the string for variable with numerical, considering add or minus. opt = 0 for positive var, opt = 1 for negative var"""
        if opt == 1:
            if num < 0:
                return '-' + var + str(num)
            elif num > 0:
                return '-' + var + '+' + str(num)
            else:
                return '-' + var
        elif opt == 0:
            if num > 0:
                return var + '+' + str(num)
            elif num < 0:
                return var + str(num)
            else:
                return var
    
    def write_as_fraction(self, numerator: str, denominator: int) -> str:
        """Form a common fraction and return as a string.""" # todo check if den != 1
        return '({})/{}'.format(numerator, abs(denominator))

    def update_bounds_based_on_access_function(self, stmt_id, bounds: List[List[int]], rank: int, expr_min_max: str, value_at_rank: int, fun=None):
        """Update bounds by evaluating access function."""
        # extract only the access function that will be an only element of the result array
        access_function = self.get_indexed_array_access(stmt_id, bounds)[0]

        if fun:
            access_function = fun(access_function, abs(value_at_rank))
        # print(f'[zyj-debug] access_function: {access_function}\n')
        eval_output = self.evaluate_expression(access_function)
        
        # print(f'[zyj-debug] eval_output: {eval_output}\n')
        
        if eval_output[-1]:
            self.bounds_data[self.variables[stmt_id][rank - 1]][expr_min_max][eval_output[0]][eval_output[-1]].add(eval_output[1])
        else:
            self.bounds_data[self.variables[stmt_id][rank - 1]][expr_min_max][eval_output[0]].add(eval_output[1])

    def evaluate_expression(self, expression):
        """Try to evaluate the expression (especially common fractions from calculating bounds).
        If it is possible to evaluate then this value will be added to the numerical values of bounds,
        otherwise it will be added unchanged.
        Examples:
            expression = '(12)/2' -> 'numerical', 6, ''
            expression = '-i-j-8' -> 'variable', '-i-j-8', 'ij'
            expression = 'N+1' -> 'string', 'N+1', ''
        """
        vars_used = ''
        try:
            if expression == '':
                expression = '0'

            expression = math.floor(eval(expression))
            expression_type = 'numerical'
        except NameError:
            vars = set([x for tmp in self.variables for x in tmp])
            for c in expression:
                if c in vars:
                    vars_used += c
            
            if vars_used:
                expression_type = 'variable'
            else:
                expression_type = 'string'
                
        return [expression_type, expression, vars_used]

    def concatenate_with_square_brackets(self, indexes: List) -> str:
        """Separate each dimension access function by surrounding it with square brackets.
        Example:
            ['2*i+8', 'i+j+k+8', '-2*k'] -> '[2*i+8][i+j+k+8][-2*k]' 
        """
        return '{}'.format(''.join('[{}]'.format(i) for i in indexes))

    def convert_statements_to_expressions(self, arrays_in_stmts):
        """Add symbols randomly between elements to make them become a whole stmt"""
        for element in arrays_in_stmts:
            element.append(str(random.randint(1, 6))) # add constant
            statement_symbols = self.get_statement_symbols(len(element) - 2)  # '=' and ';' are included. 有待后续改进
            # print(f'[zyj-debug] element: {element}, statement_symbols: {statement_symbols}\n')
            statement = ''
            for array, symbol in zip(element, statement_symbols):
                statement += array
                if symbol == ';':
                    statement += symbol
                else:
                    statement += ' ' + symbol + ' '
            self.SCoP.append(statement)

    # todo settings file maths_symbols
    def get_statement_symbols(self, num_of_calculations: int) -> List[str]:
        """Return the list of symbols used in statement in the correct order. The first one is '='
        and the last one is ';' separated by maths symbols."""
        maths_symbols = ['+', '-', '*']
        random_maths_symbols = [random.choice(maths_symbols) for _ in range(num_of_calculations)]
        return ['='] + random_maths_symbols + [';']

    def translate_calculated_values_to_bounds(self):
        """Calculate bounds values and transfer them to loop structure type"""
        
        sorted_keys = list(sorted(self.bounds_data.keys()))
        # print(sorted_keys)
        ndims = len(sorted_keys)
        reverse_dim = [0] * ndims
        
        # TODO prepared for reversed loop
        reverse_dim[random.sample(range(ndims), 1)[0]] = 1
        
        for i in range(ndims):
            self.calc_bound(sorted_keys[i], 0)
            self.calc_bound(sorted_keys[i], 1)
            self.generate_for_loop_structure(sorted_keys[i], reverse_dim[i])

    def calc_bound(self, key: str, id: int):
        """Compare all bounds collected before. Types: Numericals, parameters and variables"""
        func = [min, max]
        bound = bound_val = [0, np.inf][id]
        print(f'[zyj-debug] bounds_data[{key}][{func[id].__name__}]: {self.bounds_data[key][func[id].__name__]}\n')
        
        ### for numericals
        if self.bounds_data[key][func[id].__name__]['numerical']: # "func[id].__name__" refers to "min" or "max", according to id (cal lower bound: 0 -> min, and cal upper bound: 1 -> max)
            numericals = dict()
            params_and_vars = self._parsed_data.params.copy()
            for num in self.bounds_data[key][func[id].__name__]['numerical']:
                t = type(num)
                if t == str:
                    numericals[num] = eval(num, params_and_vars)
                elif t == int:
                    numericals[num] = num
            bound = bound_val = func[-id-1](numericals) # "-id-1" means get func reversely(lower -> 0 -> max, upper -> 1 -> min)
            # print(f'[zyj-debug] bound till numericals: {bound}\n')
        
        
        ### for strs
        if self.bounds_data[key][func[id].__name__]['string']:
            vals_str = dict()
            if self.bounds_data[key][func[id].__name__]['numerical']:
                vals_str[bound_val] = numericals[bound_val]
            params_and_vars = self._parsed_data.params.copy()
            for bound_param in self.bounds_data[key][func[id].__name__]['string']:
                vals_str[bound_param] = eval(bound_param, params_and_vars)
            # print(f'[zyj-debug] vals: {vals}\n')
            # print(f'[zyj-debug] func: {func[-id-1].__name__}\n')
            bound = func[-id-1](vals_str, key = vals_str.get)
            bound_val = vals_str[bound]
            # print(f'[zyj-debug] bound till string: {bound}\n')
        
        
        ### for vars
        if self.bounds_data[key][func[id].__name__]['variable']:
            
            bounds_var = []
            
            # print(f"[zyj-debug] {func[-id-1].__name__} bound values for variables:\n{self.bounds_data[key][func[id].__name__]['variable']}\n")
            
            for vars, exprs in self.bounds_data[key][func[id].__name__]['variable'].items():
                for var in vars:
                    self._parsed_data.params[var] = 0 # regradless of var influence (not suitable, only for certain condition)
                
                tmp_bound_val_vars = dict()
                params_and_vars = self._parsed_data.params.copy()
                for expr in exprs:
                    tmp_bound_val_vars[expr] = eval(expr, params_and_vars)

                bounds_var.append(func[-id-1](tmp_bound_val_vars, key = tmp_bound_val_vars.get))

            print(f'[zyj-debug] bounds_var: {bounds_var}\n')
            
            vals_var_0 = dict()
            vals_var_1 = dict()
            
            for bound_var in bounds_var:
                keys_var = [x for x in self.bounds_data.keys() if x in bound_var]
                # print(f'[zyj-debug] keys_var: {keys_var}\n')
                
                for key_var in keys_var:
                    # print(f"[zyj-debug] {func[-id-1].__name__} bound value for {key_var}: {self.bounds_data[key_var][func[-id-1].__name__]['bound_value']}\n")
                    params_and_vars = self._parsed_data.params.copy()
                    val_var_0 = eval(self.bounds_data[key_var][func[-id-1].__name__]['bound_value'], params_and_vars) # lower -> 0 -> upper bound of var, and upper -> 1 -> lower bound of var
                    self._parsed_data.params[key_var] = val_var_0            
            
                params_and_vars = self._parsed_data.params.copy()
                vals_var_0[bound_var] = eval(bound_var, params_and_vars)
                
                for key_var in keys_var:
                    # print(f"[zyj-debug] {func[id].__name__} bound value for {key_var}: {self.bounds_data[key_var][func[id].__name__]['bound_value']}\n")
                    params_and_vars = self._parsed_data.params.copy()
                    val_var_1 = eval(self.bounds_data[key_var][func[id].__name__]['bound_value'], params_and_vars) # lower -> 0 -> lower bound of var, and upper -> 1 -> upper bound of var
                    self._parsed_data.params[key_var] = val_var_1
            
                params_and_vars = self._parsed_data.params.copy()
                vals_var_1[bound_var] = eval(bound_var, params_and_vars)
            
            ### TODO: 下面这一块要修改以适应多个变量边界的大小比对
            
            vals_var_0[bound] = bound_val
            vals_var_1[bound] = bound_val
            print(f"[zyj-debug] {func[-id-1].__name__} bound value containing vairables: {vals_var_0}\n")
            print(f"[zyj-debug] {func[id].__name__} bound value containing vairables: {vals_var_1}\n")
            
            
            tmp_extreme = func[-id-1](vals_var_0, key = vals_var_0.get)
            if not vals_var_0[tmp_extreme] == vals_var_0[bound]:
                bound_set = []
                '''
                lower -> 0 -> if not max(var_upper, ..., bound_val) == bound_val -> bound_val < var_upper_max,
                upper -> 1 -> if not min(var_lower, ..., bound_val) == bound_val -> bound_val > var_lower_min
                '''
                # if func[-id-1](bound_val, vals_var_1[tmp]) == bound_val: # find corresponding lower/upper value for var_upper_max/var_lower_min
                #     '''
                #     lower -> 0 -> if max(bound_val, var_lower_correspond) == bound_val -> var_upper_max > bound_val >= var_lower_correspond -> lower_bound = max(val, var, ...),
                #     upper -> 1 -> if min(bound_val, var_upper_correspond) == bound_val -> var_lower_min < val <= var_upper_correspond -> upper_bound = min(val, var, ...)
                #     '''
                #     bound_set.append(str(bound))
                for bound_var, val in vals_var_0.items():
                    if val != vals_var_1[tmp_extreme] and func[-id-1](val, vals_var_1[tmp_extreme]) == val:
                        '''
                        lower -> 0 -> if max(var_upper_i, var_lower_correspond) == var_upper_i -> var_upper_max > var_upper_i > var_lower_correspond -> lower_bound = max(var_i, var, ...),
                        upper -> 1 -> if min(var_lower_i, var_upper_correspond) == var_lower_i -> var_lower_min < var_lower_i < var_upper_correspond -> upper_bound = min(var_i, var, ...)
                        '''
                        bound_set.append(str(bound_var))

                print(f'[zyj-debug] bound_set: {bound_set}\n')

                if len(bound_set) > 1:
                    bound = ''
                    tail = ''
                    for i in range(len(bound_set) - 1):
                        bound += f'{func[-id-1].__name__}({bound_set[i]},'
                        tail += ')'
                    bound += bound_set[-1] + tail
                elif len(bound_set):
                    bound = bound_set[0]
                else:
                    bound = "inf"

        print(f'[zyj-debug] new bound: {bound}\n')
        if str(bound) == 'inf':
            bounds_from_rand = [x for x in self._parsed_data.params.keys() if x not in self.bounds_data.keys()]
            # print(f'[zyj-debug] randomly select bound from list instead of "inf": {bounds_from_rand}\n')
            bound = random.choice(bounds_from_rand) 
            
        self.bounds_data[key][func[id].__name__]['bound_value'] = str(bound)

    def generate_for_loop_structure(self, key: str, reverse_id: int):
        """Return formatted for loop structure filled with bounds."""
        lower_bound = self.bounds_data[key]['min']['bound_value']
        upper_bound = self.bounds_data[key]['max']['bound_value']
        if reverse_id:
            loop_expression = 'for (int {0} = {2} - 1; {0} >= {1}; {0}--)'.format(key, lower_bound, upper_bound)
        else:
            loop_expression = 'for (int {0} = {1}; {0} < {2}; {0}++)'.format(key, lower_bound, upper_bound)
        # print(f'[zyj-debug] loop expression: {loop_expression}\n')
        self.loop_structure[key] = (loop_expression, lower_bound, upper_bound)

    def get_final_loop(self):
        """assemble all components in loops together"""
        final_loop = []
        self.schedule_tree.update_tree(self.loop_structure, self.SCoP)
        self.SCoP = self.schedule_tree.extract_tree('code')

        return ''.join(final_loop)

    
