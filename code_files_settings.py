import json
from typing import *

from basic_params_settings import array_index_dim_names_sequence, iterators_sequence

lines_per_indent = '    '

def variable_assignment(tmp_main, arrays):
    """
    This function adds vars assignment + returns a list of variables that can be a left-value
    :param tmp_main: list, temporal list of strings of generated code for main function
    :param arrays: dict, dict that stores information about arrays
    :return: list, list of strings, each string - left value in assignment
    """
    code_vars = []
    for array in arrays:
        dims = array[1]
        for key in dims.keys():
            code_var = key.lower()
            code_vars.append(code_var)
            header_var = key
            tmp_main.append(f'int {code_var} = {header_var};')
    return code_vars

def array_declaration(tmp_main, arrays):
    """
    This function returns a list of strings, each string stores a proper format for array declaration
    This function appends strings to the list "generated_code" related to function that declares arrays
    :param tmp_main: temporal list of strings for main function, strings stores generated code
    :param arrays: dict, stores information about arrays
    :return: each string stores a proper format for array declaration
    """
    code_arrays = []
    for array in arrays:
        _, array_name, number_of_dims, argument_string = generate_argument_string(array)

        restricted_argument_string = argument_string[argument_string.index(',') + 1:]  # no array name

        tmp_main.append(
            f'POLYBENCH_{len(number_of_dims)}D_ARRAY_DECL({array_name}, DATA_TYPE, {restricted_argument_string});')
        code_arrays.append(f'POLYBENCH_{len(number_of_dims)}D({argument_string})')
    return code_arrays

def init_and_kernel_call(generated_code, arrays, code_vars, kernel_name):
    """
    This code appends to "generated_code" list strings related to calls of init functions + kernel call
    :param generated_code: list of strings, strings stores generated code:
    :param arrays: dict, stores information about arrays
    :param code_vars: list, list of strings, each string - left value in assignment
    :param kernel_name: string, name of our kernel
    """
    argument_string = ''
    final_index = 0
    for idx, array in enumerate(arrays):
        number_of_dim = len(array[1].keys())

        start_index = final_index
        final_index += number_of_dim

        for variable_index in range(start_index, final_index):
            argument_string += code_vars[variable_index] + ','

        argument_string += f'POLYBENCH_ARRAY({array[0]}), '

    generated_code.append(f'init_array({argument_string}INIT_SEED);')
    generated_code.append(f'kernel_{kernel_name}({argument_string[:-2]});')

def array_dealocation(generated_code, arrays):
    """
    This function deallocated all the arrays
    :param generated_code: list of strings, strings stores generated code
    :param arrays: dict, stores information about arrays
    """
    for array in arrays:
        generated_code.append(f'POLYBENCH_FREE_ARRAY({array[0]});')


def prevent_elimination(generated_code, arrays, code_vars):
    """
    This function apppends strings to generated code that prevent code elimination
    :param generated_code: list of strings, strings stores generated code
    :param arrays: dict, stores information about arrays
    """

    argument_string = ''
    final_index = 0
    for idx, array in enumerate(arrays):
        number_of_dim = len(array[1].keys())

        start_index = final_index
        final_index += number_of_dim

        for variable_index in range(start_index, final_index):
            argument_string += code_vars[variable_index] + ','

        argument_string += f'POLYBENCH_ARRAY({array[0]}), '

    generated_code.append(f'polybench_prevent_dce(print_array({argument_string[:-2]}));')

def add_comments(generated_code, kernel_name):
    generated_code.append('/*')
    
    # 例如3634311214_00
    
    generated_code.append(f'arg_depth: {kernel_name[0]}\narg_nstmts: {kernel_name[1]}\narg_bounds_index: {kernel_name[2]}\narg_prob_bounds_exist: {kernel_name[3]}\narg_narrays_per_dim: {kernel_name[4]}\narg_avg_narrays_read_per_stmt: {kernel_name[5]}\narg_bounds_coef: {kernel_name[6]}\narg_avg_ndeps_read_per_stmt: {kernel_name[7]}\narg_bounds_distance: {kernel_name[8]}\narg_prob_dep_write_exist: {kernel_name[9]}\nid: {int(kernel_name[-2:])}')
    generated_code.append('*/')

def generate_array_reference(name, array_dims):
    dims = len(array_dims.keys())
    reference_string = name
    for idx in range(dims):
        reference_string += '[' + iterators_sequence[idx] + ']'
    return reference_string


def print_array(generated_code, arrays):
    """
    This function generates code for printing all the arrays that we have
    :param generated_code: list, list of strings that store generated code
    :param arrays: dict, stores info about arrays
    """
    whole_argument = ''
    max_array_dim = 0
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        whole_argument += argument_string + ','
        max_array_dim = max(max_array_dim, len(array_dim))
    whole_argument = whole_argument[:len(whole_argument) - 1]
    generated_code.append(f'static void print_array({whole_argument})')
    generated_code.append('{')
    iterators_all = ', '.join(iterators_sequence[:max_array_dim])
    generated_code.append(f'int {iterators_all};')
    
    generated_code.append("POLYBENCH_DUMP_START;")
    
    # -DCHECKELEM
    generated_code.append("#ifdef CHECKELEM")
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        generated_code.append(f"{lines_per_indent}POLYBENCH_DUMP_BEGIN(\"{array_name}\");")
        for i in range(len(array_dim)):
            ub = list(array_dim.keys())[i].lower()
            generated_code.append(
                f'{lines_per_indent * (i+1)}for ({iterators_sequence[i]} = 0; {iterators_sequence[i]} < {ub}; {iterators_sequence[i]}++) {{')
            
        generated_code.append(fr'{lines_per_indent * (i + 2)}fprintf(POLYBENCH_DUMP_TARGET, "\n");')
        generated_code.append(f'{lines_per_indent * (i + 2)}fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, {generate_array_reference(array_name, array_dim)});')
        for i in range(len(array_dim), 0, -1):
            generated_code.append(f'{lines_per_indent * (i)}}}')
        generated_code.append(f"{lines_per_indent}POLYBENCH_DUMP_END(\"{array_name}\");")
    generated_code.append("#endif")
        
    # -DCHECKSUM
    generated_code.append("#ifdef CHECKSUM")
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        generated_code.append(f"{lines_per_indent}POLYBENCH_DUMP_BEGIN(\"{array_name}\");")
        generated_code.append(f"{lines_per_indent}DATA_TYPE sum_{array_name} = 0;")
        for i in range(len(array_dim)):
            ub = list(array_dim.keys())[i].lower()
            generated_code.append(
                f'{lines_per_indent * (i + 1)}for ({iterators_sequence[i]} = 0; {iterators_sequence[i]} < {ub}; {iterators_sequence[i]}++) {{')
        
        generated_code.append(f'{lines_per_indent * (i + 2)}sum_{array_name} += {generate_array_reference(array_name, array_dim)};')
        for i in range(len(array_dim), 0, -1):
            generated_code.append(f'{lines_per_indent * (i)}}}')
            
        generated_code.append(fr'{lines_per_indent}fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");')
        generated_code.append(f'{lines_per_indent}fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_{array_name});')
        generated_code.append(f"{lines_per_indent}POLYBENCH_DUMP_END(\"{array_name}\");")
    generated_code.append("#endif")
    
    generated_code.append("POLYBENCH_DUMP_FINISH;")
    generated_code.append("}")


def generate_function_call(generated_code, kernel_name, code_vars, code_arrays, func_body):
    """
    This function creates a body of the function that contains all computational code
    :param generated_code: list, list of strings that store generated code
    :param kernel_name: string, name of our computational kernel
    :param code_vars: list, list of strings, each string - left value in assignment
    :param code_arrays: list, list of strings, each string stores a proper format for array declaration
    :param func_body: list of strings, kernel function body code
    """
    function_signature = f'void kernel_{kernel_name}('

    final_index = 0
    for code_array in code_arrays:
        # Extract number of dimensions from code_array string
        number_of_dims = int(code_array.split('_')[1][0])  # Extract the dimension number
        start_index = final_index
        final_index += number_of_dims
        for idx in range(start_index, final_index):
            function_signature += f'int {code_vars[idx]},'
        function_signature += f'DATA_TYPE {code_array},'

    function_signature = function_signature[:-1]
    function_signature += '){'

    function_body = func_body
    modified_body = [function_signature, 'polybench_start_instruments;', '#pragma scop']
    modified_body += function_body
    modified_body.append('#pragma endscop')
    modified_body.append('polybench_stop_instruments;')
    modified_body.append('polybench_print_instruments;\n}')
    generated_code += modified_body


def generate_argument_string(array):
    """
    This function returns an argument string based on input arrays + array name + it's dimensions
    :param array: (array_name, {dims}), stores information about array
    :return: string, string, dict, string, first parameter to return is argument string, second is an array name,
    third one is dictionary of dimensions, the fourth is just argument string not inserted to argument string
    """
    name = array[0]
    dimension = array[1]
    argument_string = ''
    arguments = ''
    for dim in dimension.keys():
        argument_string += 'int ' + dim.lower() + ','
    arguments += name + ','
    for dim in dimension.keys():
        arguments += dim + ','
    for dim in dimension.keys():
        arguments += dim.lower() + ','
    arguments = arguments[:-1]
    argument_string += f'DATA_TYPE POLYBENCH_{len(dimension)}D({arguments})'
    return argument_string, name, dimension, arguments


def init_arrays(generated_code, arrays):
    """
    This code generates static declaration for the arrays in PolyBench style
    :param generated_code: list, list of strings of generated code
    :param arrays: list of tuples, information about array names and it's dimensions
    """
    whole_argument = ''
    max_array_dim = 0
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        whole_argument += argument_string + ','
        max_array_dim = max(max_array_dim, len(array_dim))
    whole_argument += 'int seed'
    generated_code.append(f'static void init_array({whole_argument})')

    generated_code.append('{')
    generated_code.append('srand(seed);')
    iterators_all = ', '.join(iterators_sequence[:max_array_dim])
    generated_code.append(f'int {iterators_all};')

    min_rand, max_rand = 0.9, 1.1
    random_function = f'{min_rand} + (rand() / (DATA_TYPE)RAND_MAX) * ({max_rand} - {min_rand})'

    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        for i in range(len(array_dim)):
            ub = list(array_dim.keys())[i].lower()
            generated_code.append(
                 f'{lines_per_indent * i}for ({iterators_sequence[i]} = 0; {iterators_sequence[i]} < {ub}; {iterators_sequence[i]}++) {{')
            
        generated_code.append(
            f'{lines_per_indent * (i + 1)}{generate_array_reference(array_name, array_dim)} = {random_function};')
        for i in range(len(array_dim), 0, -1):
            generated_code.append(f'{lines_per_indent * (i - 1)}}}')
    generated_code.append('}')


def add_main_begining(generated_code, tmp_main):
    """
    This function add the begining of the main function
    :param generated_code: list, list of strings of generated code
    :param tmp_main: list, temporal list of strings of generated code for main function
    """
    generated_code.append('int main(int argc, char** argv)')
    generated_code.append('{')
    generated_code.extend(tmp_main)


def add_main_end(generated_code):
    """
    This function add the end of the main function
    :param generated_code: list, list of strings of generated code
    """
    generated_code.append('return 0;')
    generated_code.append('}')


def generate_source_code(kernel_name, arrays, func_body):
    """
    All functions together in right order
    :param kernel_name: string, name of our computational kernel
    :param arrays: list of tuples, information about array names and it's dimensions
    :param func_body: list of strings, kernel function body code
    :return: list, list of strings of generated code
    """
    generated_code = []
    tmp_main = []
    init_arrays(generated_code, arrays)
    print_array(generated_code, arrays)
    code_vars = variable_assignment(tmp_main, arrays)
    code_arrays = array_declaration(tmp_main, arrays)
    generate_function_call(generated_code, kernel_name, code_vars, code_arrays, func_body)
    add_main_begining(generated_code, tmp_main)
    init_and_kernel_call(generated_code, arrays, code_vars, kernel_name)
    prevent_elimination(generated_code, arrays, code_vars)
    array_dealocation(generated_code, arrays)
    add_main_end(generated_code)
    
    return generated_code

def get_array_information_from_json(file):
    arrays = []
    with open(file) as json_file:
        data = json.load(json_file)
    arrays_data = data['arrays']
    for unprocessed_array in arrays_data:
        name = unprocessed_array[:unprocessed_array.find('[')]
        dim_string = unprocessed_array[unprocessed_array.find('[') + 1:unprocessed_array.find(']')]
        dimensions = dim_string.replace(' ', '').split(',')
        dimension_dict = {}
        for idx, dim in enumerate(dimensions):
            dimension_dict[array_index_dim_names_sequence[idx] + name] = dim
        arrays.append((name, dimension_dict))

    return arrays, data['params']