/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = ((var_11 ? -var_16 : ((var_5 ? -var_16 : var_6))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (min(var_22, -var_14));
        var_23 = (((var_4 || var_13) && (var_19 && var_15)));
        var_24 = ((~(var_14 + var_17)));
        var_25 |= (((var_1 && var_4) && (((var_18 ? var_1 : var_11)))));
    }
    var_26 = (max(var_26, var_14));
    #pragma endscop
}
