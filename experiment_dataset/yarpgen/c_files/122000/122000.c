/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_0;
    var_12 = ((((~((min(14730, 2847))))) / var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_13 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : ((var_9 / (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((~(arr_4 [i_1] [i_1])))) ? ((((!(arr_4 [i_1] [i_1]))))) : ((var_7 / (arr_4 [i_1] [i_1]))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_14 = ((-16384 ? 2828 : -32741));

                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    var_15 = (max(var_15, ((((arr_14 [i_3] [i_3] [i_3] [i_3] [i_4 - 1]) == (arr_8 [i_3] [i_4 - 2]))))));

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_4] [i_3] [i_4] [i_5] = (arr_14 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_5 + 1]);
                        arr_20 [i_1] [i_4] [i_1] [15] [12] [i_5 - 1] = (((arr_9 [i_4 - 1] [i_5 + 2]) * (arr_9 [i_4 - 2] [i_5 - 1])));
                        arr_21 [1] [i_4] [15] [i_3] [i_3] [i_4] [i_1] = (((arr_15 [i_1] [i_2] [i_4 + 2] [1]) - (arr_4 [i_1] [i_1])));
                        var_16 *= (((arr_13 [i_4 + 2] [i_5 - 1] [1] [11]) ^ ((var_9 ? (arr_10 [i_1] [i_2]) : -1))));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        arr_24 [i_6] [i_4] [i_3] [i_4] [i_1] = (((arr_13 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6]) | (arr_23 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6] [i_6])));
                        arr_25 [i_1] [i_1] [i_1] [15] [i_4] [i_1] = (arr_22 [i_1] [i_1] [i_4] [i_1]);
                        arr_26 [i_1] [i_4] [i_3] [8] [i_4] = ((815987768 ? 8659012502765537542 : 2));
                        arr_27 [i_4] [i_4 - 2] [17] = (arr_14 [i_4 - 3] [i_4] [19] [i_4 + 1] [18]);
                        arr_28 [3] [i_2] [i_2] [i_2] [i_4] [i_2] = (arr_17 [i_4] [i_2]);
                    }
                    arr_29 [i_1] [i_4] [i_1] [13] [i_1] = ((((((arr_11 [1]) ? (arr_5 [i_1]) : var_3))) ? (arr_23 [i_1] [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]) : ((((arr_11 [i_1]) ? (arr_5 [i_1]) : (arr_15 [i_1] [i_1] [i_1] [i_1]))))));
                    var_17 = ((!((((arr_12 [i_4]) / (arr_4 [i_3] [10]))))));
                    arr_30 [i_1] [0] [i_1] [i_4] = (arr_10 [1] [21]);
                }
                arr_31 [19] = 1;
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_18 = (((arr_6 [i_2]) ? (arr_17 [i_7] [i_2]) : ((((arr_16 [4] [i_2] [i_7]) && -14127)))));
                    arr_37 [i_1] [i_1] [i_7] [i_7] [i_7] = ((arr_16 [15] [i_2] [i_2]) & (arr_16 [i_1] [i_1] [i_8]));
                    var_19 ^= 1;
                }
                arr_38 [i_1] [i_7] [i_1] = ((arr_18 [i_1]) ? var_5 : (arr_18 [i_1]));
            }
            arr_39 [i_2] = (!(arr_10 [i_1] [i_1]));
            var_20 = (max(var_20, (~50806)));
        }
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_46 [i_9] [i_10] = (min((arr_11 [i_9 - 1]), -var_2));
                    var_21 = (min(var_21, ((max((((((-31710 ? 2847 : 1)) / (~var_8)))), (((arr_22 [i_9 - 4] [i_9 - 1] [i_1] [i_9]) / (var_1 & var_3))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_22 = (arr_32 [i_12] [i_1]);
                                arr_51 [i_9] [i_1] [i_1] [i_1] [i_9] = (arr_36 [i_12] [1] [1] [i_12] [i_12] [i_12 - 3]);
                                arr_52 [i_9] [i_9 + 3] [i_9] [i_9] [i_9 + 2] = ((-((~(((arr_22 [i_1] [i_1] [i_9] [i_1]) ? var_0 : (arr_44 [i_9] [i_9] [i_11] [i_9 - 4])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
