/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_6;
    var_14 = var_11;
    var_15 = (max(var_15, ((((((var_8 & (var_7 * var_2)))) ? ((var_0 ? ((var_2 ? var_1 : var_3)) : (var_3 * var_3))) : ((var_10 - (var_1 / var_7))))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((((((-(arr_3 [i_2] [i_1] [i_0])))) ? (((arr_8 [i_0]) / (arr_2 [i_0] [i_0]))) : (((arr_3 [22] [i_1] [i_0]) - (arr_8 [i_0]))))) * ((((!(((~(arr_2 [18] [18])))))))))))));
                    arr_10 [i_0] [5] [i_2] = (((((~((~(arr_2 [i_0] [i_0])))))) ? ((~(((arr_1 [i_0 + 1]) ^ (arr_9 [i_0] [i_0] [i_2] [i_2]))))) : ((~((~(arr_0 [2])))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = ((((!((((arr_0 [i_0]) ? (arr_9 [i_0] [i_0] [i_3] [i_0]) : (arr_0 [i_0])))))) && ((((((arr_9 [i_3] [i_3] [i_0] [i_0]) | (arr_3 [i_0] [i_0] [i_0]))) * ((((arr_0 [i_0 + 1]) ? (arr_4 [i_3]) : (arr_9 [i_0] [i_0] [i_3] [i_0])))))))));
            arr_14 [i_0] [i_0 + 1] [i_3] = (arr_8 [i_3]);

            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] = (~57916);
                arr_19 [i_3] = (arr_6 [i_0] [i_4]);
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_22 [24] [i_5] = (((!(arr_8 [i_5]))) ? (arr_4 [i_0]) : ((((((arr_4 [i_0]) + (arr_16 [1] [i_5])))) ? (arr_11 [i_0] [i_5]) : (((arr_16 [i_0] [i_0]) ? (arr_20 [i_5]) : (arr_11 [i_0 + 1] [i_5]))))));
            var_17 = (min(var_17, (((arr_17 [i_5] [i_5] [i_5] [i_5]) ? ((((((arr_8 [i_5]) ? (arr_21 [i_0] [i_0]) : (arr_6 [i_0] [20])))) ? (arr_20 [i_0]) : ((~(arr_5 [i_5]))))) : (((((arr_7 [i_0] [i_5] [i_5] [i_0]) - (arr_4 [i_0]))) - (arr_20 [i_0])))))));
            var_18 += ((!((((((arr_0 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_5]))) - (arr_12 [i_0] [i_5] [20]))))));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            arr_26 [i_0] = (((((arr_9 [i_6] [18] [i_6] [18]) ^ (arr_2 [i_0] [i_6 + 2]))) + (((arr_23 [i_0] [i_6] [i_6]) ? (arr_24 [i_6] [i_0]) : (arr_8 [i_0])))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {
                        var_19 = (max(var_19, (((~(arr_28 [i_0] [i_0] [24] [24]))))));
                        var_20 = (arr_21 [i_0] [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
