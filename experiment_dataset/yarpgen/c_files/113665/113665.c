/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_19 *= 9223372036854775807;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_1] [i_0] = (max(1, (9223372036854775807 && 150)));
            var_20 *= ((((max((min((arr_6 [i_0 - 1]), 2088217163246419278)), ((-(arr_1 [i_0] [i_0])))))) ? 1 : ((var_8 - (min(1984, var_10))))));
        }
        var_21 -= arr_5 [i_0] [1] [i_0];
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 |= (((arr_9 [i_2]) - (arr_9 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_23 = ((((arr_1 [i_4] [i_2]) <= var_8)));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_24 = ((((!(arr_16 [i_3] [i_4]))) ? (arr_8 [i_2]) : (arr_16 [i_3] [i_5])));
                        var_25 = ((67 ? (arr_9 [i_5]) : (arr_1 [10] [i_5])));
                        arr_17 [i_3] [i_5] [i_4] [i_5] = (((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_14 [i_2])));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_26 = (251 - 255);
                        var_27 = 108;
                        arr_21 [i_3] [i_4] [i_6] = 249;
                        arr_22 [i_3] = (((arr_3 [i_3] [i_4]) ? ((~(arr_0 [i_3] [i_4]))) : (arr_6 [i_6])));
                    }
                    for (int i_7 = 4; i_7 < 9;i_7 += 1)
                    {
                        arr_27 [1] [i_3] [7] [i_4] [i_7] = ((var_8 >> (var_2 - 3586834230)));
                        arr_28 [i_3] = (arr_13 [i_7 - 3] [i_7 - 1] [i_7 + 2]);
                    }
                }
            }
        }
        arr_29 [i_2] [i_2] = var_5;
    }
    var_28 = (min(((908989052 ? ((var_2 ? 9 : var_11)) : (var_2 < 9007199254740864))), (((min(var_4, var_12))))));
    var_29 = ((var_17 * ((139 ? ((var_18 ? -2088217163246419279 : var_10)) : var_4))));
    var_30 = ((((max(var_0, var_17))) ? var_0 : (max(var_10, var_18))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                {
                    var_31 *= ((-(arr_0 [i_10 - 1] [i_10 - 1])));
                    arr_39 [i_8] [10] [i_9] = ((-(arr_2 [13])));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_32 *= (min((((3966390355 != (arr_4 [i_11 - 1] [i_11 + 1])))), (1 * 182)));
                                arr_45 [i_9] [i_11] [i_12] = ((((((((arr_14 [i_9]) ? var_18 : var_12))) < (((arr_11 [i_9] [i_9]) ? (arr_0 [i_8] [i_10]) : (arr_32 [i_11 - 1]))))) ? (((((72057594037927935 ? 431735867 : 163)) / var_3))) : (max((((var_11 - (arr_42 [i_9] [i_11] [i_10] [i_12])))), (min((arr_41 [i_9]), (arr_26 [i_8] [i_9] [2] [i_11] [i_11] [i_12])))))));
                                arr_46 [i_9] [i_8] [i_10] [i_12] = ((((max(var_11, ((2697484345 ? (arr_20 [i_12] [4] [i_10]) : (arr_42 [i_8] [i_8] [i_8] [i_8])))))) <= (((arr_12 [i_10 - 1] [i_11 + 1] [i_10]) ? (arr_10 [i_10] [12]) : -70))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
