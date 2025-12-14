/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 5
id: 6
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4412112225_06.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xf; i_0++) {
    F[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0]);
    }
    POLYBENCH_DUMP_END("F");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                sum_C += C[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        sum_D += D[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                sum_E += E[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        sum_F += F[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4412112225_06(int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_P-2; i_0++) {
        for (int i_1 = 0; i_1 < PB_P-2; i_1++) {
            for (int i_2 = 0; i_2 < PB_L; i_2++) {
                C[i_0+2][0][i_1+2] = 1;
            }
        }
        for (int i_3 = 0; i_3 < PB_L; i_3++) {
            for (int i_4 = 0; i_4 < PB_L; i_4++) {
                for (int i_5 = 0; i_5 < PB_M-2; i_5++) {
                    C[i_5+2][0][i_0+2] = 3;
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < PB_P-2; i_6++) {
        for (int i_7 = 0; i_7 < PB_M-2; i_7++) {
            for (int i_8 = 0; i_8 < PB_L; i_8++) {
                C[i_7+2][0][i_6+2] = E[i_7+1][i_6-1][i_8] - 5;
            }
        }
        D[i_6] = F[i_6] - D[i_6+2] * D[i_6-1] - D[i_6-2] * 4;
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
init_array(xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_4412112225_06(xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xc,yc,zc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
