/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((!(arr_1 [i_0]))));
        arr_4 [6] = ((!(((~(arr_0 [i_0] [i_0]))))));
    }
    var_16 = (min((min(var_1, var_6)), (((~(!1642146831795529039))))));
    var_17 = (~4194304);
    var_18 |= -0;
    var_19 |= ((~((15 ? (!-1) : 0))));
    #pragma endscop
}
