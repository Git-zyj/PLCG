#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214212121_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
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
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("C");
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
                sum_C += C[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214212121_00(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_P >= max(0,ceild(-4*PB_L+12,3)))) {
  lbp=0;
  ubp=min(floord(PB_P+3*PB_L-1,32),floord(3*PB_P+6*PB_L-6,64));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(min(min(min(floord(PB_P+PB_L-1,32),floord(32*t1+PB_P,64)),floord(-32*t1+3*PB_P+5*PB_L-5,64)),floord(96*t1+3*PB_P+2*PB_L-6,192)),t1);t2++) {
      if ((PB_L >= 3) && (PB_Q <= -1) && (t1 <= floord(3*PB_L-3,32)) && (t2 <= floord(PB_M-1,32))) {
        for (t3=max(ceild(32*t1+64*t2-PB_L-61,64),2*t2);t3<=min(min(min(min(min(floord(t1+2*t2+2,2),floord(PB_L-1,16)),floord(PB_M+PB_L-2,32)),floord(16*t1+PB_M+13,32)),floord(32*t2+PB_L+30,32)),t1);t3++) {
          for (t4=max(max(32*t2,-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(min(min(min(floord(-32*t1+64*t3+PB_L+61,2),PB_L-1),PB_M-1),16*t1+14),32*t2+31),16*t3+15);t4++) {
            for (t5=max(max(ceild(32*t1+2*t4-PB_L+1,2),32*t3),2*t4);t5<=min(min(32*t3+31,16*t1+t4+14),t4+PB_L-1);t5++) {
              lbv=max(32*t1,-2*t4+2*t5+2);
              ubv=min(32*t1+31,-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
              }
            }
          }
        }
      }
      if ((PB_Q >= max(0,ceild(-2*PB_L+6,3))) && (t1 <= floord(PB_P+PB_Q+3*PB_L-3,32))) {
        for (t3=max(max(max(max(max(0,ceild(32*t2-PB_P,16)),ceild(512*t1-16*PB_P-47*PB_L+16,32)),ceild(544*t1+32*t2-18*PB_P-50*PB_L+19,32)),ceild(32*t1-PB_P-PB_L-61,64)),ceild(32*t1+64*t2-3*PB_P-PB_L-61,64));t3<=min(min(min(min(min(min(floord(32*t1+PB_Q,32),floord(PB_Q+2*PB_L-2,32)),floord(64*t1-64*t2+PB_Q,32)),floord(16*t1+32*t2+PB_Q+32,32)),floord(32*t2+PB_Q+PB_L+30,32)),floord(-512*t1+32*t2+16*PB_P+PB_Q+49*PB_L-18,32)),floord(192*t1-192*t2+3*PB_Q+2*PB_L-6,96));t3++) {
          if ((t1 <= floord(PB_P-1,32)) && (t1 >= ceild(3*PB_L-2,32)) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(2,32*t2);t4<=min(min(PB_P-2,32*t1+30),32*t2+31);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
            }
          }
          if ((t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(2,32*t2);t4<=min(min(min(PB_P-2,32*t1+30),32*t2+31),-16*t1+32*t3-15);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
            }
          }
          if ((t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(max(2,32*t2),-16*t1+32*t3-14);t4<=min(min(min(PB_P-2,32*t1+30),32*t2+31),32*t3-PB_L);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
            }
          }
          if ((t1 <= floord(3*PB_L-3,32)) && (t1 >= ceild(PB_P,32))) {
            for (t4=max(max(32*t2,-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(min(min(min(floord(-32*t1+64*t3+PB_L+61,2),PB_L-1),PB_M-1),16*t1+14),32*t2+31),16*t3+15);t4++) {
              for (t5=max(max(ceild(32*t1+2*t4-PB_L+1,2),32*t3),2*t4);t5<=min(min(32*t3+31,16*t1+t4+14),t4+PB_L-1);t5++) {
                lbv=max(32*t1,-2*t4+2*t5+2);
                ubv=min(32*t1+31,-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
                }
              }
            }
          }
          if ((PB_L >= 3) && (t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 >= ceild(PB_Q-1,32))) {
            for (t4=max(max(32*t2,-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(min(min(min(floord(-32*t1+64*t3+PB_L+61,2),PB_L-1),PB_M-1),16*t1+14),32*t2+31),16*t3+15);t4++) {
              for (t5=max(max(ceild(32*t1+2*t4-PB_L+1,2),32*t3),2*t4);t5<=min(min(32*t3+31,16*t1+t4+14),t4+PB_L-1);t5++) {
                lbv=max(32*t1,-2*t4+2*t5+2);
                ubv=min(32*t1+31,-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
                }
              }
            }
          }
          if ((PB_L >= 3) && (t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t2 == 0) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(max(0,-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(1,floord(-32*t1+64*t3+PB_L+61,2)),PB_M-1);t4++) {
              for (t5=max(max(ceild(32*t1+2*t4-PB_L+1,2),32*t3),2*t4);t5<=min(min(32*t3+31,16*t1+t4+14),t4+PB_L-1);t5++) {
                lbv=max(32*t1,-2*t4+2*t5+2);
                ubv=min(32*t1+31,-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
                }
              }
            }
          }
          if ((t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(max(max(2,32*t2),-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(min(min(min(min(floord(-32*t1+64*t3+PB_L+61,2),PB_L-1),PB_M-1),PB_P-2),16*t1+14),32*t2+31),16*t3+15);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,2*t4-1);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
              for (t5=max(32*t3,2*t4);t5<=min(floord(32*t1+2*t4-PB_L,2),PB_Q-2);t5++) {
                lbv=32*t1;
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
              for (t5=max(max(ceild(32*t1+2*t4-PB_L+1,2),32*t3),2*t4);t5<=min(min(min(PB_Q-2,32*t3+31),16*t1+t4+14),t4+PB_L-1);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,-2*t4+2*t5+1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
                lbv=max(32*t1,-2*t4+2*t5+2);
                ubv=min(min(PB_P-1,32*t1+31),-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                  B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
                }
                lbv=-2*t4+2*t5+PB_L;
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
                lbv=max(PB_P,-2*t4+2*t5+2);
                ubv=min(32*t1+31,-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
                }
              }
              for (t5=t4+PB_L;t5<=min(min(PB_Q-2,32*t3+31),16*t1+t4+14);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
              for (t5=16*t1+t4+15;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
              for (t5=max(max(ceild(32*t1+2*t4-PB_L+1,2),2*t4),PB_Q-1);t5<=min(min(32*t3+31,16*t1+t4+14),t4+PB_L-1);t5++) {
                lbv=max(32*t1,-2*t4+2*t5+2);
                ubv=min(32*t1+31,-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
                }
              }
            }
          }
          if ((t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(max(2,ceild(-32*t1+64*t3+PB_L+62,2)),32*t2);t4<=min(min(PB_M-1,32*t2+31),16*t3+15);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=32*t1;
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
            }
          }
          if ((PB_P >= 1) && (PB_Q >= 2) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,PB_P-1);t4<=min(min(14,PB_L-1),PB_M-1);t4++) {
              for (t5=2*t4;t5<=min(t4+14,t4+PB_L-1);t5++) {
                lbv=-2*t4+2*t5+2;
                ubv=min(31,-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
                }
              }
            }
          }
          if ((t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(max(max(max(2,PB_M),32*t2),-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(min(min(PB_L-1,PB_P-2),16*t1+14),32*t2+31),16*t3+15);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
            }
          }
          if ((t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(max(max(2,PB_L),32*t2),32*t3-PB_L+1);t4<=min(min(min(PB_P-2,16*t1+14),32*t2+31),16*t3+15);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
            }
          }
          if ((t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(max(max(32*t2,16*t1+15),-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(min(PB_P-2,32*t1+30),32*t2+31),16*t3+15);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
            }
          }
          if ((t1 <= min(floord(3*PB_L-3,32),floord(PB_P-1,32))) && (t3 <= floord(PB_Q-2,32))) {
            for (t4=max(max(max(32*t2,16*t3+16),-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(PB_P-2,32*t1+30),32*t2+31);t4++) {
              for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
                lbv=max(32*t1,t4+1);
                ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][t4-2][t6][t5+1] = 1;;
                }
              }
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_P >= 4) && (PB_Q >= 2)) {
  lbp=0;
  ubp=floord(PB_P-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(floord(PB_P-2,32),t1);t2++) {
      for (t3=0;t3<=floord(PB_Q-2,32);t3++) {
        for (t4=max(2,32*t2);t4<=min(min(PB_P-2,32*t1+30),32*t2+31);t4++) {
          for (t5=32*t3;t5<=min(PB_Q-2,32*t3+31);t5++) {
            lbv=max(32*t1,t4+1);
            ubv=min(PB_P-1,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t4][t4-2][t6][t5+1] = 1;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L >= 3) && (PB_M >= 1) && (PB_P <= -1)) {
  lbp=0;
  ubp=floord(3*PB_L-3,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(min(floord(t1,2),floord(PB_L-1,32)),floord(PB_M-1,32));t2++) {
      for (t3=max(ceild(32*t1+64*t2-PB_L-61,64),2*t2);t3<=min(min(min(min(min(floord(t1+2*t2+2,2),floord(PB_L-1,16)),floord(PB_M+PB_L-2,32)),floord(16*t1+PB_M+13,32)),floord(32*t2+PB_L+30,32)),t1);t3++) {
        for (t4=max(max(32*t2,-16*t1+32*t3-14),32*t3-PB_L+1);t4<=min(min(min(min(min(floord(-32*t1+64*t3+PB_L+61,2),PB_L-1),PB_M-1),16*t1+14),32*t2+31),16*t3+15);t4++) {
          for (t5=max(max(ceild(32*t1+2*t4-PB_L+1,2),32*t3),2*t4);t5<=min(min(32*t3+31,16*t1+t4+14),t4+PB_L-1);t5++) {
            lbv=max(32*t1,-2*t4+2*t5+2);
            ubv=min(32*t1+31,-2*t4+2*t5+PB_L-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[(-t4+t5)][(2*t4-2*t5+t6)] = C[(-t4+t5)][t4][(-t4+t5)] + B[(-t4+t5)+1][(2*t4-2*t5+t6)-2] + 6;;
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
int va = vA;
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3214212121_00(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
