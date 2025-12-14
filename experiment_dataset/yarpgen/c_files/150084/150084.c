/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_15;
    var_17 = ((min((!var_2), (min(var_5, var_8)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = -6434189010233716415;
        var_19 = max(255, 44);
        var_20 += (!-var_5);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = (max(var_21, (((((min(var_3, (arr_4 [i_1] [i_1])))) <= (11 || 17))))));
        var_22 = (max(var_22, var_14));
    }
    var_23 = ((+(((~var_5) ? (max(1, var_12)) : var_4))));
    var_24 = (min(((((1 <= -102) < (var_9 % var_11)))), -var_4));
    #pragma endscop
}
