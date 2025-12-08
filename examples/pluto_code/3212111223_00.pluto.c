#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212111223_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212111223_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= 1) && (PB_P >= 3)) {
  for (t1=0;t1<=min(floord(PB_P-2,16),floord(PB_M+PB_P-1,32));t1++) {
    lbp=max(0,ceild(32*t1-PB_P+2,32));
    ubp=min(floord(PB_M+PB_P-2,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_L >= 3) && (t2 <= min(floord(PB_P-1,32),floord(PB_M+PB_L-3,32)))) {
        for (t3=max(1,32*t1-32*t2);t3<=min(min(min(min(PB_M-2,PB_P-3),32*t1-32*t2+31),-16*t2+PB_P-2),-32*t2+PB_P+PB_L-4);t3++) {
          for (t4=max(2,32*t2);t4<=min(min(min(min(PB_P-1,32*t2+31),PB_M+PB_L-3),-2*t3+2*PB_P-4),-t3+PB_P+PB_L-4);t4++) {
            for (t5=max(max(1,t4-PB_M+1),t3+t4-PB_P+2);t5<=min(min(PB_L-2,t4-3),-t3+PB_P-2);t5++) {
              A[(t4-t5)][t5-1][t5+t3-1] = C[t3+1][t5+1][0] + A[(t4-t5)][t5+1][t5+t3+1] * A[t5][(t4-t5)-1][(t4-t5)+t3+1] + 5;;
            }
            if ((t2 == 0) && (t4 == 2)) {
              A[0][0 +1][0 +t3+1] = 5;;
            }
            for (t5=max(1,t4-2);t5<=min(min(min(min(PB_L-2,t4-1),2*t4-4),-t3+PB_P-2),t3+t4-3);t5++) {
              A[(t4-t5)][t5-1][t5+t3-1] = C[t3+1][t5+1][0] + A[(t4-t5)][t5+1][t5+t3+1] * A[t5][(t4-t5)-1][(t4-t5)+t3+1] + 5;;
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
            if ((t2 == 0) && (t4 == 2)) {
              A[1][1 -1][1 +t3-1] = C[t3+1][1 +1][0] + A[1][1 +1][1 +t3+1] * A[1][1 -1][1 +t3+1] + 5;;
            }
            if ((t1 == t2) && (t3 == 1) && (t4 <= min(PB_L-1,PB_P-2)) && (t4 >= 3)) {
              A[1][(t4-1)-1][(t4-1)+1 -1] = C[1 +1][(t4-1)+1][0] + A[1][(t4-1)+1][(t4-1)+1 +1] * A[(t4-1)][1 -1][1 +1 +1] + 5;;
            }
            for (t5=max(max(PB_L-1,t4-2),t3+2*t4-PB_P-2);t5<=min(t4-1,t3+t4-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
            if ((t3 <= -t4+PB_P+1) && (t3 >= max(2,-t4+PB_P)) && (t4 <= PB_L-1)) {
              A[1][(t4-3)+1][(t4-3)+t3+1] = 5;;
            }
            for (t5=max(t4,t3+2*t4-PB_P-2);t5<=min(2*t4-4,t3+t4-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
          for (t4=PB_P;t4<=min(min(min(min(32*t2+31,PB_M+PB_L-3),-2*t3+2*PB_P-4),-t3+PB_M+PB_P-3),-t3+PB_P+PB_L-4);t4++) {
            for (t5=max(t4-PB_M+1,t3+t4-PB_P+2);t5<=min(PB_L-2,-t3+PB_P-2);t5++) {
              A[(t4-t5)][t5-1][t5+t3-1] = C[t3+1][t5+1][0] + A[(t4-t5)][t5+1][t5+t3+1] * A[t5][(t4-t5)-1][(t4-t5)+t3+1] + 5;;
            }
          }
          for (t4=-2*t3+2*PB_P-3;t4<=min(min(PB_P-1,32*t2+31),-t3+PB_P+PB_L-4);t4++) {
            for (t5=t3+2*t4-PB_P-2;t5<=min(2*t4-4,t3+t4-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
          for (t4=PB_M+PB_L-2;t4<=min(min(PB_P-1,32*t2+31),-t3+PB_P+PB_L-4);t4++) {
            for (t5=max(t4-2,t3+2*t4-PB_P-2);t5<=t3+t4-3;t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
          for (t4=-t3+PB_P+PB_L-3;t4<=min(PB_P-1,32*t2+31);t4++) {
            for (t5=t3+2*t4-PB_P-2;t5<=min(2*t4-4,t3+t4-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_M+PB_L-3,32)) && (t2 >= ceild(PB_P,32))) {
        for (t3=max(1,32*t1-32*t2);t3<=min(min(min(32*t1-32*t2+31,-16*t2+PB_P-2),-32*t2+PB_M+PB_P-3),-32*t2+PB_P+PB_L-4);t3++) {
          for (t4=32*t2;t4<=min(min(min(min(32*t2+31,PB_M+PB_L-3),-2*t3+2*PB_P-4),-t3+PB_M+PB_P-3),-t3+PB_P+PB_L-4);t4++) {
            for (t5=max(t4-PB_M+1,t3+t4-PB_P+2);t5<=min(PB_L-2,-t3+PB_P-2);t5++) {
              A[(t4-t5)][t5-1][t5+t3-1] = C[t3+1][t5+1][0] + A[(t4-t5)][t5+1][t5+t3+1] * A[t5][(t4-t5)-1][(t4-t5)+t3+1] + 5;;
            }
          }
        }
      }
      if ((PB_L <= 2) && (t2 <= floord(PB_P-1,32))) {
        for (t3=max(1,32*t1-32*t2);t3<=min(min(PB_P-2,32*t1-32*t2+31),-32*t2+PB_M+PB_P-1);t3++) {
          for (t4=max(2,32*t2);t4<=min(min(PB_P-1,32*t2+31),-t3+PB_M+PB_P-1);t4++) {
            for (t5=max(t4-2,t3+2*t4-PB_P-2);t5<=min(min(2*t4-4,t3+t4-3),t4+PB_M-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t2 <= floord(PB_P-1,32)) && (t2 >= ceild(PB_M+PB_L-2,32))) {
        for (t3=max(1,32*t1-32*t2);t3<=min(32*t1-32*t2+31,-32*t2+PB_M+PB_P-1);t3++) {
          for (t4=32*t2;t4<=min(min(PB_P-1,32*t2+31),-t3+PB_M+PB_P-1);t4++) {
            for (t5=max(t4-2,t3+2*t4-PB_P-2);t5<=min(t3+t4-3,t4+PB_M-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t2 <= min(floord(PB_P-1,32),floord(PB_M+PB_L-3,32)))) {
        for (t3=max(max(1,PB_M-1),32*t1-32*t2);t3<=min(min(min(min(PB_P-3,32*t1-32*t2+31),-16*t2+PB_P-2),-32*t2+PB_M+PB_P-1),-32*t2+PB_P+PB_L-4);t3++) {
          for (t4=max(2,32*t2);t4<=min(min(PB_P-1,32*t2+31),-t3+PB_M+PB_P-1);t4++) {
            for (t5=max(t4-2,t3+2*t4-PB_P-2);t5<=min(min(2*t4-4,t3+t4-3),t4+PB_M-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t2 <= min(floord(PB_P-1,32),floord(PB_M+PB_L-3,32)))) {
        for (t3=max(32*t1-32*t2,-32*t2+PB_P+PB_L-3);t3<=min(32*t1-32*t2+31,-16*t2+PB_P-2);t3++) {
          for (t4=32*t2;t4<=min(min(PB_P-1,32*t2+31),-t3+PB_M+PB_P-1);t4++) {
            for (t5=t3+2*t4-PB_P-2;t5<=min(min(2*t4-4,t3+t4-3),t4+PB_M-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t2 <= min(floord(PB_P-1,32),floord(PB_M+PB_L-3,32)))) {
        for (t3=max(32*t1-32*t2,-16*t2+PB_P-1);t3<=min(min(PB_P-2,32*t1-32*t2+31),-32*t2+PB_M+PB_P-1);t3++) {
          for (t4=32*t2;t4<=min(min(PB_P-1,32*t2+31),-t3+PB_M+PB_P-1);t4++) {
            for (t5=t3+2*t4-PB_P-2;t5<=min(min(2*t4-4,t3+t4-3),t4+PB_M-3);t5++) {
              A[(-t4+t5+2)][(2*t4-t5-4)+1][(2*t4-t5-4)+t3+1] = 5;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t1 >= ceild(PB_P-33,32)) && (t2 == 0)) {
        for (t4=2;t4<=min(min(31,PB_M+1),PB_P-1);t4++) {
          A[(t4-2)][0 +1][0 +(PB_P-2)+1] = 5;;
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
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212111223_00(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
