/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((((var_11 ? 3846595252 : var_12))) ? var_2 : var_13)), var_12));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(var_16, (min(((-(arr_3 [i_0]))), ((((arr_0 [i_0]) ? (arr_0 [i_0]) : ((var_14 ? 448372043 : var_9)))))))));
        var_17 &= (((arr_1 [i_0]) ? (((arr_2 [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0] [i_0]))) : (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0])))));
        var_18 = (min((~1287), (((((1 ? (-32767 - 1) : -1556)) != 64261)))));
        var_19 = 5458282238190851166;
    }
    var_20 = ((((((min(var_6, var_10))) ? (var_14 ^ 8388607) : var_14)) >> (var_9 + 654673312)));
    #pragma endscop
}
