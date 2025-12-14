/*
arg_depth: 4
arg_nstmts: 3
arg_bounds_index: 3
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
arg_prob_dep_write_exist: 5
id: 4
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4334251115_04.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
            for (i_3 = 0; i_3 < ve; i_3++) {
                E[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
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
    G[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xh; i_0++) {
    H[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xi; i_0++) {
    for (i_1 = 0; i_1 < yi; i_1++) {
        I[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
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
                for (i_3 = 0; i_3 < ve; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2][i_3]);
                }
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0]);
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i_0 = 0; i_0 < xh; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i_0]);
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
#endif
#ifdef CHECKSUM
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
        sum_C += C[i_0];
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
                for (i_3 = 0; i_3 < ve; i_3++) {
                    sum_E += E[i_0][i_1][i_2][i_3];
                }
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
        sum_G += G[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    DATA_TYPE sum_H = 0;
    for (i_0 = 0; i_0 < xh; i_0++) {
        sum_H += H[i_0];
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4334251115_04(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_P; i_0++) {
        for (int i_1 = i_0; i_1 < PB_P; i_1++) {
            for (int i_2 = 1; i_2 < i_1; i_2++) {
                for (int i_3 = i_1; i_3 < PB_P; i_3++) {
                    B[i_3][i_2-1][i_1+1] = D[i_3][i_0][i_1][i_2] - D[i_1][i_2][i_3][i_0] + 2;
                }
            }
        }
        for (int i_4 = 1; i_4 < PB_P; i_4++) {
            for (int i_5 = 1; i_5 < PB_P; i_5++) {
                for (int i_6 = 0; i_6 < PB_M-1; i_6++) {
                    B[i_4][i_0][i_6+1] = E[i_4][i_6][i_5][i_0+1] + D[i_6][i_5-1][0][i_4] * E[i_6+1][i_6][i_5][i_4] * F[i_4][i_5][0] * B[i_0][i_4-1][i_6+1] - 4;
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < PB_M-1; i_7++) {
        C[i_7] = G[i_7] + H[i_7+1] * H[i_7-1] - H[i_7] * I[i_7+1][i_7+1] + G[i_7] * G[i_7] - G[i_7] * 2;
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
int xc = xC;
int xd = xD;
int yd = yD;
int zd = zD;
int vd = vD;
int xe = xE;
int ye = yE;
int ze = zE;
int ve = vE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
int xh = xH;
int xi = xI;
int yi = yI;
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_4D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,vE,xe,ye,ze,ve);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
POLYBENCH_1D_ARRAY_DECL(H, DATA_TYPE, xH,xh);
POLYBENCH_2D_ARRAY_DECL(I, DATA_TYPE, xI,yI,xi,yi);
init_array(xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), INIT_SEED);
kernel_4334251115_04(xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I));
polybench_prevent_dce(print_array(xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
return 0;
}
