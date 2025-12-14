/*
arg_depth: 4
arg_nstmts: 2
arg_bounds_index: 3
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
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
#include "4236351215_05.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,int vf,DATA_TYPE POLYBENCH_4D(F,xF,yF,zF,vF,xf,yf,zf,vf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int seed)
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
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
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
            for (i_3 = 0; i_3 < vf; i_3++) {
                F[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
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
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,int vf,DATA_TYPE POLYBENCH_4D(F,xF,yF,zF,vF,xf,yf,zf,vf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg))
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
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
        }
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
                for (i_3 = 0; i_3 < vf; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1][i_2][i_3]);
                }
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                sum_C += C[i_0][i_1][i_2];
            }
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
                for (i_3 = 0; i_3 < vf; i_3++) {
                    sum_F += F[i_0][i_1][i_2][i_3];
                }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4236351215_05(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,int vf,DATA_TYPE POLYBENCH_4D(F,xF,yF,zF,vF,xf,yf,zf,vf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_L; i_0++) {
        for (int i_1 = 1; i_1 < PB_L-1; i_1++) {
            for (int i_2 = 1; i_2 < PB_Q-1; i_2++) {
                for (int i_3 = 2; i_3 < min(PB_L-1, -i_2+PB_M); i_3++) {
                    A[i_0][i_3+1][i_1-1][i_2-1] = C[i_3+i_2][i_1][i_0+1] * D[i_1][i_0-1][i_3-1][i_2+1] * E[i_2][i_0][i_3][i_1+1] + F[i_1][i_0][i_2][0] - F[i_1][i_2][i_0][i_3-1] * F[i_1][i_2-1][i_3][i_0] - D[i_3][i_1-1][i_0][i_2] - A[i_0-1][i_1+1][i_2-1][i_3-2] * 3;
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < PB_Q+1; i_4++) {
        for (int i_5 = 1; i_5 < min(i_4, PB_L-1); i_5++) {
            for (int i_6 = 1; i_6 < PB_L; i_6++) {
                for (int i_7 = 1; i_7 < min(i_6, PB_L-1); i_7++) {
                    A[i_6][i_7+1][i_5-1][i_4-1] = F[i_5+1][i_4][i_6][i_5] - G[i_6][i_7-1][i_5-1] - E[i_7-1][i_4][i_4][i_6] + A[i_4][i_5+1][i_6-1][i_7-1] + 3;
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
int xc = xC;
int yc = yC;
int zc = zC;
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
int vf = vF;
int xg = xG;
int yg = yG;
int zg = zG;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_4D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,vE,xe,ye,ze,ve);
POLYBENCH_4D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,vF,xf,yf,zf,vf);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,vf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), INIT_SEED);
kernel_4236351215_05(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,vf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,vf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
