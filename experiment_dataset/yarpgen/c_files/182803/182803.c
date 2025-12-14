/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_11 *= (((((((arr_1 [2]) || -1660858220)))) % (min((arr_1 [10]), 112))));
        var_12 |= (arr_0 [i_0 - 2] [i_0 - 3]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 = 255;
            var_14 = var_5;
            arr_5 [8] |= (min(var_9, (arr_1 [14])));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] [0] = (var_1 ? 3102652017206788708 : (arr_7 [i_2] [i_2]));
        arr_10 [i_2] [i_2] = (arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_19 [i_4] [12] [i_4] = (arr_7 [i_4] [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_25 [i_4] = (~var_5);
                                arr_26 [i_7] [i_4] [i_6] [i_5] [i_5] [i_4] [10] = min(-1660858220, (((!(arr_23 [i_7 - 3] [7] [i_7] [i_7 - 4] [i_7])))));
                                var_15 *= ((!((min((arr_24 [i_7 - 2] [i_5] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 4]), var_8)))));
                            }
                        }
                    }
                    var_16 = (min(((1 | (arr_0 [i_3] [i_5]))), var_9));
                    arr_27 [i_5] [4] [i_5] |= (((var_1 ^ var_0) < (((((arr_2 [i_3]) == (((min((arr_0 [3] [i_4]), (arr_15 [i_5] [i_5])))))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 14;i_9 += 1)
            {
                {
                    arr_33 [i_3] [i_3] [i_8] [i_9 - 3] = ((1 ? 1 : 1));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_3] [i_3] [4] [i_9 - 3] [i_10] = 71;
                        arr_39 [i_10] [i_10] [i_9] [1] [14] [i_3] = (arr_16 [1] [i_8] [1] [i_10]);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, (((-1575551253 ? (arr_35 [i_11] [i_3] [i_3]) : (arr_8 [i_9 - 4]))))));
                        arr_43 [i_11] [4] [8] [i_11] = ((!(((arr_42 [i_11] [i_9] [i_9] [i_8] [14]) && var_9))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_18 = ((!((((((8726151784334539498 >> (-1 + 47)))) ? ((min(var_9, (arr_29 [i_3] [i_8])))) : 4611686018427387904)))));
                        var_19 += (arr_8 [i_9 - 4]);
                        var_20 = (arr_6 [1]);
                    }
                    var_21 = (((arr_11 [i_9 - 1]) + 1891582467114731964));
                }
            }
        }
    }
    var_22 |= ((((min(var_8, var_6))) ? var_9 : var_3));
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 12;i_15 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_16 = 4; i_16 < 14;i_16 += 1)
                    {
                        arr_58 [i_16 + 2] [i_16] [i_16] [i_16] [i_14 - 1] [i_13] = var_0;
                        arr_59 [i_16] [i_15] [i_14] [i_16] = 65092;
                    }
                    for (int i_17 = 1; i_17 < 15;i_17 += 1)
                    {
                        var_23 = ((!((min((~var_5), -var_4)))));
                        arr_63 [i_13] [i_13] [i_15 + 4] [i_17] = (-((var_5 / (arr_0 [i_14 - 3] [i_15 + 4]))));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        arr_68 [i_18] [i_14] [i_18] = var_8;
                        arr_69 [i_18] = ((((((arr_62 [i_13] [i_14] [i_15] [i_18] [i_18] [i_18]) >> (var_3 - 17570362063004488271)))) ? var_8 : (arr_56 [i_13] [i_14 - 3] [10] [i_18])));
                        arr_70 [i_13] [i_14] [i_18] = (((arr_60 [i_15 + 1] [i_15] [i_15] [i_18]) ? ((~(arr_8 [i_13]))) : (!var_1)));
                        var_24 -= (arr_64 [i_14 + 2] [i_14] [i_15 + 2] [0] [i_15] [0]);
                        var_25 = ((~(arr_57 [i_14 - 3] [i_14 - 2] [13])));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        var_26 = ((!(arr_66 [i_14 - 2] [i_14 + 3] [i_15 + 4] [4])));
                        arr_73 [i_13] [5] [i_15] [i_19] = 4294967295;
                        var_27 = (!(1 != var_8));
                    }
                    var_28 = (max((min(4554008523099173621, 1)), ((min((((var_0 - (arr_57 [i_13] [i_14 - 3] [i_15])))), (((arr_60 [i_15] [i_14 - 1] [i_13] [i_13]) * var_5)))))));
                }
            }
        }
    }
    #pragma endscop
}
