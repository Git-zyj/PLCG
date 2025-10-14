# THIS CODE WILL BE REFACTORED!!!
# todo use ast eval, since eval is unsafe!
import random
import math
import numpy as np
import logging
import sys

from collections import defaultdict, Counter
from typing import Dict, List, Set, Tuple, Optional, Any
from itertools import product, combinations_with_replacement

from parse_input import parse_data
from settings import ArrayData, Arrays_total, Schedule_tree, json_input_path, target_path, enable_reverse_dim
from polybench_files_generation import polybench_pipeline_single_file


class CodeGenerator:
    def __init__(self, log_level: int = logging.WARNING) -> None:
        """初始化代码生成器，设置默认数据结构"""
        self._setup_logging(log_level)  # 提取日志设置到独立方法
        self._reset_data()  # 初始化数据
    
    def _setup_logging(self, log_level: int) -> None:
        """独立的日志设置方法"""
        self.logger = logging.getLogger("CodeGenerator")
        self.logger.setLevel(log_level)
        
        # 确保有handler
        if not self.logger.handlers:
            handler = logging.StreamHandler(sys.stdout)
            formatter = logging.Formatter('%(name)s - %(levelname)s - %(message)s')
            handler.setFormatter(formatter)
            self.logger.addHandler(handler)
    
    def _reset_data(self) -> None:
        """重置数据，但不影响logger"""
        self.filename = None
        self._parsed_data = None
        self.arrays_total = Arrays_total()
        self.bounds_data = {}
        self.variables = []
        self.schedule_tree = Schedule_tree()
        self.loop_structure = {}
        self.SCoP = []
    
    def generate_c_code(self, filename: str) -> None:
        self._reset_data()  # 每次生成代码前重置数据
        
        self.logger.debug("\nStart code generation\n")
        
        self.filename = filename
        self._parsed_data = parse_data(self.filename)
        # self.logger.debug(f'Generation start for "{self.filename}".\n')
        # self.logger.debug(f'_parsed_data: {self._parsed_data}\n')
        
        self.extract_instructions()
        # self.logger.debug(f'arrays_write: {self.arrays_total.arrays_write}\n')
        # self.logger.debug(f'arrays_read: {self.arrays_total.arrays_read}\n')
        
        self.create_bounds_data()
        # self.logger.debug(f'bounds_data: {self.bounds_data}\n')
        
        arrays_in_stmts = self.parse_arrays()
        self.logger.debug(f'arrays_in_stmts: {arrays_in_stmts}\n')
        
        self.convert_statements_to_expressions(arrays_in_stmts)
        # self.logger.debug(f'loop_body: {self.SCoP}\n')
        
        self.translate_calculated_values_to_bounds()
        # self.logger.debug(f'loop_structure: {self.loop_structure}\n')
        # self.logger.debug(f'bounds_data: {self.bounds_data}\n')
        
        self.get_final_loop()
        scop = '\n'.join(self.SCoP)
        self.logger.debug(f'SCoP: \n{scop}\n')
        
        polybench_pipeline_single_file(self.filename, json_input_path, self.SCoP, target_path)

    def extract_instructions(self) -> None:
        """Extract 'dependency' and 'additional_computation' instructions from the DSL"""
        schedules = []
        branchs = []
        self.arrays_total.arrays_write = defaultdict(ArrayData)
        self.arrays_total.arrays_read = defaultdict(list)
        
        for i, instruction in enumerate(self._parsed_data.instructions):
            # self.logger.debug(f'instruction: {instruction}\n')
            schedules.append(instruction['schedule'])
            branchs.append(instruction['branch'])
            
            self.variables.append([instruction['schedule'][j] for j in range(len(instruction['schedule'])) if j % 2 == 1])
            
            self.arrays_total.arrays_read[i] = []
            
            if 'dependency' in instruction:
                dependency = instruction['dependency']
                for dep in dependency:
                    if dep['category'] == "write": # get source array info when dep in WAW, or get write array info when dep is WAR or RAW
                        write_distance = np.array(dep['distance'])
                        write_stmt_id = dep['write_stmt_id']
                        write_array = ArrayData(distance=write_distance, write_stmt_id=write_stmt_id)
                        self.arrays_total.arrays_write[i] = write_array
                        break
                self.extract_dependency(i, dependency)

            if 'additional_computation' in instruction:
                additional_computation = instruction['additional_computation']
                for comp in additional_computation:
                    if comp['array_type'] == "write": # get write array info for stmt
                        write_distance = write_stmt_id = None
                        if self.arrays_total.arrays_write[i]:
                            write_distance = np.array(self.arrays_total.arrays_write[i].distance)
                            write_stmt_id = self.arrays_total.arrays_write[i].write_stmt_id
                        write_name = comp['array_name']
                        write_access = np.array(comp['array_access_function'])
                        write_array = ArrayData(write_name, write_access, write_distance, write_stmt_id)
                        self.arrays_total.arrays_write[i] = write_array
                        break
                self.extract_additional_computation(i, additional_computation)
            
        self.schedule_tree.add_paths(schedules, branchs)
        self.schedule_tree.check_tree()
        
        scop_init = '\n'.join(self.schedule_tree.extract_tree('code'))
        self.logger.debug(f'initial scop: \n{scop_init}\n')
        
        # self.logger.debug(f'arrays_write before check: {self.arrays_total.arrays_write}\n')
        
        # 用于对json模板修改过后的二次检查
        self.arrays_total.validate_dependence(self.filename)
                        
            
        # self.logger.debug(f'arrays_write after check: {self.arrays_total.arrays_write}\n')
        # self.logger.debug(f'arrays_read: {self.arrays_total.arrays_read}\n')
        # self.logger.debug(f'variables: {self.variables}\n')

    def extract_dependency(self, id: int, dependency: List[Dict]) -> None:
        """For each distance Tuple translate array name, distance value and id for source array (WAW) or write array (WAR or RAW) to ArrayData. Assign the source array to the target array Dict."""
        for dep in dependency:
            if dep["category"] != "write":
                source_array = ArrayData(distance=dep['distance'], write_stmt_id=dep['write_stmt_id'])
                self.arrays_total.arrays_read[id].append(source_array)

    def extract_additional_computation(self, id: int, additional_computation: List[Dict]) -> None:
        """For each additional computation translate array name, and array access function to ArrayData. Assign the source array to the target array Dict."""
        for computation in additional_computation:
            if computation["array_type"] != "write":
                source_array = ArrayData(
                    array_name=computation['array_name'], 
                    array_access_function=np.array(computation['array_access_function'])
                )
                self.arrays_total.arrays_read[id].append(source_array)
        
    def create_bounds_data(self) -> None:
        """Create a dict that will store loop bounds for each loop variable."""
        vars = {x for tmp in self.variables for x in tmp}
        for var in vars:
            self.bounds_data[var] = {
                'min': {'numerical': set(), 'string': set(), 'variable': defaultdict(set), 'bound_value': None},
                'max': {'numerical': set(), 'string': set(), 'variable': defaultdict(set), 'bound_value': None}
            }
        
        # check assigned loop_bounds
        if self._parsed_data.loop_bounds and self._parsed_data.params:
            # self.logger.debug(f'loop_bounds: {loop_bounds}\n')
            for key, value in self._parsed_data.loop_bounds.items():
                # self.logger.debug(f'key: {key}, value: {value}\n')
                min_value, max_value = value
                self._process_bound_value(key, 'min', min_value, vars)
                self._process_bound_value(key, 'max', max_value, vars)
    
    def _process_bound_value(self, key: str, bound_type: str, value: Any, vars: Set[str]) -> None:
        """处理边界值并将其分类到相应的集合中"""
        if isinstance(value, str):
            for var in vars:
                if var in value:
                    self.bounds_data[key][bound_type]['variable'][var].add(value)
                    return
            self.bounds_data[key][bound_type]['string'].add(value)
        else:
            self.bounds_data[key][bound_type]['numerical'].add(value)
    
    def parse_arrays(self) -> List[List[str]]:
        """Transfer access info to array index and update loop bounds"""
        arrays_in_stmts = []
        
        for stmt_id in self.arrays_total.arrays_read.keys():
            array_write = self.arrays_total.arrays_write[stmt_id]
            arrays_in_stmt = []
            
            if array_write.write_stmt_id is not None:
                array_write = self.get_initial_array_info(array_write)  # recursively get array access function
                self.arrays_total.arrays_write[stmt_id] = array_write
                
            indexed_array_access = self.get_indexed_array_access(stmt_id, array_write.array_access_function)
                
            for j, access_function in enumerate(array_write.array_access_function):
                self.calculate_bounds(stmt_id, array_write.array_name, access_function.copy(), j)
            
            arrays_in_stmt.append(array_write.array_name + self.concatenate_with_square_brackets(indexed_array_access))
                
            for i, array_read in enumerate(self.arrays_total.arrays_read[stmt_id]):
                if array_read.write_stmt_id is not None:
                    array_read = self.get_initial_array_info(array_read)
                    self.arrays_total.arrays_read[stmt_id][i] = array_read
                
                indexed_array_access = self.get_indexed_array_access(stmt_id, array_read.array_access_function)
                
                for j, access_function in enumerate(array_read.array_access_function):
                    self.calculate_bounds(stmt_id, array_read.array_name, access_function, j)

                arrays_in_stmt.append(array_read.array_name + self.concatenate_with_square_brackets(indexed_array_access))    
                
            arrays_in_stmts.append(arrays_in_stmt)
            
        # self.logger.debug(f'arrays_write: {self.arrays_total.arrays_write}\n')
        # self.logger.debug(f'arrays_read: {self.arrays_total.arrays_read}\n')
        # self.logger.debug(f'bounds_data before calc:\n{self.bounds_data}\n')
            
        return arrays_in_stmts
    
    def get_indexed_array_access(self, stmt_id: int, array_access_function: np.ndarray) -> List[str]:
        """Translate all access functions within an array expressed as a matrix of numbers to expression with loop indexes.\n
        Example:\n
        array_name = 'A', array_access_function = [[2, 0, 0, -1], [-1, 1, 2, 0]] -> 'A', ['2-k', '-1+i+2*j']
        """
        index_letters = self.variables[stmt_id]
        # self.logger.debug(f'index_letters: {index_letters}\n')
        # self.logger.debug(f'array_access_function: {array_access_function}\n')
        
        indexed_array_access = [self.translate_access_function_to_indexes(access_fun, index_letters) 
                for access_fun in array_access_function]
        
        # self.logger.debug(f'indexed_array_access: {indexed_array_access}\n')
        
        return indexed_array_access

    def translate_access_function_to_indexes(self, access_fun: List[int], index_letters: List[str]) -> str:
        """Return a string representation of access function expressed with loop indexes.
        
        Example:
            access_fun = [1, 1, 2, -1], index_letters = ['i','j','k']
            -> 'i+j+2*k-1'
        """
        terms = self.generate_terms(len(index_letters), self._parsed_data.max_degree)
        
        # 构建多项式字典
        poly_dict = {term: coeff for term, coeff in zip(terms, access_fun) if coeff != 0}
        
        # self.logger.debug(f'poly_dict: {poly_dict}')
        
        # 基项系数转化为str
        return self._poly_to_str(poly_dict, index_letters)
    
    @staticmethod
    def _build_term_expression(coeff: float, variables: List[Tuple[str, int]]) -> str:
        """构建单项式表达式（核心公共方法）
        
        Args:
            coeff: 系数
            variables: 变量列表，每个元素为(变量名, 次数)
        
        Returns:
            格式化后的单项式字符串
        """
        if coeff == 0:
            return ""
        
        # 构建变量部分
        term_str = ""
        for var_name, count in sorted(variables):
            if term_str:
                term_str += "*"
            if count == 1:
                term_str += var_name
            else:
                term_str += f"{var_name}^{count}"
        
        # 构建完整项
        if not term_str:  # 常数项
            if isinstance(coeff, str): # 可能计算出如PB_M的值
                return coeff
            else:
                return f"{coeff:+g}"
        elif coeff == 1:
            return f"+{term_str}"
        elif coeff == -1:
            return f"-{term_str}"
        else:
            if isinstance(coeff, str):
                return f"{coeff}*{term_str}"
            else:
                return f"{coeff:+g}*{term_str}"
    
    def _poly_to_str(self, poly_dict: Dict[Tuple, float], var_names: List[str]) -> str:
        """将多项式字典转换为可读字符串（使用实际变量名）"""
        terms = []
        
        # self.logger.debug(f'poly_dict: {poly_dict}')
        
        for term, coeff in sorted(poly_dict.items(), key=lambda x: (len(x[0]), x[0])):
            if coeff == 0:
                continue
            
            # self.logger.debug(f'term in poly_dict: {term}')
            
            var_counts = Counter(term)
            
            # 转换为变量列表
            variables = [(var_names[var_idx], count) for var_idx, count in var_counts.items()]
            term_expr = self._build_term_expression(coeff, variables)
            if term_expr:
                terms.append(term_expr)
        
        if not terms:
            return "0"
        
        result = "".join(terms)
        return result[1:] if result.startswith('+') else result

    def get_initial_array_info(self, array_data: ArrayData) -> ArrayData:
        """Return array with array access from write array (in WAR or RAW dep) or source array (in WAW) using write_stmt_id and distance.\n
        When the write array or source array doesn't have array access since it also depends on another array, try to recursively get array access from the initial array.\n
        Example:\n
        array_data: write_stmt_id = 0, distance = [1,-1,0]\n
        array_write in stmt {0}: array_name = 'A', array_access_function = [[2, 0, 0, -1], [-1, 1, 2, 0]]\n
        'A', ['2-k', '-1+i+2*j'] -> 'A', ['2-k', '-1+(i+1)+2*(j-1)']
        output: 'A', [[2, 0, 0, -1], [-2, 1, 2, 0]]
        """
            
        self.logger.debug(f'get_initial_array_info:\narray_data: {array_data}\n')
        
        array_write = self.arrays_total.arrays_write[array_data.write_stmt_id] 
        if array_write.array_access_function is None:
            array_write = self.get_initial_array_info(array_write)
        
        self.logger.debug(f'source array_write: {array_write}')
        array_access_function = array_write.array_access_function
        array_name = array_write.array_name
        
        if array_data.distance is not None:
            # 获取和access function对应变量维数的基项(常数项会自动添加，所以先-1)
            terms = self.generate_terms(len(array_access_function[0]) - 1, self._parsed_data.max_degree)
            # self.logger.debug(f'array_access_function: {array_access_function}\n')
            # self.logger.debug(f'terms: {terms}\n')
            # self.logger.debug(f'array_data.distance: {array_data.distance}\n')
            array_access_function = self.apply_offsets_to_coeffs(array_access_function, terms, array_data.distance)
            
        array_data = ArrayData(array_name=array_name, array_access_function=array_access_function)
        self.logger.debug(f'get_initial_array_info:\nnew array_data: {array_data}\n')
        
        return array_data

    def generate_terms(self, num_variables: int, max_degree: int) -> List[Tuple]:
        """
        生成所有可能的项（常数项、线性项、二次项等）
        
        Args:
            num_variables: 变量数量
            max_degree: 最大次数
            
        Returns:
            所有可能的项列表，按次数排序
        """
        terms = [()]  # 常数项
        
        for degree in range(1, max_degree + 1):
            # 生成所有可能的d次项（允许重复变量）
            terms.extend(list(combinations_with_replacement(range(num_variables), degree)))
        
        return terms

    @staticmethod
    def create_offset_var(var_idx: int, coeff: float, offset: float) -> Dict[Tuple, float]:
        """
        创建 (var + offset) 表达式
        
        Args:
            var_idx: 变量索引
            coeff: 系数
            offset: 偏移量
            
        Returns:
            表示 (coeff * var + coeff * offset) 的字典
        """
        if offset == 0:
            return {(var_idx,): coeff}
        return {(var_idx,): coeff, (): coeff * offset}

    def apply_offsets_to_poly(self, term_dict: Dict[Tuple, float], offsets: List[float]) -> Dict[Tuple, float]:
        """
        将偏移量应用到多项式并展开
        
        Args:
            term_dict: 原始多项式项字典
            offsets: 偏移向量（与terms一一对应，包括常数项）
            
        Returns:
            应用偏移后的新多项式
        """
        new_poly = defaultdict(int)
        
        for term, coeff in term_dict.items():
            if coeff == 0:
                continue
                
            # 对常数项直接处理
            if not term:
                new_poly[()] += coeff * (1 + offsets[0]) if offsets else coeff # 常数项的偏移量就是直接加到常数项上
                continue
                
            # 初始化 substituted 为 {(): 1}（代表常数项1）
            substituted = {(): 1}
            
            # 对term中的每个变量应用偏移
            for var_idx in term:
                if var_idx + 1 >= len(offsets):  # +1 因为offsets[0]对应常数项
                    raise ValueError(f"变量索引 {var_idx} 超出偏移向量范围")
                
                # 获取该变量的偏移量（索引要+1，因为offsets[0]是常数项偏移）
                var_offset = offsets[var_idx + 1]
                
                # 创建 (var + offset) 的表达式
                offset_var = self.create_offset_var(var_idx, 1, var_offset)
                
                # 计算 substituted * (var + offset)
                new_substituted = defaultdict(int)
                for (t1, c1), (t2, c2) in product(substituted.items(), offset_var.items()):
                    merged_term = tuple(sorted(set(t1 + t2)))
                    new_substituted[merged_term] += c1 * c2
                substituted = new_substituted
            
            # 合并到新多项式（乘以原始系数）
            for t, c in substituted.items():
                new_poly[t] += coeff * c
                
        # 移除零系数项
        return {k: v for k, v in new_poly.items() if v != 0}

    def apply_offsets_to_coeffs(self, coeff_matrix: np.ndarray, terms: List[Tuple], offsets: List[float]) -> np.ndarray:
        """
        应用偏移量到系数矩阵
        
        Args:
            coeff_matrix: 原始系数矩阵（每行对应一个访问函数），如 [[2, 0, 0, -1], [1, 1, 1, 0]]，表示[2-k][1+i+j]
            terms: 所有可能的项列表，如[(), (0,), (1,)]
            offsets: 偏移向量（与terms一一对应，包括常数项），如 [0, 1, -1, 0] 表示 i→i+1, j→j-1, k→k+0
            
        Returns:
            新的系数矩阵
        """
        if coeff_matrix.shape[1] != len(terms):
            raise ValueError("系数矩阵列数必须与项列表长度一致")
            
        if len(offsets) != len(terms):
            raise ValueError(f"偏移向量长度必须与项列表长度一致，期望 {len(terms)}，实际 {len(offsets)}")
        
        new_coeffs = []
        for i, coeffs in enumerate(coeff_matrix):
            # 将系数映射到项字典
            term_dict = {term: coeff for term, coeff in zip(terms, coeffs) if coeff != 0}
            
            # 应用偏移量并展开新多项式
            new_poly = self.apply_offsets_to_poly(term_dict, offsets)
            
            # self.logger.debug(f"原始多项式 {i}: {self._poly_to_str(term_dict, [f'x{i}' for i in range(len(terms))])}")
            # self.logger.debug(f"变换后多项式 {i}: {self._poly_to_str(new_poly, [f'x{i}' for i in range(len(terms))])}\n")
            
            # 将新多项式转换回系数向量
            new_coeff = [new_poly.get(term, 0) for term in terms]
            new_coeffs.append(new_coeff)
            
        return np.array(new_coeffs, dtype=coeff_matrix.dtype)

    def calculate_bounds(self, stmt_id: int, array_name: str, access_function: List[int], position: int) -> None:
        """Based on rank of the array_access_function update the min and max bounds."""
        rank = self.get_rank(access_function[:1 + len(self.variables[stmt_id])])  # don't pass the numerical value

        if rank == -1:  # we don't want to have an expression like C[-1] when access fun is [0,0,0, -1]
            value = access_function[0]
            param = self._parsed_data.array_sizes[array_name][position]
            max_array_size = self._parsed_data.params[param]
            if value not in range(0, max_array_size):
                self.logger.debug(f'Constant array access function not within the array size bounds: {array_name + str(access_function)}, reverse the array access function for available generation\n')
                access_function[0] = -access_function[0]
                self.calculate_bounds(stmt_id, array_name, access_function, position)
        else:
            value_at_rank = access_function[rank]
            access_function_low = access_function[:1 + len(self.variables[stmt_id])]  # use lower terms of access function
            access_function_low[rank] = 0  # very important step!

            right_bound = self._parsed_data.array_sizes[array_name][position]  # left bound is always 0 in C
            fun = None
            lower_bound, upper_bound = [], []
            
            if value_at_rank == 1:
                lower_bound = self.get_opposite_numbers(access_function_low)
                upper_bound = lower_bound[:]
                upper_bound[0] = self.build_simple_expression(right_bound, 1, upper_bound[0])
            elif value_at_rank == -1:
                upper_bound = access_function_low[:]
                lower_bound = upper_bound[:]
                lower_bound[0] = self.build_simple_expression(right_bound, -1, lower_bound[0])
            elif value_at_rank > 1:
                alpha = value_at_rank
                alpha_min_1 = alpha - 1
                lower_bound = self.get_opposite_numbers(access_function_low)
                lower_bound[0] += alpha_min_1
                upper_bound = lower_bound[:]
                upper_bound[0] = self.build_simple_expression(right_bound, 1, upper_bound[0])
                fun = self.write_as_fraction
            elif value_at_rank < -1:
                alpha = value_at_rank * (-1)
                alpha_min_1 = alpha - 1
                lower_bound = access_function_low[:]
                lower_bound[0] = self.build_simple_expression(right_bound, -1, alpha_min_1 + lower_bound[0])
                upper_bound = access_function_low[:]
                upper_bound[0] = alpha_min_1 + upper_bound[0]
                fun = self.write_as_fraction
                
            # self.logger.debug(f'upp: {upper_bound}\n')
            # self.logger.debug(f'low: {lower_bound}\n')
            
            if lower_bound and upper_bound:
                self.update_bounds_based_on_access_function(stmt_id, [lower_bound], rank, 'min', value_at_rank, fun)
                self.update_bounds_based_on_access_function(stmt_id, [upper_bound], rank, 'max', value_at_rank, fun)
    
    def get_rank(self, sequence: List[int]) -> int:
        """Return the position in the sequence that is the last one to have the value != 0."""
        for i, el in enumerate(reversed(sequence)):
            if el != 0:
                return len(sequence) - i - 1
        return -1    
    
    def get_opposite_numbers(self, sequence: List[int]) -> List[int]:
        """Multiply each element in a sequence by -1 and return as a list."""
        return [-el for el in sequence]    
    
    def build_simple_expression(self, var_name: Optional[str] = None, var_coeff: float = 0, constant: float = 0) -> str:
        """构建简单表达式（优化版的var_add_num）
        
        Args:
            var_name: 变量名，如果为None则不包含变量
            var_coeff: 变量系数
            constant: 常数项
        
        Returns:
            格式化后的表达式字符串
        
        Examples:
            build_simple_expression('i', 1, 5)     -> "i+5"
            build_simple_expression('i', -1, -3)   -> "-i-3" 
            build_simple_expression('i', 1, 0)     -> "i"
            build_simple_expression(None, 0, 10)   -> "10"
            build_simple_expression('i', -1, 2)    -> "-i+2"
        """
        terms = []
        
        # 构建变量项
        if var_name and var_coeff != 0:
            var_expr = self._build_term_expression(var_coeff, [(var_name, 1)])
            if var_expr:
                terms.append(var_expr)
        
        # 构建常数项
        if constant != 0:
            const_expr = self._build_term_expression(constant, [])
            if const_expr:
                terms.append(const_expr)
        
        if not terms:
            return "0"
        
        result = "".join(terms)
        # 处理开头的+号
        return result[1:] if result.startswith('+') else result
    
    def write_as_fraction(self, numerator: str, denominator: int) -> str:
        """Form a common fraction and return as a string."""
        return f'({numerator})/{abs(denominator)}'
    
    def update_bounds_based_on_access_function(self, stmt_id: int, bounds: List[List[int]], rank: int, expr_min_max: str, value_at_rank: int, fun: Optional[callable] = None) -> None:
        """Update bounds by evaluating access function."""
        # extract only the access function that will be an only element of the result array
        access_function = self.get_indexed_array_access(stmt_id, bounds)[0]

        if fun:
            access_function = fun(access_function, abs(value_at_rank))
        
        # self.logger.debug(f'access_function: {access_function}\n')
        
        eval_output = self.evaluate_expression(access_function)
        
        if eval_output[-1]:
            self.bounds_data[self.variables[stmt_id][rank - 1]][expr_min_max][eval_output[0]][eval_output[-1]].add(eval_output[1])
        else:
            self.bounds_data[self.variables[stmt_id][rank - 1]][expr_min_max][eval_output[0]].add(eval_output[1])

    def evaluate_expression(self, expression: str) -> List[Any]:
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
            vars = {x for tmp in self.variables for x in tmp}
            vars_used = ''.join(c for c in expression if c in vars)
            expression_type = 'variable' if vars_used else 'string'
                
        return [expression_type, expression, vars_used]

    def concatenate_with_square_brackets(self, indexes: List[str]) -> str:
        """Separate each dimension access function by surrounding it with square brackets."""
        return ''.join(f'[{i}]' for i in indexes)

    def convert_statements_to_expressions(self, arrays_in_stmts: List[List[str]]) -> None:
        """Add symbols randomly between elements to make them become a whole stmt"""
        
        # TODO: 目前只生成简单的赋值语句，后续可以考虑更复杂的表达式
        
        for element in arrays_in_stmts:
            element.append(str(random.randint(1, 6)))  # add constant
            # '=' and ';' are included.
            statement_symbols = self.get_statement_symbols(len(element) - 2) # symbols数量应当为elements数量-1，再加上固定的'='，所以是 len(element)-2
            
            # self.logger.debug(f'element: {element}, statement_symbols: {statement_symbols}\n')
            
            statement = ''
            for array, symbol in zip(element, statement_symbols):
                statement += array
                if symbol == ';':
                    statement += symbol
                else:
                    statement += ' ' + symbol + ' '
            self.SCoP.append(statement)

    def get_statement_symbols(self, num_of_calculations: int) -> List[str]:
        """Return the list of symbols used in statement in the correct order."""
        # TODO: more ways of symbol selection other than randomly set + - *
        
        maths_symbols = ['+', '-', '*']
        random_maths_symbols = [random.choice(maths_symbols) for _ in range(num_of_calculations)]
        return ['='] + random_maths_symbols + [';']

    def translate_calculated_values_to_bounds(self) -> None:
        """Calculate bounds values and transfer them to loop structure type"""
        sorted_keys_bounds = sorted(self.bounds_data.keys())
        
        # self.logger.debug(sorted_keys)
        
        ndims = len(sorted_keys_bounds)
        reverse_dim = [False] * ndims
        
        # TODO: prepared for reversed loop, only one dim now
        if enable_reverse_dim:
            reverse_dim[random.sample(range(ndims), 1)[0]] = True
        
        for i, key in enumerate(sorted_keys_bounds):
            self.calc_bound(key, 0)
            self.calc_bound(key, 1)
            self.generate_for_loop_structure(key, reverse_dim[i])

    def calc_bound(self, key: str, id: int) -> None:
        """Compare all bounds collected before. Types: Numericals, parameters and variables"""
        func = [min, max]
        bound = bound_val = [0, np.inf][id]
        
        # self.logger.debug(f'bounds_data[{key}][{func[id].__name__}]: {self.bounds_data[key][func[id].__name__]}\n')
        
        # for numericals
        if self.bounds_data[key][func[id].__name__]['numerical']: # "func[id].__name__" refers to "min" or "max", according to id (cal lower bound: 0 -> min, and cal upper bound: 1 -> max)
            numericals = {}
            params_and_vars = self._parsed_data.params.copy()
            for num in self.bounds_data[key][func[id].__name__]['numerical']:
                if isinstance(num, str):
                    numericals[num] = eval(num, params_and_vars)
                else:  # int
                    numericals[num] = num
            bound = bound_val = func[-id-1](numericals) # "-id-1" means get func reversely(lower -> 0 -> max, upper -> 1 -> min)
            
            # self.logger.debug(f'bound till numericals: {bound}\n')
        
        # for strings
        if self.bounds_data[key][func[id].__name__]['string']:
            vals_str = {bound_val: numericals[bound_val]} if self.bounds_data[key][func[id].__name__]['numerical'] else {}
            params_and_vars = self._parsed_data.params.copy()
            for bound_param in self.bounds_data[key][func[id].__name__]['string']:
                vals_str[bound_param] = eval(bound_param, params_and_vars)
            bound = func[-id-1](vals_str, key=vals_str.get)
            bound_val = vals_str[bound]
            
            # self.logger.debug(f'bound till string: {bound}\n')
        
        # for variables
        if self.bounds_data[key][func[id].__name__]['variable']:
            
            # self.logger.debug(f"{func[-id-1].__name__} bound values for variables:\n{self.bounds_data[key][func[id].__name__]['variable']}\n")
            
            bounds_var = []
            
            for vars, exprs in self.bounds_data[key][func[id].__name__]['variable'].items():
                for var in vars:
                    self._parsed_data.params[var] = 0  # TODO: regradless of var influence (not suitable, only for certain condition)
                
                tmp_bound_val_vars = {}
                params_and_vars = self._parsed_data.params.copy()
                for expr in exprs:
                    tmp_bound_val_vars[expr] = eval(expr, params_and_vars)

                bounds_var.append(func[-id-1](tmp_bound_val_vars, key=tmp_bound_val_vars.get))
                
            # self.logger.debug(f'bounds_var: {bounds_var}\n')
            vals_var_0 = {}
            vals_var_1 = {}
            
            for bound_var in bounds_var:
                keys_var = [x for x in self.bounds_data.keys() if x in bound_var]
                
                # self.logger.debug(f'keys_var: {keys_var}\n')
                
                for key_var in keys_var:
                    
                    # self.logger.debug(f"{func[-id-1].__name__} bound value for {key_var}: {self.bounds_data[key_var][func[-id-1].__name__]['bound_value']}\n")
                    
                    params_and_vars = self._parsed_data.params.copy()
                    val_var_0 = eval(self.bounds_data[key_var][func[-id-1].__name__]['bound_value'], params_and_vars) # lower -> 0 -> upper bound of var, and upper -> 1 -> lower bound of var
                    self._parsed_data.params[key_var] = val_var_0            
            
                params_and_vars = self._parsed_data.params.copy()
                vals_var_0[bound_var] = eval(bound_var, params_and_vars)
                
                for key_var in keys_var:
                    
                    # self.logger.debug(f"{func[id].__name__} bound value for {key_var}: {self.bounds_data[key_var][func[id].__name__]['bound_value']}\n")
                    
                    params_and_vars = self._parsed_data.params.copy()
                    val_var_1 = eval(self.bounds_data[key_var][func[id].__name__]['bound_value'], params_and_vars) # lower -> 0 -> lower bound of var, and upper -> 1 -> upper bound of var
                    self._parsed_data.params[key_var] = val_var_1
            
                params_and_vars = self._parsed_data.params.copy()
                vals_var_1[bound_var] = eval(bound_var, params_and_vars)
            
            # TODO: 下面这一块要修改以适应多个变量边界的大小比对
            vals_var_0[bound] = bound_val
            vals_var_1[bound] = bound_val
            # self.logger.debug(f"{func[-id-1].__name__} bound value containing vairables: {vals_var_0}\n")
            # self.logger.debug(f"{func[id].__name__} bound value containing vairables: {vals_var_1}\n")
            
            tmp_extreme = func[-id-1](vals_var_0, key=vals_var_0.get)
            if vals_var_0[tmp_extreme] != vals_var_0[bound]:
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

                # self.logger.debug(f'bound_set: {bound_set}\n')

                if bound_set:
                    if len(bound_set) > 1:
                        bound = ''
                        tail = ''
                        for i in range(len(bound_set) - 1):
                            bound += f'{func[-id-1].__name__}({bound_set[i]},'
                            tail += ')'
                        bound += bound_set[-1] + tail
                    else:
                        bound = bound_set[0]
                else:
                    bound = "inf"

        # self.logger.debug(f'new bound: {bound}\n')
        
        if str(bound) == 'inf':
            bounds_from_rand = [x for x in self._parsed_data.params.keys() if x not in self.bounds_data.keys()]
            
            # self.logger.debug(f'randomly select bound from list instead of "inf": {bounds_from_rand}\n')
            
            bound = random.choice(bounds_from_rand) 
            
        self.bounds_data[key][func[id].__name__]['bound_value'] = str(bound)

    def generate_for_loop_structure(self, key: str, reverse_label: bool) -> None:
        """Return formatted for loop structure filled with bounds."""
        lower_bound = self.bounds_data[key]['min']['bound_value']
        upper_bound = self.bounds_data[key]['max']['bound_value']
        if reverse_label:
            loop_expression = f'for (int {key} = {upper_bound} - 1; {key} >= {lower_bound}; {key}--)'
        else:
            loop_expression = f'for (int {key} = {lower_bound}; {key} < {upper_bound}; {key}++)'
        
        # self.logger.debug(f'loop expression: {loop_expression}\n')
        
        self.loop_structure[key] = (loop_expression, lower_bound, upper_bound)

    def get_final_loop(self) -> str:
        """assemble all components in loops together"""
        self.schedule_tree.update_tree(self.loop_structure, self.SCoP)
        self.SCoP = self.schedule_tree.extract_tree('code')
        return ''.join(self.SCoP)