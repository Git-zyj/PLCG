/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1 - 3] [i_1 - 3] [i_1 - 3] = (((arr_4 [i_1]) ? ((((arr_3 [i_1 - 1] [i_1 - 3]) - (arr_1 [i_1 - 3] [i_1 - 3])))) : (~1979098782)));
                    arr_9 [i_0] [i_0] [i_0] = -var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (arr_14 [i_0 + 2] [i_4] [i_4] [i_1 - 1] [i_4]);
                                var_13 = 0;
                                var_14 = (((arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 2]) & (2998877967 & 2998877943)));
                                arr_15 [i_1 - 2] [i_3] [i_1 - 2] [i_1 - 2] [i_0 + 1] = (arr_3 [i_4] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_15 = (max(var_15, ((((arr_16 [i_5] [i_5]) ? (arr_17 [i_5] [i_5]) : (arr_16 [i_5] [i_5]))))));
        var_16 = (min(var_16, var_11));
        var_17 = 46;
        var_18 = (arr_16 [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = ((((arr_17 [i_6] [i_6]) / (arr_20 [i_6]))));

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_19 = ((((((!((((arr_25 [i_6]) ? -30 : (arr_21 [i_6])))))))) | (((((var_6 ? (arr_21 [i_6]) : 25953))) ? (((~(arr_20 [i_6])))) : ((~(arr_19 [i_6] [i_6])))))));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_20 = ((((!(arr_21 [i_7])))));
                        var_21 += ((!(arr_26 [i_6] [i_8 - 2] [i_6])));
                        var_22 = (arr_18 [i_9]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    var_23 = (max(var_23, var_3));
                    var_24 = ((~(((!(arr_30 [i_6] [i_10] [i_10] [i_11]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_25 = (max(var_25, 9181));
                                var_26 = (arr_40 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 -= (var_0 | var_7);
    var_28 = var_9;
    #pragma endscop
}
