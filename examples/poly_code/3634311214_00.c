/*
arg_depth: 3
arg_nstmts: 6
arg_bounds_index: 3
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 3
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
#include "3634311214_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,DATA_TYPE POLYBENCH_2D(K,xK,yK,xk,yk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
    A[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xf; i++) {
    for (j = 0; j < yf; j++) {
        for (k = 0; k < zf; k++) {
            F[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xc; i++) {
    C[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xd; i++) {
    for (j = 0; j < yd; j++) {
        D[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xg; i++) {
    G[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xh; i++) {
    for (j = 0; j < yh; j++) {
        for (k = 0; k < zh; k++) {
            H[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xi; i++) {
    for (j = 0; j < yi; j++) {
        I[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xj; i++) {
    J[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xk; i++) {
    for (j = 0; j < yk; j++) {
        K[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xl; i++) {
    for (j = 0; j < yl; j++) {
        for (k = 0; k < zl; k++) {
            L[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,DATA_TYPE POLYBENCH_2D(K,xK,yK,xk,yk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
if (DUMP) {
    POLYBENCH_DUMP_BEGIN("A");
    for (i = 0; i < xa; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i]);
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("F");
    for (i = 0; i < xf; i++) {
        for (j = 0; j < yf; j++) {
            for (k = 0; k < zf; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("C");
    for (i = 0; i < xc; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
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
    POLYBENCH_DUMP_BEGIN("G");
    for (i = 0; i < xg; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i]);
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i = 0; i < xh; i++) {
        for (j = 0; j < yh; j++) {
            for (k = 0; k < zh; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    for (i = 0; i < xi; i++) {
        for (j = 0; j < yi; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i][j]);
        }
    }
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    for (i = 0; i < xj; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i]);
    }
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    for (i = 0; i < xk; i++) {
        for (j = 0; j < yk; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, K[i][j]);
        }
    }
    POLYBENCH_DUMP_END("K");
    POLYBENCH_DUMP_BEGIN("L");
    for (i = 0; i < xl; i++) {
        for (j = 0; j < yl; j++) {
            for (k = 0; k < zl; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, L[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("L");
}
if (CHECKSUM) {
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i = 0; i < xa; i++) {
        sum_A += A[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i = 0; i < xf; i++) {
        for (j = 0; j < yf; j++) {
            for (k = 0; k < zf; k++) {
                sum_F += F[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i = 0; i < xc; i++) {
        sum_C += C[i];
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
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i = 0; i < xg; i++) {
        sum_G += G[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    DATA_TYPE sum_H = 0;
    for (i = 0; i < xh; i++) {
        for (j = 0; j < yh; j++) {
            for (k = 0; k < zh; k++) {
                sum_H += H[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    DATA_TYPE sum_I = 0;
    for (i = 0; i < xi; i++) {
        for (j = 0; j < yi; j++) {
            sum_I += I[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    DATA_TYPE sum_J = 0;
    for (i = 0; i < xj; i++) {
        sum_J += J[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_J);
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    DATA_TYPE sum_K = 0;
    for (i = 0; i < xk; i++) {
        for (j = 0; j < yk; j++) {
            sum_K += K[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_K);
    POLYBENCH_DUMP_END("K");
    POLYBENCH_DUMP_BEGIN("L");
    DATA_TYPE sum_L = 0;
    for (i = 0; i < xl; i++) {
        for (j = 0; j < yl; j++) {
            for (k = 0; k < zl; k++) {
                sum_L += L[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_L);
    POLYBENCH_DUMP_END("L");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_3634311214_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,DATA_TYPE POLYBENCH_2D(K,xK,yK,xk,yk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl)){
polybench_start_instruments;
#pragma scop
    for (int i = 1; i < PB_M; i++) {
        A[i] = G[i] * A[i-1] + C[i] - 2;
        for (int j = 0; j < min(i,PB_M-1); j++) {
            for (int k = 1; k < min(j,PB_L); k++) {
                F[j+1][k][i+1] = H[j][k-1][i+1] * 4;
            }
        }
    }
    for (int l = 2; l < PB_M-1; l++) {
        C[l] = A[l-1] + C[l+1] + 1;
        for (int m = 0; m < PB_L-2; m++) {
            D[l-1][m+1] = I[m+1][l] + D[l-1][m+2] + D[l-2][m+1] + 1;
        }
    }
    for (int n = 0; n < PB_M-1; n++) {
        A[n+1] = J[n] * K[n][0] * 3;
    }
    for (int o = 1; o < PB_N+1; o++) {
        for (int p = 0; p < min(o,PB_L-1); p++) {
            for (int q = 1; q < PB_M-2; q++) {
                F[q+1][p][o] = L[q-1][o-1][p] - F[q+2][p+1][o+1] + F[q+1][p+1][o-1] - 2;
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
int xf = xF;
int yf = yF;
int zf = zF;
int xc = xC;
int xd = xD;
int yd = yD;
int xg = xG;
int xh = xH;
int yh = yH;
int zh = zH;
int xi = xI;
int yi = yI;
int xj = xJ;
int xk = xK;
int yk = yK;
int xl = xL;
int yl = yL;
int zl = zL;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
POLYBENCH_3D_ARRAY_DECL(H, DATA_TYPE, xH,yH,zH,xh,yh,zh);
POLYBENCH_2D_ARRAY_DECL(I, DATA_TYPE, xI,yI,xi,yi);
POLYBENCH_1D_ARRAY_DECL(J, DATA_TYPE, xJ,xj);
POLYBENCH_2D_ARRAY_DECL(K, DATA_TYPE, xK,yK,xk,yk);
POLYBENCH_3D_ARRAY_DECL(L, DATA_TYPE, xL,yL,zL,xl,yl,zl);
init_array(xa,POLYBENCH_ARRAY(A), xf,yf,zf,POLYBENCH_ARRAY(F), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L), INIT_SEED);
kernel_3634311214_00(xa,POLYBENCH_ARRAY(A), xf,yf,zf,POLYBENCH_ARRAY(F), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xf,yf,zf,POLYBENCH_ARRAY(F), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
POLYBENCH_FREE_ARRAY(K);
POLYBENCH_FREE_ARRAY(L);
return 0;
}
