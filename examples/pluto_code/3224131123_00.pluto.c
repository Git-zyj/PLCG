#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224131123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
{
int i_0, i_1, i_2;
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
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
            sum_A += A[i_0][i_1];
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
        sum_C += C[i_0];
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
void kernel_3224131123_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= max(max(0,ceild(-3*PB_P+12,4)),ceild(-3*PB_M+15,5))) && (PB_M >= 0) && (PB_P >= 0)) {
  lbp=0;
  ubp=min(floord(PB_L+PB_M+PB_P-1,32),floord(7*PB_L+3*PB_M+3*PB_P-15,96));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(min(min(floord(PB_L+PB_M-2,32),floord(PB_L+PB_P-2,32)),floord(5*PB_L+3*PB_M-12,96)),t1);t2++) {
      for (t3=max(max(max(max(max(max(max(max(0,ceild(32*t2-PB_L,32)),ceild(32*t1-PB_L-PB_P-29,32)),ceild(64*t2-2*PB_L-PB_M+4,32)),ceild(64*t1-2*PB_L-17*PB_P+2,64)),ceild(64*t2-2*PB_L-PB_P+4,64)),ceild(544*t1-17*PB_L-15*PB_M-17*PB_P+17,64)),ceild(32*t1+64*t2-3*PB_L-PB_M-PB_P+5,64)),ceild(160*t2-5*PB_L-2*PB_M+10,160));t3<=min(min(min(min(min(floord(PB_M,32),floord(PB_L+PB_M-3,32)),floord(32*t1-32*t2+PB_P,32)),floord(96*t1-96*t2+2*PB_L+3*PB_P-6,96)),floord(96*t1-96*t2+4*PB_L+3*PB_M-12,96)),t1);t3++) {
        if ((PB_M <= 4) && (PB_N >= 2) && (t2 <= floord(PB_N-1,32)) && (t3 == 0)) {
          for (t4=max(max(2,32*t1),32*t2+1);t4<=min(PB_L-1,32*t1+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(min(PB_N-1,32*t2+31),t4-1);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
          }
        }
        if ((PB_M >= 5) && (PB_P >= 4) && (t2 >= 1) && (t2 <= floord(PB_N-1,32)) && (t3 == 0)) {
          for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-1,32*t1+31);t4++) {
            for (t5=32*t2;t5<=min(min(PB_N-1,32*t2+31),t4-1);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
          }
        }
        if ((PB_M >= 5) && (PB_N >= 2) && (PB_P <= 3) && (t2 <= floord(PB_N-1,32)) && (t3 == 0)) {
          for (t4=max(max(2,32*t1),32*t2+1);t4<=min(PB_L-1,32*t1+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(min(PB_N-1,32*t2+31),t4-1);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
          }
        }
        if ((PB_M >= 5) && (PB_N >= 2) && (PB_P >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=2;t4<=min(3,PB_L-1);t4++) {
            for (t5=1;t5<=min(PB_N-1,t4-1);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
          }
        }
        if ((PB_P >= 4) && (t2 <= min(min(floord(PB_M-4,32),floord(PB_P-2,32)),t3)) && (t3 >= 1) && (t3 <= floord(PB_M-3,32))) {
          for (t4=max(max(32*t1,32*t2+3),32*t3+2);t4<=min(min(32*t1+31,PB_M+PB_P-5),32*t3+PB_P+29);t4++) {
            for (t5=max(1,32*t2);t5<=min(min(min(min(PB_M-4,PB_P-2),32*t2+31),32*t3+30),t4-3);t5++) {
              for (t6=max(max(32*t3,t5+1),t4-PB_P+2);t6<=min(min(PB_M-3,32*t3+31),t4-2);t6++) {
                B[t6][(t4-t6)][t5] = E[t6-1][t5-1][(t4-t6)+1] * E[(t4-t6)][t6][t5+1] + B[t6][(t4-t6)][t5-1] - B[t6+2][(t4-t6)-2][t5] - 3;;
              }
            }
          }
        }
        if ((PB_M >= 5) && (PB_N <= 1) && (PB_P >= 4) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(4,32*t1);t4<=min(min(PB_P+29,32*t1+31),PB_M+PB_P-5);t4++) {
            for (t5=1;t5<=min(min(min(30,PB_M-4),PB_P-2),t4-3);t5++) {
              for (t6=max(t5+1,t4-PB_P+2);t6<=min(min(31,PB_M-3),t4-2);t6++) {
                B[t6][(t4-t6)][t5] = E[t6-1][t5-1][(t4-t6)+1] * E[(t4-t6)][t6][t5+1] + B[t6][(t4-t6)][t5-1] - B[t6+2][(t4-t6)-2][t5] - 3;;
              }
            }
          }
        }
        if ((PB_M >= 5) && (PB_N >= 2) && (PB_P >= 4) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(4,32*t1);t4<=min(min(min(PB_L-1,PB_P+29),32*t1+31),PB_M+PB_P-5);t4++) {
            for (t5=1;t5<=min(min(min(min(30,PB_M-4),PB_N-1),PB_P-2),t4-3);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
              for (t6=max(t5+1,t4-PB_P+2);t6<=min(min(31,PB_M-3),t4-2);t6++) {
                B[t6][(t4-t6)][t5] = E[t6-1][t5-1][(t4-t6)+1] * E[(t4-t6)][t6][t5+1] + B[t6][(t4-t6)][t5-1] - B[t6+2][(t4-t6)-2][t5] - 3;;
              }
            }
            for (t5=PB_M-3;t5<=min(min(min(30,PB_N-1),PB_P-2),t4-3);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
            for (t5=PB_N;t5<=min(min(min(30,PB_M-4),PB_P-2),t4-3);t5++) {
              for (t6=max(t5+1,t4-PB_P+2);t6<=min(min(31,PB_M-3),t4-2);t6++) {
                B[t6][(t4-t6)][t5] = E[t6-1][t5-1][(t4-t6)+1] * E[(t4-t6)][t6][t5+1] + B[t6][(t4-t6)][t5-1] - B[t6+2][(t4-t6)-2][t5] - 3;;
              }
            }
            for (t5=PB_P-1;t5<=min(min(30,PB_N-1),t4-3);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
            for (t5=t4-2;t5<=min(min(30,PB_N-1),t4-1);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
            if ((PB_N >= 32) && (t4 >= 32)) {
              A[31 -1][t4] = C[31 -1] + D[31][t4-1] - E[31][t4][31] - C[31] - 6;;
            }
          }
        }
        if ((PB_M >= 5) && (PB_N >= 2) && (PB_P >= 4) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(32*t1,PB_M+PB_P-4);t4<=min(min(PB_L-1,PB_P+29),32*t1+31);t4++) {
            for (t5=1;t5<=min(min(31,PB_N-1),t4-1);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
          }
        }
        if ((PB_M >= 5) && (PB_N >= 2) && (PB_P >= 4) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(max(4,PB_L),32*t1);t4<=min(min(PB_P+29,32*t1+31),PB_M+PB_P-5);t4++) {
            for (t5=1;t5<=min(min(min(30,PB_M-4),PB_P-2),t4-3);t5++) {
              for (t6=max(t5+1,t4-PB_P+2);t6<=min(min(31,PB_M-3),t4-2);t6++) {
                B[t6][(t4-t6)][t5] = E[t6-1][t5-1][(t4-t6)+1] * E[(t4-t6)][t6][t5+1] + B[t6][(t4-t6)][t5-1] - B[t6+2][(t4-t6)-2][t5] - 3;;
              }
            }
          }
        }
        if ((PB_M >= 5) && (PB_N >= 2) && (PB_P >= 4) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(32*t1,PB_P+30);t4<=min(PB_L-1,32*t1+31);t4++) {
            for (t5=1;t5<=min(31,PB_N-1);t5++) {
              A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L >= 3) && (PB_M >= 0) && (PB_N >= 2) && (PB_P <= -1)) {
  lbp=0;
  ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(min(floord(PB_L-2,32),floord(PB_N-1,32)),t1);t2++) {
      for (t4=max(max(2,32*t1),32*t2+1);t4<=min(PB_L-1,32*t1+31);t4++) {
        for (t5=max(1,32*t2);t5<=min(min(PB_N-1,32*t2+31),t4-1);t5++) {
          A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
        }
      }
    }
  }
}
if ((PB_L >= 3) && (PB_M <= -1) && (PB_N >= 2) && (PB_P >= 0)) {
  lbp=0;
  ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(min(floord(PB_L-2,32),floord(PB_N-1,32)),t1);t2++) {
      for (t4=max(max(2,32*t1),32*t2+1);t4<=min(PB_L-1,32*t1+31);t4++) {
        for (t5=max(1,32*t2);t5<=min(min(PB_N-1,32*t2+31),t4-1);t5++) {
          A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
        }
      }
    }
  }
}
if ((PB_L >= 3) && (PB_M <= -1) && (PB_N >= 2) && (PB_P <= -1)) {
  lbp=0;
  ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(min(floord(PB_L-2,32),floord(PB_N-1,32)),t1);t2++) {
      for (t4=max(max(2,32*t1),32*t2+1);t4<=min(PB_L-1,32*t1+31);t4++) {
        for (t5=max(1,32*t2);t5<=min(min(PB_N-1,32*t2+31),t4-1);t5++) {
          A[t5-1][t4] = C[t5-1] + D[t5][t4-1] - E[t5][t4][t5] - C[t5] - 6;;
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_M >= 5) && (PB_P >= 4)) {
  lbp=0;
  ubp=floord(PB_M+PB_P-5,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(min(floord(PB_M-4,32),floord(PB_P-2,32)),t1);t2++) {
      for (t3=max(ceild(32*t1-PB_P-29,32),t2);t3<=min(floord(PB_M-3,32),t1);t3++) {
        for (t4=max(max(max(4,32*t1),32*t2+3),32*t3+2);t4<=min(min(32*t1+31,PB_M+PB_P-5),32*t3+PB_P+29);t4++) {
          for (t5=max(1,32*t2);t5<=min(min(min(min(PB_M-4,PB_P-2),32*t2+31),32*t3+30),t4-3);t5++) {
            for (t6=max(max(32*t3,t5+1),t4-PB_P+2);t6<=min(min(PB_M-3,32*t3+31),t4-2);t6++) {
              B[t6][(t4-t6)][t5] = E[t6-1][t5-1][(t4-t6)+1] * E[(t4-t6)][t6][t5+1] + B[t6][(t4-t6)][t5-1] - B[t6+2][(t4-t6)-2][t5] - 3;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3224131123_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
