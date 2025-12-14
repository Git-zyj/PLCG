/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 1
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 5
id: 9
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4416232215_09.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,int vg,int wg,DATA_TYPE POLYBENCH_5D(G,xG,yG,zG,vG,wG,xg,yg,zg,vg,wg),int xh,int yh,int zh,int vh,DATA_TYPE POLYBENCH_4D(H,xH,yH,zH,vH,xh,yh,zh,vh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi),int xj,int yj,DATA_TYPE POLYBENCH_2D(J,xJ,yJ,xj,yj),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3, i_4;
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            for (i_3 = 0; i_3 < vb; i_3++) {
                B[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xf; i_0++) {
    F[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xg; i_0++) {
    for (i_1 = 0; i_1 < yg; i_1++) {
        for (i_2 = 0; i_2 < zg; i_2++) {
            for (i_3 = 0; i_3 < vg; i_3++) {
                for (i_4 = 0; i_4 < wg; i_4++) {
                    G[i_0][i_1][i_2][i_3][i_4] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
                }
            }
        }
    }
}
for (i_0 = 0; i_0 < xh; i_0++) {
    for (i_1 = 0; i_1 < yh; i_1++) {
        for (i_2 = 0; i_2 < zh; i_2++) {
            for (i_3 = 0; i_3 < vh; i_3++) {
                H[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
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
for (i_0 = 0; i_0 < xj; i_0++) {
    for (i_1 = 0; i_1 < yj; i_1++) {
        J[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,int vg,int wg,DATA_TYPE POLYBENCH_5D(G,xG,yG,zG,vG,wG,xg,yg,zg,vg,wg),int xh,int yh,int zh,int vh,DATA_TYPE POLYBENCH_4D(H,xH,yH,zH,vH,xh,yh,zh,vh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi),int xj,int yj,DATA_TYPE POLYBENCH_2D(J,xJ,yJ,xj,yj))
{
int i_0, i_1, i_2, i_3, i_4;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
    }
    POLYBENCH_DUMP_END("D");
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
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0]);
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            for (i_2 = 0; i_2 < zg; i_2++) {
                for (i_3 = 0; i_3 < vg; i_3++) {
                    for (i_4 = 0; i_4 < wg; i_4++) {
                        fprintf(POLYBENCH_DUMP_TARGET, "\n");
                        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0][i_1][i_2][i_3][i_4]);
                    }
                }
            }
        }
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i_0 = 0; i_0 < xh; i_0++) {
        for (i_1 = 0; i_1 < yh; i_1++) {
            for (i_2 = 0; i_2 < zh; i_2++) {
                for (i_3 = 0; i_3 < vh; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i_0][i_1][i_2][i_3]);
                }
            }
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
    POLYBENCH_DUMP_BEGIN("J");
    for (i_0 = 0; i_0 < xj; i_0++) {
        for (i_1 = 0; i_1 < yj; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("J");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        sum_D += D[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
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
        sum_F += F[i_0];
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
                    for (i_4 = 0; i_4 < wg; i_4++) {
                        sum_G += G[i_0][i_1][i_2][i_3][i_4];
                    }
                }
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
            for (i_2 = 0; i_2 < zh; i_2++) {
                for (i_3 = 0; i_3 < vh; i_3++) {
                    sum_H += H[i_0][i_1][i_2][i_3];
                }
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
                for (i_3 = 0; i_3 < vi; i_3++) {
                    sum_I += I[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    DATA_TYPE sum_J = 0;
    for (i_0 = 0; i_0 < xj; i_0++) {
        for (i_1 = 0; i_1 < yj; i_1++) {
            sum_J += J[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_J);
    POLYBENCH_DUMP_END("J");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4416232215_09(int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,int vg,int wg,DATA_TYPE POLYBENCH_5D(G,xG,yG,zG,vG,wG,xg,yg,zg,vg,wg),int xh,int yh,int zh,int vh,DATA_TYPE POLYBENCH_4D(H,xH,yH,zH,vH,xh,yh,zh,vh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi),int xj,int yj,DATA_TYPE POLYBENCH_2D(J,xJ,yJ,xj,yj)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 2; i_0 < PB_Q; i_0++) {
        D[i_0] = E[i_0] * F[i_0] - E[0] + E[i_0-2] + E[i_0] * D[i_0] * 5;
        for (int i_1 = 1; i_1 < PB_Q; i_1++) {
            for (int i_2 = 2; i_2 < min(PB_Q-1, i_1); i_2++) {
                for (int i_3 = 2; i_3 < -i_2+PB_P-1; i_3++) {
                    B[i_3-2][i_1-1][1][i_0] = G[i_3][i_2][i_3][i_0][i_3] + H[i_1-1][i_3+2][i_0][i_2+1] * I[i_0+1][i_2-2][i_3+i_2+1][0] * 6;
                }
            }
        }
        for (int i_4 = 1; i_4 < i_0; i_4++) {
            for (int i_5 = 2; i_5 < PB_Q+1; i_5++) {
                for (int i_6 = i_0; i_6 < PB_P-1; i_6++) {
                    B[i_5-2][i_4-1][1][i_0+1] = I[i_0][i_6][i_4][i_5-1] - B[i_0-2][i_5-1][1][i_4] * B[i_5-2][i_0][1][i_6+1] + 4;
                }
            }
        }
        D[i_0] = J[i_0][1] * 1;
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xd = xD;
int xb = xB;
int yb = yB;
int zb = zB;
int vb = vB;
int xe = xE;
int xf = xF;
int xg = xG;
int yg = yG;
int zg = zG;
int vg = vG;
int wg = wG;
int xh = xH;
int yh = yH;
int zh = zH;
int vh = vH;
int xi = xI;
int yi = yI;
int zi = zI;
int vi = vI;
int xj = xJ;
int yj = yJ;
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_4D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,vB,xb,yb,zb,vb);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
POLYBENCH_5D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,vG,wG,xg,yg,zg,vg,wg);
POLYBENCH_4D_ARRAY_DECL(H, DATA_TYPE, xH,yH,zH,vH,xh,yh,zh,vh);
POLYBENCH_4D_ARRAY_DECL(I, DATA_TYPE, xI,yI,zI,vI,xi,yi,zi,vi);
POLYBENCH_2D_ARRAY_DECL(J, DATA_TYPE, xJ,yJ,xj,yj);
init_array(xd,POLYBENCH_ARRAY(D), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,wg,POLYBENCH_ARRAY(G), xh,yh,zh,vh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I), xj,yj,POLYBENCH_ARRAY(J), INIT_SEED);
kernel_4416232215_09(xd,POLYBENCH_ARRAY(D), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,wg,POLYBENCH_ARRAY(G), xh,yh,zh,vh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I), xj,yj,POLYBENCH_ARRAY(J));
polybench_prevent_dce(print_array(xd,POLYBENCH_ARRAY(D), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,wg,POLYBENCH_ARRAY(G), xh,yh,zh,vh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I), xj,yj,POLYBENCH_ARRAY(J)));
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
return 0;
}
