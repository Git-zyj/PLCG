/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 1
id: 2
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4424331221_02.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,int yj,int zj,DATA_TYPE POLYBENCH_3D(J,xJ,yJ,zJ,xj,yj,zj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            for (i_3 = 0; i_3 < vc; i_3++) {
                C[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
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
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xf; i_0++) {
    F[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
        I[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xj; i_0++) {
    for (i_1 = 0; i_1 < yj; i_1++) {
        for (i_2 = 0; i_2 < zj; i_2++) {
            J[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xk; i_0++) {
    for (i_1 = 0; i_1 < yk; i_1++) {
        for (i_2 = 0; i_2 < zk; i_2++) {
            for (i_3 = 0; i_3 < vk; i_3++) {
                K[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xl; i_0++) {
    for (i_1 = 0; i_1 < yl; i_1++) {
        for (i_2 = 0; i_2 < zl; i_2++) {
            for (i_3 = 0; i_3 < vl; i_3++) {
                L[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,int yj,int zj,DATA_TYPE POLYBENCH_3D(J,xJ,yJ,zJ,xj,yj,zj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                for (i_3 = 0; i_3 < vc; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2][i_3]);
                }
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    for (i_0 = 0; i_0 < xj; i_0++) {
        for (i_1 = 0; i_1 < yj; i_1++) {
            for (i_2 = 0; i_2 < zj; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    for (i_0 = 0; i_0 < xk; i_0++) {
        for (i_1 = 0; i_1 < yk; i_1++) {
            for (i_2 = 0; i_2 < zk; i_2++) {
                for (i_3 = 0; i_3 < vk; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, K[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("K");
    POLYBENCH_DUMP_BEGIN("L");
    for (i_0 = 0; i_0 < xl; i_0++) {
        for (i_1 = 0; i_1 < yl; i_1++) {
            for (i_2 = 0; i_2 < zl; i_2++) {
                for (i_3 = 0; i_3 < vl; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, L[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("L");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        sum_A += A[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                for (i_3 = 0; i_3 < vc; i_3++) {
                    sum_C += C[i_0][i_1][i_2][i_3];
                }
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
            sum_I += I[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    DATA_TYPE sum_J = 0;
    for (i_0 = 0; i_0 < xj; i_0++) {
        for (i_1 = 0; i_1 < yj; i_1++) {
            for (i_2 = 0; i_2 < zj; i_2++) {
                sum_J += J[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_J);
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    DATA_TYPE sum_K = 0;
    for (i_0 = 0; i_0 < xk; i_0++) {
        for (i_1 = 0; i_1 < yk; i_1++) {
            for (i_2 = 0; i_2 < zk; i_2++) {
                for (i_3 = 0; i_3 < vk; i_3++) {
                    sum_K += K[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_K);
    POLYBENCH_DUMP_END("K");
    POLYBENCH_DUMP_BEGIN("L");
    DATA_TYPE sum_L = 0;
    for (i_0 = 0; i_0 < xl; i_0++) {
        for (i_1 = 0; i_1 < yl; i_1++) {
            for (i_2 = 0; i_2 < zl; i_2++) {
                for (i_3 = 0; i_3 < vl; i_3++) {
                    sum_L += L[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_L);
    POLYBENCH_DUMP_END("L");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4424331221_02(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,int yj,int zj,DATA_TYPE POLYBENCH_3D(J,xJ,yJ,zJ,xj,yj,zj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_M-1; i_0++) {
        A[i_0] = E[i_0+1] * F[0] - G[i_0] + F[i_0] + E[i_0-1] - A[i_0+1] + 3;
    }
    for (int i_1 = 0; i_1 < PB_M; i_1++) {
        for (int i_2 = 2; i_2 < PB_M; i_2++) {
            A[i_2] = H[i_2+1][i_2] * I[i_1][i_2] - A[i_2] * A[i_2-1] - 1;
            for (int i_3 = 0; i_3 < PB_M; i_3++) {
                for (int i_4 = 0; i_4 < min(-i_3+PB_M, -i_2+PB_Q); i_4++) {
                    C[i_2][i_1][i_4+i_2-1][i_1] = J[i_4][i_2][i_3] * K[i_2][i_1][i_4+i_3][i_2] - C[i_2][i_1][i_4+i_2][i_1] + C[i_2][i_1][i_4+i_2-2][i_1] * 3;
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < PB_N-1; i_5++) {
        for (int i_6 = 2; i_6 < PB_M; i_6++) {
            for (int i_7 = 1; i_7 < PB_M+1; i_7++) {
                for (int i_8 = 1; i_8 < min(-i_6+PB_M, i_7); i_8++) {
                    D[i_8+i_6][i_5-1][i_7-1][i_7] = J[i_5+1][i_8][i_7-1] * L[i_6][i_8-1][i_7-1][i_5+1] - D[i_8+i_6-2][i_7-1][i_5-2][i_5-1] - 3;
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
int xc = xC;
int yc = yC;
int zc = zC;
int vc = vC;
int xd = xD;
int yd = yD;
int zd = zD;
int vd = vD;
int xe = xE;
int xf = xF;
int xg = xG;
int xh = xH;
int yh = yH;
int xi = xI;
int yi = yI;
int xj = xJ;
int yj = yJ;
int zj = zJ;
int xk = xK;
int yk = yK;
int zk = zK;
int vk = vK;
int xl = xL;
int yl = yL;
int zl = zL;
int vl = vL;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE, xH,yH,xh,yh);
POLYBENCH_2D_ARRAY_DECL(I, DATA_TYPE, xI,yI,xi,yi);
POLYBENCH_3D_ARRAY_DECL(J, DATA_TYPE, xJ,yJ,zJ,xj,yj,zj);
POLYBENCH_4D_ARRAY_DECL(K, DATA_TYPE, xK,yK,zK,vK,xk,yk,zk,vk);
POLYBENCH_4D_ARRAY_DECL(L, DATA_TYPE, xL,yL,zL,vL,xl,yl,zl,vl);
init_array(xa,POLYBENCH_ARRAY(A), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,yj,zj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L), INIT_SEED);
kernel_4424331221_02(xa,POLYBENCH_ARRAY(A), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,yj,zj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,yj,zj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
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
