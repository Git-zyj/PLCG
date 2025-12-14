/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 5
id: 0
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4436212225_00.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            for (i_3 = 0; i_3 < vc; i_3++) {
                C[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            for (i_3 = 0; i_3 < ve; i_3++) {
                E[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                for (i_3 = 0; i_3 < vc; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                for (i_3 = 0; i_3 < ve; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("E");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                for (i_3 = 0; i_3 < vc; i_3++) {
                    sum_C += C[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        sum_B += B[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                for (i_3 = 0; i_3 < ve; i_3++) {
                    sum_E += E[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4436212225_00(int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_L+1; i_0++) {
        for (int i_1 = 0; i_1 < min(i_0, PB_L-1); i_1++) {
            for (int i_2 = i_0; i_2 < PB_M-2; i_2++) {
                for (int i_3 = 0; i_3 < PB_L-1; i_3++) {
                    C[i_2+2][i_3+1][i_0-1][i_1+1] = 6;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < PB_L; i_4++) {
        for (int i_5 = max(i_4, 2); i_5 < PB_M-2; i_5++) {
            B[i_5] = B[i_5+2] * B[i_5-2] * 2;
        }
    }
    for (int i_6 = 0; i_6 < PB_L; i_6++) {
        for (int i_7 = 2; i_7 < PB_L; i_7++) {
            for (int i_8 = i_7; i_8 < PB_L; i_8++) {
                for (int i_9 = 2; i_9 < min(PB_L, -i_7+PB_M+2); i_9++) {
                    C[i_6][i_7][i_8-2][i_9] = E[i_9+i_7-2][i_6][i_8][i_8] - C[i_6][i_7][i_8-2][i_9-2] + C[i_6][i_8][i_7-1][i_9] * 5;
                }
            }
        }
        for (int j_0 = i_6; j_0 < PB_M; j_0++) {
            for (int j_1 = 0; j_1 < PB_M; j_1++) {
                B[j_1] = 6;
            }
        }
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
int vc = vC;
int xb = xB;
int xe = xE;
int ye = yE;
int ze = zE;
int ve = vE;
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_4D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,vE,xe,ye,ze,ve);
init_array(xc,yc,zc,vc,POLYBENCH_ARRAY(C), xb,POLYBENCH_ARRAY(B), xe,ye,ze,ve,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_4436212225_00(xc,yc,zc,vc,POLYBENCH_ARRAY(C), xb,POLYBENCH_ARRAY(B), xe,ye,ze,ve,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xc,yc,zc,vc,POLYBENCH_ARRAY(C), xb,POLYBENCH_ARRAY(B), xe,ye,ze,ve,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
