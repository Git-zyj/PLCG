/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = ((var_0 ? 96220619 : var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = 96220609;
        var_20 = -96220620;
        var_21 = (arr_1 [i_0]);
    }
    #pragma endscop
}
