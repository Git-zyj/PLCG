/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 1
id: 7
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214211211_07.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i_0;
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
{
int i_0;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        sum_B += B[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        sum_C += C[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214211211_07(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_M; i_0++) {
        B[i_0] = C[i_0] * 1;
    }
    for (int i_1 = 0; i_1 < PB_M; i_1++) {
        for (int i_2 = 1; i_2 < PB_N-1; i_2++) {
            B[i_2] = B[i_2+1] - B[i_2-1] + 6;
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int xc = xC;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
init_array(xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3214211211_07(xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
