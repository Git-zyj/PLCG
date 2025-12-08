#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222231221_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
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
        for (i_2 = 0; i_2 < zd; i_2++) {
            for (i_3 = 0; i_3 < vd; i_3++) {
                D[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
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
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2][i_3]);
                }
            }
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    sum_D += D[i_0][i_1][i_2][i_3];
                }
            }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222231221_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 3) {
  for (t1=0;t1<=floord(PB_P-2,8);t1++) {
    lbp=max(0,ceild(32*t1-PB_P+1,32));
    ubp=min(floord(3*t1+2,4),floord(3*PB_P-4,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_Q >= 0) && (t1 <= floord(192*t2+4*PB_P+PB_Q-12,128))) {
        for (t3=max(max(max(max(max(0,ceild(-3*t1+6*t2-2,2)),ceild(32*t2-PB_Q,32)),ceild(96*t2-3*PB_P+4,64)),ceild(160*t1-96*t2-5*PB_P-2*PB_Q+15,144)),ceild(192*t2-5*PB_P-PB_Q+15,192));t3<=min(min(min(min(floord(3*PB_P+PB_Q-3,32),floord(-96*t1+144*t2+3*PB_P+PB_Q-3,32)),floord(-32*t1+80*t2+PB_P+PB_Q+29,32)),floord(64*t1-64*t2+PB_P+PB_Q+61,32)),floord(-352*t1+528*t2+11*PB_P+2*PB_Q-21,64));t3++) {
          if ((t1 == 0) && (t2 == 0) && (t3 <= floord(PB_Q-5,32))) {
            for (t4=4;t4<=min(min(15,floord(32*t3-PB_P,2)),PB_P-1);t4++) {
              for (t5=3;t5<=min(t4-1,-32*t3+PB_Q-2);t5++) {
                for (t6=32*t3;t6<=min(32*t3+31,-t5+PB_Q-2);t6++) {
                  A[t4][t6+t5][t6-1] = C[t5][t4][t5+1] + D[t6][t5+1][t4][0] - A[t4][t6+t5+1][t6-1] + A[t4][t6+t5-3][t6-3] - 6;;
                }
              }
            }
          }
          if (PB_Q <= 7) {
            for (t4=max(max(max(2,ceild(32*t3-PB_P+1,2)),ceild(32*t2+1,3)),32*t1-32*t2);t4<=min(min(PB_P-1,16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,2*t4+1);t5<=min(32*t2+31,3*t4-1);t5++) {
                for (t6=max(32*t3,t5);t6<=min(32*t3+31,2*t4+PB_P-1);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)-1][(-2*t4+t6)-1] = E[t4][(-2*t4+t6)] + C[(-2*t4+t5)][t4][(-2*t4+t5)] * F[(-2*t4+t6)][(-2*t4+t6)][(-2*t4+t5)+1] - B[(-2*t4+t6)-1][(-2*t4+t5)][(-2*t4+t6)-1] + B[(-2*t4+t5)+1][(-2*t4+t6)-1][(-2*t4+t5)+1] + 2;;
                }
              }
            }
          }
          if (t2 <= min(floord(-32*t3+PB_Q-2,32),t3)) {
            for (t4=max(max(ceild(32*t3-PB_P+1,2),ceild(32*t2+1,3)),32*t1-32*t2);t4<=min(min(min(32*t2,PB_P-1),16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,2*t4+1);t5<=min(32*t2+31,3*t4-1);t5++) {
                for (t6=max(32*t3,t5);t6<=min(32*t3+31,2*t4+PB_P-1);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)-1][(-2*t4+t6)-1] = E[t4][(-2*t4+t6)] + C[(-2*t4+t5)][t4][(-2*t4+t5)] * F[(-2*t4+t6)][(-2*t4+t6)][(-2*t4+t5)+1] - B[(-2*t4+t6)-1][(-2*t4+t5)][(-2*t4+t6)-1] + B[(-2*t4+t5)+1][(-2*t4+t6)-1][(-2*t4+t5)+1] + 2;;
                }
              }
            }
          }
          if ((PB_Q >= 8) && (t2 >= ceild(-32*t3+PB_Q-1,32)) && (t2 <= t3)) {
            for (t4=max(max(max(2,ceild(32*t3-PB_P+1,2)),ceild(32*t2+1,3)),32*t1-32*t2);t4<=min(min(PB_P-1,16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,2*t4+1);t5<=min(32*t2+31,3*t4-1);t5++) {
                for (t6=max(32*t3,t5);t6<=min(32*t3+31,2*t4+PB_P-1);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)-1][(-2*t4+t6)-1] = E[t4][(-2*t4+t6)] + C[(-2*t4+t5)][t4][(-2*t4+t5)] * F[(-2*t4+t6)][(-2*t4+t6)][(-2*t4+t5)+1] - B[(-2*t4+t6)-1][(-2*t4+t5)][(-2*t4+t6)-1] + B[(-2*t4+t5)+1][(-2*t4+t6)-1][(-2*t4+t5)+1] + 2;;
                }
              }
            }
          }
          if ((PB_Q >= 8) && (t1 == 0) && (t2 == 0) && (t3 <= floord(PB_Q-2,32)) && (t3 >= ceild(PB_Q-4,32))) {
            for (t4=max(2,ceild(32*t3-PB_P+1,2));t4<=min(15,PB_P-1);t4++) {
              for (t5=2*t4+1;t5<=min(31,3*t4-1);t5++) {
                for (t6=32*t3;t6<=min(32*t3+31,2*t4+PB_P-1);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)-1][(-2*t4+t6)-1] = E[t4][(-2*t4+t6)] + C[(-2*t4+t5)][t4][(-2*t4+t5)] * F[(-2*t4+t6)][(-2*t4+t6)][(-2*t4+t5)+1] - B[(-2*t4+t6)-1][(-2*t4+t5)][(-2*t4+t6)-1] + B[(-2*t4+t5)+1][(-2*t4+t6)-1][(-2*t4+t5)+1] + 2;;
                }
              }
            }
          }
          if ((PB_Q >= 8) && (t1 == 0) && (t2 == 0) && (t3 <= floord(PB_Q-5,32))) {
            for (t4=max(2,ceild(32*t3-PB_P+1,2));t4<=min(3,PB_P-1);t4++) {
              for (t5=2*t4+1;t5<=3*t4-1;t5++) {
                for (t6=max(32*t3,t5);t6<=min(32*t3+31,2*t4+PB_P-1);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)-1][(-2*t4+t6)-1] = E[t4][(-2*t4+t6)] + C[(-2*t4+t5)][t4][(-2*t4+t5)] * F[(-2*t4+t6)][(-2*t4+t6)][(-2*t4+t5)+1] - B[(-2*t4+t6)-1][(-2*t4+t5)][(-2*t4+t6)-1] + B[(-2*t4+t5)+1][(-2*t4+t6)-1][(-2*t4+t5)+1] + 2;;
                }
              }
            }
          }
          if ((PB_Q >= 8) && (t1 == 0) && (t2 == 0) && (t3 <= floord(PB_Q-5,32))) {
            for (t4=max(4,ceild(32*t3-PB_P+1,2));t4<=min(15,PB_P-1);t4++) {
              for (t5=3;t5<=min(min(PB_Q-5,t4-1),-32*t3+PB_Q-2);t5++) {
                for (t6=max(3,32*t3);t6<=min(32*t3+31,-t5+PB_Q-2);t6++) {
                  A[t4][t6+t5][t6-1] = C[t5][t4][t5+1] + D[t6][t5+1][t4][0] - A[t4][t6+t5+1][t6-1] + A[t4][t6+t5-3][t6-3] - 6;;
                }
              }
              for (t5=2*t4+1;t5<=min(31,3*t4-1);t5++) {
                for (t6=max(32*t3,t5);t6<=min(32*t3+31,2*t4+PB_P-1);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)-1][(-2*t4+t6)-1] = E[t4][(-2*t4+t6)] + C[(-2*t4+t5)][t4][(-2*t4+t5)] * F[(-2*t4+t6)][(-2*t4+t6)][(-2*t4+t5)+1] - B[(-2*t4+t6)-1][(-2*t4+t5)][(-2*t4+t6)-1] + B[(-2*t4+t5)+1][(-2*t4+t6)-1][(-2*t4+t5)+1] + 2;;
                }
              }
            }
          }
          if ((PB_Q >= 8) && (t2 <= min(floord(PB_Q-5,32),floord(-32*t3+PB_Q-2,32))) && (t3 <= floord(PB_Q-5,32))) {
            for (t4=max(max(32*t1-32*t2,16*t2+16),32*t2+1);t4<=min(PB_P-1,32*t1-32*t2+31);t4++) {
              for (t5=max(3,32*t2);t5<=min(min(min(PB_Q-5,32*t2+31),t4-1),-32*t3+PB_Q-2);t5++) {
                for (t6=max(3,32*t3);t6<=min(32*t3+31,-t5+PB_Q-2);t6++) {
                  A[t4][t6+t5][t6-1] = C[t5][t4][t5+1] + D[t6][t5+1][t4][0] - A[t4][t6+t5+1][t6-1] + A[t4][t6+t5-3][t6-3] - 6;;
                }
              }
            }
          }
        }
      }
      if ((PB_Q <= -1) && (t1 <= floord(3*t2,2))) {
        for (t3=t2;t3<=min(min(floord(3*PB_P-3,32),floord(32*t2+PB_P+29,32)),floord(64*t1-64*t2+PB_P+61,32));t3++) {
          for (t4=max(max(max(2,ceild(32*t3-PB_P+1,2)),ceild(32*t2+1,3)),32*t1-32*t2);t4<=min(min(PB_P-1,16*t2+15),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,2*t4+1);t5<=min(32*t2+31,3*t4-1);t5++) {
              for (t6=max(32*t3,t5);t6<=min(32*t3+31,2*t4+PB_P-1);t6++) {
                B[(-2*t4+t6)-1][(-2*t4+t5)-1][(-2*t4+t6)-1] = E[t4][(-2*t4+t6)] + C[(-2*t4+t5)][t4][(-2*t4+t5)] * F[(-2*t4+t6)][(-2*t4+t6)][(-2*t4+t5)+1] - B[(-2*t4+t6)-1][(-2*t4+t5)][(-2*t4+t6)-1] + B[(-2*t4+t5)+1][(-2*t4+t6)-1][(-2*t4+t5)+1] + 2;;
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
int zd = zD;
int vd = vD;
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_3222231221_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
