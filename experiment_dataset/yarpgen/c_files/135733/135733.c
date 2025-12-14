/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = arr_0 [7];
        var_13 = (((arr_0 [i_0 - 1]) ? var_11 : var_0));
    }
    var_14 |= (((-18 / -1) ? ((-(1 & 1))) : 1));
    var_15 = ((((var_2 ? var_11 : ((var_6 ? 1 : var_7)))) & ((var_2 & (var_9 / var_1)))));
    var_16 = var_0;
    #pragma endscop
}
