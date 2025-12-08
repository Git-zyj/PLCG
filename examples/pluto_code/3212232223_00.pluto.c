#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212232223_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            A[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
{
int i_0, i_1, i_2;
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
            for (i_2 = 0; i_2 < zb; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
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
        for (i_1 = 0; i_1 < yc; i_1++) {
            sum_C += C[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        sum_D += D[i_0];
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212232223_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_P >= max(0,ceild(-PB_L+6,3)))) {
  lbp=0;
  ubp=min(floord(PB_P+PB_L-1,32),floord(3*PB_P+2*PB_L-4,64));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(floord(PB_P+PB_L-1,32),floord(2*PB_P+PB_L-3,32));t2++) {
      if ((t1 <= floord(PB_P-1,32)) && (t1 >= ceild(PB_L-1,32))) {
        for (t3=max(1,32*t2);t3<=min(PB_P-1,32*t2+31);t3++) {
          lbv=max(1,32*t1);
          ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            A[t3][t5-1][0] = C[t3][t5] * D[t5] + E[t3][t5] * A[t3-1][t5-1][0] + 6;;
          }
        }
      }
      if ((t1 <= min(floord(PB_L-2,32),floord(PB_P-1,32))) && (t2 == 0)) {
        for (t3=1;t3<=min(2,PB_P-1);t3++) {
          lbv=max(1,32*t1);
          ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            A[t3][t5-1][0] = C[t3][t5] * D[t5] + E[t3][t5] * A[t3-1][t5-1][0] + 6;;
          }
        }
      }
      if ((t1 <= floord(PB_L-2,32)) && (t1 >= ceild(PB_P,32))) {
        for (t3=max(3,32*t2);t3<=min(PB_L-3,32*t2+31);t3++) {
          for (t4=0;t4<=PB_L-1-7;t4+=8) {
            lbv=32*t1;
            ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t5][t3+1][t3-2] = F[t3-2][t4][t5+1] * C[t4][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+1)][t5+1] * C[(t4+1)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+2)][t5+1] * C[(t4+2)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+3)][t5+1] * C[(t4+3)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+4)][t5+1] * C[(t4+4)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+5)][t5+1] * C[(t4+5)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+6)][t5+1] * C[(t4+6)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+7)][t5+1] * C[(t4+7)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            }
          }
          for (;t4<=PB_L-1;t4++) {
            lbv=32*t1;
            ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t5][t3+1][t3-2] = F[t3-2][t4][t5+1] * C[t4][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            }
          }
        }
      }
      if (t1 <= min(floord(PB_L-2,32),floord(PB_P-1,32))) {
        for (t3=max(3,32*t2);t3<=min(min(PB_L-3,PB_P-1),32*t2+31);t3++) {
          if (t1 == 0) {
            B[0][t3+1][t3-2] = F[t3-2][0][0 +1] * C[0][t3] - B[0][t3+2][t3-1] * B[0][t3][t3-3] + 4;;
          }
          lbv=max(1,32*t1);
          ubv=min(min(PB_L-2,PB_P-1),32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            A[t3][t5-1][0] = C[t3][t5] * D[t5] + E[t3][t5] * A[t3-1][t5-1][0] + 6;;
            B[t5][t3+1][t3-2] = F[t3-2][0][t5+1] * C[0][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
          }
          lbv=PB_L-1;
          ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            A[t3][t5-1][0] = C[t3][t5] * D[t5] + E[t3][t5] * A[t3-1][t5-1][0] + 6;;
          }
          lbv=PB_P;
          ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[t5][t3+1][t3-2] = F[t3-2][0][t5+1] * C[0][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
          }
          for (t4=1;t4<=PB_L-1-7;t4+=8) {
            lbv=32*t1;
            ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t5][t3+1][t3-2] = F[t3-2][t4][t5+1] * C[t4][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+1)][t5+1] * C[(t4+1)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+2)][t5+1] * C[(t4+2)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+3)][t5+1] * C[(t4+3)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+4)][t5+1] * C[(t4+4)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+5)][t5+1] * C[(t4+5)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+6)][t5+1] * C[(t4+6)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+7)][t5+1] * C[(t4+7)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            }
          }
          for (;t4<=PB_L-1;t4++) {
            lbv=32*t1;
            ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t5][t3+1][t3-2] = F[t3-2][t4][t5+1] * C[t4][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            }
          }
        }
      }
      if (t1 <= floord(PB_L-2,32)) {
        for (t3=max(max(3,32*t2),PB_L-2);t3<=min(PB_P-1,32*t2+31);t3++) {
          lbv=max(1,32*t1);
          ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            A[t3][t5-1][0] = C[t3][t5] * D[t5] + E[t3][t5] * A[t3-1][t5-1][0] + 6;;
          }
        }
      }
      if (t1 <= floord(PB_P-1,32)) {
        for (t3=max(max(3,PB_P),32*t2);t3<=min(PB_L-3,32*t2+31);t3++) {
          for (t4=0;t4<=PB_L-1-7;t4+=8) {
            lbv=32*t1;
            ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t5][t3+1][t3-2] = F[t3-2][t4][t5+1] * C[t4][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+1)][t5+1] * C[(t4+1)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+2)][t5+1] * C[(t4+2)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+3)][t5+1] * C[(t4+3)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+4)][t5+1] * C[(t4+4)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+5)][t5+1] * C[(t4+5)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+6)][t5+1] * C[(t4+6)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
              B[t5][t3+1][t3-2] = F[t3-2][(t4+7)][t5+1] * C[(t4+7)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            }
          }
          for (;t4<=PB_L-1;t4++) {
            lbv=32*t1;
            ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t5][t3+1][t3-2] = F[t3-2][t4][t5+1] * C[t4][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_P >= 2)) {
  lbp=0;
  ubp=floord(PB_P-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=floord(PB_P-1,32);t2++) {
      for (t3=max(1,32*t2);t3<=min(PB_P-1,32*t2+31);t3++) {
        lbv=max(1,32*t1);
        ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          A[t3][t5-1][0] = C[t3][t5] * D[t5] + E[t3][t5] * A[t3-1][t5-1][0] + 6;;
        }
      }
    }
  }
}
if ((PB_L >= 6) && (PB_P <= -1)) {
  lbp=0;
  ubp=floord(PB_L-2,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=floord(PB_L-3,32);t2++) {
      for (t3=max(3,32*t2);t3<=min(PB_L-3,32*t2+31);t3++) {
        for (t4=0;t4<=PB_L-1-7;t4+=8) {
          lbv=32*t1;
          ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[t5][t3+1][t3-2] = F[t3-2][t4][t5+1] * C[t4][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            B[t5][t3+1][t3-2] = F[t3-2][(t4+1)][t5+1] * C[(t4+1)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            B[t5][t3+1][t3-2] = F[t3-2][(t4+2)][t5+1] * C[(t4+2)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            B[t5][t3+1][t3-2] = F[t3-2][(t4+3)][t5+1] * C[(t4+3)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            B[t5][t3+1][t3-2] = F[t3-2][(t4+4)][t5+1] * C[(t4+4)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            B[t5][t3+1][t3-2] = F[t3-2][(t4+5)][t5+1] * C[(t4+5)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            B[t5][t3+1][t3-2] = F[t3-2][(t4+6)][t5+1] * C[(t4+6)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
            B[t5][t3+1][t3-2] = F[t3-2][(t4+7)][t5+1] * C[(t4+7)][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
          }
        }
        for (;t4<=PB_L-1;t4++) {
          lbv=32*t1;
          ubv=min(PB_L-2,32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[t5][t3+1][t3-2] = F[t3-2][t4][t5+1] * C[t4][t3] - B[t5][t3+2][t3-1] * B[t5][t3][t3-3] + 4;;
          }
        }
      }
    }
  }
}
/* End of CLooG code */
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
int zb = zB;
int xc = xC;
int yc = yC;
int xd = xD;
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_3212232223_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
