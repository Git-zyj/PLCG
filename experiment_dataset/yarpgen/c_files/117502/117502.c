/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (!((((arr_0 [i_0]) ? -18033 : var_9))));
        var_13 = (max(var_13, (((-714268566785269934 ? -26038 : 2636301139)))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] = ((var_5 * (70366596694016 <= var_6)));
        arr_5 [i_1] [i_1] = (((arr_3 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_14 = (max(var_14, (arr_2 [i_2])));
            var_15 = (arr_9 [i_1]);
            arr_10 [i_1] [i_1] = 1;
            arr_11 [4] [i_1] [i_1] = (((((arr_3 [i_2]) ? var_1 : 4)) >= (arr_9 [1])));

            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_16 = var_2;
                    var_17 *= ((~(arr_14 [i_3 + 2])));
                    var_18 = (arr_9 [i_3 + 2]);
                    arr_17 [1] [1] = var_7;
                }
                var_19 = (((-46 > 9223372032559808512) | -712112178098573340));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_20 = (((1910536978 & 9470) ? ((18446744073709551600 ? (arr_2 [i_1]) : 1658666157)) : (arr_20 [5] [i_6 - 1] [i_5] [i_5] [i_3])));
                            var_21 ^= (((arr_12 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_6 - 1]) ? (arr_12 [i_3 - 1] [i_3 + 3] [1] [i_6 - 1]) : (arr_12 [i_3 + 2] [i_3 - 1] [i_5] [i_6 - 1])));
                        }
                    }
                }
                var_22 ^= ((arr_22 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3] [i_3] [i_3]) ? (arr_8 [i_3] [i_3]) : 1);
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 10;i_9 += 1)
            {
                {
                    arr_30 [i_7] [7] [6] = 4;
                    var_23 ^= (((18446744073709551615 ? (arr_20 [15] [12] [12] [15] [i_7]) : 1201099288)));
                }
            }
        }
        arr_31 [i_7] [0] = 1040336246;
    }
    #pragma endscop
}
