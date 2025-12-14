/*
arg_depth: 3
arg_nstmts: 4
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
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
#include "3424351121_04.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        F[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xg; i_0++) {
    for (i_1 = 0; i_1 < yg; i_1++) {
        G[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xh; i_0++) {
    for (i_1 = 0; i_1 < yh; i_1++) {
        for (i_2 = 0; i_2 < zh; i_2++) {
            H[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xi; i_0++) {
    for (i_1 = 0; i_1 < yi; i_1++) {
        for (i_2 = 0; i_2 < zi; i_2++) {
            I[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("C");
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1]);
        }
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
    POLYBENCH_DUMP_BEGIN("G");
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i_0 = 0; i_0 < xh; i_0++) {
        for (i_1 = 0; i_1 < yh; i_1++) {
            for (i_2 = 0; i_2 < zh; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    for (i_0 = 0; i_0 < xi; i_0++) {
        for (i_1 = 0; i_1 < yi; i_1++) {
            for (i_2 = 0; i_2 < zi; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("I");
#endif
#ifdef CHECKSUM
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            sum_E += E[i_0][i_1];
        }
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
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            sum_G += G[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    DATA_TYPE sum_H = 0;
    for (i_0 = 0; i_0 < xh; i_0++) {
        for (i_1 = 0; i_1 < yh; i_1++) {
            for (i_2 = 0; i_2 < zh; i_2++) {
                sum_H += H[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    DATA_TYPE sum_I = 0;
    for (i_0 = 0; i_0 < xi; i_0++) {
        for (i_1 = 0; i_1 < yi; i_1++) {
            for (i_2 = 0; i_2 < zi; i_2++) {
                sum_I += I[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3424351121_04(int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 2; i_0 < PB_P-1; i_0++) {
        for (int i_1 = i_0; i_1 < min(-i_0+PB_L-2, PB_P-1); i_1++) {
            C[i_1+i_0-1][i_1+i_0-2] = E[i_0-1][i_1-1] - F[i_0][i_1] * F[i_0][0] * G[i_0-1][i_1+1] + G[i_1][i_0] * D[i_1+i_0+1][i_1+i_0+2] - 1;
        }
        for (int i_2 = 0; i_2 < min(PB_P-2, i_0); i_2++) {
            for (int i_3 = 0; i_3 < min(-i_2+PB_P-2, -i_0+PB_P-1); i_3++) {
                B[i_0][i_2][i_3+i_0+1] = B[i_0-2][i_2][i_3+i_0] * B[i_3+1][i_0-1][i_3+i_2+2] + 6;
            }
        }
    }
    for (int i_4 = 0; i_4 < PB_P; i_4++) {
        for (int i_5 = i_4; i_5 < min(-i_4+PB_M, PB_L-1); i_5++) {
            C[i_5+i_4+1][i_5+i_4] = F[i_5][i_4] * G[i_5][i_4] + G[i_5+1][i_4] - E[i_5][i_4] - F[i_5][i_4] - 1;
        }
    }
    for (int i_6 = 1; i_6 < PB_Q; i_6++) {
        for (int i_7 = 1; i_7 < min(-i_6+PB_L-1, PB_P-1); i_7++) {
            D[i_7+i_6][i_7+i_6+1] = E[i_7-1][i_6+1] + E[i_7][i_6] * F[i_6][i_7] + H[i_7][i_6][i_6] + I[i_6+1][i_7+1][i_6] + E[i_7+i_6-1][i_7] + G[i_6][i_7] + G[i_7][i_6-1] + 5;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
int xg = xG;
int yg = yG;
int xh = xH;
int yh = yH;
int zh = zH;
int xi = xI;
int yi = yI;
int zi = zI;
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, xF,yF,xf,yf);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE, xG,yG,xg,yg);
POLYBENCH_3D_ARRAY_DECL(H, DATA_TYPE, xH,yH,zH,xh,yh,zh);
POLYBENCH_3D_ARRAY_DECL(I, DATA_TYPE, xI,yI,zI,xi,yi,zi);
init_array(xc,yc,POLYBENCH_ARRAY(C), xb,yb,zb,POLYBENCH_ARRAY(B), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I), INIT_SEED);
kernel_3424351121_04(xc,yc,POLYBENCH_ARRAY(C), xb,yb,zb,POLYBENCH_ARRAY(B), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I));
polybench_prevent_dce(print_array(xc,yc,POLYBENCH_ARRAY(C), xb,yb,zb,POLYBENCH_ARRAY(B), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I)));
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
return 0;
}
