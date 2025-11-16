#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212211121_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
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
            for (i_3 = 0; i_3 < vb; i_3++) {
                B[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
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
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
{
int i_0, i_1, i_2, i_3;
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
                for (i_3 = 0; i_3 < vb; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2][i_3]);
                }
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
                for (i_3 = 0; i_3 < vb; i_3++) {
                    sum_B += B[i_0][i_1][i_2][i_3];
                }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212211121_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 1) {
  if (PB_L >= max(0,-3*PB_P+6)) {
    lbp=0;
    ubp=floord(PB_L+2*PB_P-4,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=max(0,ceild(32*t1-PB_L-PB_P-30,32));t2<=min(min(floord(PB_L+PB_P-2,32),floord(PB_L+3*PB_P-6,32)),t1);t2++) {
        if ((PB_L >= ceild(-3*PB_M+15,5)) && (PB_M >= 0) && (t1 <= floord(160*t2+5*PB_L+5*PB_P+33*PB_M-15,160))) {
          for (t3=max(max(max(max(0,ceild(32*t2-PB_L,16)),ceild(32*t1-PB_L-PB_P-13,16)),ceild(160*t2-5*PB_L-3*PB_M+15,80)),ceild(160*t1-5*PB_L-5*PB_P-16*PB_M+15,80));t3<=min(min(min(min(min(min(min(min(min(min(min(min(floord(2*PB_P+PB_M-2,32),floord(32*t1+PB_P+PB_M+25,32)),floord(32*t2+PB_P+PB_M+26,32)),floord(-32*t1+96*t2+PB_L+PB_P+PB_M+89,32)),floord(-160*t2+5*PB_L+9*PB_P+2*PB_M-24,64)),floord(-32*t1+128*t2+PB_L+2*PB_P+2*PB_M+114,64)),floord(5*PB_L+6*PB_P+3*PB_M-21,96)),floord(160*t1+5*PB_P+31*PB_M-5,160)),floord(160*t2+5*PB_P+32*PB_M-5,160)),floord(-160*t1+480*t2+5*PB_L+5*PB_P+97*PB_M-15,160)),floord(-160*t1+640*t2+5*PB_L+10*PB_P+128*PB_M-20,320)),floord(160*t1+57*PB_P+31*PB_M-57,992)),floord(160*t2+59*PB_P+32*PB_M-59,1024));t3++) {
            if ((PB_M <= 4) && (t3 <= floord(PB_P-1,32))) {
              for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-2,32*t1+31);t4++) {
                for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
              }
            }
            if ((PB_M >= 5) && (t2 >= ceild(t3+1,2)) && (t3 <= floord(PB_P-1,32))) {
              for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-2,32*t1+31);t4++) {
                for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
              }
            }
            if ((PB_M >= 5) && (t2 <= floord(32*t3-PB_M-60,64)) && (t3 <= floord(PB_P-1,32))) {
              for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-2,32*t1+31);t4++) {
                for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
              }
            }
            if ((PB_M >= 5) && (t1 == t2) && (t1 >= ceild(32*t3-PB_M-59,64)) && (t3 <= floord(PB_P-1,32))) {
              for (t4=32*t1+1;t4<=min(floord(32*t3-PB_M+4,2),PB_L-2);t4++) {
                for (t5=32*t1;t5<=t4-1;t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
              }
            }
            if ((PB_M >= 5) && (t2 <= min(floord(t3,2),floord(PB_P-2,32))) && (t2 >= ceild(32*t3-PB_M-59,64)) && (t3 <= floord(2*PB_P+PB_M-7,32)) && (t3 >= ceild(PB_P,32))) {
              for (t4=max(max(ceild(32*t3-PB_M+5,2),32*t1),32*t2+1);t4<=min(min(min(2*PB_P-3,32*t1+31),32*t2+PB_P+30),16*t3+PB_P+13);t4++) {
                for (t5=max(max(ceild(32*t3-PB_M+3,2),32*t2),t4-PB_P+1);t5<=min(min(min(PB_P-2,32*t2+31),16*t3+14),t4-1);t5++) {
                  for (t6=max(32*t3,2*t5+2);t6<=min(32*t3+31,2*t5+PB_M-3);t6++) {
                    B[(-2*t5+t6)][t5][(t4-t5)][t5] = B[(-2*t5+t6)-2][t5][(t4-t5)][t5] + B[(-2*t5+t6)+2][(t4-t5)-1][t5+1][(t4-t5)-1] - 3;;
                  }
                }
              }
            }
            if ((PB_M >= 5) && (t2 <= floord(t3,2)) && (t2 >= ceild(32*t3-PB_M-59,64)) && (t3 <= floord(PB_P-1,32))) {
              for (t4=max(max(ceild(32*t3-PB_M+5,2),32*t1),32*t2+1);t4<=min(min(min(min(PB_L-2,2*PB_P-3),32*t1+31),32*t2+PB_P+30),16*t3+PB_P+13);t4++) {
                for (t5=32*t2;t5<=t4-PB_P;t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
                for (t5=max(32*t2,t4-PB_P+1);t5<=floord(32*t3-PB_M+2,2);t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
                for (t5=max(max(ceild(32*t3-PB_M+3,2),32*t2),t4-PB_P+1);t5<=min(min(min(PB_P-2,32*t2+31),16*t3+14),t4-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,2*t5+1);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                  for (t6=max(32*t3,2*t5+2);t6<=min(min(PB_P-1,32*t3+31),2*t5+PB_M-3);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                    B[(-2*t5+t6)][t5][(t4-t5)][t5] = B[(-2*t5+t6)-2][t5][(t4-t5)][t5] + B[(-2*t5+t6)+2][(t4-t5)-1][t5+1][(t4-t5)-1] - 3;;
                  }
                  for (t6=2*t5+PB_M-2;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                  for (t6=max(PB_P,2*t5+2);t6<=min(32*t3+31,2*t5+PB_M-3);t6++) {
                    B[(-2*t5+t6)][t5][(t4-t5)][t5] = B[(-2*t5+t6)-2][t5][(t4-t5)][t5] + B[(-2*t5+t6)+2][(t4-t5)-1][t5+1][(t4-t5)-1] - 3;;
                  }
                }
                if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
                  for (t5=PB_P-1;t5<=min(14,t4-1);t5++) {
                    for (t6=0;t6<=PB_P-1;t6++) {
                      A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                    }
                  }
                }
                for (t5=16*t3+15;t5<=min(32*t2+31,t4-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
              }
            }
            if ((t2 >= ceild(32*t3-PB_M-59,64)) && (t3 <= floord(PB_P-1,32))) {
              for (t4=max(32*t1,32*t2+PB_P+31);t4<=min(min(PB_L-2,32*t1+31),16*t3+PB_P+13);t4++) {
                for (t5=32*t2;t5<=32*t2+31;t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
              }
            }
            if ((PB_M >= 5) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
              for (t4=max(1,2*PB_P-2);t4<=min(PB_L-2,PB_P+13);t4++) {
                for (t5=0;t5<=t4-1;t5++) {
                  for (t6=0;t6<=PB_P-1;t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
              }
            }
            if ((PB_M >= 5) && (t2 <= floord(t3,2)) && (t2 >= ceild(32*t3-PB_M-59,64)) && (t3 <= floord(PB_P-1,32))) {
              for (t4=max(max(max(ceild(32*t3-PB_M+5,2),32*t1),PB_L-1),32*t2+1);t4<=min(min(min(2*PB_P-3,32*t1+31),32*t2+PB_P+30),16*t3+PB_P+13);t4++) {
                for (t5=max(max(ceild(32*t3-PB_M+3,2),32*t2),t4-PB_P+1);t5<=min(min(min(PB_P-2,32*t2+31),16*t3+14),t4-1);t5++) {
                  for (t6=max(32*t3,2*t5+2);t6<=min(32*t3+31,2*t5+PB_M-3);t6++) {
                    B[(-2*t5+t6)][t5][(t4-t5)][t5] = B[(-2*t5+t6)-2][t5][(t4-t5)][t5] + B[(-2*t5+t6)+2][(t4-t5)-1][t5+1][(t4-t5)-1] - 3;;
                  }
                }
              }
            }
            if ((PB_M >= 5) && (t2 <= floord(t3,2)) && (t2 >= ceild(32*t3-PB_M-59,64)) && (t3 <= floord(PB_P-1,32))) {
              for (t4=max(32*t1,16*t3+PB_P+14);t4<=min(PB_L-2,32*t1+31);t4++) {
                for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                  for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                    A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                  }
                }
              }
            }
          }
        }
        if ((PB_M <= -1) && (t1 <= floord(PB_L-2,32)) && (t2 <= floord(PB_L-3,32))) {
          for (t3=0;t3<=floord(PB_P-1,32);t3++) {
            for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-2,32*t1+31);t4++) {
              for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
                  A[t6][t5][t4-1] = C[t5+1][t4+1][t6] * D[t5][t4] * 5;;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L <= -1) && (PB_M >= 5)) {
    lbp=0;
    ubp=floord(PB_P-2,16);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=max(0,ceild(32*t1-PB_P-30,32));t2<=min(floord(PB_P-2,32),t1);t2++) {
        for (t3=max(ceild(32*t1-PB_P-13,16),2*t2);t3<=min(min(floord(2*PB_P+PB_M-7,32),floord(64*t1+PB_M+57,32)),floord(64*t2+PB_M+59,32));t3++) {
          for (t4=max(max(ceild(32*t3-PB_M+5,2),32*t1),32*t2+1);t4<=min(min(min(2*PB_P-3,32*t1+31),32*t2+PB_P+30),16*t3+PB_P+13);t4++) {
            for (t5=max(max(ceild(32*t3-PB_M+3,2),32*t2),t4-PB_P+1);t5<=min(min(min(PB_P-2,32*t2+31),16*t3+14),t4-1);t5++) {
              for (t6=max(32*t3,2*t5+2);t6<=min(32*t3+31,2*t5+PB_M-3);t6++) {
                B[(-2*t5+t6)][t5][(t4-t5)][t5] = B[(-2*t5+t6)-2][t5][(t4-t5)][t5] + B[(-2*t5+t6)+2][(t4-t5)-1][t5+1][(t4-t5)-1] - 3;;
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
int vb = vB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_4D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,vB,xb,yb,zb,vb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3212211121_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
