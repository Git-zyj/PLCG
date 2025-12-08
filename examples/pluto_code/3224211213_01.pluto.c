#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224211213_01.h"
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
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 3
id: 1
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
            for (i_3 = 0; i_3 < vc; i_3++) {
                C[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
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
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
                for (i_3 = 0; i_3 < vc; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2][i_3]);
                }
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
                for (i_3 = 0; i_3 < vc; i_3++) {
                    sum_C += C[i_0][i_1][i_2][i_3];
                }
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
void kernel_3224211213_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_Q >= max(0,-PB_L+3))) {
  for (t1=0;t1<=floord(3*PB_Q+4*PB_L-8,32);t1++) {
    lbp=max(max(max(max(max(0,ceild(16*t1-PB_L-14,32)),ceild(32*t1-PB_Q-3*PB_L+2,32)),ceild(128*t1-7*PB_Q-12*PB_L+20,128)),ceild(496*t1-14*PB_Q-45*PB_L+28,544)),ceild(528*t1-47*PB_L,1056));
    ubp=min(min(min(min(floord(2*t1+1,3),floord(2*PB_Q+PB_L-2,32)),floord(32*t1+PB_Q+13,64)),floord(6*PB_Q+7*PB_L-18,96)),floord(128*t1+30*PB_Q+13*PB_L-26,672));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_L >= 3) && (PB_P <= -1) && (t1 <= floord(32*t2+3*PB_L-5,32)) && (t2 <= floord(PB_L-2,32))) {
        for (t3=max(ceild(32*t1-32*t2-PB_L-29,32),t2);t3<=min(min(floord(PB_L-2,16),floord(32*t2+PB_L+30,32)),t1-t2);t3++) {
          for (t4=max(max(max(1,32*t2),32*t3-PB_L+1),32*t1-32*t2-2*PB_L+3);t4<=min(min(min(PB_L-2,32*t2+31),32*t3+30),32*t1-32*t2+29);t4++) {
            for (t5=max(max(32*t3,t4+1),32*t1-32*t2-PB_L+2);t5<=min(min(32*t3+31,32*t1-32*t2+30),t4+PB_L-1);t5++) {
              for (t6=max(32*t1-32*t2,t5+1);t6<=min(32*t1-32*t2+31,t5+PB_L-2);t6++) {
                B[(-t4+t5)][(-t5+t6)-1][t4+1] = D[t4-1][(-t4+t5)][(-t5+t6)] - B[(-t4+t5)-1][(-t5+t6)-1][t4] + B[(-t4+t5)-1][t4][(-t5+t6)+1] + 1;;
              }
            }
          }
        }
      }
      if ((PB_P >= max(0,ceild(-PB_L+3,3))) && (t1 <= floord(32*t2+PB_Q+3*PB_P+3*PB_L-5,32))) {
        for (t3=max(max(max(max(max(max(max(ceild(16*t1-16*t2-PB_L-6,8),ceild(80*t1-80*t2-2*PB_Q-7*PB_L+4,8)),ceild(32*t1-32*t2-5*PB_P-3*PB_L+5,16)),ceild(32*t1-32*t2-PB_L-29,32)),ceild(112*t1-64*t2-3*PB_Q-10*PB_L+9,56)),ceild(64*t1-32*t2-3*PB_L-56,64)),ceild(272*t1-272*t2-23*PB_L,136)),t2);t3<=min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(floord(32*t1+63*PB_P,32),floord(32*t1+PB_P+62,32)),floord(64*t1-64*t2+63*PB_P,32)),floord(2*PB_Q+PB_P+2*PB_L-4,32)),floord(32*t1-32*t2+PB_Q+30*PB_P,32)),floord(64*t1-64*t2+PB_P+62,32)),floord(64*t2+PB_P+PB_L+62,32)),floord(64*t2+33*PB_P+PB_L+30,32)),floord(64*t2+67*PB_P+2*PB_L-4,32)),floord(32*t1-32*t2+PB_Q+PB_P+29,32)),floord(64*t1-96*t2+2*PB_Q+PB_P+28,32)),floord(32*t2+PB_Q+PB_P+PB_L+30,32)),floord(64*t1-96*t2+4*PB_Q+2*PB_P+PB_L+24,64)),floord(96*t1-96*t2+6*PB_Q+3*PB_P+4*PB_L-12,96)),floord(128*t1-608*t2+34*PB_Q+4*PB_P+15*PB_L-30,128)),floord(-256*t1+960*t2+7*PB_P+23*PB_L+434,224)),floord(544*t1-608*t2+34*PB_Q+17*PB_P+2*PB_L-4,544)),floord(32*t1+896*t2+30*PB_Q+30*PB_P+29*PB_L+870,960)),floord(1056*t1-1056*t2+62*PB_Q+33*PB_P,1056)),floord(1088*t2+32*PB_Q+33*PB_P+33*PB_L+990,1056));t3++) {
          if ((PB_P >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=1;t4<=min(min(29,PB_L-2),2*PB_Q-5);t4++) {
              for (t6=t4+2;t6<=min(31,t4+PB_L-1);t6++) {
                B[1][(-t4+t6-1)-1][t4+1] = D[t4-1][1][(-t4+t6-1)] - B[1 -1][(-t4+t6-1)-1][t4] + B[1 -1][t4][(-t4+t6-1)+1] + 1;;
              }
              for (t5=t4+2;t5<=min(min(min(30,2*t4+PB_P),2*PB_Q+PB_P-4),t4+PB_L-1);t5++) {
                for (t6=max(ceild(t4+1,2),ceild(t5-PB_P,2));t6<=min(min(floord(t5-1,2),t4),PB_Q-2);t6++) {
                  A[(t4-t6)][(t5-2*t6)+1][t6] = C[(t5-2*t6)][(t4-t6)][(t5-2*t6)-1][t6+1] * A[(t4-t6)][(t5-2*t6)+2][t6] - A[(t4-t6)+1][t6+1][(t5-2*t6)+1] * 1;;
                }
                for (t6=t5+1;t6<=min(31,t5+PB_L-2);t6++) {
                  B[(-t4+t5)][(-t5+t6)-1][t4+1] = D[t4-1][(-t4+t5)][(-t5+t6)] - B[(-t4+t5)-1][(-t5+t6)-1][t4] + B[(-t4+t5)-1][t4][(-t5+t6)+1] + 1;;
                }
              }
              for (t5=t4+PB_L;t5<=min(min(30,2*t4+PB_P),2*PB_Q+PB_P-4);t5++) {
                for (t6=max(ceild(t4+1,2),ceild(t5-PB_P,2));t6<=min(t4,PB_Q-2);t6++) {
                  A[(t4-t6)][(t5-2*t6)+1][t6] = C[(t5-2*t6)][(t4-t6)][(t5-2*t6)-1][t6+1] * A[(t4-t6)][(t5-2*t6)+2][t6] - A[(t4-t6)+1][t6+1][(t5-2*t6)+1] * 1;;
                }
              }
              for (t5=2*PB_Q+PB_P-3;t5<=min(min(30,2*t4+PB_P),t4+PB_L-1);t5++) {
                for (t6=t5+1;t6<=min(31,t5+PB_L-2);t6++) {
                  B[(-t4+t5)][(-t5+t6)-1][t4+1] = D[t4-1][(-t4+t5)][(-t5+t6)] - B[(-t4+t5)-1][(-t5+t6)-1][t4] + B[(-t4+t5)-1][t4][(-t5+t6)+1] + 1;;
                }
              }
              if ((PB_Q >= ceild(-PB_P+35,2)) && (t4 >= ceild(-PB_P+31,2))) {
                for (t6=max(ceild(-PB_P+31,2),ceild(t4+1,2));t6<=min(min(15,t4),PB_Q-2);t6++) {
                  A[(t4-t6)][(-2*t6+31)+1][t6] = C[(-2*t6+31)][(t4-t6)][(-2*t6+31)-1][t6+1] * A[(t4-t6)][(-2*t6+31)+2][t6] - A[(t4-t6)+1][t6+1][(-2*t6+31)+1] * 1;;
                }
              }
              for (t5=2*t4+PB_P+1;t5<=min(30,t4+PB_L-1);t5++) {
                for (t6=t5+1;t6<=min(31,t5+PB_L-2);t6++) {
                  B[(-t4+t5)][(-t5+t6)-1][t4+1] = D[t4-1][(-t4+t5)][(-t5+t6)] - B[(-t4+t5)-1][(-t5+t6)-1][t4] + B[(-t4+t5)-1][t4][(-t5+t6)+1] + 1;;
                }
              }
            }
          }
          if ((PB_P >= 1) && (t1 <= min(min(floord(2*t2+t3,2),floord(32*t2+PB_Q-2,32)),t2+t3-1)) && (t3 <= floord(2*PB_Q+PB_P-4,32))) {
            for (t4=max(max(max(1,ceild(32*t3-PB_P,2)),32*t2),32*t1-32*t2);t4<=min(min(min(2*PB_Q-5,32*t2+31),32*t3+29),64*t1-64*t2+61);t4++) {
              for (t5=max(max(32*t3,t4+2),64*t1-64*t2+1);t5<=min(min(min(32*t3+31,2*t4+PB_P),2*PB_Q+PB_P-4),64*t1-64*t2+PB_P+62);t5++) {
                for (t6=max(max(ceild(t4+1,2),ceild(t5-PB_P,2)),32*t1-32*t2);t6<=min(min(min(floord(t5-1,2),t4),PB_Q-2),32*t1-32*t2+31);t6++) {
                  A[(t4-t6)][(t5-2*t6)+1][t6] = C[(t5-2*t6)][(t4-t6)][(t5-2*t6)-1][t6+1] * A[(t4-t6)][(t5-2*t6)+2][t6] - A[(t4-t6)+1][t6+1][(t5-2*t6)+1] * 1;;
                }
              }
            }
          }
          if ((PB_P >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(1,PB_L-1);t4<=min(29,2*PB_Q-5);t4++) {
              for (t5=t4+2;t5<=min(min(31,2*t4+PB_P),2*PB_Q+PB_P-4);t5++) {
                for (t6=max(ceild(t4+1,2),ceild(t5-PB_P,2));t6<=min(min(floord(t5-1,2),t4),PB_Q-2);t6++) {
                  A[(t4-t6)][(t5-2*t6)+1][t6] = C[(t5-2*t6)][(t4-t6)][(t5-2*t6)-1][t6+1] * A[(t4-t6)][(t5-2*t6)+2][t6] - A[(t4-t6)+1][t6+1][(t5-2*t6)+1] * 1;;
                }
              }
            }
          }
          if ((PB_P == 0) && (t1 >= t2+t3)) {
            for (t4=max(max(max(1,32*t2),32*t3-PB_L+1),32*t1-32*t2-2*PB_L+3);t4<=min(min(min(PB_L-2,32*t2+31),32*t3+30),32*t1-32*t2+29);t4++) {
              for (t5=max(max(32*t3,t4+1),32*t1-32*t2-PB_L+2);t5<=min(min(32*t3+31,32*t1-32*t2+30),t4+PB_L-1);t5++) {
                for (t6=max(32*t1-32*t2,t5+1);t6<=min(32*t1-32*t2+31,t5+PB_L-2);t6++) {
                  B[(-t4+t5)][(-t5+t6)-1][t4+1] = D[t4-1][(-t4+t5)][(-t5+t6)] - B[(-t4+t5)-1][(-t5+t6)-1][t4] + B[(-t4+t5)-1][t4][(-t5+t6)+1] + 1;;
                }
              }
            }
          }
          if ((PB_P >= 1) && (t1 >= max(ceild(2*t2+t3+1,2),t2+t3))) {
            for (t4=max(max(max(1,32*t2),32*t3-PB_L+1),32*t1-32*t2-2*PB_L+3);t4<=min(min(min(PB_L-2,32*t2+31),32*t3+30),32*t1-32*t2+29);t4++) {
              for (t5=max(max(32*t3,t4+1),32*t1-32*t2-PB_L+2);t5<=min(min(32*t3+31,32*t1-32*t2+30),t4+PB_L-1);t5++) {
                for (t6=max(32*t1-32*t2,t5+1);t6<=min(32*t1-32*t2+31,t5+PB_L-2);t6++) {
                  B[(-t4+t5)][(-t5+t6)-1][t4+1] = D[t4-1][(-t4+t5)][(-t5+t6)] - B[(-t4+t5)-1][(-t5+t6)-1][t4] + B[(-t4+t5)-1][t4][(-t5+t6)+1] + 1;;
                }
              }
            }
          }
          if ((PB_P >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(1,2*PB_Q-4);t4<=min(29,PB_L-2);t4++) {
              for (t5=t4+1;t5<=min(30,t4+PB_L-1);t5++) {
                for (t6=t5+1;t6<=min(31,t5+PB_L-2);t6++) {
                  B[(-t4+t5)][(-t5+t6)-1][t4+1] = D[t4-1][(-t4+t5)][(-t5+t6)] - B[(-t4+t5)-1][(-t5+t6)-1][t4] + B[(-t4+t5)-1][t4][(-t5+t6)+1] + 1;;
                }
              }
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_P >= 1)) {
  for (t1=0;t1<=floord(3*PB_Q-8,32);t1++) {
    lbp=max(ceild(t1,2),ceild(32*t1-PB_Q+2,32));
    ubp=min(floord(2*t1+1,3),floord(PB_Q-3,16));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(t2,2*t1-2*t2);t3<=min(floord(2*PB_Q+PB_P-4,32),floord(64*t1-64*t2+PB_P+62,32));t3++) {
        for (t4=max(max(1,ceild(32*t3-PB_P,2)),32*t2);t4<=min(min(min(2*PB_Q-5,32*t2+31),32*t3+29),64*t1-64*t2+61);t4++) {
          for (t5=max(max(32*t3,t4+2),64*t1-64*t2+1);t5<=min(min(min(32*t3+31,2*t4+PB_P),2*PB_Q+PB_P-4),64*t1-64*t2+PB_P+62);t5++) {
            for (t6=max(max(ceild(t4+1,2),ceild(t5-PB_P,2)),32*t1-32*t2);t6<=min(min(min(floord(t5-1,2),t4),PB_Q-2),32*t1-32*t2+31);t6++) {
              A[(t4-t6)][(t5-2*t6)+1][t6] = C[(t5-2*t6)][(t4-t6)][(t5-2*t6)-1][t6+1] * A[(t4-t6)][(t5-2*t6)+2][t6] - A[(t4-t6)+1][t6+1][(t5-2*t6)+1] * 1;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L >= 3) && (PB_Q <= -1)) {
  for (t1=0;t1<=floord(PB_L-2,8);t1++) {
    lbp=max(max(0,ceild(16*t1-PB_L-14,32)),ceild(32*t1-3*PB_L+5,32));
    ubp=min(floord(t1,2),floord(PB_L-2,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(ceild(32*t1-32*t2-PB_L-29,32),t2);t3<=min(min(floord(PB_L-2,16),floord(32*t2+PB_L+30,32)),t1-t2);t3++) {
        for (t4=max(max(max(1,32*t2),32*t3-PB_L+1),32*t1-32*t2-2*PB_L+3);t4<=min(min(min(PB_L-2,32*t2+31),32*t3+30),32*t1-32*t2+29);t4++) {
          for (t5=max(max(32*t3,t4+1),32*t1-32*t2-PB_L+2);t5<=min(min(32*t3+31,32*t1-32*t2+30),t4+PB_L-1);t5++) {
            for (t6=max(32*t1-32*t2,t5+1);t6<=min(32*t1-32*t2+31,t5+PB_L-2);t6++) {
              B[(-t4+t5)][(-t5+t6)-1][t4+1] = D[t4-1][(-t4+t5)][(-t5+t6)] - B[(-t4+t5)-1][(-t5+t6)-1][t4] + B[(-t4+t5)-1][t4][(-t5+t6)+1] + 1;;
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
int vc = vC;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3224211213_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
