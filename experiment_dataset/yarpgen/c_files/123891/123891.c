/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_1));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = var_5;
        var_18 -= (((max(-8942, (max((arr_1 [10]), 2578196131943181734)))) >= (((min(-6327, var_6))))));
        var_19 = (min(var_19, (arr_0 [i_0 + 2])));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_20 *= (min((max((((arr_3 [i_1 - 1] [12]) ? (arr_2 [2] [i_1]) : (arr_2 [4] [i_1 - 2]))), var_11)), ((((var_15 * var_3) && (!2382985321))))));
        var_21 = (((max(var_14, ((var_15 ? -53 : (arr_2 [i_1] [i_1]))))) * ((min((arr_3 [i_1] [i_1]), (arr_2 [i_1] [i_1 - 1]))))));
    }
    #pragma endscop
}
