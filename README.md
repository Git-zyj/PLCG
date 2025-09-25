# Getting Started

## Preparation
1. Path of output files can be modified through variable "DATASET_PATH" and "target_path" in settings.py.
2. The number of synthesized codes and the corresponding parameters need to be determined manually. In ./random_generation.py, we have added several alternatives for different amounts of synthesized code and values of parameters.

## Code synthesis
1. python ./random_generation.py 
  Create intermidiate json files in ./input, and code and header files in ./poly_code in default.

## Code optimization and analysis after synthesis (optional)
1. cd ./loop_transformation_classifier
2. python ./optimization_and_analysis.py 
  Create code after optimization using PLuTo in ./pluto_code and store the stdout data flow info in./stdout in default.
3. python ./loop_transformation_classifier.py
  Summerize types of loop transformations used in optimized version of code, and store the output in loop_transformation_classifier.csv in default.

## Compilation command

** To compile a benchmark without any monitoring:

$> gcc poly_code/filename.c polybench/polybench.c -I polybench/ -I poly_code -lm -o execution/filename.out

** To compile a benchmark with execution time reporting:
--------------------------------------------------------

$> gcc poly_code/filename.c polybench/polybench.c -I polybench/ -I poly_code -lm -DPOLYBENCH_TIME -o execution/filename.out

** To generate the reference array sum output of a benchmark:
---------------------------------------------------

$> gcc poly_code/filename.c polybench/polybench.c -I polybench/ -I poly_code -lm -DUSE_INIT_SEED -DPOLYBENCH_CHECKSUM_ARRAYS -o execution/filename.out
$> ./execution/filename.out 0 2>out.log

** To generate the reference array elements output of a benchmark:
---------------------------------------------------

$> gcc poly_code/filename.c polybench/polybench.c -I polybench/ -I poly_code -lm -DUSE_INIT_SEED -DPOLYBENCH_DUMP_ARRAYS -o execution/filename.out
$> ./execution/filename.out 0 2>out.log



## Filename and parameters
#### e.g. 2324222224_0.c
1. (*)arg_depth specifies the maximum loop depth of SCoP. Here is 2, indicating that the loop dimension range is (1, 2).
2. (*)arg_nstmts specifies the number of statements in SCoP. Here is 3, indicating that the number of statements is 3.
3. (*)arg_bounds_index specifies the maximum number of loop branches in every level of loop nests, which determines the density of statements in loops. Here is 2, indicating that the scheduling index range is (0, 1, 2).
4. arg_prob_bounds_exist specifies the probability of iterators being present in loop bounds, which decreases by half at each subsequent level in the loop nest.Here is 4, indicating that the probability of specified loop bounds is 40%.
5. (*)arg_narrays_per_dim specifies the number of alternative arrays for both write and reads in each statement, which indicates the variety of arrays. Here is 2, indicating that the number of arrays available for selection in each array dimension is 2
6. arg_narrays_read specifies the maximum number of reads to array per statement. Here is 2, indicating that the number of arrays read by each statement ranges from (0, 1, 2).
7. arg_bounds_coef specifies the maximum absolute value of the bounds of constant coefficient for array indexes matrix. Here is 2, indicating that the range of constant coefficients for array subscripts is (-2, -1, 0, 1, 2).
8. arg_ndeps_read specifies the maximum number of WAR and RAWdependence per statement. Here is 2, indicating that the number of read dependencies for each statement ranges from (0, 1, 2).
9. arg_bounds_distance specifies the maximum absolute value of the bounds in each dimension of the dependence distance vector. Here is 2, indicating that the range of dependency distances is (-2, -1, 0, 1, 2).
10. (*)arg_dep_write_exist specifies the probability that WAW dependence exists for each statement. Here is 4, indicating that the probability of write dependencies existing for each statement is 40%.
11. id is 0, indicating that this is the first code generated in this batch using these parameters.