/*
arg_depth: 4
arg_nstmts: 3
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 3
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4312352223_03.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,int vg,DATA_TYPE POLYBENCH_4D(G,xG,yG,zG,vG,xg,yg,zg,vg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            for (i_3 = 0; i_3 < va; i_3++) {
                A[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
    F[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
            for (i_3 = 0; i_3 < vi; i_3++) {
                I[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,int vg,DATA_TYPE POLYBENCH_4D(G,xG,yG,zG,vG,xg,yg,zg,vg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi))
{
int i_0, i_1, i_2, i_3;
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
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0]);
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
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        sum_B += B[i_0];
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
                    sum_G += G[i_0][i_1][i_2][i_3];
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
void kernel_4312352223_03(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,int vg,DATA_TYPE POLYBENCH_4D(G,xG,yG,zG,vG,xg,yg,zg,vg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_L-1; i_0++) {
        for (int i_1 = 0; i_1 < -i_0+PB_L; i_1++) {
            for (int i_2 = 1; i_2 < PB_L-2; i_2++) {
                for (int i_3 = 0; i_3 < PB_L-2; i_3++) {
                    A[i_1][i_0][i_2+2][i_3] = D[i_3][i_2-1][i_0-1][i_3] + D[i_2][i_3][i_1+i_0][i_0] + A[i_1][i_0+1][i_3+2][i_2] * 4;
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < PB_L-2; i_4++) {
        B[i_4] = E[i_4+2] + F[i_4] - F[i_4] + B[i_4-2] + B[i_4+1] - 4;
        for (int i_5 = 2; i_5 < min(i_4, -i_4+PB_P); i_5++) {
            for (int i_6 = 2; i_6 < PB_L-2; i_6++) {
                for (int i_7 = 2; i_7 < -i_6+PB_L; i_7++) {
                    A[i_5][i_4][i_6+2][i_7+2] = G[i_5][i_6][i_5][i_4] + D[i_7][i_6][i_5-1][i_5+i_4] - H[i_7][i_5][i_4+2] + I[i_5-2][i_7+i_6][i_7][i_4] + D[i_7+2][0][i_6-1][i_4+1] + D[i_7-2][i_4][i_6][0] + D[i_5][i_7+2][i_6-2][i_7+2] + D[i_5][i_4][i_7-2][0] + I[i_5][i_4-1][i_7][i_6-1] * 1;
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
int xa = xA;
int ya = yA;
int za = zA;
int va = vA;
int xb = xB;
int xd = xD;
int yd = yD;
int zd = zD;
int vd = vD;
int xe = xE;
int xf = xF;
int xg = xG;
int yg = yG;
int zg = zG;
int vg = vG;
int xh = xH;
int yh = yH;
int zh = zH;
int xi = xI;
int yi = yI;
int zi = zI;
int vi = vI;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
POLYBENCH_4D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,vG,xg,yg,zg,vg);
POLYBENCH_3D_ARRAY_DECL(H, DATA_TYPE, xH,yH,zH,xh,yh,zh);
POLYBENCH_4D_ARRAY_DECL(I, DATA_TYPE, xI,yI,zI,vI,xi,yi,zi,vi);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I), INIT_SEED);
kernel_4312352223_03(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,vg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
return 0;
}
