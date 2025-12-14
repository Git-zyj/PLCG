/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max((((min(var_13, var_0)) + var_4)), var_14));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (((arr_3 [i_0] [i_1]) + var_5));
                        arr_10 [i_3] = ((1 && (arr_6 [i_1] [i_3])));
                        var_19 = (min(var_19, (-1 * var_6)));
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (min(var_20, var_14));
                        arr_13 [i_4] [i_2] [i_0] [i_0] = (((arr_11 [i_1]) | (!0)));
                        var_21 = (!(((var_16 ? (arr_7 [i_1] [i_1] [i_4]) : var_10))));
                        arr_14 [i_0] [i_0] [i_1] [1] [i_1] [i_4] = ((((arr_11 [i_0]) ? 0 : (arr_1 [i_4]))));
                        var_22 ^= ((-804625640 ? (arr_9 [i_1] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1]) : var_16));
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] = (arr_3 [i_5 + 1] [i_5 + 2]);
                        var_23 = (min(var_23, (((var_15 ? (arr_9 [5] [i_2] [i_5] [i_5 - 1] [i_5] [15]) : (arr_9 [i_0] [i_0] [i_1] [i_5 - 1] [i_5 + 2] [i_5]))))));
                    }
                    var_24 = var_6;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_25 = ((var_0 ? (var_15 / var_12) : (arr_0 [i_0])));
                    arr_22 [i_0] [i_6] [i_0] = (!(arr_11 [i_1]));
                    arr_23 [i_0] [i_6] = (((!16833) ? (arr_8 [i_0] [i_1] [i_6] [i_6]) : (arr_6 [i_6] [i_0])));
                    arr_24 [i_0] [i_0] [i_6] = ((arr_3 [i_0] [i_6]) ^ (arr_3 [i_6] [i_0]));
                }
                var_26 = (min((((1200016918 & var_0) ^ (((var_3 ^ (arr_2 [i_1] [i_0] [i_0])))))), (((13 ? var_3 : ((max(var_13, (arr_7 [i_0] [i_1] [i_1])))))))));
            }
        }
    }

    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                {
                    var_27 ^= ((((max((((var_12 / (arr_31 [i_8])))), ((var_16 * (arr_28 [4] [i_7])))))) ? (((var_0 / (arr_1 [i_7 - 1])))) : (((10 / 1) * (max(-2147483626, (arr_11 [i_8])))))));
                    var_28 ^= ((125 ? ((min(var_11, ((var_10 ? -804625640 : -39))))) : (min((((arr_9 [i_9] [i_9 - 1] [i_8 + 1] [i_7] [i_7] [i_7]) ? (arr_25 [i_7]) : var_16)), (arr_29 [i_7 + 1] [i_8 + 2] [i_9 + 1])))));
                    arr_32 [i_8] [i_8] = (arr_3 [i_7 - 2] [5]);
                }
            }
        }

        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_29 = (arr_16 [i_7] [i_10]);

            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                var_30 = (max(var_30, (((((max((max(var_15, var_3)), (!180651571)))) ? ((min(2091, (max(var_7, (arr_9 [i_7] [i_10] [i_7] [i_10] [i_7] [i_7])))))) : (min(var_14, (((arr_15 [i_7] [i_7] [i_10] [i_11] [i_11]) ? var_0 : var_11)))))))));

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_44 [i_7] [i_12] [i_11] [i_12] = var_15;
                    var_31 = (((((-(arr_20 [i_10 + 1] [i_10 + 1] [i_12])))) ? ((((((124 == (arr_8 [i_7] [3] [i_11 - 1] [i_12]))) || (528482304 + -725166028))))) : (min(var_11, var_0))));
                }
                arr_45 [i_7] [i_7] [i_7] [9] = (((arr_11 [17]) >= (((~(arr_1 [i_7 - 2]))))));
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_48 [i_7 - 2] [i_7] [i_7 - 1] = (((var_7 || 15) < (!var_13)));
            var_32 = -var_2;
            var_33 -= ((((var_4 ? var_7 : var_11))) || var_10);
        }
        var_34 *= ((((max(3653, (var_1 * 2354547027)))) ? ((var_1 + (arr_39 [i_7] [i_7] [1]))) : var_5));
    }
    for (int i_14 = 2; i_14 < 13;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_35 = var_4;
                    var_36 = (min(var_36, ((((((arr_35 [i_14] [i_14 + 1] [i_14 - 1]) && (arr_35 [i_16] [11] [i_14]))) ? (arr_35 [i_14] [i_15 - 1] [i_16]) : -5)))));
                }
            }
        }
        arr_55 [i_14] = ((65535 | ((-((804625639 ? var_1 : (arr_15 [i_14] [i_14] [i_14] [i_14] [i_14])))))));
    }
    /* LoopNest 2 */
    for (int i_17 = 2; i_17 < 21;i_17 += 1)
    {
        for (int i_18 = 4; i_18 < 22;i_18 += 1)
        {
            {
                var_37 = (((max(4094, ((((arr_56 [i_18]) / var_4))))) <= (var_7 % var_5)));
                /* LoopNest 3 */
                for (int i_19 = 1; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 4; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 22;i_21 += 1)
                        {
                            {
                                var_38 = ((((((max((arr_66 [i_18 - 1] [i_18 - 1] [i_20 - 3] [i_21]), var_1))) + ((max((arr_59 [i_17] [i_18]), (arr_64 [i_17] [0] [i_17] [i_17])))))) - var_11));
                                arr_69 [1] [i_17] [i_17] [i_20] [i_21 - 1] = min((arr_61 [i_17] [i_17] [i_17]), ((-17 ? ((((arr_57 [i_18] [i_18 + 1]) + 1405715433))) : (1048575 | var_15))));
                                var_39 = (arr_59 [i_17] [i_17]);
                            }
                        }
                    }
                }
                var_40 ^= arr_64 [i_17 + 2] [i_18 - 4] [i_18 - 4] [i_18 - 2];
            }
        }
    }
    #pragma endscop
}
