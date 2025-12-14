/*
arg_depth: 2
arg_nstmts: 4
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 2
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2424152123_02.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        F[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf))
{
int i_0, i_1;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("F");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        sum_A += A[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        sum_E += E[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            sum_F += F[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2424152123_02(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_L; i_0++) {
        A[i_0] = E[i_0+2] + E[i_0+2] * E[i_0] * 1;
        A[i_0] = E[i_0] + E[i_0] + E[i_0+1] * A[i_0] - 6;
    }
    for (int i_1 = 2; i_1 < PB_M; i_1++) {
        A[i_1-1] = E[i_1-2] - E[i_1] + F[i_1][0] - E[i_1] + F[i_1][0] - E[i_1] * 2;
    }
    for (int i_2 = 0; i_2 < PB_M-2; i_2++) {
        for (int i_3 = 0; i_3 < PB_M-1; i_3++) {
            D[i_3+1][i_2] = F[i_3][i_2+2] * F[i_2+1][i_3] - F[i_2][i_3] + F[i_3][i_2] + F[i_3][i_2] * D[i_3+1][i_2+2] * 5;
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int xd = xD;
int yd = yD;
int xe = xE;
int xf = xF;
int yf = yF;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, xF,yF,xf,yf);
init_array(xa,POLYBENCH_ARRAY(A), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_2424152123_02(xa,POLYBENCH_ARRAY(A), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
