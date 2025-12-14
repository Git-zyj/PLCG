/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = (min(var_4, (((!((max(var_3, 13297715633250498878))))))));
                    var_11 = ((((arr_1 [i_0] [i_1]) && 18446744073709551615)) ? ((((arr_1 [i_1] [i_0]) ? 28681 : (arr_1 [i_2] [i_0])))) : (max(var_3, var_0)));
                    var_12 = (min(var_12, (min((arr_5 [i_1]), var_4))));
                }
            }
        }
        var_13 *= var_1;
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_14 = (max(var_14, var_9));
                    var_15 = (min(var_15, var_5));
                }
            }
        }
        var_16 |= (min((((arr_13 [i_3 + 1] [i_3] [i_3 - 1] [i_3]) ? (arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]) : var_1)), 2147483647));
        var_17 = (max(var_17, (max((((arr_10 [i_3 + 1] [i_3 - 1]) * (arr_13 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1]))), ((var_0 ? (arr_10 [i_3 - 1] [i_3 - 1]) : (arr_13 [0] [i_3] [i_3] [i_3 + 1])))))));

        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            var_18 += (-28682 <= 13297715633250498901);
            var_19 = (min(((1734815691 ? ((var_0 | (arr_8 [i_3] [i_6]))) : (max((arr_15 [i_3] [i_3] [i_3] [i_3]), -1007405981)))), ((min(57, -20691)))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_20 = (max((max(4062484671, var_2)), (((179 - (min((arr_20 [i_3] [i_3 - 1] [i_8] [i_3] [i_3 + 1]), 1407343471)))))));
                            arr_27 [i_3] [i_3] [i_8] [i_8] [i_9] = (65517 & 58975);
                        }
                    }
                }
            }
            var_21 = ((+(((arr_13 [i_6 + 1] [2] [i_6 - 2] [i_6 - 2]) % var_8))));
            var_22 = (arr_18 [i_3 + 1] [i_3 - 1] [2]);
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_23 &= ((max((((6566 ? var_6 : var_3))), (((arr_22 [i_10] [2] [2] [i_10]) >> (var_1 - 2787))))));
        var_24 += ((var_7 ? (arr_12 [i_10] [i_10]) : (((var_8 || var_4) ? ((((arr_12 [i_10] [i_10]) && (arr_10 [i_10] [i_10])))) : var_3))));

        for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_25 -= var_4;
            arr_32 [i_10] = ((((2433904446 & (10847882731049760039 || 13886))) << (((arr_16 [1]) + 5085))));
        }
        for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
        {
            var_26 = ((((min(4294967295, (arr_35 [i_10] [i_12]))))));
            var_27 = (((((-((min((arr_8 [i_10] [i_12]), (arr_34 [i_10] [i_10]))))))) ? (((arr_28 [i_12 + 2] [14]) + 40392)) : (!4062484689)));
            var_28 = var_6;
            arr_36 [i_10] [0] = (max((0 || var_7), ((~(var_9 || var_6)))));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_45 [i_10] [i_10] [i_10] [i_10] [9] = max((((7598861342659791568 && (arr_30 [i_14 + 1] [i_13 + 2] [i_12 + 1])))), (max((min(var_1, 10847882731049760051)), (min((arr_22 [i_10] [i_10] [i_13 - 1] [i_15]), -1511751053)))));
                            var_29 *= ((!(arr_12 [i_10] [i_12])));
                            var_30 = ((arr_19 [2] [2] [i_13] [16]) ? (max((var_3 ^ var_5), var_2)) : (~0));
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                var_31 *= (((1301102942420742402 | var_7) && ((max((arr_20 [i_10] [i_16] [i_17] [i_17] [i_16]), var_3)))));
                var_32 = 3056361260;
                var_33 = -25335;
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 12;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        {
                            var_34 = max((max((arr_50 [i_17] [i_17] [i_17]), (arr_50 [i_18] [i_18 + 3] [i_18 - 1]))), 134184960);
                            var_35 = (((arr_25 [i_18] [i_18] [i_17] [i_16] [i_10]) ? var_5 : var_0));
                            var_36 = 10094;
                        }
                    }
                }
            }
            var_37 = (var_2 >> (((max(var_1, (max(2950852129, var_2)))) - 7991928543527223659)));
        }
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            var_38 = (min(((((~146) && (arr_22 [i_10] [i_10] [i_10] [i_10])))), (arr_59 [i_10] [i_10] [i_10])));
            var_39 = (min((((arr_8 [i_10] [i_10]) ? -1800449594 : (arr_8 [i_10] [i_10]))), (((arr_8 [i_20] [i_10]) & (arr_8 [i_10] [i_10])))));
            var_40 = (max(var_40, ((((min(var_9, var_1)) > var_9)))));
            var_41 = ((255 ? (arr_24 [i_20] [i_20] [i_20] [3] [i_20]) : var_4));
        }
        var_42 = (max((arr_31 [i_10]), (((arr_49 [4] [i_10] [4]) ? var_8 : var_9))));
        var_43 = (((((((max(var_8, var_7))) ? ((((!(arr_18 [i_10] [i_10] [i_10]))))) : (arr_40 [i_10] [i_10] [i_10] [i_10])))) || (arr_46 [i_10] [i_10])));
    }
    for (int i_21 = 1; i_21 < 18;i_21 += 1)
    {
        var_44 = 58527;
        arr_64 [i_21] [18] = (var_2 | 61796);
        arr_65 [i_21] = var_3;
    }
    var_45 = var_0;
    var_46 = var_1;
    #pragma endscop
}
