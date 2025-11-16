# Getting Started

## Preparation
1. Path of output files can be modified through variable "DATASET_PATH", "target_path" etc. in path_settings.py.
2. The number of synthesized codes and the corresponding parameters could be determined manually. However, we recommend to use random_generation.py directly. We have added several alternatives for different amounts of synthesized code and values of parameters.

## Code synthesis
1. python ./random_generation.py 
  Create intermidiate json files in ./examples/input, and code and header files in ./examples/poly_code in default.

## Code optimization, analysis and classification etc. after synthesis
1. python ./optimization_and_analysis.py
  Optimize code using PLuTo into ./examples/pluto_code and store the stdout data flow info in ./examples/stdout in default.
2. python ./loop_transformation_classifier.py
  Summerize types of loop transformations used in optimized version of code, and store the output in ./examples/classification_output.csv in default.
3. python ./rag_proprocess.py
  Get loop feature of synthesized code and selecting part of them according to loop transformations applied. Store the output in ./examples/plcg-v2_xxx.json in default.
   

## Compilation command

** To compile a benchmark without any monitoring:

$> gcc -O3 -fopenmp examples/poly_code/{filename}.c examples/poly_code/polybench.c -I examples/poly_code -lm -o examples/execution/{filename}.out

** To compile a benchmark with execution time reporting:
---------------------------------------------------

$> gcc -O3 -fopenmp examples/poly_code/{filename}.c examples/poly_code/polybench.c -I examples/poly_code -lm -DPOLYBENCH_TIME -o examples/execution/{filename}.out

** To generate the reference array sum output of a benchmark:
---------------------------------------------------

$> gcc -O3 -fopenmp examples/poly_code/{filename}.c examples/poly_code/polybench.c -I examples/poly_code -lm -DUSE_INIT_SEED -DCHECKSUM -o examples/execution/{filename}.out
$> examples/execution/{filename}.out 0 2>out.log

** To generate the reference array elements output of a benchmark:
---------------------------------------------------

$> gcc -O3 -fopenmp examples/poly_code/{filename}.c examples/poly_code/polybench.c -I examples/poly_code -lm -DUSE_INIT_SEED -DCHECKELEM -o examples/execution/{filename}.out
$> examples/execution/{filename}.out 0 2>out.log



## {filename} and parameters
#### e.g. 2324222224_00.c
1. (*)arg_depth specifies the maximum loop depth of SCoP. Here is 2, indicating that the loop dimension range is (1, 2).
2. (*)arg_nstmts specifies the number of statements in SCoP. Here is 3, indicating that the number of statements is 3.
3. (*)arg_bounds_index specifies the maximum number of loop branches in every level of loop nests, which determines the density of statements in loops. Here is 2, indicating that the scheduling index range is (0, 1, 2).
4. arg_prob_bounds_exist specifies the probability of iterators being present in loop bounds, which decreases by half at each subsequent level in the loop nest.Here is 4, indicating that the probability of specified loop bounds is 40%.
5. (*)arg_narrays_per_dim specifies the number of alternative arrays for both write and reads in each statement, which indicates the variety of arrays. Here is 2, indicating that the number of arrays available for selection in each array dimension is 2
6. arg_avg_narrays_read_per_stmt specifies the average number of reads to array per statement. Here is 2, indicating that the number of arrays read is 2*3=6. These reads are randomly distributed in stmts.
7. arg_bounds_coef specifies the maximum absolute value of the bounds of constant coefficient for array indexes matrix. Here is 2, indicating that the range of constant coefficients for array subscripts is (-2, -1, 0, 1, 2).
8. arg_avg_ndeps_read_per_stmt specifies the average number of WAR and RAW dependence per statement. Here is 2, indicating that the number of read dependencies is 2*3=6. These deps are randomly distributed in stmts.
9. arg_bounds_distance specifies the maximum absolute value of the bounds in each dimension of the dependence distance vector. Here is 2, indicating that the range of dependency distances is (-2, -1, 0, 1, 2).
10. (*)arg_dep_write_exist specifies the probability that WAW dependence exists for each statement. Here is 4, indicating that the probability of write dependencies generated for the write in each statement is 40% (Actually, it is 1-(1-40%)*(1-40%)=64%, since generation is bidirectional).
11. id is 00, indicating that this is the first code generated in this batch using these parameters.