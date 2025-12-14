/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_7;
    var_12 = (min((((((var_5 ? var_3 : var_4)) << (var_1 - 1993915815)))), var_10));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_13 = var_4;
        var_14 = (((((((1551348882 >> (var_3 - 161))) | ((8739841740869314185 ? var_3 : (arr_2 [13] [i_0])))))) ? (((((var_10 ? (arr_2 [i_0 + 4] [i_0]) : (arr_1 [i_0 - 2] [5])))))) : (((var_5 ^ var_5) >> (((((var_9 + 2147483647) << (var_10 - 3268276464822326609))) - 2147476221))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1]) ^ (((-4723 ? var_9 : var_1)))));
        var_15 ^= ((~(-4719 < 4719)));
        arr_6 [i_1 - 1] = ((var_2 ? 4733 : (((arr_4 [2]) ? (arr_0 [i_1]) : (arr_4 [i_1])))));
        arr_7 [i_1] = (arr_0 [i_1 + 1]);
    }
    var_16 = var_7;
    #pragma endscop
}
