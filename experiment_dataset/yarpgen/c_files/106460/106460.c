/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [2] = (((arr_1 [i_0]) + -5227696585849705520));
        var_20 = var_15;
        arr_3 [i_0] = var_18;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_21 = (min(10174465432287704652, 10174465432287704640));
        var_22 = (max(var_22, ((~(((-var_3 != (arr_5 [i_1] [i_1]))))))));
        arr_6 [i_1] = -var_16;
    }
    var_23 = (var_6 ? var_10 : ((var_2 >> (var_13 - 3336526319))));
    #pragma endscop
}
