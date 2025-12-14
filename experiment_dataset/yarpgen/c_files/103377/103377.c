/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? 9223372036854775807 : var_6));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        var_11 = (min(var_11, (((~((((!243) || ((((arr_2 [1]) ? 195 : 2521299999986353209)))))))))));
        var_12 = (max((max(-1763669809719285208, 3206633922233910100)), -1));
        var_13 = (-6270728853547326947 > 4294967295);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_14 = (max((arr_2 [8]), var_6));
        arr_7 [6] [6] = (((((~(((arr_0 [i_1]) ? (arr_5 [1]) : 1))))) - 3214537566));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_15 = var_5;
        var_16 = (1 & 245);
        var_17 = ((~((274877906943 ? (arr_1 [1]) : (arr_1 [10])))));
        var_18 = max(1, 9);
    }
    #pragma endscop
}
