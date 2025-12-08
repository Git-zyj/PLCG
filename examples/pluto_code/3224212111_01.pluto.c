#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224212111_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
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
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224212111_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= max(0,-2*PB_Q+4)) && (PB_Q >= 0)) {
  for (t1=0;t1<=min(floord(2*PB_L+3*PB_Q-3,32),floord(4*PB_L+9*PB_Q-12,64));t1++) {
    lbp=max(max(ceild(t1,2),ceild(64*t1-PB_L,96)),ceild(128*t1-2*PB_L-3*PB_Q+6,192));
    ubp=min(min(min(floord(PB_L+2*PB_Q-2,32),floord(2*PB_L+5*PB_Q-6,64)),floord(32*t1+PB_L+PB_Q+30,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_N >= 0) && (t1 <= min(floord(32*t2+PB_L+PB_N-3,32),floord(384*t2+4*PB_L+3*PB_N-12,256))) && (t1 >= max(ceild(64*t2-PB_L-PB_N-28,32),ceild(1184*t2-34*PB_L-65*PB_N+102,96))) && (t2 <= min(min(floord(PB_L+2*PB_N-3,32),floord(2*PB_L+PB_N+3*PB_Q-6,64)),floord(7*PB_L+8*PB_N-24,128)))) {
        for (t3=max(max(max(max(0,ceild(32*t2-PB_L-PB_N+3,16)),ceild(32*t2-PB_L,32)),ceild(64*t2-2*PB_L-3*PB_Q+6,64)),ceild(128*t2-4*PB_L-3*PB_N+12,128));t3<=min(min(min(min(min(min(min(min(min(min(floord(PB_L+2*PB_N-1,32),floord(PB_L+PB_N+PB_Q-1,32)),floord(-32*t1+64*t2+PB_L+PB_N+12,32)),floord(32*t1-32*t2+PB_L+PB_N+28,32)),floord(-96*t2+4*PB_L+PB_N+7*PB_Q-10,32)),floord(-64*t1+96*t2+2*PB_L+PB_N+PB_Q-4,32)),floord(7*PB_L+4*PB_N+4*PB_Q-16,128)),floord(-96*t1+192*t2+16*PB_L+16*PB_N+13*PB_Q-16,512)),floord(-160*t1+320*t2+18*PB_L+31*PB_N-18,576)),floord(96*t1-96*t2+32*PB_L+32*PB_N+29*PB_Q-32,1024)),floord(160*t1-160*t2+34*PB_L+63*PB_N-34,1088));t3++) {
          if ((t2 <= floord(PB_L-3,32)) && (t2 >= t3+1)) {
            for (t4=max(1,32*t1-32*t2);t4<=min(PB_L-3,32*t1-32*t2+31);t4++) {
              for (t5=32*t3;t5<=32*t3+31;t5++) {
                for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
              }
            }
          }
          if ((t2 <= min(floord(PB_L-3,32),t3)) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(1,32*t1-32*t2);t4<=min(32*t2-PB_Q,32*t1-32*t2+31);t4++) {
              for (t5=32*t3;t5<=min(PB_L-1,32*t3+31);t5++) {
                for (t6=32*t2;t6<=min(PB_L-3,32*t2+31);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
              }
            }
          }
          if ((t2 <= min(floord(PB_L-3,32),t3)) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(max(1,32*t1-32*t2),32*t2-PB_Q+1);t4<=min(min(PB_L-3,32*t1-32*t2+31),32*t3-PB_N+2);t4++) {
              for (t5=32*t3;t5<=min(PB_L-1,32*t3+31);t5++) {
                for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
              }
            }
          }
          if ((PB_N >= 4) && (PB_Q >= 2) && (t2 >= ceild(PB_L-2,32)) && (t2 <= t3)) {
            for (t4=max(max(32*t1-32*t2,32*t2-PB_Q+1),32*t3-PB_N+3);t4<=min(min(min(PB_N-3,PB_Q-1),16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=max(max(32*t3,2*t4),t4+1);t5<=min(32*t3+31,t4+PB_N-3);t5++) {
                for (t6=max(max(32*t2,2*t4),t4+1);t6<=min(min(t5,32*t2+31),t4+PB_Q-1);t6++) {
                  B[(-t4+t5)][(-t4+t6)][(-t4+t6)] = C[(-t4+t5)-1][t4] + D[(-t4+t5)+2][t4][(-t4+t6)] - B[(-t4+t5)+1][(-t4+t6)][(-t4+t6)] - B[(-t4+t5)][(-t4+t6)-1][(-t4+t6)-1] + 5;;
                }
              }
            }
          }
          if ((PB_Q >= 2) && (t2 <= floord(PB_L-3,32)) && (t3 >= ceild(PB_L,32))) {
            for (t4=max(max(32*t1-32*t2,32*t2-PB_Q+1),32*t3-PB_N+3);t4<=min(min(PB_Q-1,16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=32*t3;t5<=min(32*t3+31,t4+PB_N-3);t5++) {
                for (t6=max(max(32*t2,2*t4),t4+1);t6<=min(32*t2+31,t4+PB_Q-1);t6++) {
                  B[(-t4+t5)][(-t4+t6)][(-t4+t6)] = C[(-t4+t5)-1][t4] + D[(-t4+t5)+2][t4][(-t4+t6)] - B[(-t4+t5)+1][(-t4+t6)][(-t4+t6)] - B[(-t4+t5)][(-t4+t6)-1][(-t4+t6)-1] + 5;;
                }
              }
            }
          }
          if ((PB_N >= 4) && (PB_Q >= 2) && (t1 == t2) && (t1 <= min(min(floord(PB_L-3,32),floord(PB_Q-1,32)),t3)) && (t3 <= min(floord(PB_L-1,32),floord(PB_N-3,32)))) {
            for (t5=max(1,32*t3);t5<=min(PB_N-3,32*t3+31);t5++) {
              for (t6=max(1,32*t1);t6<=min(min(t5,PB_Q-1),32*t1+31);t6++) {
                B[t5][t6][t6] = C[t5-1][0] + D[t5+2][0][t6] - B[t5+1][t6][t6] - B[t5][t6-1][t6-1] + 5;;
              }
            }
          }
          if ((t2 <= min(floord(PB_L-3,32),t3)) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(max(max(1,32*t1-32*t2),32*t2-PB_Q+1),32*t3-PB_N+3);t4<=min(min(min(min(PB_L-3,PB_N-3),PB_Q-1),16*t2+15),32*t1-32*t2+31);t4++) {
              if (t2 == t3) {
                for (t5=32*t2;t5<=min(PB_L-1,2*t4-1);t5++) {
                  for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
                    A[t4-1][t6+2][t5] = 3;;
                  }
                }
              }
              for (t5=max(32*t3,2*t4);t5<=min(min(PB_L-1,32*t3+31),t4+PB_N-3);t5++) {
                for (t6=max(32*t2,t4);t6<=min(PB_L-3,2*t4-1);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
                for (t6=max(32*t2,2*t4);t6<=min(min(min(t5,PB_L-3),32*t2+31),t4+PB_Q-1);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                  B[(-t4+t5)][(-t4+t6)][(-t4+t6)] = C[(-t4+t5)-1][t4] + D[(-t4+t5)+2][t4][(-t4+t6)] - B[(-t4+t5)+1][(-t4+t6)][(-t4+t6)] - B[(-t4+t5)][(-t4+t6)-1][(-t4+t6)-1] + 5;;
                }
                for (t6=t4+PB_Q;t6<=min(min(t5,PB_L-3),32*t2+31);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
                for (t6=max(2*t4,PB_L-2);t6<=min(min(t5,32*t2+31),t4+PB_Q-1);t6++) {
                  B[(-t4+t5)][(-t4+t6)][(-t4+t6)] = C[(-t4+t5)-1][t4] + D[(-t4+t5)+2][t4][(-t4+t6)] - B[(-t4+t5)+1][(-t4+t6)][(-t4+t6)] - B[(-t4+t5)][(-t4+t6)-1][(-t4+t6)-1] + 5;;
                }
                if (t2 == t3) {
                  for (t6=t5+1;t6<=min(PB_L-3,32*t2+31);t6++) {
                    A[t4-1][t6+2][t5] = 3;;
                  }
                }
              }
              for (t5=t4+PB_N-2;t5<=min(PB_L-1,32*t3+31);t5++) {
                for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
              }
              for (t5=max(PB_L,2*t4);t5<=min(32*t3+31,t4+PB_N-3);t5++) {
                for (t6=max(32*t2,2*t4);t6<=min(min(t5,32*t2+31),t4+PB_Q-1);t6++) {
                  B[(-t4+t5)][(-t4+t6)][(-t4+t6)] = C[(-t4+t5)-1][t4] + D[(-t4+t5)+2][t4][(-t4+t6)] - B[(-t4+t5)+1][(-t4+t6)][(-t4+t6)] - B[(-t4+t5)][(-t4+t6)-1][(-t4+t6)-1] + 5;;
                }
              }
            }
          }
          if ((t2 == t3) && (t2 <= floord(PB_L-3,32))) {
            for (t4=max(max(PB_N-2,32*t1-32*t2),32*t2-PB_N+3);t4<=min(min(min(PB_L-3,PB_Q-1),16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
                for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
              }
            }
          }
          if ((PB_L >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=PB_L-2;t4<=min(min(15,PB_N-3),PB_Q-1);t4++) {
              for (t5=2*t4;t5<=min(31,t4+PB_N-3);t5++) {
                for (t6=2*t4;t6<=min(t5,t4+PB_Q-1);t6++) {
                  B[(-t4+t5)][(-t4+t6)][(-t4+t6)] = C[(-t4+t5)-1][t4] + D[(-t4+t5)+2][t4][(-t4+t6)] - B[(-t4+t5)+1][(-t4+t6)][(-t4+t6)] - B[(-t4+t5)][(-t4+t6)-1][(-t4+t6)-1] + 5;;
                }
              }
            }
          }
          if ((t2 <= min(floord(PB_L-3,32),t3)) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(max(max(PB_Q,32*t1-32*t2),32*t2-PB_Q+1),32*t3-PB_N+3);t4<=min(min(PB_L-3,16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=32*t3;t5<=min(PB_L-1,32*t3+31);t5++) {
                for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
              }
            }
          }
          if ((t2 <= min(floord(PB_L-3,32),t3)) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(max(max(32*t1-32*t2,16*t2+16),32*t2-PB_Q+1),32*t3-PB_N+3);t4<=min(PB_L-3,32*t1-32*t2+31);t4++) {
              for (t5=32*t3;t5<=min(PB_L-1,32*t3+31);t5++) {
                for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
                  A[t4-1][t6+2][t5] = 3;;
                }
              }
            }
          }
        }
      }
      if ((PB_L >= 4) && (PB_N <= -1) && (t2 <= floord(PB_L-3,32))) {
        for (t3=0;t3<=floord(PB_L-1,32);t3++) {
          for (t4=max(1,32*t1-32*t2);t4<=min(PB_L-3,32*t1-32*t2+31);t4++) {
            for (t5=32*t3;t5<=min(PB_L-1,32*t3+31);t5++) {
              for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
                A[t4-1][t6+2][t5] = 3;;
              }
            }
          }
        }
      }
    }
  }
}
if ((PB_L >= 4) && (PB_Q <= -1)) {
  for (t1=0;t1<=floord(PB_L-3,16);t1++) {
    lbp=ceild(t1,2);
    ubp=min(floord(PB_L-3,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=0;t3<=floord(PB_L-1,32);t3++) {
        for (t4=max(1,32*t1-32*t2);t4<=min(PB_L-3,32*t1-32*t2+31);t4++) {
          for (t5=32*t3;t5<=min(PB_L-1,32*t3+31);t5++) {
            for (t6=max(32*t2,t4);t6<=min(PB_L-3,32*t2+31);t6++) {
              A[t4-1][t6+2][t5] = 3;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_N >= 4) && (PB_Q >= 2)) {
  for (t1=0;t1<=min(floord(3*PB_N-9,32),floord(3*PB_Q-3,32));t1++) {
    lbp=ceild(2*t1,3);
    ubp=min(min(min(min(floord(PB_N-3,16),floord(PB_Q-1,16)),floord(32*t1+PB_N+28,64)),floord(32*t1+PB_Q+30,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=t2;t3<=min(min(floord(PB_N+PB_Q-4,32),floord(16*t2+PB_N+12,32)),floord(32*t1-32*t2+PB_N+28,32));t3++) {
        for (t4=max(max(32*t1-32*t2,32*t2-PB_Q+1),32*t3-PB_N+3);t4<=min(min(min(PB_N-3,PB_Q-1),16*t2+15),32*t1-32*t2+31);t4++) {
          for (t5=max(max(32*t3,2*t4),t4+1);t5<=min(32*t3+31,t4+PB_N-3);t5++) {
            for (t6=max(max(32*t2,2*t4),t4+1);t6<=min(min(t5,32*t2+31),t4+PB_Q-1);t6++) {
              B[(-t4+t5)][(-t4+t6)][(-t4+t6)] = C[(-t4+t5)-1][t4] + D[(-t4+t5)+2][t4][(-t4+t6)] - B[(-t4+t5)+1][(-t4+t6)][(-t4+t6)] - B[(-t4+t5)][(-t4+t6)-1][(-t4+t6)-1] + 5;;
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
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3224212111_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
