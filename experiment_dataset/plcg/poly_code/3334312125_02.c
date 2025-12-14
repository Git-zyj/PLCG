/*
arg_depth: 3
arg_nstmts: 3
arg_bounds_index: 3
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 5
id: 2
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3334312125_02.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
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
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3334312125_02(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_N; i_0++) {
        for (int i_1 = max(1, i_0); i_1 < PB_M+1; i_1++) {
            B[i_1-1] = 1;
        }
    }
    for (int i_2 = 0; i_2 < PB_M-1; i_2++) {
        B[i_2] = B[i_2+1] * 1;
    }
    for (int i_3 = 0; i_3 < PB_N; i_3++) {
        for (int i_4 = 0; i_4 < PB_N-2; i_4++) {
            for (int i_5 = max(i_4, 2); i_5 < PB_M; i_5++) {
                B[i_5-2] = D[i_4+2][i_3][i_5] + 5;
            }
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3334312125_02(xb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
