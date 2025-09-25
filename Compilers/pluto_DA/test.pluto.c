#include <omp.h>

#define S1(i,j)	A[i-1][i] = A[i-2][i] + B[i] - C[i][j+1] + C[i][j] * 6;
#define S2(i,k)	A[k+1][k] = A[i][k] - C[k][k+1] * C[k+1][i] * 4;

		int t1, t2;

	int lb, ub, lbp, ubp, lb2, ub2;
	register int lbv, ubv;

/* Start of CLooG code */
lbp=0;
ubp=1;
#pragma omp parallel for private(lbv,ubv,t2)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=2;t2<=PB_N-1;t2++) {
    S2(t2,t1);
  }
}
lbp=2;
ubp=PB_N-1;
#pragma omp parallel for private(lbv,ubv,t2)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=2;t2<=t1-1;t2++) {
    S2(t2,t1);
  }
  for (t2=t1;t2<=PB_N-1;t2++) {
    S1(t1,(-t1+t2));
    S2(t2,t1);
  }
  for (t2=PB_N;t2<=t1+PB_M-2;t2++) {
    S1(t1,(-t1+t2));
  }
}
lbp=PB_N;
ubp=PB_M-2;
#pragma omp parallel for private(lbv,ubv,t2)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=2;t2<=PB_N-1;t2++) {
    S2(t2,t1);
  }
}
/* End of CLooG code */
