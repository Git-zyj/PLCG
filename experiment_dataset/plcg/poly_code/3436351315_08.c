/*
arg_depth: 3
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 3
arg_bounds_distance: 1
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
#include "3436351315_08.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,DATA_TYPE POLYBENCH_1D(K,xK,xk),int xl,int yl,DATA_TYPE POLYBENCH_2D(L,xL,yL,xl,yl),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
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
            G[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xh; i_0++) {
    for (i_1 = 0; i_1 < yh; i_1++) {
        H[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xi; i_0++) {
    for (i_1 = 0; i_1 < yi; i_1++) {
        I[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xj; i_0++) {
    J[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xk; i_0++) {
    K[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xl; i_0++) {
    for (i_1 = 0; i_1 < yl; i_1++) {
        L[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,DATA_TYPE POLYBENCH_1D(K,xK,xk),int xl,int yl,DATA_TYPE POLYBENCH_2D(L,xL,yL,xl,yl))
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
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i_0 = 0; i_0 < xh; i_0++) {
        for (i_1 = 0; i_1 < yh; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    for (i_0 = 0; i_0 < xi; i_0++) {
        for (i_1 = 0; i_1 < yi; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    for (i_0 = 0; i_0 < xj; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i_0]);
    }
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    for (i_0 = 0; i_0 < xk; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, K[i_0]);
    }
    POLYBENCH_DUMP_END("K");
    POLYBENCH_DUMP_BEGIN("L");
    for (i_0 = 0; i_0 < xl; i_0++) {
        for (i_1 = 0; i_1 < yl; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, L[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("L");
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
                sum_G += G[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    DATA_TYPE sum_H = 0;
    for (i_0 = 0; i_0 < xh; i_0++) {
        for (i_1 = 0; i_1 < yh; i_1++) {
            sum_H += H[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    DATA_TYPE sum_I = 0;
    for (i_0 = 0; i_0 < xi; i_0++) {
        for (i_1 = 0; i_1 < yi; i_1++) {
            sum_I += I[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    DATA_TYPE sum_J = 0;
    for (i_0 = 0; i_0 < xj; i_0++) {
        sum_J += J[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_J);
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    DATA_TYPE sum_K = 0;
    for (i_0 = 0; i_0 < xk; i_0++) {
        sum_K += K[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_K);
    POLYBENCH_DUMP_END("K");
    POLYBENCH_DUMP_BEGIN("L");
    DATA_TYPE sum_L = 0;
    for (i_0 = 0; i_0 < xl; i_0++) {
        for (i_1 = 0; i_1 < yl; i_1++) {
            sum_L += L[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_L);
    POLYBENCH_DUMP_END("L");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3436351315_08(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,DATA_TYPE POLYBENCH_1D(K,xK,xk),int xl,int yl,DATA_TYPE POLYBENCH_2D(L,xL,yL,xl,yl)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_L-1; i_0++) {
        for (int i_1 = 1; i_1 < min(-i_0+PB_M, PB_M-1); i_1++) {
            for (int i_2 = max(1, i_0); i_2 < PB_P-1; i_2++) {
                B[i_2] = E[i_1+i_0][i_2-1][i_0+1] - F[i_1][i_0+1][i_2] * G[i_2+i_1-1][i_0][i_1] + H[i_2-1][i_0+1] + I[i_1+1][i_2+1] + 3;
            }
        }
    }
    for (int i_3 = 1; i_3 < PB_L-1; i_3++) {
        B[i_3] = J[i_3] + K[i_3] + L[i_3-1][i_3+1] - L[i_3+1][0] + B[i_3-1] + B[i_3+1] + 1;
        for (int i_4 = 1; i_4 < PB_L-1; i_4++) {
            for (int i_5 = 0; i_5 < min(i_4, -i_4+PB_N-1); i_5++) {
                B[i_3] = F[i_5+i_4+1][i_3-1][1] * G[i_4+1][i_3][i_4] - E[i_4-1][i_5][i_3-1] + F[i_5+1][i_3][i_4] - 3;
            }
        }
    }
    for (int i_6 = 0; i_6 < PB_L; i_6++) {
        for (int i_7 = max(i_6, 1); i_7 < PB_M-1; i_7++) {
            B[i_7] = K[i_6] * H[i_7+1][i_6] + K[i_7] + I[i_7][i_7-1] + I[i_6][i_7] + I[i_6][i_7] - B[i_7] + 5;
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
int yg = yG;
int zg = zG;
int xh = xH;
int yh = yH;
int xi = xI;
int yi = yI;
int xj = xJ;
int xk = xK;
int xl = xL;
int yl = yL;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE, xH,yH,xh,yh);
POLYBENCH_2D_ARRAY_DECL(I, DATA_TYPE, xI,yI,xi,yi);
POLYBENCH_1D_ARRAY_DECL(J, DATA_TYPE, xJ,xj);
POLYBENCH_1D_ARRAY_DECL(K, DATA_TYPE, xK,xk);
POLYBENCH_2D_ARRAY_DECL(L, DATA_TYPE, xL,yL,xl,yl);
init_array(xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,POLYBENCH_ARRAY(K), xl,yl,POLYBENCH_ARRAY(L), INIT_SEED);
kernel_3436351315_08(xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,POLYBENCH_ARRAY(K), xl,yl,POLYBENCH_ARRAY(L));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,POLYBENCH_ARRAY(K), xl,yl,POLYBENCH_ARRAY(L)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
POLYBENCH_FREE_ARRAY(K);
POLYBENCH_FREE_ARRAY(L);
return 0;
}
