/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = ((-1317300149 ? ((((arr_0 [i_0]) && var_1))) : ((-((1028291909 ? var_0 : 88))))));
        var_12 = (min(var_12, ((~(arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (+(((((-116 ? (arr_0 [i_0]) : var_8))) ? (((arr_1 [i_0] [i_1]) ? var_3 : (arr_2 [i_1]))) : ((max((arr_0 [i_1]), 0))))));
            var_13 = (arr_4 [i_0]);
            var_14 = (min(var_14, 1278011492825285212));
        }
        var_15 = max(((~((var_6 ? (arr_2 [i_0]) : 1697744078)))), (arr_4 [i_0]));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = ((~((-((1 ? var_1 : (arr_7 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    var_17 ^= (((max((arr_11 [i_2] [i_3] [i_2]), ((((arr_13 [i_3] [i_3] [i_3]) ^ var_4)))))) || (-127 - 1));
                    arr_16 [i_2] [i_3] [i_2] = ((((-(arr_14 [i_4] [i_2] [i_2] [i_4 - 1])))) ? ((min(var_9, (arr_13 [i_4 - 2] [i_4 - 1] [i_4 - 2])))) : ((~(arr_13 [i_4 - 2] [i_4 - 2] [i_4 + 1]))));
                    arr_17 [i_2] [i_2] [i_2] = (arr_10 [i_2] [i_3] [i_4]);
                }
            }
        }
        var_18 = (max(var_18, ((+((9223372036854775807 ? (arr_14 [i_2] [10] [i_2] [i_2]) : -var_0))))));
    }
    var_19 = (max(var_19, (!36028797018701824)));
    var_20 |= (((((((max(var_5, 1227502348))) ? (var_4 - var_1) : var_1))) ? ((~((var_0 ? -122 : var_2)))) : ((~(~-122)))));
    #pragma endscop
}
