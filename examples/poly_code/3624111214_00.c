/*
arg_depth: 3
arg_nstmts: 6
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 4
id: 0
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "3624111214_00.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
#ifndef POLYBENCH_DUMP_ARRAYS
#define DUMP 0
#else
#define DUMP 1
#endif
#ifndef POLYBENCH_CHECKSUM_ARRAYS
#define CHECKSUM 0
#else
#define CHECKSUM 1
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
    for (j = 0; j < ya; j++) {
        for (k = 0; k < za; k++) {
            A[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xb; i++) {
    for (j = 0; j < yb; j++) {
        for (k = 0; k < zb; k++) {
            B[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xc; i++) {
    for (j = 0; j < yc; j++) {
        for (k = 0; k < zc; k++) {
            C[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xd; i++) {
    for (j = 0; j < yd; j++) {
        D[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xe; i++) {
    for (j = 0; j < ye; j++) {
        for (k = 0; k < ze; k++) {
            E[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xg; i++) {
    for (j = 0; j < yg; j++) {
        for (k = 0; k < zg; k++) {
            G[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
if (DUMP) {
    POLYBENCH_DUMP_BEGIN("A");
    for (i = 0; i < xa; i++) {
        for (j = 0; j < ya; j++) {
            for (k = 0; k < za; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i = 0; i < xb; i++) {
        for (j = 0; j < yb; j++) {
            for (k = 0; k < zb; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i = 0; i < xc; i++) {
        for (j = 0; j < yc; j++) {
            for (k = 0; k < zc; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i = 0; i < xd; i++) {
        for (j = 0; j < yd; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j]);
        }
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            for (k = 0; k < ze; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("G");
    for (i = 0; i < xg; i++) {
        for (j = 0; j < yg; j++) {
            for (k = 0; k < zg; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("G");
}
if (CHECKSUM) {
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i = 0; i < xa; i++) {
        for (j = 0; j < ya; j++) {
            for (k = 0; k < za; k++) {
                sum_A += A[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i = 0; i < xb; i++) {
        for (j = 0; j < yb; j++) {
            for (k = 0; k < zb; k++) {
                sum_B += B[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i = 0; i < xc; i++) {
        for (j = 0; j < yc; j++) {
            for (k = 0; k < zc; k++) {
                sum_C += C[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i = 0; i < xd; i++) {
        for (j = 0; j < yd; j++) {
            sum_D += D[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            for (k = 0; k < ze; k++) {
                sum_E += E[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i = 0; i < xg; i++) {
        for (j = 0; j < yg; j++) {
            for (k = 0; k < zg; k++) {
                sum_G += G[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_3624111214_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg)){
polybench_start_instruments;
#pragma scop
    for (int i = 1; i < PB_L-1; i++) {
        for (int j = 0; j < PB_P-1; j++) {
            for (int k = 0; k < PB_L; k++) {
                A[i][j][k] = G[j][k][j] * A[k][j][i-1] - A[i+1][j+1][k+1] - 6;
            }
        }
    }
    for (int l = 0; l < PB_L-1; l++) {
        for (int m = 1; m < min(l,PB_M+1); m++) {
            for (int n = 0; n < PB_P-1; n++) {
                B[m-1][l+1][n] = B[m-1][l+1][n+1] * 3;
            }
        }
    }
    for (int o = 1; o < PB_M-2; o++) {
        for (int p = 2; p < PB_M; p++) {
            for (int q = 0; q < PB_P-1; q++) {
                C[o-1][p][q+1] = G[q][o][p] * 2;
            }
            for (int r = 1; r < PB_M; r++) {
                D[r][p-1] = G[p-1][o][r-1] + G[p][o-1][r] * D[r-1][p-2] + D[p-1][r-1] * D[r-1][p-1] + D[p][r] * 6;
            }
        }
        for (int s = 1; s < o; s++) {
            for (int t = 1; t < PB_M-1; t++) {
                E[t][s][o+1] = G[t][s][o+1] - G[o][s][s-1] - E[t+1][s-1][o+1] - E[t-1][s-1][o+1] * E[t][s+1][o+2] + 5;
            }
        }
        for (int u = 0; u < PB_M; u++) {
            for (int a = 1; a < PB_P+1; a++) {
                B[u][o+1][a-1] = 4;
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
int za = zA;
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int ze = zE;
int xg = xG;
int yg = yG;
int zg = zG;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xg,yg,zg,POLYBENCH_ARRAY(G), INIT_SEED);
kernel_3624111214_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xg,yg,zg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xg,yg,zg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
