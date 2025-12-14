/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 10;i_4 += 1)
                            {
                                var_20 ^= ((~(var_18 / var_12)));
                                var_21 -= (((((((arr_9 [3] [i_3]) <= (arr_8 [1] [i_3] [i_2]))))) * (arr_3 [i_0] [i_0] [i_0])));
                                arr_14 [i_0] [i_2] [i_2] = (((!32) || (arr_3 [i_1 - 1] [i_1 - 2] [i_3 - 1])));
                            }
                            for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
                            {
                                var_22 = (arr_5 [i_0]);
                                var_23 = (max(var_23, (arr_7 [i_1] [5] [i_5 + 1])));
                                var_24 = 15044793055088787;
                                var_25 = ((81 - ((~((-24152 ? 62 : var_2))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                            {
                                var_26 = (max(var_26, ((var_18 ? var_13 : (arr_10 [2] [2] [7] [7] [i_6] [i_1 - 1])))));
                                var_27 = (max(var_27, ((((arr_7 [i_1 + 1] [i_3 + 1] [i_6 + 1]) ? (arr_1 [i_6]) : var_4)))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                var_28 *= (arr_23 [3] [i_1] [3] [1] [1] [i_7]);
                                var_29 = (max(var_29, var_13));
                                var_30 = (-15044793055088793 / (arr_8 [8] [i_2] [i_7]));
                                var_31 -= (!65);
                                var_32 = (min(var_32, ((((((var_17 ? var_14 : 190))) ? var_13 : var_1)))));
                            }
                            var_33 = (arr_12 [i_0] [i_0] [i_0] [i_0] [1]);
                            arr_24 [i_2] = var_9;
                        }
                    }
                }
                arr_25 [10] = ((~((((18058 ? (arr_11 [0] [i_1] [i_1] [6]) : var_2)) / var_11))));
                var_34 = (max(var_34, ((~((((~var_6) <= (arr_19 [5] [i_0] [i_0] [i_0] [i_1] [i_1]))))))));
                var_35 = (min(var_35, (arr_13 [i_1 + 1] [2] [0] [i_0] [i_1 - 2] [4] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            {
                arr_32 [5] [5] [i_9] &= ((-(((arr_30 [i_8] [i_9]) ? ((min((arr_30 [i_8] [5]), (arr_31 [i_8] [i_9])))) : (arr_31 [i_8] [i_9])))));
                arr_33 [i_8] [i_9] [i_9] = ((((-(arr_28 [i_9]))) & -833052023));
            }
        }
    }

    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_36 = (max(var_36, ((((((-(min((arr_36 [i_10] [9]), var_4))))) ^ (((((-(arr_31 [i_10] [i_10])))) ? -24145 : var_7)))))));

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_37 = (max(var_37, var_15));
            var_38 = (((arr_38 [1] [10]) ? (arr_38 [i_10] [i_11]) : (((arr_34 [i_10]) ? ((~(arr_35 [i_11]))) : 3099))));
            arr_40 [i_10] [6] [i_11] |= 1254391372777581991;
        }
        arr_41 [i_10] = var_8;
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            {
                var_39 = (max(var_39, (arr_47 [18])));

                for (int i_14 = 1; i_14 < 20;i_14 += 1)
                {
                    arr_50 [i_12] [2] [i_12] [i_13] &= (arr_46 [i_14 - 1]);
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            {
                                var_40 = 11535;
                                var_41 += (var_7 == -106);
                            }
                        }
                    }
                    var_42 = ((~(var_2 | var_1)));
                }
                arr_55 [i_12] [i_13] = ((-(~var_2)));
            }
        }
    }
    var_43 -= 9683;
    #pragma endscop
}
