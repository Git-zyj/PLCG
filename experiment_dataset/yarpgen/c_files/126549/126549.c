/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_8);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((-1 ? -1 : 0))) ? var_9 : (max((max(1, (arr_1 [i_0]))), ((max((arr_0 [i_0]), 0))))));
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (arr_1 [i_0]);
        var_14 = 31;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_15 = (min((arr_7 [i_1]), -1));
            var_16 = (max((arr_6 [i_1]), (max((arr_9 [i_1] [i_2] [i_2]), var_12))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 *= (max((1 && 1), (arr_5 [i_1])));
            var_18 = (max((((arr_9 [i_3] [i_3] [7]) - (arr_9 [i_1] [i_1] [i_1]))), (((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_0 [i_1])))));
        }
        arr_13 [i_1] [i_1] = (((((arr_6 [i_1]) / 4377264009606327271))));
    }
    var_19 = ((~(var_10 & var_10)));
    var_20 ^= ((((min((((-35 ? 1 : 268435455))), (((-9223372036854775807 - 1) ? 4377264009606327280 : 4377264009606327271))))) ? (1 ^ var_8) : (!-var_4)));
    #pragma endscop
}
