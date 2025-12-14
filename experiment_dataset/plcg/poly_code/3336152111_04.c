/*
arg_depth: 3
arg_nstmts: 3
arg_bounds_index: 3
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
arg_prob_dep_write_exist: 1
id: 4
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3336152111_04.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,int vg,DATA_TYPE POLYBENCH_4D(G,xG,yG,zG,vG,xg,yg,zg,vg),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        for (i_2 = 0; i_2 < zf; i_2++) {
            F[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xg; i_0++) {
    for (i_1 = 0; i_1 < yg; i_1++) {
        for (i_2 = 0; i_2 < zg; i_2++) {
            for (i_3 = 0; i_3 < vg; i_3++) {
                G[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,int vg,DATA_TYPE POLYBENCH_4D(G,xG,yG,zG,vG,xg,yg,zg,vg))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("B");
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
            for (i_2 = 0; i_2 < zf; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            for (i_2 = 0; i_2 < zg; i_2++) {
                for (i_3 = 0; i_3 < vg; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("G");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            sum_A += A[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                sum_B += B[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
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
            for (i_2 = 0; i_2 < zf; i_2++) {
                sum_F += F[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            for (i_2 = 0; i_2 < zg; i_2++) {
                for (i_3 = 0; i_3 < vg; i_3++) {
                    sum_G += G[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3336152111_04(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,int vg,DATA_TYPE POLYBENCH_4D(G,xG,yG,zG,vG,xg,yg,zg,vg)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 2; i_0 < PB_L; i_0++) {
        for (int i_1 = 0; i_1 < min(-i_0+PB_N+1, PB_N-2); i_1++) {
            A[i_1][i_0] = D[i_0-1][i_1] - E[i_0] * D[i_1][i_0] - D[i_1+2][i_0-1] * D[i_1+i_0-1][i_1] * D[i_1+i_0-2][2] + A[i_1+1][i_0] * 1;
        }
    }
    for (int i_2 = 2; i_2 < PB_L-1; i_2++) {
        for (int i_3 = 2; i_3 < PB_M-1; i_3++) {
            for (int i_4 = 2; i_4 < min(-i_2+PB_L, i_2); i_4++) {
                B[i_4][i_3-2][i_2] = F[i_4][i_2][i_3] - F[i_2][i_4][i_4-2] - D[i_4][i_3] - F[i_3+1][i_4+i_2][i_2] * F[i_4][i_4+i_2][i_3] + 1;
            }
        }
        for (int i_5 = 2; i_5 < PB_L; i_5++) {
            for (int i_6 = i_5; i_6 < -i_2+PB_L; i_6++) {
                C[i_5+2][i_6-2] = F[i_2][i_5][0] * F[i_6][i_2-2][0] - G[i_6][i_2+1][i_6][0] + F[i_5-2][i_6+i_2][i_2-2] - A[i_5][i_6-1] * A[i_5][i_6] * 5;
            }
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int xe = xE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
int yg = yG;
int zg = zG;
int vg = vG;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_4D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,vG,xg,yg,zg,vg);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,POLYBENCH_ARRAY(G), INIT_SEED);
kernel_3336152111_04(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
