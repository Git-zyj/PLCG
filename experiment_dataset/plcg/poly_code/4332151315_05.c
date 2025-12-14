/*
arg_depth: 4
arg_nstmts: 3
arg_bounds_index: 3
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 3
arg_bounds_distance: 1
arg_prob_dep_write_exist: 5
id: 5
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4332151315_05.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            for (i_3 = 0; i_3 < vb; i_3++) {
                B[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            for (i_3 = 0; i_3 < vd; i_3++) {
                D[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                for (i_3 = 0; i_3 < vb; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2][i_3]);
                }
            }
        }
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
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                for (i_3 = 0; i_3 < vb; i_3++) {
                    sum_B += B[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    sum_D += D[i_0][i_1][i_2][i_3];
                }
            }
        }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4332151315_05(int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_L; i_0++) {
        for (int i_1 = 0; i_1 < min(i_0, -i_0+PB_P); i_1++) {
            for (int i_2 = 1; i_2 < min(PB_L-1, -i_0+PB_P); i_2++) {
                for (int i_3 = 0; i_3 < min(-i_2+PB_L, -i_0+PB_L); i_3++) {
                    B[i_0][i_1][i_3+1][i_3] = D[i_1+i_0-1][i_2+1][i_3][i_2-1] * D[i_1+1][i_3+i_0][i_1+i_0][i_3] * D[i_1][i_3+1][i_2+i_0][i_0] - D[i_0+1][i_3+i_2][i_3+i_1][i_2] - D[i_1+1][i_1][i_0+1][i_2+1] - E[i_3][i_1][i_1+1] * 2;
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < PB_L-1; i_4++) {
        for (int i_5 = i_4; i_5 < PB_N-1; i_5++) {
            for (int i_6 = 0; i_6 < -i_5+PB_L; i_6++) {
                for (int i_7 = 0; i_7 < PB_L-1; i_7++) {
                    B[i_5][i_6][i_7+1][i_7] = E[i_6+i_5][i_4-1][i_7] - E[i_7][i_6+i_5][i_5] - B[i_5+1][i_6+1][i_7+1][i_7] + B[i_5][i_6][i_4][i_4-1] - B[i_5][i_6+1][i_4+1][i_4] + 2;
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < PB_L-1; i_8++) {
        for (int i_9 = 1; i_9 < PB_N-1; i_9++) {
            for (int j_0 = 0; j_0 < -i_8+PB_L; j_0++) {
                B[i_8][i_9][j_0+1][j_0] = E[j_0][j_0+1][i_9-1] - E[i_9+1][j_0+i_8-1][i_8+1] - D[i_8-1][i_9-1][j_0+1][i_9] * E[j_0][i_9][i_8] - E[j_0][i_9-1][0] + E[i_9][i_8+1][j_0] + E[i_9][j_0+i_8][i_8] + 5;
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
int yb = yB;
int zb = zB;
int vb = vB;
int xd = xD;
int yd = yD;
int zd = zD;
int vd = vD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_4D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,vB,xb,yb,zb,vb);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xb,yb,zb,vb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_4332151315_05(xb,yb,zb,vb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xb,yb,zb,vb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
