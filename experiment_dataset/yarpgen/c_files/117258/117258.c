/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((var_0 ? (((((126 ? var_4 : 123))) ? (25068 * var_3) : (min(-3923906307436677350, var_0)))) : (min(3923906307436677351, 38))))));
    var_11 = ((~(3923906307436677340 < var_6)));
    var_12 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((arr_1 [i_0]) < (arr_1 [i_0]));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = var_6;
            var_15 = ((var_4 ? var_3 : (arr_5 [0] [i_1])));
            arr_6 [i_0] = (arr_2 [i_0]);

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                var_16 = (min(var_16, (((-((1714332398223745632 ? 47618 : -3923906307436677350)))))));
                var_17 = (((1 ^ 255) ? (arr_4 [i_2 + 1]) : (arr_4 [i_2 + 1])));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_18 = (var_3 ? (-2 + var_8) : var_2);
                    var_19 = (min(var_19, (((-17806 ? (arr_4 [i_0]) : (!8589934591))))));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_18 [i_4] [i_4] [i_2] [i_4] [i_1] &= ((var_2 ? ((~(arr_0 [i_0]))) : (arr_12 [i_0] [i_1] [i_2 + 1] [i_4])));
                    var_20 = (max(var_20, 528024546));
                    var_21 = arr_2 [i_4];
                    var_22 = (max(var_22, (arr_14 [i_2] [i_2] [i_2 + 1] [i_2 + 1])));
                }
            }
        }
        var_23 = var_0;
    }
    #pragma endscop
}
