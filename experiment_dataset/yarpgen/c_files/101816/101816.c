/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_11 = (((min(var_4, 2044)) | (((-(arr_0 [i_0 + 1] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_12 = (2044 < 18446744073709549551);
                                arr_13 [i_2] [i_1] = (~2044);
                                arr_14 [i_0] [i_1] [i_2] = (((min((arr_12 [i_2] [i_2] [i_2] [i_2] [6] [i_4 + 1]), (var_0 < 2070))) ^ (((var_3 ? ((var_1 ? var_6 : (arr_0 [i_0] [i_0]))) : (max((arr_4 [7] [i_4]), var_9)))))));
                                arr_15 [i_2] = (2045 ^ 1734954809);
                                arr_16 [i_3] [i_3] [i_1] [i_1] [i_3] &= ((((var_10 ? var_4 : (arr_9 [i_2] [3]))) + (arr_11 [i_4 - 4] [i_4 + 4] [i_2 + 1] [i_3] [i_2 - 1] [i_2 + 1] [i_0 + 2])));
                            }
                        }
                    }
                    var_13 ^= (+(((((min((arr_1 [4]), (arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2])))) || (arr_1 [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_14 = (((0 | 2972330951) & (!var_7)));
                                var_15 = (min(var_15, ((((arr_6 [i_1] [i_0] [i_2 + 1]) == 115)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_7] [i_7] &= ((((var_2 % (arr_17 [i_0] [i_0]))) ^ ((~(arr_7 [i_0 + 2] [i_1] [i_1] [i_0])))));
                        arr_24 [i_2] [i_1] = (var_1 < var_8);
                        arr_25 [i_2] [6] [i_2] = ((arr_3 [i_7]) ? (arr_3 [i_0 + 2]) : (arr_11 [i_0] [i_1] [i_2] [i_2] [i_7] [i_0 - 2] [i_2]));
                    }
                }
            }
        }

        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_16 += ((+(((arr_3 [i_0 + 2]) | (arr_3 [i_0 - 1])))));
                            var_17 = (min(var_17, ((max(((((arr_26 [i_0 - 2] [i_0 - 2]) + 1065353216))), (arr_35 [5] [5] [5] [i_10] [5] [i_11] [12]))))));
                        }
                        arr_36 [i_8] [i_8 - 1] [i_9] [4] = (arr_29 [i_0 + 1] [i_8 - 1] [1] [i_0 + 1]);
                        var_18 += (((((arr_17 [i_0] [i_8 - 2]) / (arr_1 [i_0 + 2]))) >= (((max((arr_17 [i_0] [i_8 + 1]), (arr_17 [i_0] [i_8 - 2])))))));

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            arr_39 [i_8] [i_8 + 1] [i_9] [i_9] [i_8] = 0;
                            var_19 &= var_3;
                        }
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_20 -= (min(((-(max(var_10, var_3)))), (((~(~var_2))))));
                            arr_44 [0] [i_8 - 3] [7] [i_9] [i_8] [i_13] [i_9] = (((((arr_43 [i_0] [i_8 + 1] [i_9] [i_8]) >= (arr_43 [i_0] [i_8 - 2] [i_8 - 2] [i_8]))) ? (arr_26 [i_10] [i_9]) : var_1));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                arr_49 [i_8] [i_8] [i_8] = ((~(2630061538 / 1664905779)));
                arr_50 [i_0] [3] [i_8] [i_8] = var_0;
                arr_51 [i_0] [i_8] [i_8] [7] = (((arr_29 [i_0] [i_8 - 2] [i_0 + 1] [i_8 - 2]) > (arr_29 [i_0] [i_8 - 2] [i_0 - 1] [i_8 - 1])));
            }
            arr_52 [i_8] = (var_0 * 1);
        }

        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            var_21 = (~var_2);
            arr_56 [i_0 - 1] [i_15 - 2] = (min((arr_20 [i_0] [i_0] [10] [i_0] [i_0 + 1]), (((~(!var_6))))));
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 11;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 12;i_18 += 1)
                {
                    {

                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            var_22 = ((var_9 ? (arr_37 [i_19] [i_17] [i_17] [i_17 + 1] [i_0 - 1]) : var_1));
                            var_23 |= var_5;
                        }
                        arr_67 [i_0] &= (((93 < var_5) + ((var_8 / (arr_28 [i_0])))));
                    }
                }
            }
            var_24 = (arr_29 [i_16 + 1] [i_16 + 1] [i_0 + 2] [i_0 - 1]);
            var_25 = (((~var_8) || (arr_26 [i_0 - 2] [i_0 + 1])));
        }
    }
    var_26 = var_10;
    var_27 = (min(var_1, ((~(~var_0)))));
    var_28 = (1 < -122);
    var_29 = (max((((var_3 && var_4) ? ((735747748 ? var_10 : var_3)) : (min(var_10, var_1)))), ((((var_1 ^ var_8) ? -62 : var_1)))));
    #pragma endscop
}
