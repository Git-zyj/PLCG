/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (12220 / 12234)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = var_7;
                    var_17 *= (((var_4 ^ (arr_4 [i_1 - 1] [i_1] [i_1 - 1]))));
                    var_18 = var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            {
                arr_15 [i_3] = 12213;
                arr_16 [i_4 - 1] [i_3] = ((~(65 & 1)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_19 *= (arr_14 [i_3] [i_3] [i_7]);
                                var_20 = (((arr_25 [i_3] [i_3 - 4] [i_4 + 1]) & (arr_25 [i_3] [i_3 - 2] [i_4 - 1])));
                                var_21 = ((-((var_13 ? (arr_23 [2] [i_6] [i_6]) : var_4))));
                            }
                            for (int i_8 = 0; i_8 < 25;i_8 += 1)
                            {
                                var_22 = (max(var_22, ((max((arr_17 [i_3 + 1] [i_3 - 3] [i_3 - 4] [i_4 + 1]), (arr_29 [i_3 - 4] [i_3 - 1] [i_4 - 1] [i_4 - 1] [7]))))));
                                var_23 = (arr_17 [1] [i_5] [i_4 - 1] [1]);
                                arr_30 [i_3] [i_3] [i_3] = ((~(max((((arr_19 [i_3] [i_3] [i_3]) ^ (arr_26 [i_3] [i_4 + 1] [i_5] [i_3] [i_3]))), (!var_12)))));
                            }
                            for (int i_9 = 4; i_9 < 22;i_9 += 1) /* same iter space */
                            {
                                var_24 = (min(var_24, (arr_25 [i_3] [8] [i_5])));
                                var_25 = (max(var_25, ((max((((-((var_14 ? var_6 : -1521808303))))), (arr_23 [i_3] [i_3] [i_3]))))));
                                arr_34 [i_3] = (min(var_12, (((arr_31 [i_4 - 1] [i_9 - 2] [i_3 - 1] [i_9 - 2] [i_9 + 2] [i_6]) ? (arr_31 [i_4 - 1] [i_9 - 4] [i_3 - 4] [10] [i_9] [i_9]) : (arr_31 [i_4 - 1] [i_9 - 4] [i_3 - 2] [i_6] [i_9] [i_6])))));
                                arr_35 [i_6] [18] [i_3] [i_6] [18] = ((~(max(((((arr_28 [i_9]) / (arr_9 [i_4] [i_4])))), (((arr_12 [i_9 - 4] [i_3]) ? (arr_18 [7]) : (arr_32 [18] [i_4 + 1] [i_5] [i_6] [i_3])))))));
                            }
                            /* vectorizable */
                            for (int i_10 = 4; i_10 < 22;i_10 += 1) /* same iter space */
                            {
                                arr_39 [22] [i_3] [i_3] [i_5] [7] [i_6] [i_3] = (!-7);
                                var_26 = (max(var_26, ((((arr_18 [i_3 - 3]) ? (arr_18 [i_3 - 2]) : (arr_18 [i_3 - 1]))))));
                                var_27 += (arr_33 [18] [i_5]);
                            }

                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 25;i_11 += 1)
                            {
                                var_28 = 2516999503;
                                var_29 = ((var_12 ? (arr_26 [i_3] [i_4] [i_5] [i_3] [i_11]) : var_2));
                            }
                            for (int i_12 = 3; i_12 < 24;i_12 += 1)
                            {
                                var_30 = (arr_28 [i_6]);
                                var_31 = (min(var_31, (((((min((arr_24 [i_3] [14] [i_3] [i_5] [i_3 - 3]), (arr_24 [i_3 - 3] [i_3 - 3] [i_5] [i_5] [i_12 + 1])))) ? ((+(((arr_14 [i_3] [i_3] [i_3 - 2]) ? var_3 : (arr_14 [i_4] [1] [i_12 + 1]))))) : (arr_11 [i_3 + 1] [i_4] [i_5]))))));
                                arr_46 [i_3] = (min((((var_12 > 41953) ? (((!(arr_36 [i_3] [i_4] [i_3] [i_6] [i_6])))) : -17)), var_2));
                                var_32 ^= ((var_2 ? ((41954 ? 183 : -1)) : ((-179 / (((arr_33 [i_3] [i_5]) ? (arr_12 [i_6] [i_4 + 1]) : (arr_38 [14] [i_4] [i_5] [0] [i_5])))))));
                            }
                            var_33 = (max(var_33, (arr_12 [i_3] [i_3 - 1])));
                            var_34 ^= ((+(((arr_19 [i_3] [i_5] [i_4 - 1]) + (arr_19 [i_3 - 2] [i_5] [i_4 + 1])))));
                        }
                    }
                }
                var_35 |= ((((((((arr_28 [i_3 - 3]) && (arr_18 [i_4])))) < var_10)) ? ((((arr_24 [i_3 + 1] [i_4] [i_4 - 1] [22] [i_4]) <= (((arr_10 [i_4 + 1]) - 18446744073709551611))))) : (((2147483644 > ((((arr_23 [i_3] [1] [i_4]) == -17387))))))));

                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    var_36 ^= (((109 ? 2516999486 : (arr_13 [i_3 - 3] [i_3 - 4]))));
                    var_37 ^= (((1 ? 16368 : -1)));
                    var_38 *= ((~(((var_14 < 2356034474) ? (arr_13 [i_3] [i_4]) : (((7252018904286748820 ? 28061 : (arr_18 [16]))))))));
                    arr_49 [i_3] [i_4] [10] [i_13] |= (arr_32 [i_3] [8] [i_4 - 1] [i_4 - 1] [6]);
                }
            }
        }
    }
    #pragma endscop
}
