/*
arg_depth: 4
arg_nstmts: 3
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 1
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4314352223_01.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl),int xm,int ym,int zm,int vm,DATA_TYPE POLYBENCH_4D(M,xM,yM,zM,vM,xm,ym,zm,vm),int xn,int yn,int zn,int vn,int wn,DATA_TYPE POLYBENCH_5D(N,xN,yN,zN,vN,wN,xn,yn,zn,vn,wn),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3, i_4;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
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
        F[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
            for (i_3 = 0; i_3 < vm; i_3++) {
                M[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xn; i_0++) {
    for (i_1 = 0; i_1 < yn; i_1++) {
        for (i_2 = 0; i_2 < zn; i_2++) {
            for (i_3 = 0; i_3 < vn; i_3++) {
                for (i_4 = 0; i_4 < wn; i_4++) {
                    N[i_0][i_1][i_2][i_3][i_4] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
                }
            }
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl),int xm,int ym,int zm,int vm,DATA_TYPE POLYBENCH_4D(M,xM,yM,zM,vM,xm,ym,zm,vm),int xn,int yn,int zn,int vn,int wn,DATA_TYPE POLYBENCH_5D(N,xN,yN,zN,vN,wN,xn,yn,zn,vn,wn))
{
int i_0, i_1, i_2, i_3, i_4;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
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
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1]);
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
                for (i_3 = 0; i_3 < vm; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, M[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("M");
    POLYBENCH_DUMP_BEGIN("N");
    for (i_0 = 0; i_0 < xn; i_0++) {
        for (i_1 = 0; i_1 < yn; i_1++) {
            for (i_2 = 0; i_2 < zn; i_2++) {
                for (i_3 = 0; i_3 < vn; i_3++) {
                    for (i_4 = 0; i_4 < wn; i_4++) {
                        fprintf(POLYBENCH_DUMP_TARGET, "\n");
                        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, N[i_0][i_1][i_2][i_3][i_4]);
                    }
                }
            }
        }
    }
    POLYBENCH_DUMP_END("N");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            sum_A += A[i_0][i_1];
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
                sum_D += D[i_0][i_1][i_2];
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
                for (i_3 = 0; i_3 < vm; i_3++) {
                    sum_M += M[i_0][i_1][i_2][i_3];
                }
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
                    for (i_4 = 0; i_4 < wn; i_4++) {
                        sum_N += N[i_0][i_1][i_2][i_3][i_4];
                    }
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_N);
    POLYBENCH_DUMP_END("N");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4314352223_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,int vl,DATA_TYPE POLYBENCH_4D(L,xL,yL,zL,vL,xl,yl,zl,vl),int xm,int ym,int zm,int vm,DATA_TYPE POLYBENCH_4D(M,xM,yM,zM,vM,xm,ym,zm,vm),int xn,int yn,int zn,int vn,int wn,DATA_TYPE POLYBENCH_5D(N,xN,yN,zN,vN,wN,xn,yn,zn,vn,wn)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_L; i_0++) {
        for (int i_1 = 2; i_1 < PB_N-2; i_1++) {
            for (int i_2 = 2; i_2 < i_0; i_2++) {
                A[i_2-1][i_1] = D[i_0][i_1-2][i_2-2] - E[i_0][i_1][i_2+1] - D[i_0][i_2-2][i_0] - F[i_0+1][i_1+2] - G[i_2][i_1][i_0-1] + A[i_2+1][i_0] * 1;
            }
        }
    }
    for (int i_3 = 2; i_3 < PB_L-1; i_3++) {
        B[i_3] = H[i_3] - I[i_3-2] - J[i_3] * B[i_3-1] + B[i_3+1] - B[i_3-2] * 2;
        for (int i_4 = 2; i_4 < i_3; i_4++) {
            for (int i_5 = 0; i_5 < min(-i_3+PB_L, PB_M-4); i_5++) {
                for (int i_6 = 1; i_6 < min(PB_M-4, i_3); i_6++) {
                    C[i_6+2][1][i_5][i_3] = K[i_4][i_3+1][i_5][i_6] * L[i_4-1][i_3][i_6-1][i_5] + E[i_5][i_4+1][i_3+1] * K[i_5][i_6][i_4][i_3] + M[i_5+i_3][i_6-1][i_4-2][i_3] + N[i_3][i_5+1][i_6][i_4][i_6] * C[i_6+4][1][i_4][i_5] * C[i_5+4][1][i_3-2][i_6] * 4;
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
int xb = xB;
int xc = xC;
int yc = yC;
int zc = zC;
int vc = vC;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
int yf = yF;
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
int vm = vM;
int xn = xN;
int yn = yN;
int zn = zN;
int vn = vN;
int wn = wN;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, xF,yF,xf,yf);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
POLYBENCH_1D_ARRAY_DECL(H, DATA_TYPE, xH,xh);
POLYBENCH_1D_ARRAY_DECL(I, DATA_TYPE, xI,xi);
POLYBENCH_1D_ARRAY_DECL(J, DATA_TYPE, xJ,xj);
POLYBENCH_4D_ARRAY_DECL(K, DATA_TYPE, xK,yK,zK,vK,xk,yk,zk,vk);
POLYBENCH_4D_ARRAY_DECL(L, DATA_TYPE, xL,yL,zL,vL,xl,yl,zl,vl);
POLYBENCH_4D_ARRAY_DECL(M, DATA_TYPE, xM,yM,zM,vM,xm,ym,zm,vm);
POLYBENCH_5D_ARRAY_DECL(N, DATA_TYPE, xN,yN,zN,vN,wN,xn,yn,zn,vn,wn);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L), xm,ym,zm,vm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,wn,POLYBENCH_ARRAY(N), INIT_SEED);
kernel_4314352223_01(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L), xm,ym,zm,vm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,wn,POLYBENCH_ARRAY(N));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,vl,POLYBENCH_ARRAY(L), xm,ym,zm,vm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,wn,POLYBENCH_ARRAY(N)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
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
POLYBENCH_FREE_ARRAY(M);
POLYBENCH_FREE_ARRAY(N);
return 0;
}
