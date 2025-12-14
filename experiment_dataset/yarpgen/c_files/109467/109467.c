/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 != (((var_10 + 2147483647) << (var_13 - 13265)))));
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= (((((((arr_4 [i_0]) + var_3)))) || (arr_1 [i_1] [i_1])));
                var_20 *= (arr_1 [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_21 = ((((arr_7 [i_0] [i_0] [i_2]) ? ((-7856 ? var_9 : 9156)) : (arr_0 [i_1] [i_1]))));
                            var_22 = ((var_3 ? (arr_1 [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_23 -= ((var_16 ? var_6 : ((((var_2 ? var_13 : var_14))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    arr_18 [i_6] = (arr_17 [i_4] [i_5]);

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        arr_23 [i_4] [i_6] [i_6] [i_6] = var_2;
                        var_24 = (arr_16 [i_4] [i_4] [i_6] [i_7 + 2]);
                        arr_24 [i_5] [i_6] [i_5] [i_5] = -var_8;
                        var_25 *= ((var_14 ? (arr_19 [i_5] [i_5] [i_5] [i_6 - 1] [i_5] [i_7]) : (arr_21 [i_4] [i_6] [i_6] [i_6 - 1])));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, (~var_4)));
                        arr_28 [i_4] [i_5] [i_6] [i_6] [i_6] [i_5] = ((!(((arr_20 [i_4] [i_6] [i_6] [i_6] [i_6 - 1] [i_6]) != (arr_20 [i_4] [i_4] [i_4] [i_4] [i_6 - 1] [i_8])))));

                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            var_27 = min((((((arr_16 [i_6 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]) + 9223372036854775807)) << (((arr_16 [i_6 - 1] [i_9 + 1] [i_9 + 2] [i_9 + 1]) + 7055096550177047797)))), (((~(arr_14 [i_5])))));
                            var_28 = var_9;
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_6] = (((arr_14 [i_8]) ? (((!(arr_27 [i_5] [i_6 - 1] [i_8] [i_5])))) : (((arr_29 [i_9 + 3]) % (arr_29 [i_9 + 3])))));
                            var_29 = (((arr_27 [i_6 - 1] [i_6 - 1] [i_9 + 2] [i_9]) == ((var_4 ? (arr_17 [i_4] [i_6 - 1]) : var_7))));
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_6] [i_8] [i_8] [i_8] [i_6] = (arr_21 [i_5] [i_6] [i_8] [i_10]);
                            var_30 = ((-((((-1 ? (arr_15 [i_4] [i_4]) : (arr_21 [i_4] [i_5] [i_4] [i_5])))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_4] [i_6] = (((~(((arr_12 [i_11]) & var_3)))));
                        arr_41 [i_6] = (((arr_27 [i_4] [i_5] [i_6 - 1] [i_11]) ? (((((arr_14 [i_11]) >= (arr_27 [i_11] [i_6] [i_5] [i_4]))))) : (((arr_16 [i_4] [i_5] [i_6 - 1] [i_11]) | (arr_14 [i_5])))));
                        var_31 = (min(var_31, var_8));
                        var_32 = var_14;
                        arr_42 [i_4] [i_6] [i_6] [i_4] = (!(arr_11 [i_6 - 1]));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_4] [i_6] [i_6] = ((((arr_22 [i_6] [i_5] [i_6 - 1] [i_12] [i_12]) ? var_6 : (arr_22 [i_6] [i_5] [i_6 - 1] [i_12] [i_5]))));
                        var_33 = var_5;

                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_34 = ((((-var_8 * ((((-256 < (arr_48 [i_4] [i_12] [i_6] [i_6] [i_13] [i_5] [i_6]))))))) % (max(var_5, (arr_17 [i_4] [i_4])))));
                            var_35 = (min(var_35, (((((!var_5) ? (arr_35 [i_13] [i_6] [i_5] [i_6 - 1] [i_5] [i_6] [i_5]) : var_9))))));
                            arr_50 [i_6] [i_6] [i_13] = ((((((var_4 % (arr_35 [i_6] [i_6] [i_6] [i_12] [i_6] [i_6] [i_13])))) ? (((arr_43 [i_4] [i_4] [i_4] [i_4]) ? (arr_25 [i_4] [i_5] [i_6] [i_12] [i_4]) : var_1)) : var_4)));
                        }
                        /* vectorizable */
                        for (int i_14 = 4; i_14 < 20;i_14 += 1) /* same iter space */
                        {
                            var_36 = (max(var_36, (arr_51 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_14 + 1] [i_14 - 1] [i_14])));
                            arr_53 [i_4] [i_6] [i_6] [i_6] [i_14] = (((arr_25 [i_4] [i_4] [i_6] [i_12] [i_4]) || (((arr_49 [i_4] [i_5] [i_6] [i_12] [i_14] [i_12]) && (arr_34 [i_4])))));
                            var_37 = (arr_48 [i_5] [i_6 - 1] [i_6 - 1] [i_12] [i_14 - 1] [i_14] [i_12]);
                        }
                        for (int i_15 = 4; i_15 < 20;i_15 += 1) /* same iter space */
                        {
                            var_38 |= ((-(arr_49 [i_4] [i_5] [i_6] [i_4] [i_12] [i_15])));
                            arr_58 [i_6] [i_5] [i_6] [i_6] [i_12] [i_12] [i_12] = (arr_38 [i_4] [i_4] [i_6] [i_12] [i_15]);
                        }
                        var_39 = (((((arr_46 [i_4] [i_5] [i_6] [i_5]) != (((arr_54 [i_4] [i_5] [i_6 - 1] [i_5] [i_5] [i_4] [i_5]) & -9176)))) ? (arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (((var_5 ? 6 : (arr_49 [i_4] [i_4] [i_5] [i_6 - 1] [i_6] [i_5]))))));
                        arr_59 [i_6] [i_5] [i_12] = ((((!(arr_46 [i_5] [i_5] [i_6 - 1] [i_12])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
