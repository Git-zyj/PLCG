
#define S1(t,i)	B[i] = 0.33333 * (A[i-1] + A[i] + A[i + 1]);
#define S2(t,i)	A[i] = 0.33333 * (B[i-1] + B[i] + B[i + 1]);

		int t1, t2, t3;

	int lb, ub, lbp, ubp, lb2, ub2;
	register int lbv, ubv;

/* Start of CLooG code */
if ((_PB_N >= 3) && (_PB_TSTEPS >= 1)) {
  S1(0,1);
  for (t1=2;t1<=3*_PB_TSTEPS+_PB_N-5;t1++) {
    if (t1 <= 3*_PB_TSTEPS-2) {
      if ((2*t1+1)%3 == 0) {
        S1(((t1-1)/3),1);
      }
    }
    lbp=max(ceild(2*t1+2,3),t1-_PB_TSTEPS+1);
    ubp=min(floord(2*t1+_PB_N-2,3),t1);
#pragma omp parallel for private(lbv,ubv,t3)
    for (t2=lbp;t2<=ubp;t2++) {
      S1((t1-t2),(-2*t1+3*t2));
      S2((t1-t2),(-2*t1+3*t2-1));
    }
    if (t1 >= _PB_N-1) {
      if ((2*t1+_PB_N+2)%3 == 0) {
        S2(((t1-_PB_N+1)/3),(_PB_N-2));
      }
    }
  }
  S2((_PB_TSTEPS-1),(_PB_N-2));
}
/* End of CLooG code */
