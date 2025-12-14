/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((~var_11) - -6111800998452406694)), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((!((((arr_0 [i_0]) ^ var_4)))));
                var_15 = max((max((((var_9 ? (arr_1 [i_1]) : var_7))), ((var_11 ? 178 : var_10)))), ((((arr_0 [i_1]) ? ((0 ? 0 : var_9)) : 1))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = ((~(((-1 | var_12) ? (arr_6 [i_2]) : ((66 ? (arr_5 [i_2]) : 12))))));
        arr_8 [i_2] = (max((min((arr_5 [i_2]), ((var_10 ? var_3 : (arr_6 [i_2]))))), (((!(arr_6 [i_2]))))));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_16 -= ((-(!176)));

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_15 [i_2] [i_3] [i_3] = (min(((((32 < 24) && 78))), ((((-(arr_5 [i_2]))) | ((min(-10655, 0)))))));
                var_17 = var_8;
                var_18 = (max(var_18, -477));
            }

            /* vectorizable */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_19 = (((arr_13 [i_2] [i_3]) ? -77 : (arr_13 [i_3] [i_5])));
                            var_20 = (((arr_11 [i_2]) ? (arr_11 [i_6]) : (arr_9 [i_6] [i_5] [i_3])));
                            arr_23 [i_3] = ((-(((arr_10 [i_2] [i_3] [5]) ? var_2 : (arr_11 [i_5])))));
                            var_21 = (((arr_5 [i_2]) && (((96 ? (arr_21 [i_2] [i_3] [i_5] [i_5] [i_5] [i_6] [9]) : (arr_12 [i_3]))))));
                        }
                    }
                }
                var_22 = (((arr_21 [i_5] [i_3] [5] [i_2] [16] [i_5] [i_3]) | (arr_14 [i_2] [i_3])));
                arr_24 [i_3] = ((~(arr_11 [i_5])));
                var_23 = var_10;
            }
            for (int i_8 = 4; i_8 < 16;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_24 = ((((((arr_10 [i_8 + 2] [i_3] [i_9 + 1]) + (arr_17 [i_8 + 2] [i_8 - 2] [i_9 + 1])))) ? (arr_18 [i_8 + 2] [i_8 - 2] [i_9 + 1]) : (max(var_12, (arr_17 [i_8 + 2] [i_8 - 2] [i_9 + 1])))));
                            arr_31 [13] [i_3] [i_2] [i_9] [i_10] = (((((~-477) ? (arr_10 [i_2] [i_3] [i_10]) : ((~(arr_6 [i_2]))))) % 5));
                            var_25 = (arr_6 [i_2]);
                        }
                    }
                }
                var_26 = (((-32767 - 1) ? -118 : -13366));
                var_27 = (((((0 ? 3988981291 : (12 & 12)))) ? (max((1446017237 || -27894), ((-477 ? 0 : (arr_12 [i_3]))))) : (((~var_3) ? (-1 % -14) : (((arr_10 [i_8] [i_3] [i_2]) ? var_11 : 0))))));
                var_28 = (((((((min((arr_27 [i_2]), (arr_29 [i_8] [i_3] [i_3] [i_2])))) ? (min(96, var_3)) : -8192))) ? 4103 : (((arr_29 [i_2] [i_3] [i_3] [i_2]) ? -13 : (arr_18 [i_2] [i_2] [i_8 - 4])))));
            }
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                var_29 = (min((min((arr_18 [i_11 + 3] [i_11 - 1] [i_11 - 1]), var_7)), (((arr_9 [i_11 - 2] [i_11 - 1] [i_11 - 1]) - (arr_18 [i_11 - 1] [i_11 - 1] [i_11 + 1])))));
                var_30 = ((((arr_28 [i_3] [i_3] [i_3]) && (arr_28 [i_3] [i_3] [i_2]))) ? (((0 ^ var_2) ? (arr_22 [i_11 + 2] [i_11] [i_11] [i_11] [i_11]) : (max(var_12, -1)))) : (!var_2));
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                arr_36 [i_2] [i_3] [i_12] [i_12] = (arr_12 [i_3]);
                var_31 = ((!((max(3209207182049341314, -15)))));
                arr_37 [i_3] = ((~(((!(((arr_19 [i_2] [i_2] [i_12] [i_2]) || (arr_29 [i_12] [i_12] [i_3] [17]))))))));
            }
            arr_38 [i_3] = ((((((arr_32 [i_2] [i_2] [i_2] [i_2]) ? (arr_32 [i_3] [i_2] [i_2] [i_2]) : (arr_34 [i_2] [i_3] [i_3] [i_3])))) ? (arr_10 [i_2] [i_3] [i_2]) : (arr_6 [i_2])));
            var_32 ^= ((!(arr_6 [i_2])));
        }
        arr_39 [6] = ((0 ? (((!-13) | var_4)) : (((arr_13 [i_2] [i_2]) ? (arr_13 [i_2] [i_2]) : (arr_13 [i_2] [i_2])))));
    }
    var_33 = min((max((var_4 | var_4), ((var_3 ? var_1 : var_3)))), (((~(min(var_4, var_2))))));
    #pragma endscop
}
