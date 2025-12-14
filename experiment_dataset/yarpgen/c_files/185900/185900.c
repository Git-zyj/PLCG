/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = ((-(-14352631528938086159 && var_1)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = var_15;
        var_21 = (min(var_21, ((((((var_9 ? (arr_0 [i_0]) : var_8))) ? (((~var_14) ? (min(var_17, var_7)) : (((((arr_1 [i_0]) || var_10)))))) : ((max((arr_0 [i_0]), (arr_0 [i_0])))))))));
    }
    #pragma endscop
}
