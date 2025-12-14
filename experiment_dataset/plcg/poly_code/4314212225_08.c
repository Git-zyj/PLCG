/*
arg_depth: 4
arg_nstmts: 3
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 5
id: 8
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4314212225_08.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,int vd,int wd,DATA_TYPE POLYBENCH_5D(D,xD,yD,zD,vD,wD,xd,yd,zd,vd,wd),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3, i_4;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            for (i_3 = 0; i_3 < va; i_3++) {
                A[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            for (i_3 = 0; i_3 < vd; i_3++) {
                for (i_4 = 0; i_4 < wd; i_4++) {
                    D[i_0][i_1][i_2][i_3][i_4] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
                }
            }
        }
    }
}
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,int vd,int wd,DATA_TYPE POLYBENCH_5D(D,xD,yD,zD,vD,wD,xd,yd,zd,vd,wd))
{
int i_0, i_1, i_2, i_3, i_4;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    for (i_4 = 0; i_4 < wd; i_4++) {
                        fprintf(POLYBENCH_DUMP_TARGET, "\n");
                        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2][i_3][i_4]);
                    }
                }
            }
        }
    }
    POLYBENCH_DUMP_END("D");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    sum_A += A[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            sum_C += C[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    for (i_4 = 0; i_4 < wd; i_4++) {
                        sum_D += D[i_0][i_1][i_2][i_3][i_4];
                    }
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4314212225_08(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,int vd,int wd,DATA_TYPE POLYBENCH_5D(D,xD,yD,zD,vD,wD,xd,yd,zd,vd,wd)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_Q; i_0++) {
        for (int i_1 = 1; i_1 < PB_Q; i_1++) {
            for (int i_2 = 0; i_2 < min(PB_P-2, -i_1+PB_L); i_2++) {
                for (int i_3 = 2; i_3 < min(-i_0+PB_M, PB_Q); i_3++) {
                    A[i_2][i_3+i_0][i_2+i_1][i_3] = D[i_3][i_2+2][i_0][i_1-1][1] - A[i_2][i_3+i_0][i_2+i_1-1][i_3-2] + 1;
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < PB_M-1; i_4++) {
        for (int i_5 = 0; i_5 < PB_L; i_5++) {
            for (int i_6 = 0; i_6 < min(i_4, -i_5+PB_L); i_6++) {
                for (int i_7 = 0; i_7 < -i_4+PB_M; i_7++) {
                    A[i_6][i_7+i_4][i_6+i_5][i_7] = 6;
                }
            }
        }
        for (int i_8 = 0; i_8 < min(i_4, -i_4+PB_P-1); i_8++) {
            C[i_4][i_8+i_4-2] = C[i_4+1][i_8+i_4-1] * C[i_4+1][i_8+i_4+1] - 2;
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int ya = yA;
int za = zA;
int va = vA;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int zd = zD;
int vd = vD;
int wd = wD;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_5D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,wD,xd,yd,zd,vd,wd);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,wd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_4314212225_08(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,wd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,wd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
