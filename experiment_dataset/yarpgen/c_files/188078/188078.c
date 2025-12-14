/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_3 ? (var_7 && var_9) : ((var_12 ? 1 : var_1)))), var_10));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max(var_16, var_8));
        var_17 = var_3;
        var_18 *= (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_19 = 11;
    var_20 = (min((max((min(var_2, var_0)), var_5)), (((var_3 < var_1) ? var_6 : 1))));
    #pragma endscop
}
