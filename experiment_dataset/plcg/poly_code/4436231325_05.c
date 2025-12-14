/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 3
arg_bounds_distance: 2
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
#include "4436231325_05.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
    G[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xh; i_0++) {
    for (i_1 = 0; i_1 < yh; i_1++) {
        H[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xi; i_0++) {
    for (i_1 = 0; i_1 < yi; i_1++) {
        for (i_2 = 0; i_2 < zi; i_2++) {
            for (i_3 = 0; i_3 < vi; i_3++) {
                I[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0]);
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
            for (i_2 = 0; i_2 < zi; i_2++) {
                for (i_3 = 0; i_3 < vi; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("I");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            sum_B += B[i_0][i_1];
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
        sum_G += G[i_0];
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
            for (i_2 = 0; i_2 < zi; i_2++) {
                for (i_3 = 0; i_3 < vi; i_3++) {
                    sum_I += I[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4436231325_05(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_L; i_0++) {
        for (int i_1 = 1; i_1 < PB_Q-1; i_1++) {
            B[i_1-1][i_1-1] = E[i_1] + F[i_1][i_0][i_1+1] * 5;
        }
    }
    for (int i_2 = 1; i_2 < PB_M-1; i_2++) {
        B[i_2][i_2] = G[i_2] * H[i_2][0] - G[i_2+1] - E[i_2-1] - 1;
    }
    for (int i_3 = 2; i_3 < PB_M; i_3++) {
        for (int i_4 = 0; i_4 < i_3; i_4++) {
            B[i_3-2][i_3-2] = E[i_3] * G[i_4] * 6;
        }
    }
    for (int i_5 = 1; i_5 < PB_Q-2; i_5++) {
        for (int i_6 = i_5; i_6 < -i_5+PB_Q-2; i_6++) {
            for (int i_7 = 1; i_7 < PB_M-1; i_7++) {
                for (int i_8 = 2; i_8 < -i_5+PB_Q-2; i_8++) {
                    D[i_5][i_7][i_6][i_8+i_5+1] = I[i_8][i_7+1][i_5+1][i_6] - D[i_5-1][i_7][i_6][i_8+i_5] + D[i_5+1][i_7+1][i_6][i_8+i_5+2] + D[i_5][i_7-1][i_6][i_8+i_5] * D[i_6][i_7][i_8][i_6+i_5+2] * D[i_6-1][i_7][i_8-2][i_6+i_5+2] * 1;
                }
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
int xd = xD;
int yd = yD;
int zd = zD;
int vd = vD;
int xe = xE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
int xh = xH;
int yh = yH;
int xi = xI;
int yi = yI;
int zi = zI;
int vi = vI;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE, xH,yH,xh,yh);
POLYBENCH_4D_ARRAY_DECL(I, DATA_TYPE, xI,yI,zI,vI,xi,yi,zi,vi);
init_array(xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I), INIT_SEED);
kernel_4436231325_05(xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
return 0;
}
