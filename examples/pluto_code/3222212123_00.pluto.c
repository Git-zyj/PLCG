#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222212123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
void kernel_3222212123_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= 1) && (PB_P >= 2)) {
  lbp=0;
  ubp=floord(2*PB_P+PB_M-5,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=max(0,ceild(32*t1-PB_P-PB_M-29,32));t2<=min(floord(PB_P-2,32),t1);t2++) {
      for (t3=max(ceild(32*t1-PB_P-PB_M-12,16),2*t2);t3<=min(min(min(min(min(floord(-32*t1+4*PB_P+PB_M-6,32),floord(64*t2+PB_P+PB_M+60,32)),floord(-32*t1+96*t2+PB_P+PB_M+94,32)),floord(-320*t1+1024*t2+11*PB_P+11*PB_M+970,352)),floord(64*t2+91*PB_P+31*PB_M-120,992)),floord(-928*t1+64*t2+120*PB_P+31*PB_M-178,992));t3++) {
        if ((t2 <= floord(32*t3-PB_M-65,64)) && (t2 >= ceild(32*t3-PB_P-61,64)) && (t3 <= floord(3*PB_P-5,32))) {
          for (t4=max(ceild(32*t3-PB_P+1,2),32*t1);t4<=min(min(32*t1+31,PB_P+PB_M-3),32*t2+PB_M+30);t4++) {
            for (t5=max(max(ceild(32*t3-PB_P+1,2),32*t2),t4-PB_M+1);t5<=min(min(t4,PB_P-2),32*t2+31);t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
            }
          }
        }
        if ((t2 >= ceild(32*t3-PB_M-64,64)) && (t3 <= floord(3*PB_P-5,32)) && (t3 >= ceild(2*PB_P+PB_M-1,32))) {
          for (t4=max(ceild(32*t3-PB_P+1,2),32*t1);t4<=min(32*t1+31,PB_P+PB_M-3);t4++) {
            for (t5=max(max(ceild(32*t3-PB_P+1,2),32*t2),t4-PB_M+1);t5<=min(t4,PB_P-2);t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
            }
          }
        }
        if ((t1 == t2) && (t1 >= ceild(32*t3-PB_M-64,64)) && (t3 <= floord(2*PB_P+PB_M-2,32))) {
          for (t4=max(ceild(32*t3-PB_P+1,2),32*t1);t4<=floord(32*t3-PB_M-3,2);t4++) {
            for (t5=max(max(ceild(32*t3-PB_P+1,2),32*t1),t4-PB_M+1);t5<=t4;t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
            }
          }
        }
        if ((PB_P <= 3) && (t1 == 0) && (t2 == 0)) {
          for (t4=max(0,ceild(32*t3-PB_M-2,2));t4<=2*PB_P-3;t4++) {
            for (t5=max(max(0,ceild(32*t3-PB_M-2,2)),t4-PB_P+1);t5<=min(t4,PB_P-2);t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
          }
        }
        if ((PB_P >= 4) && (t2 >= ceild(32*t3-PB_P-61,64)) && (t3 <= floord(2*PB_P+PB_M-2,32)) && (t3 >= ceild(3*PB_P-4,32))) {
          for (t4=max(ceild(32*t3-PB_M-2,2),32*t1);t4<=min(2*PB_P-3,32*t1+31);t4++) {
            for (t5=max(max(ceild(32*t3-PB_M-2,2),32*t2),t4-PB_P+1);t5<=min(t4,PB_P-2);t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
          }
        }
        if ((PB_P >= 4) && (t2 <= floord(32*t3-PB_P-62,64)) && (t2 >= ceild(32*t3-PB_M-64,64)) && (t3 <= floord(2*PB_P+PB_M-2,32))) {
          for (t4=max(ceild(32*t3-PB_M-2,2),32*t1);t4<=min(min(2*PB_P-3,32*t1+31),32*t2+PB_P+30);t4++) {
            for (t5=max(max(ceild(32*t3-PB_M-2,2),32*t2),t4-PB_P+1);t5<=min(min(t4,PB_P-2),32*t2+31);t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
          }
        }
        if ((t1 == t2) && (t1 >= ceild(32*t3-PB_P-61,64)) && (t3 <= floord(3*PB_P-5,32))) {
          for (t4=max(ceild(32*t3-PB_M-2,2),32*t1);t4<=floord(32*t3-PB_P,2);t4++) {
            for (t5=max(ceild(32*t3-PB_M-2,2),32*t1);t5<=t4;t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
          }
        }
        if ((PB_P >= 4) && (t2 >= max(ceild(32*t3-PB_M-64,64),ceild(32*t3-PB_P-61,64))) && (t3 <= min(floord(3*PB_P-5,32),floord(2*PB_P+PB_M-2,32)))) {
          for (t4=max(max(ceild(32*t3-PB_M-2,2),ceild(32*t3-PB_P+1,2)),32*t1);t4<=min(min(min(min(min(min(2*PB_P-3,32*t1+31),PB_P+PB_M-3),32*t2+PB_M+30),32*t2+PB_P+30),16*t3+PB_M+13),16*t3+PB_P+13);t4++) {
            for (t5=max(max(ceild(32*t3-PB_P+1,2),32*t2),t4-PB_M+1);t5<=t4-PB_P;t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
            }
            for (t5=max(max(ceild(32*t3-PB_P+1,2),32*t2),t4-PB_M+1);t5<=floord(32*t3-PB_M-3,2);t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
            }
            for (t5=max(max(ceild(32*t3-PB_M-2,2),32*t2),t4-PB_P+1);t5<=t4-PB_M;t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
            for (t5=max(max(max(ceild(32*t3-PB_M-2,2),32*t2),t4-PB_M+1),t4-PB_P+1);t5<=floord(32*t3-PB_P,2);t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
            for (t5=max(max(max(max(ceild(32*t3-PB_M-2,2),ceild(32*t3-PB_P+1,2)),32*t2),t4-PB_M+1),t4-PB_P+1);t5<=min(min(min(t4,PB_P-2),32*t2+31),16*t3+14);t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(min(32*t3+31,2*t5+PB_M+2),2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
              for (t6=2*t5+PB_M+3;t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
              for (t6=2*t5+PB_P;t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
          }
        }
        if ((PB_P >= 4) && (t3 <= floord(3*PB_P-5,32))) {
          for (t4=max(32*t1,2*PB_P-2);t4<=min(min(min(32*t1+31,PB_P+PB_M-3),32*t2+PB_P+30),16*t3+PB_P+13);t4++) {
            for (t5=max(max(ceild(32*t3-PB_P+1,2),32*t2),t4-PB_M+1);t5<=PB_P-2;t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
            }
          }
        }
        if ((t2 >= ceild(32*t3-PB_P-61,64)) && (t3 <= floord(3*PB_P-5,32))) {
          for (t4=max(32*t1,32*t2+PB_P+31);t4<=min(min(min(32*t1+31,PB_P+PB_M-3),32*t2+PB_M+30),16*t3+PB_P+13);t4++) {
            for (t5=max(max(ceild(32*t3-PB_P+1,2),32*t2),t4-PB_M+1);t5<=min(PB_P-2,32*t2+31);t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
            }
          }
        }
        if ((PB_P >= 4) && (t2 >= ceild(32*t3-PB_P-61,64)) && (t3 <= floord(3*PB_P-5,32))) {
          for (t4=max(32*t1,16*t3+PB_P+14);t4<=min(min(min(32*t1+31,PB_P+PB_M-3),32*t2+PB_M+30),16*t3+PB_M+13);t4++) {
            for (t5=max(max(ceild(32*t3-PB_P+1,2),32*t2),t4-PB_M+1);t5<=min(min(PB_P-2,32*t2+31),16*t3+14);t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[(-2*t5+t6)-1][t5+1][(t4-t5)] = C[(t4-t5)][t5][(-2*t5+t6)] - D[t5][(t4-t5)][(-2*t5+t6)] + A[(-2*t5+t6)-3][(t4-t5)][t5+1] - 5;;
              }
            }
          }
        }
        if ((PB_P >= 4) && (t3 <= min(floord(3*PB_P-5,32),floord(2*PB_P+PB_M-2,32)))) {
          for (t4=max(32*t1,PB_P+PB_M-2);t4<=min(min(min(2*PB_P-3,32*t1+31),32*t2+PB_M+30),16*t3+PB_M+13);t4++) {
            for (t5=max(max(ceild(32*t3-PB_M-2,2),32*t2),t4-PB_P+1);t5<=PB_P-2;t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
          }
        }
        if ((t2 >= max(ceild(32*t3-PB_M-64,64),ceild(32*t3-PB_P-61,64))) && (t3 <= floord(2*PB_P+PB_M-2,32))) {
          for (t4=max(32*t1,32*t2+PB_M+31);t4<=min(min(min(2*PB_P-3,32*t1+31),32*t2+PB_P+30),16*t3+PB_M+13);t4++) {
            for (t5=max(max(ceild(32*t3-PB_M-2,2),32*t2),t4-PB_P+1);t5<=min(PB_P-2,32*t2+31);t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
              }
            }
          }
        }
        if ((t2 >= ceild(32*t3-PB_M-64,64)) && (t3 <= floord(2*PB_P+PB_M-2,32))) {
          for (t4=max(32*t1,16*t3+PB_M+14);t4<=min(min(min(2*PB_P-3,32*t1+31),32*t2+PB_P+30),16*t3+PB_P+13);t4++) {
            for (t5=max(max(ceild(32*t3-PB_M-2,2),32*t2),t4-PB_P+1);t5<=min(min(PB_P-2,32*t2+31),16*t3+14);t5++) {
              for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_M+2);t6++) {
                A[(-2*t5+t6-2)-1][t5+1][(t4-t5)] = 5;;
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
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3222212123_00(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
