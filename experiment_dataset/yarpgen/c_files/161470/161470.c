/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((var_8 ^ (arr_0 [i_0 - 1])));
        var_15 += 0;
        var_16 = var_9;
    }
    var_17 -= ((((((((var_1 ? 1152851135862669312 : var_6))) ? -0 : var_11))) ? (((((var_0 ? -22 : var_7))) ? (((max(var_5, var_5)))) : (var_6 + var_12))) : (((min(var_12, (-127 - 1))) | var_2))));
    var_18 = var_9;
    #pragma endscop
}
