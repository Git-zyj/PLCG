/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? var_11 : var_10));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = var_13;
        arr_2 [i_0 - 1] = 46345;
    }
    var_17 = 1;
    var_18 = 1;
    #pragma endscop
}
