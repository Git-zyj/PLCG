/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((max(87, -14332))) ? var_8 : ((var_15 ? -14329 : var_8))))) ? ((14332 ? var_0 : var_16)) : var_11));
    var_18 = ((((((min(var_12, var_1))) ? var_5 : var_4))) ? var_0 : (((((82 ? var_14 : var_8))) ? 32767 : ((max(1, var_12))))));
    var_19 = (((((((var_13 ? 112 : -8660257052184748089)) + (((var_9 ? var_6 : var_6)))))) ? (var_0 & 0) : ((max(((max(var_4, 21029))), var_9)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = var_2;
        var_21 = ((var_0 ? (arr_0 [i_0 - 2] [i_0 + 1]) : 16));
    }
    #pragma endscop
}
