/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((var_3 & (max(var_7, var_9)))) & ((((-29175 ? 2080149664 : 8)) ^ (((~(arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 7;i_3 += 1)
                {
                    {
                        var_18 = ((!((min((arr_6 [i_3 + 1] [i_2] [i_2]), (arr_6 [i_3 + 3] [i_1] [i_2]))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_19 = (max(var_19, var_5));
                            arr_12 [i_4] [i_4] [i_4] = (((var_3 / (arr_7 [i_2] [i_3 + 1] [i_2]))));
                            arr_13 [i_0] [i_2] [4] &= (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                        }
                        var_20 = ((-(((arr_9 [i_3 - 2] [3] [i_3 + 1] [i_3 + 1]) - var_10))));
                        var_21 = ((((arr_8 [i_3] [i_3] [i_3] [i_3 + 2] [i_3 - 2] [i_3]) ? (arr_8 [7] [i_1] [3] [i_1] [i_3 - 3] [i_3]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_3 - 3] [i_3]))) < (((arr_0 [i_3 - 2]) ? (arr_5 [i_3 - 2] [i_3 + 2] [i_3] [6]) : ((max((arr_4 [i_3] [4]), 0))))));
                    }
                }
            }
        }
        var_22 = 2080149669;
        arr_14 [i_0] = ((~(min((((var_6 << (((arr_1 [i_0] [i_0]) - 15883))))), -0))));
    }
    for (int i_5 = 3; i_5 < 7;i_5 += 1)
    {
        var_23 = (((arr_4 [i_5] [i_5]) ? 174 : ((((150 & -120) != 1)))));

        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_24 = (min(var_24, ((max(var_6, ((((((arr_15 [i_5]) | (arr_9 [i_5] [i_5] [i_5] [i_5 + 1])))) ? (arr_8 [i_5] [i_7 - 3] [i_7 - 1] [i_7] [i_7 - 4] [i_7]) : (arr_7 [i_7 - 1] [i_7 - 3] [i_7 - 4]))))))));
                        var_25 = ((((((arr_23 [i_5] [i_5 - 1] [i_5] [i_5 - 2]) ? var_17 : 2080149664))) ? ((~(arr_23 [i_5 - 2] [i_5] [i_5] [i_5 + 3]))) : ((~(arr_23 [i_5 - 1] [3] [i_5] [i_5 + 3])))));
                    }
                }
            }
            var_26 = var_10;
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_27 = (max(var_27, (((min((arr_18 [i_9] [i_9 - 1]), (arr_15 [i_5 + 2])))))));
            var_28 = (min(var_28, var_3));
            arr_26 [i_5] [i_5] [i_5] &= (max((arr_23 [i_5 + 2] [i_5 + 2] [i_9] [i_9]), -120));
            arr_27 [i_5] = ((((arr_3 [i_9 - 1] [i_9 - 1] [i_9]) < (arr_20 [i_9 - 1] [i_9 - 1] [i_9]))));
        }
        arr_28 [i_5] = (min(-9223372036854775787, (!120)));

        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            var_29 -= (arr_19 [i_10] [i_10 + 1] [i_10 - 1]);
            var_30 *= ((((max(var_11, var_2)) % ((min((arr_6 [i_5] [i_10] [i_5]), (arr_1 [i_5] [i_10])))))));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 8;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_31 = (((var_4 ? (arr_11 [i_5 + 3] [i_12] [i_11 - 3] [i_5] [i_5 + 2]) : var_9)));
                        var_32 *= (max((arr_21 [i_5] [i_5] [i_5] [i_5 - 2]), (((((-116 ? 65 : (arr_20 [i_10] [i_10] [i_12]))) < (((2080149664 > (arr_31 [i_11])))))))));
                        var_33 = (max(var_33, (((1 ? 1 : 2214817632)))));
                    }
                }
            }
            arr_36 [5] [i_5 + 2] [i_5 - 3] = (((((~(arr_34 [i_5 + 1] [i_10] [i_5] [i_5 - 1] [i_10] [i_10 - 1])))) ? (((arr_34 [i_10] [i_10] [i_10] [i_10] [i_5 - 2] [i_5]) ? (arr_34 [i_5] [i_5] [i_5] [i_5 + 3] [i_5] [i_5]) : (arr_34 [i_5] [i_5 - 1] [1] [i_5 - 2] [i_5 - 1] [i_5 + 3]))) : (min((arr_34 [i_5] [i_5 - 3] [i_5 + 2] [i_5 - 3] [i_10] [i_10]), (arr_34 [i_10 - 1] [i_10] [i_10] [i_5 - 2] [i_5] [i_5])))));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        arr_41 [i_13] [i_13] = (arr_38 [1]);

        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            var_34 = var_7;

            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    var_35 = ((32745 ? (arr_37 [i_16]) : var_1));
                    arr_48 [i_13] [i_14 - 2] [i_15] [i_16] = 1;
                    var_36 = (arr_37 [i_14]);
                }
                arr_49 [i_13] [i_14] [i_15] = (4627 + -32724);
            }
            var_37 = (((arr_46 [i_14 - 2] [i_14 - 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1]) ? (arr_44 [i_14] [i_14] [i_14 - 1] [i_14 + 2]) : (arr_44 [19] [i_14] [i_14 + 1] [i_14 + 2])));
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 17;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            {
                var_38 = (min(var_38, (((-(max(var_2, (arr_42 [i_17 - 1]))))))));
                arr_55 [11] = (((arr_43 [i_17] [i_18]) ? ((min((arr_43 [i_17 - 1] [i_17 - 1]), (var_8 | var_0)))) : (136 ^ var_2)));
            }
        }
    }
    var_39 = (var_2 < var_9);
    #pragma endscop
}
