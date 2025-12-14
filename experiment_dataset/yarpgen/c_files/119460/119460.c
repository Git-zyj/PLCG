/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_7);
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (min(var_12, (((((((39378 && var_6) ? var_8 : (((arr_0 [i_0]) ? (arr_1 [i_0] [13]) : (arr_1 [i_0] [i_0])))))) ? (((arr_0 [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 2903678177167208107)) : (max(var_7, var_8)))) : var_9)))));
        var_13 = (((((~(arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_14 &= ((((min((((arr_1 [i_0] [i_0]) / 71)), ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))) - var_7));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_15 = (!var_0);
        var_16 = (min((((arr_3 [i_1 + 1] [i_1]) * (((161 ? 4155 : var_0))))), ((((arr_1 [i_1 + 1] [i_1 - 1]) != 175)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = ((!(((var_9 ? 71 : var_9)))));
        var_18 = (min(((((((arr_7 [i_2]) ? var_2 : 196))) & var_1)), ((((arr_4 [i_2]) | 71)))));
        var_19 = (max(var_19, (((~((-(arr_7 [1]))))))));
        var_20 = ((~var_8) ? ((var_4 ? (arr_2 [i_2]) : 6781685224349929747)) : (((max((arr_2 [i_2]), (arr_2 [i_2]))))));
    }
    #pragma endscop
}
