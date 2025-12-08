#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214112121_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 1
id: 1
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
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
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
void kernel_3214112121_01(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 1) && (PB_P >= 1)) {
  if (PB_M >= 0) {
    lbp=0;
    ubp=floord(PB_P+PB_M+1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=max(0,ceild(32*t1-PB_P-1,32));t2<=min(min(min(min(min(min(floord(PB_P+PB_M+1,32),floord(32*t1+PB_P+30,32)),floord(-32*t1+PB_L+PB_P+2*PB_M,32)),floord(32*t1+PB_P+PB_M-1,32)),floord(64*t1+31*PB_L+2*PB_P-33,64)),floord(64*t1+33*PB_P+31*PB_M+29,1056)),floord(64*t1+31*PB_L+33*PB_P+31*PB_M-64,1056));t2++) {
        if ((PB_L >= -2*PB_Q+3) && (PB_Q >= max(0,ceild(-PB_M+2,2))) && (t1 <= min(min(floord(PB_P+2*PB_Q+PB_M-1,32),floord(32*t2+PB_P+2*PB_Q-1,32)),floord(-32*t2+PB_L+PB_P+4*PB_Q+2*PB_M-4,32))) && (t2 <= floord(PB_P+2*PB_Q+PB_M-1,32))) {
          for (t3=max(max(max(max(max(max(max(max(max(max(0,ceild(-32*t1+32*t2-PB_M-14,16)),ceild(32*t2-7*PB_L-PB_M+7,16)),ceild(32*t2-PB_L-7*PB_M+1,16)),ceild(32*t2-PB_L-PB_M-11,16)),ceild(-32*t1+256*t2-7*PB_P-8*PB_M-7,16)),ceild(224*t2-PB_L-6*PB_P-7*PB_M-5,16)),ceild(96*t1+128*t2-4*PB_L-3*PB_P-7*PB_M+1,16)),-2*t1+2*t2-2),-2*t1+2*t2-PB_L+1),-2*t1+34*t2-PB_P-PB_M-1);t3<=min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(floord(PB_L+2*PB_P+PB_Q-3,32),floord(64*t2+PB_L+PB_Q+57,32)),floord(-64*t1+PB_L+2*PB_P+4*PB_Q+2*PB_M-3,32)),floord(-64*t1+64*t2+PB_L+2*PB_P+4*PB_Q-3,32)),floord(-32*t1+32*t2+PB_L+PB_P+PB_Q+29,32)),floord(-32*t1+32*t2+16*PB_L+PB_P+PB_Q-16,32)),floord(-96*t1-32*t2+PB_L+3*PB_P+PB_Q+4*PB_M+1,32)),floord(-96*t1-32*t2+PB_L+3*PB_P+6*PB_Q+4*PB_M-4,32)),floord(3*PB_L+4*PB_P+2*PB_Q-9,64)),floord(128*t2+61*PB_L+2*PB_Q-63,64)),floord(2*PB_L+4*PB_P+2*PB_Q+PB_M-8,64)),floord(128*t2+2*PB_L+2*PB_Q+59*PB_M-4,64)),floord(-32*t1+2*PB_L+4*PB_P+2*PB_Q+PB_M-6,64)),floord(-96*t2+2*PB_L+7*PB_P+2*PB_Q+3*PB_M-9,64)),floord(-672*t1+672*t2+11*PB_L+21*PB_P+11*PB_Q-1,352)),floord(-672*t1+32*t2+11*PB_L+21*PB_P+11*PB_Q+20*PB_M-1,352)),floord(-1888*t1+1984*t2+31*PB_L+59*PB_P+31*PB_Q-3,992));t3++) {
            if ((PB_L >= 3) && (t1 == t2) && (t1 <= floord(PB_L-1,32)) && (t3 <= min(floord(PB_Q-1,32),floord(PB_L+2*PB_P-3,32)))) {
              for (t4=max(2,32*t1);t4<=min(min(min(floord(64*t1-32*t3+PB_L+61,2),PB_M),PB_P+1),32*t1+31);t4++) {
                for (t5=32*t1;t5<=(min(PB_L-1,t4-1))-7;t5+=8) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                  }
                }
                for (;t5<=min(PB_L-1,t4-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                  }
                }
                if ((t3 >= ceild(PB_L,32)) && (t4 <= PB_L-1)) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                  }
                }
                if ((t3 <= floord(PB_L-1,32)) && (t4 >= PB_L)) {
                  for (t6=max(2,32*t3);t6<=min(PB_L-1,32*t3+31);t6++) {
                    B[(t4-2)][(t6-2)] = C[(t4-2)+1][(t6-2)+2][0] + B[(t4-2)][(t6-2)+2] + 1;;
                  }
                }
                if ((t3 <= floord(PB_L-1,32)) && (t4 <= PB_L-1)) {
                  if (t3 == 0) {
                    for (t6=0;t6<=min(1,PB_Q-1);t6++) {
                      B[t4-2][t6] = 1;;
                    }
                  }
                  for (t6=max(2,32*t3);t6<=min(min(PB_L-1,PB_Q-1),32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                    B[(t4-2)][(t6-2)] = C[(t4-2)+1][(t6-2)+2][0] + B[(t4-2)][(t6-2)+2] + 1;;
                  }
                  for (t6=PB_L;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                  }
                  for (t6=max(2,PB_Q);t6<=min(PB_L-1,32*t3+31);t6++) {
                    B[(t4-2)][(t6-2)] = C[(t4-2)+1][(t6-2)+2][0] + B[(t4-2)][(t6-2)+2] + 1;;
                  }
                }
                for (t5=max(ceild(32*t3+2*t4-PB_L+1,2),t4+1);t5<=min(min(32*t1+31,16*t3+t4+14),t4+PB_P-1);t5++) {
                  for (t6=max(32*t3,-2*t4+2*t5+2);t6<=min(32*t3+31,-2*t4+2*t5+PB_L-1);t6++) {
                    B[(t4-2)][(2*t4-2*t5+t6-2)] = C[(t4-2)+1][(2*t4-2*t5+t6-2)+2][(-t4+t5)] + B[(t4-2)][(2*t4-2*t5+t6-2)+2] + 1;;
                  }
                }
              }
            }
            if ((PB_L <= 2) && (t2 == 0) && (t3 <= floord(PB_Q-1,32))) {
              for (t4=max(2,32*t1);t4<=min(PB_P+1,32*t1+31);t4++) {
                for (t5=0;t5<=PB_L-1-7;t5+=8) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                  }
                }
                for (;t5<=PB_L-1;t5++) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                  }
                }
              }
            }
            if ((PB_L >= 3) && (t2 <= floord(PB_L-1,32)) && (t3 <= min(floord(PB_Q-1,32),floord(PB_L+2*PB_P-3,32)))) {
              for (t4=max(32*t1,32*t2+32);t4<=min(PB_P+1,32*t1+31);t4++) {
                for (t5=32*t2;t5<=(min(PB_L-1,32*t2+31))-7;t5+=8) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                  }
                }
                for (;t5<=min(PB_L-1,32*t2+31);t5++) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                  }
                }
              }
            }
            if ((PB_L >= 3) && (t2 <= floord(PB_L-1,32)) && (t3 <= floord(PB_Q-1,32)) && (t3 >= ceild(PB_L+2*PB_P-2,32))) {
              for (t4=max(max(2,32*t1),32*t2);t4<=min(PB_P+1,32*t1+31);t4++) {
                for (t5=32*t2;t5<=(min(min(t4,PB_L-1),32*t2+31))-7;t5+=8) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                  }
                }
                for (;t5<=min(min(t4,PB_L-1),32*t2+31);t5++) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                  }
                }
              }
            }
            if ((PB_L >= 3) && (t1 == t2) && (t1 <= floord(PB_L-1,32)) && (t3 <= min(floord(PB_Q-1,32),floord(PB_L+2*PB_P-3,32)))) {
              for (t4=max(max(2,ceild(64*t1-32*t3+PB_L+62,2)),32*t1);t4<=min(min(PB_M,PB_P+1),32*t1+31);t4++) {
                for (t5=32*t1;t5<=(min(t4,PB_L-1))-7;t5+=8) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                  }
                }
                for (;t5<=min(t4,PB_L-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                  }
                }
              }
            }
            if ((PB_L >= 3) && (t2 >= ceild(PB_L,32)) && (t3 <= floord(PB_L+2*PB_P-3,32))) {
              for (t4=max(max(max(2,32*t1),32*t2-PB_P+1),32*t2-16*t3-14);t4<=min(min(min(floord(64*t2-32*t3+PB_L+61,2),PB_M),32*t1+31),32*t2+31);t4++) {
                for (t5=max(max(ceild(32*t3+2*t4-PB_L+1,2),32*t2),t4);t5<=min(min(32*t2+31,16*t3+t4+14),t4+PB_P-1);t5++) {
                  for (t6=max(32*t3,-2*t4+2*t5+2);t6<=min(32*t3+31,-2*t4+2*t5+PB_L-1);t6++) {
                    B[(t4-2)][(2*t4-2*t5+t6-2)] = C[(t4-2)+1][(2*t4-2*t5+t6-2)+2][(-t4+t5)] + B[(t4-2)][(2*t4-2*t5+t6-2)+2] + 1;;
                  }
                }
              }
            }
            if ((t2 <= floord(PB_L-1,32)) && (t3 <= min(floord(PB_Q-1,32),floord(PB_L+2*PB_P-3,32)))) {
              for (t4=max(max(max(2,32*t1),32*t2-PB_P+1),32*t2-16*t3-14);t4<=min(min(min(floord(64*t2-32*t3+PB_L+61,2),PB_M),32*t1+31),32*t2-1);t4++) {
                for (t5=max(ceild(32*t3+2*t4-PB_L+1,2),32*t2);t5<=min(min(32*t2+31,16*t3+t4+14),t4+PB_P-1);t5++) {
                  for (t6=max(32*t3,-2*t4+2*t5+2);t6<=min(32*t3+31,-2*t4+2*t5+PB_L-1);t6++) {
                    B[(t4-2)][(2*t4-2*t5+t6-2)] = C[(t4-2)+1][(2*t4-2*t5+t6-2)+2][(-t4+t5)] + B[(t4-2)][(2*t4-2*t5+t6-2)+2] + 1;;
                  }
                }
              }
            }
            if ((PB_L >= 3) && (t2 <= floord(PB_L-1,32)) && (t3 <= floord(PB_L+2*PB_P-3,32)) && (t3 >= ceild(PB_Q,32))) {
              for (t4=max(max(max(2,32*t1),32*t2-PB_P+1),32*t2-16*t3-14);t4<=min(min(min(floord(64*t2-32*t3+PB_L+61,2),PB_M),32*t1+31),32*t2+31);t4++) {
                for (t5=max(max(ceild(32*t3+2*t4-PB_L+1,2),32*t2),t4);t5<=min(min(32*t2+31,16*t3+t4+14),t4+PB_P-1);t5++) {
                  for (t6=max(32*t3,-2*t4+2*t5+2);t6<=min(32*t3+31,-2*t4+2*t5+PB_L-1);t6++) {
                    B[(t4-2)][(2*t4-2*t5+t6-2)] = C[(t4-2)+1][(2*t4-2*t5+t6-2)+2][(-t4+t5)] + B[(t4-2)][(2*t4-2*t5+t6-2)+2] + 1;;
                  }
                }
              }
            }
            if ((PB_L >= 3) && (t1 == t2) && (t1 <= floord(PB_L-1,32)) && (t3 <= min(floord(PB_Q-1,32),floord(PB_L+2*PB_P-3,32)))) {
              for (t4=max(32*t1,PB_P+2);t4<=min(min(floord(64*t1-32*t3+PB_L+61,2),PB_M),32*t1+31);t4++) {
                for (t5=max(ceild(32*t3+2*t4-PB_L+1,2),t4);t5<=min(min(32*t1+31,16*t3+t4+14),t4+PB_P-1);t5++) {
                  for (t6=max(32*t3,-2*t4+2*t5+2);t6<=min(32*t3+31,-2*t4+2*t5+PB_L-1);t6++) {
                    B[(t4-2)][(2*t4-2*t5+t6-2)] = C[(t4-2)+1][(2*t4-2*t5+t6-2)+2][(-t4+t5)] + B[(t4-2)][(2*t4-2*t5+t6-2)+2] + 1;;
                  }
                }
              }
            }
            if ((PB_L >= 3) && (t1 == t2) && (t1 <= floord(PB_L-1,32)) && (t3 <= min(floord(PB_Q-1,32),floord(PB_L+2*PB_P-3,32)))) {
              for (t4=max(max(2,32*t1),PB_M+1);t4<=min(PB_P+1,32*t1+31);t4++) {
                for (t5=32*t1;t5<=(min(t4,PB_L-1))-7;t5+=8) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                    B[t4-2][t6] = 1;;
                  }
                }
                for (;t5<=min(t4,PB_L-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                    B[t4-2][t6] = 1;;
                  }
                }
              }
            }
          }
        }
        if ((PB_L >= 3) && (PB_M >= 2) && (PB_Q <= -1) && (t1 <= min(floord(PB_M,32),t2)) && (t2 <= floord(PB_P+PB_M-1,32))) {
          for (t3=max(max(0,ceild(32*t2-PB_M-14,16)),-2*t1+2*t2-2);t3<=min(min(floord(PB_L+2*PB_P-3,32),floord(64*t2+PB_L+57,32)),floord(-64*t1+64*t2+PB_L+61,32));t3++) {
            for (t4=max(max(max(2,32*t1),32*t2-PB_P+1),32*t2-16*t3-14);t4<=min(min(floord(64*t2-32*t3+PB_L+61,2),PB_M),32*t1+31);t4++) {
              for (t5=max(max(ceild(32*t3+2*t4-PB_L+1,2),32*t2),t4);t5<=min(min(32*t2+31,16*t3+t4+14),t4+PB_P-1);t5++) {
                for (t6=max(32*t3,-2*t4+2*t5+2);t6<=min(32*t3+31,-2*t4+2*t5+PB_L-1);t6++) {
                  B[(t4-2)][(2*t4-2*t5+t6-2)] = C[(t4-2)+1][(2*t4-2*t5+t6-2)+2][(-t4+t5)] + B[(t4-2)][(2*t4-2*t5+t6-2)+2] + 1;;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((PB_M <= -1) && (PB_Q >= 1)) {
    lbp=0;
    ubp=floord(PB_P+1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=min(floord(PB_L-1,32),t1);t2++) {
        for (t3=0;t3<=floord(PB_Q-1,32);t3++) {
          for (t4=max(2,32*t1);t4<=min(PB_P+1,32*t1+31);t4++) {
            for (t5=32*t2;t5<=(min(min(t4,PB_L-1),32*t2+31))-7;t5+=8) {
              for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                B[t4-2][t6] = 1;;
                B[t4-2][t6] = 1;;
                B[t4-2][t6] = 1;;
                B[t4-2][t6] = 1;;
                B[t4-2][t6] = 1;;
                B[t4-2][t6] = 1;;
                B[t4-2][t6] = 1;;
                B[t4-2][t6] = 1;;
              }
            }
            for (;t5<=min(min(t4,PB_L-1),32*t2+31);t5++) {
              for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                B[t4-2][t6] = 1;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3214112121_01(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
