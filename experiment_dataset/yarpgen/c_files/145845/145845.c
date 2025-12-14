/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_1 ? (!0) : -3700854993710005735));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 = 1559675240;
        var_17 = ((8454634217826470800 ? (arr_2 [i_0]) : (arr_2 [i_0 + 1])));
    }
    var_18 = var_11;
    var_19 = var_9;
    var_20 = ((!((max(var_5, var_2)))));
    #pragma endscop
}
