/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = var_8;
        var_21 = (((((var_13 ? var_1 : var_0))) ? var_15 : ((var_4 ? var_16 : var_0))));
        var_22 = (min(var_22, (((var_8 ? var_3 : (~var_12))))));
        var_23 = (min(var_23, (((var_15 ? ((var_6 ? var_3 : var_14)) : (var_14 | var_3))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_24 = (min((min((var_0 <= var_2), (min(var_3, var_19)))), (!var_1)));
        var_25 = (max(var_25, ((((((var_13 - var_11) / (var_4 % var_11))) - ((var_5 ? (max(var_10, var_18)) : ((max(var_9, var_3))))))))));
    }
    var_26 = (var_0 ? var_17 : ((((min(var_1, var_17))) ? (var_11 | 223) : var_4)));
    #pragma endscop
}
