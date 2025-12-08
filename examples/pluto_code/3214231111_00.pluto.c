#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214231111_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
arg_prob_dep_write_exist: 1
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
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
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
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
            for (i_2 = 0; i_2 < ze; i_2++) {
                sum_E += E[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214231111_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  lbp=0;
  ubp=floord(PB_L-2,16);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    if ((PB_P >= 0) && (t1 <= floord(2*PB_L+PB_P-4,64))) {
      for (t2=max(max(0,ceild(32*t1-PB_L-29,32)),ceild(2016*t1-63*PB_L-31*PB_P+126,32));t2<=min(floord(PB_L+PB_P-2,32),floord(-64*t1+3*PB_L+PB_P-6,32));t2++) {
        for (t3=max(max(max(0,ceild(32*t1-PB_L-29,32)),ceild(2016*t1-63*PB_L-31*PB_P+126,32)),ceild(96*t1+32*t2-4*PB_L-PB_P-22,32));t3<=min(min(min(min(min(floord(PB_L-1,32),floord(-32*t1+PB_L+PB_P-1,32)),floord(-32*t1+64*t2+PB_L+29,32)),floord(-32*t1-32*t2+2*PB_L+PB_P-3,32)),floord(-672*t1+704*t2+21*PB_L+10*PB_P-21,672)),floord(-512*t1+1024*t2+31*PB_L-31,992));t3++) {
          if ((PB_L >= 3) && (t2 <= min(floord(PB_M-2,32),floord(PB_P-2,32))) && (t2 >= ceild(PB_L-1,32))) {
            for (t4=max(32*t1,32*t3+1);t4<=min(min(min(min(2*PB_L-3,32*t1+31),32*t3+PB_L+29),-32*t2+PB_L+PB_P-2),-32*t2+32*t3+PB_P+30);t4++) {
              for (t5=max(max(32*t3,t4-PB_L+2),32*t2+t4-PB_P+1);t5<=min(min(PB_L-1,32*t3+31),t4-1);t5++) {
                lbv=32*t2;
                ubv=min(min(PB_M-2,32*t2+31),-t4+t5+PB_P-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][(t4-t5)+1][t6+(t4-t5)] = C[t6+1][(t4-t5)][1] - A[t5+1][(t4-t5)][t6+(t4-t5)-1] * 4;;
                }
              }
            }
          }
          if ((t2 <= floord(PB_L-2,32)) && (t2 >= ceild(PB_P-1,32))) {
            for (t4=32*t1;t4<=min(min(PB_L-2,32*t1+31),-32*t3+PB_L-1);t4++) {
              for (t5=max(1,32*t3);t5<=min(32*t3+31,-t4+PB_L-1);t5++) {
                lbv=32*t2;
                ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
              }
            }
          }
          if (t2 <= min(min(floord(PB_M-2,32),floord(PB_P-2,32)),t3-1)) {
            for (t4=32*t1;t4<=min(32*t1+31,-32*t3+PB_L-1);t4++) {
              for (t5=32*t3;t5<=min(32*t3+31,-t4+PB_L-1);t5++) {
                lbv=32*t2;
                ubv=32*t2+31;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
              }
            }
          }
          if ((t2 <= min(min(floord(PB_L-2,32),floord(PB_M-2,32)),floord(PB_P-2,32))) && (t2 >= t3)) {
            for (t4=32*t1;t4<=min(min(32*t3,32*t1+31),-32*t3+PB_L-1);t4++) {
              for (t5=max(1,32*t3);t5<=min(32*t3+31,-t4+PB_L-1);t5++) {
                lbv=32*t2;
                ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
              }
            }
          }
          if ((t2 <= min(floord(PB_L-2,32),floord(PB_P-2,32))) && (t2 >= ceild(PB_M-1,32))) {
            for (t4=32*t1;t4<=min(min(PB_L-2,32*t1+31),-32*t3+PB_L-1);t4++) {
              for (t5=max(1,32*t3);t5<=min(32*t3+31,-t4+PB_L-1);t5++) {
                lbv=32*t2;
                ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
              }
            }
          }
          if ((t2 <= min(min(floord(PB_L-2,32),floord(PB_M-2,32)),floord(PB_P-2,32))) && (t2 >= t3)) {
            for (t4=max(32*t1,32*t3+1);t4<=min(min(min(min(PB_L-2,PB_P-1),32*t1+31),-32*t3+PB_L-1),-32*t2+32*t3+PB_P+30);t4++) {
              if ((t2 <= floord(-t4+PB_P-1,32)) && (t3 == 0)) {
                lbv=32*t2;
                ubv=min(min(PB_M-2,32*t2+31),-t4+PB_P-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[0][t4+1][t6+t4] = C[t6+1][t4][1] - A[0 +1][t4][t6+t4-1] * 4;;
                }
              }
              for (t5=max(1,32*t3);t5<=min(32*t2+t4-PB_P,-t4+PB_L-1);t5++) {
                lbv=32*t2;
                ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
              }
              for (t5=max(max(1,32*t3),32*t2+t4-PB_P+1);t5<=min(min(min(PB_M-2,32*t3+31),t4-1),-t4+PB_L-1);t5++) {
                if (t2 == t3) {
                  lbv=32*t2;
                  ubv=t5-1;
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                  }
                }
                lbv=max(32*t2,t5);
                ubv=min(min(min(PB_L-2,PB_M-2),32*t2+31),-t4+t5+PB_P-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][(t4-t5)+1][t6+(t4-t5)] = C[t6+1][(t4-t5)][1] - A[t5+1][(t4-t5)][t6+(t4-t5)-1] * 4;;
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
                lbv=PB_L-1;
                ubv=min(min(PB_M-2,32*t2+31),-t4+t5+PB_P-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][(t4-t5)+1][t6+(t4-t5)] = C[t6+1][(t4-t5)][1] - A[t5+1][(t4-t5)][t6+(t4-t5)-1] * 4;;
                }
                lbv=PB_M-1;
                ubv=min(min(PB_L-2,32*t2+31),-t4+t5+PB_P-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
                lbv=-t4+t5+PB_P;
                ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
              }
              for (t5=max(-t4+PB_L,32*t2+t4-PB_P+1);t5<=min(min(PB_M-2,32*t3+31),t4-1);t5++) {
                lbv=max(32*t2,t5);
                ubv=min(min(PB_M-2,32*t2+31),-t4+t5+PB_P-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][(t4-t5)+1][t6+(t4-t5)] = C[t6+1][(t4-t5)][1] - A[t5+1][(t4-t5)][t6+(t4-t5)-1] * 4;;
                }
              }
              if (t2 == t3) {
                for (t5=PB_M-1;t5<=min(min(32*t2+31,t4-1),-t4+PB_L-1);t5++) {
                  lbv=32*t2;
                  ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                  }
                }
              }
              if (t1 == t3) {
                for (t5=t4;t5<=min(32*t1+31,-t4+PB_L-1);t5++) {
                  lbv=32*t2;
                  ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                  }
                }
              }
            }
          }
          if ((PB_L >= 3) && (PB_L <= PB_P) && (PB_M >= 3) && (t1 <= floord(PB_L-1,32)) && (t1 >= ceild(PB_L-32,32)) && (t2 <= min(min(floord(PB_L-2,32),floord(PB_M-2,32)),floord(-PB_L+PB_P+31,32))) && (t3 == 0)) {
            for (t5=max(1,32*t2+PB_L-PB_P);t5<=min(min(31,PB_L-2),PB_M-2);t5++) {
              lbv=max(32*t2,t5);
              ubv=min(min(PB_M-2,32*t2+31),t5-PB_L+PB_P);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5][(-t5+PB_L-1)+1][t6+(-t5+PB_L-1)] = C[t6+1][(-t5+PB_L-1)][1] - A[t5+1][(-t5+PB_L-1)][t6+(-t5+PB_L-1)-1] * 4;;
              }
            }
          }
          if ((t2 == t3) && (t2 <= min(floord(PB_M-2,32),floord(PB_P-2,32)))) {
            for (t4=max(PB_P,32*t1);t4<=min(min(min(PB_L-2,PB_P+30),32*t1+31),-32*t2+PB_L-1);t4++) {
              for (t5=max(1,32*t2);t5<=min(32*t2+31,-t4+PB_L-1);t5++) {
                lbv=32*t2;
                ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
              }
            }
          }
          if ((t2 <= min(min(floord(PB_L-2,32),floord(PB_M-2,32)),floord(PB_P-2,32))) && (t2 >= t3)) {
            for (t4=max(max(32*t1,-32*t3+PB_L),32*t3+1);t4<=min(min(min(min(min(2*PB_L-3,PB_P-1),32*t1+31),PB_L+PB_M-4),32*t3+PB_L+29),-32*t2+32*t3+PB_P+30);t4++) {
              for (t5=max(max(32*t3,t4-PB_L+2),32*t2+t4-PB_P+1);t5<=min(min(min(PB_L-1,PB_M-2),32*t3+31),t4-1);t5++) {
                lbv=max(32*t2,t5);
                ubv=min(min(PB_M-2,32*t2+31),-t4+t5+PB_P-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][(t4-t5)+1][t6+(t4-t5)] = C[t6+1][(t4-t5)][1] - A[t5+1][(t4-t5)][t6+(t4-t5)-1] * 4;;
                }
              }
            }
          }
          if ((t2 <= min(min(floord(PB_L-2,32),floord(PB_M-2,32)),floord(PB_P-2,32))) && (t2 >= t3)) {
            for (t4=max(32*t1,-32*t2+32*t3+PB_P+31);t4<=min(min(PB_L-2,32*t1+31),-32*t3+PB_L-1);t4++) {
              for (t5=max(1,32*t3);t5<=min(32*t3+31,-t4+PB_L-1);t5++) {
                lbv=32*t2;
                ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
                }
              }
            }
          }
        }
      }
    }
    if ((PB_P <= -1) && (t1 <= floord(PB_L-2,32))) {
      for (t2=0;t2<=floord(PB_L-2,32);t2++) {
        for (t3=0;t3<=floord(-32*t1+PB_L-1,32);t3++) {
          for (t4=32*t1;t4<=min(min(PB_L-2,32*t1+31),-32*t3+PB_L-1);t4++) {
            for (t5=max(1,32*t3);t5<=min(32*t3+31,-t4+PB_L-1);t5++) {
              lbv=32*t2;
              ubv=min(PB_L-2,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4+1][t6][t5-1] = C[t5-1][t6+1][t4] + D[t5][t4+1] * E[t6][t5+t4][t6+1] + E[t5][t4][t6] * 3;;
              }
            }
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
int zc = zC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3214231111_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
