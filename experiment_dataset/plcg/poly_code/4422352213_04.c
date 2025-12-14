/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 3
id: 4
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4422352213_04.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl),int xm,int ym,int zm,DATA_TYPE POLYBENCH_3D(M,xM,yM,zM,xm,ym,zm),int xn,int yn,int zn,int vn,DATA_TYPE POLYBENCH_4D(N,xN,yN,zN,vN,xn,yn,zn,vn),int xo,int yo,DATA_TYPE POLYBENCH_2D(O,xO,yO,xo,yo),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            for (i_3 = 0; i_3 < vc; i_3++) {
                C[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
    H[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xi; i_0++) {
    I[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xj; i_0++) {
    J[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
for (i_0 = 0; i_0 < xm; i_0++) {
    for (i_1 = 0; i_1 < ym; i_1++) {
        for (i_2 = 0; i_2 < zm; i_2++) {
            M[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xn; i_0++) {
    for (i_1 = 0; i_1 < yn; i_1++) {
        for (i_2 = 0; i_2 < zn; i_2++) {
            for (i_3 = 0; i_3 < vn; i_3++) {
                N[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xo; i_0++) {
    for (i_1 = 0; i_1 < yo; i_1++) {
        O[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl),int xm,int ym,int zm,DATA_TYPE POLYBENCH_3D(M,xM,yM,zM,xm,ym,zm),int xn,int yn,int zn,int vn,DATA_TYPE POLYBENCH_4D(N,xN,yN,zN,vN,xn,yn,zn,vn),int xo,int yo,DATA_TYPE POLYBENCH_2D(O,xO,yO,xo,yo))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i_0]);
    }
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    for (i_0 = 0; i_0 < xi; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i_0]);
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
    POLYBENCH_DUMP_BEGIN("M");
    for (i_0 = 0; i_0 < xm; i_0++) {
        for (i_1 = 0; i_1 < ym; i_1++) {
            for (i_2 = 0; i_2 < zm; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, M[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("M");
    POLYBENCH_DUMP_BEGIN("N");
    for (i_0 = 0; i_0 < xn; i_0++) {
        for (i_1 = 0; i_1 < yn; i_1++) {
            for (i_2 = 0; i_2 < zn; i_2++) {
                for (i_3 = 0; i_3 < vn; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, N[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("N");
    POLYBENCH_DUMP_BEGIN("O");
    for (i_0 = 0; i_0 < xo; i_0++) {
        for (i_1 = 0; i_1 < yo; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, O[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("O");
#endif
#ifdef CHECKSUM
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
        sum_H += H[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    DATA_TYPE sum_I = 0;
    for (i_0 = 0; i_0 < xi; i_0++) {
        sum_I += I[i_0];
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
    POLYBENCH_DUMP_BEGIN("M");
    DATA_TYPE sum_M = 0;
    for (i_0 = 0; i_0 < xm; i_0++) {
        for (i_1 = 0; i_1 < ym; i_1++) {
            for (i_2 = 0; i_2 < zm; i_2++) {
                sum_M += M[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_M);
    POLYBENCH_DUMP_END("M");
    POLYBENCH_DUMP_BEGIN("N");
    DATA_TYPE sum_N = 0;
    for (i_0 = 0; i_0 < xn; i_0++) {
        for (i_1 = 0; i_1 < yn; i_1++) {
            for (i_2 = 0; i_2 < zn; i_2++) {
                for (i_3 = 0; i_3 < vn; i_3++) {
                    sum_N += N[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_N);
    POLYBENCH_DUMP_END("N");
    POLYBENCH_DUMP_BEGIN("O");
    DATA_TYPE sum_O = 0;
    for (i_0 = 0; i_0 < xo; i_0++) {
        for (i_1 = 0; i_1 < yo; i_1++) {
            sum_O += O[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_O);
    POLYBENCH_DUMP_END("O");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4422352213_04(int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl),int xm,int ym,int zm,DATA_TYPE POLYBENCH_3D(M,xM,yM,zM,xm,ym,zm),int xn,int yn,int zn,int vn,DATA_TYPE POLYBENCH_4D(N,xN,yN,zN,vN,xn,yn,zn,vn),int xo,int yo,DATA_TYPE POLYBENCH_2D(O,xO,yO,xo,yo)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_M-1; i_0++) {
        for (int i_1 = 0; i_1 < PB_M-2; i_1++) {
            for (int i_2 = max(2, i_0); i_2 < PB_M-2; i_2++) {
                C[i_0][i_2][i_1][i_1] = E[i_2-2][i_1+2] * F[i_2+2][i_1][i_0] + G[i_1][i_2][0] - 2;
            }
        }
        B[i_0+1] = H[i_0] * I[i_0] + J[i_0] * H[i_0] - J[i_0] - 3;
    }
    for (int i_3 = 2; i_3 < PB_N; i_3++) {
        for (int i_4 = 0; i_4 < PB_N-2; i_4++) {
            for (int i_5 = 1; i_5 < -i_3+PB_Q-2; i_5++) {
                for (int i_6 = 0; i_6 < PB_L-2; i_6++) {
                    C[i_5][i_4][i_6][i_6] = K[i_6+2][i_3][i_4][0] + K[i_4][i_5][i_6][i_5+i_3+2] + L[i_4+2][i_3-2][i_6][0] - K[i_6][i_3][i_5-1][i_4] + M[i_5][i_3][i_4] * N[i_5+1][i_6][i_4+2][i_3] * L[i_5][i_4][i_6][0] * C[i_5+1][i_4][i_6][i_6] * C[i_5][i_6+1][i_3+1][i_3+1] * 6;
                }
            }
        }
        for (int i_7 = 1; i_7 < PB_N-1; i_7++) {
            B[i_7+1] = I[0] * J[i_3] - O[i_7+1][i_7+1] * E[i_3-1][i_7-1] + O[i_7][i_3-1] + B[i_7+1] + 1;
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
int zc = zC;
int vc = vC;
int xb = xB;
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
int yg = yG;
int zg = zG;
int xh = xH;
int xi = xI;
int xj = xJ;
int xk = xK;
int yk = yK;
int zk = zK;
int vk = vK;
int xl = xL;
int yl = yL;
int zl = zL;
int vl = vL;
int xm = xM;
int ym = yM;
int zm = zM;
int xn = xN;
int yn = yN;
int zn = zN;
int vn = vN;
int xo = xO;
int yo = yO;
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
POLYBENCH_1D_ARRAY_DECL(H, DATA_TYPE, xH,xh);
POLYBENCH_1D_ARRAY_DECL(I, DATA_TYPE, xI,xi);
POLYBENCH_1D_ARRAY_DECL(J, DATA_TYPE, xJ,xj);
POLYBENCH_4D_ARRAY_DECL(K, DATA_TYPE, xK,yK,zK,vK,xk,yk,zk,vk);
POLYBENCH_4D_ARRAY_DECL(L, DATA_TYPE, xL,yL,zL,vL,xl,yl,zl,vl);
POLYBENCH_3D_ARRAY_DECL(M, DATA_TYPE, xM,yM,zM,xm,ym,zm);
POLYBENCH_4D_ARRAY_DECL(N, DATA_TYPE, xN,yN,zN,vN,xn,yn,zn,vn);
POLYBENCH_2D_ARRAY_DECL(O, DATA_TYPE, xO,yO,xo,yo);
init_array(xc,yc,zc,vc,POLYBENCH_ARRAY(C), xb,POLYBENCH_ARRAY(B), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L), xm,ym,zm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,POLYBENCH_ARRAY(N), xo,yo,POLYBENCH_ARRAY(O), INIT_SEED);
kernel_4422352213_04(xc,yc,zc,vc,POLYBENCH_ARRAY(C), xb,POLYBENCH_ARRAY(B), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L), xm,ym,zm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,POLYBENCH_ARRAY(N), xo,yo,POLYBENCH_ARRAY(O));
polybench_prevent_dce(print_array(xc,yc,zc,vc,POLYBENCH_ARRAY(C), xb,POLYBENCH_ARRAY(B), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L), xm,ym,zm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,POLYBENCH_ARRAY(N), xo,yo,POLYBENCH_ARRAY(O)));
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
POLYBENCH_FREE_ARRAY(K);
POLYBENCH_FREE_ARRAY(L);
POLYBENCH_FREE_ARRAY(M);
POLYBENCH_FREE_ARRAY(N);
POLYBENCH_FREE_ARRAY(O);
return 0;
}
