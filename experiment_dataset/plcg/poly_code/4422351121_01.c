/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 1
id: 1
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4422351121_01.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi),int xj,int yj,int zj,int vj,int wj,DATA_TYPE POLYBENCH_5D(J,xJ,yJ,zJ,vJ,wJ,xj,yj,zj,vj,wj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl),int xm,int ym,int zm,DATA_TYPE POLYBENCH_3D(M,xM,yM,zM,xm,ym,zm),int xn,int yn,int zn,int vn,DATA_TYPE POLYBENCH_4D(N,xN,yN,zN,vN,xn,yn,zn,vn),int xo,int yo,DATA_TYPE POLYBENCH_2D(O,xO,yO,xo,yo),int xp,int yp,DATA_TYPE POLYBENCH_2D(P,xP,yP,xp,yp),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3, i_4;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            A[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
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
        for (i_2 = 0; i_2 < zi; i_2++) {
            for (i_3 = 0; i_3 < vi; i_3++) {
                I[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xj; i_0++) {
    for (i_1 = 0; i_1 < yj; i_1++) {
        for (i_2 = 0; i_2 < zj; i_2++) {
            for (i_3 = 0; i_3 < vj; i_3++) {
                for (i_4 = 0; i_4 < wj; i_4++) {
                    J[i_0][i_1][i_2][i_3][i_4] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
                }
            }
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
            L[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
for (i_0 = 0; i_0 < xp; i_0++) {
    for (i_1 = 0; i_1 < yp; i_1++) {
        P[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi),int xj,int yj,int zj,int vj,int wj,DATA_TYPE POLYBENCH_5D(J,xJ,yJ,zJ,vJ,wJ,xj,yj,zj,vj,wj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl),int xm,int ym,int zm,DATA_TYPE POLYBENCH_3D(M,xM,yM,zM,xm,ym,zm),int xn,int yn,int zn,int vn,DATA_TYPE POLYBENCH_4D(N,xN,yN,zN,vN,xn,yn,zn,vn),int xo,int yo,DATA_TYPE POLYBENCH_2D(O,xO,yO,xo,yo),int xp,int yp,DATA_TYPE POLYBENCH_2D(P,xP,yP,xp,yp))
{
int i_0, i_1, i_2, i_3, i_4;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
        }
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
            for (i_2 = 0; i_2 < zj; i_2++) {
                for (i_3 = 0; i_3 < vj; i_3++) {
                    for (i_4 = 0; i_4 < wj; i_4++) {
                        fprintf(POLYBENCH_DUMP_TARGET, "\n");
                        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i_0][i_1][i_2][i_3][i_4]);
                    }
                }
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
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, L[i_0][i_1][i_2]);
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
    POLYBENCH_DUMP_BEGIN("P");
    for (i_0 = 0; i_0 < xp; i_0++) {
        for (i_1 = 0; i_1 < yp; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, P[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("P");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                sum_A += A[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
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
            for (i_2 = 0; i_2 < zj; i_2++) {
                for (i_3 = 0; i_3 < vj; i_3++) {
                    for (i_4 = 0; i_4 < wj; i_4++) {
                        sum_J += J[i_0][i_1][i_2][i_3][i_4];
                    }
                }
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
                sum_L += L[i_0][i_1][i_2];
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
    POLYBENCH_DUMP_BEGIN("P");
    DATA_TYPE sum_P = 0;
    for (i_0 = 0; i_0 < xp; i_0++) {
        for (i_1 = 0; i_1 < yp; i_1++) {
            sum_P += P[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_P);
    POLYBENCH_DUMP_END("P");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4422351121_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,int zi,int vi,DATA_TYPE POLYBENCH_4D(I,xI,yI,zI,vI,xi,yi,zi,vi),int xj,int yj,int zj,int vj,int wj,DATA_TYPE POLYBENCH_5D(J,xJ,yJ,zJ,vJ,wJ,xj,yj,zj,vj,wj),int xk,int yk,int zk,int vk,DATA_TYPE POLYBENCH_4D(K,xK,yK,zK,vK,xk,yk,zk,vk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl),int xm,int ym,int zm,DATA_TYPE POLYBENCH_3D(M,xM,yM,zM,xm,ym,zm),int xn,int yn,int zn,int vn,DATA_TYPE POLYBENCH_4D(N,xN,yN,zN,vN,xn,yn,zn,vn),int xo,int yo,DATA_TYPE POLYBENCH_2D(O,xO,yO,xo,yo),int xp,int yp,DATA_TYPE POLYBENCH_2D(P,xP,yP,xp,yp)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_N-1; i_0++) {
        for (int i_1 = 0; i_1 < min(-i_0+PB_M, PB_N); i_1++) {
            for (int i_2 = 0; i_2 < PB_L-1; i_2++) {
                A[i_2+1][i_0+1][i_1] = E[i_2][i_0+1] * 1;
            }
            B[i_1+i_0][i_0] = F[i_1][i_0][0] - G[i_1] + H[i_1+1] * E[i_1][i_0-1] * B[i_1+i_0-1][i_0-1] + 2;
        }
        for (int i_3 = 0; i_3 < -i_0+PB_P; i_3++) {
            for (int i_4 = 1; i_4 < min(-i_0+PB_Q+1, PB_N-1); i_4++) {
                for (int i_5 = 0; i_5 < min(min(PB_N, -i_3+PB_L), -i_4+PB_Q); i_5++) {
                    C[i_4][i_0][i_5][i_3] = I[i_0-1][i_5][i_3][i_4] + J[i_4-1][i_3+1][i_5][i_0][i_5+i_4] * K[i_4+1][i_3][i_0-1][i_3+1] - I[i_4+1][i_5][i_3+i_0][1] * L[i_5+i_3][i_4+i_0-1][0] * M[i_0][i_5][i_3+1] + N[i_0+1][i_5][i_3][0] - C[i_0+1][i_5][i_4][i_3] * 2;
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < PB_L-1; i_6++) {
        for (int i_7 = 1; i_7 < min(-i_6+PB_M, PB_P); i_7++) {
            D[i_7-1][i_6] = O[i_6+1][i_7-1] - P[i_6][i_7] * O[i_6-1][i_7] + E[i_7+i_6][i_6] - H[i_7] * H[i_7+i_6] + E[i_7][i_6-1] - P[i_7][i_6-1] + D[i_7-1][i_6-1] - 2;
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
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int zc = zC;
int vc = vC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
int xh = xH;
int xi = xI;
int yi = yI;
int zi = zI;
int vi = vI;
int xj = xJ;
int yj = yJ;
int zj = zJ;
int vj = vJ;
int wj = wJ;
int xk = xK;
int yk = yK;
int zk = zK;
int vk = vK;
int xl = xL;
int yl = yL;
int zl = zL;
int xm = xM;
int ym = yM;
int zm = zM;
int xn = xN;
int yn = yN;
int zn = zN;
int vn = vN;
int xo = xO;
int yo = yO;
int xp = xP;
int yp = yP;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
POLYBENCH_1D_ARRAY_DECL(H, DATA_TYPE, xH,xh);
POLYBENCH_4D_ARRAY_DECL(I, DATA_TYPE, xI,yI,zI,vI,xi,yi,zi,vi);
POLYBENCH_5D_ARRAY_DECL(J, DATA_TYPE, xJ,yJ,zJ,vJ,wJ,xj,yj,zj,vj,wj);
POLYBENCH_4D_ARRAY_DECL(K, DATA_TYPE, xK,yK,zK,vK,xk,yk,zk,vk);
POLYBENCH_3D_ARRAY_DECL(L, DATA_TYPE, xL,yL,zL,xl,yl,zl);
POLYBENCH_3D_ARRAY_DECL(M, DATA_TYPE, xM,yM,zM,xm,ym,zm);
POLYBENCH_4D_ARRAY_DECL(N, DATA_TYPE, xN,yN,zN,vN,xn,yn,zn,vn);
POLYBENCH_2D_ARRAY_DECL(O, DATA_TYPE, xO,yO,xo,yo);
POLYBENCH_2D_ARRAY_DECL(P, DATA_TYPE, xP,yP,xp,yp);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,wj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L), xm,ym,zm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,POLYBENCH_ARRAY(N), xo,yo,POLYBENCH_ARRAY(O), xp,yp,POLYBENCH_ARRAY(P), INIT_SEED);
kernel_4422351121_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,wj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L), xm,ym,zm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,POLYBENCH_ARRAY(N), xo,yo,POLYBENCH_ARRAY(O), xp,yp,POLYBENCH_ARRAY(P));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,zi,vi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,wj,POLYBENCH_ARRAY(J), xk,yk,zk,vk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L), xm,ym,zm,POLYBENCH_ARRAY(M), xn,yn,zn,vn,POLYBENCH_ARRAY(N), xo,yo,POLYBENCH_ARRAY(O), xp,yp,POLYBENCH_ARRAY(P)));
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
POLYBENCH_FREE_ARRAY(O);
POLYBENCH_FREE_ARRAY(P);
return 0;
}
