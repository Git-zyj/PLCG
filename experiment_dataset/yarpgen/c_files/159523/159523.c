/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((min((arr_0 [i_0]), var_3))) ? ((((~var_8) >= ((min((arr_2 [i_0]), var_0)))))) : (((var_4 ? var_6 : var_4)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 += ((max((arr_8 [i_3] [i_3] [i_3] [i_3] [i_0]), var_10)));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_13 = ((min(31457280, (arr_3 [i_1 - 1] [i_2] [i_4]))));
                                var_14 = var_0;
                                arr_13 [i_1] = (var_8 | var_9);
                            }
                            var_15 = ((((((arr_1 [i_2]) != var_6))) > -var_7));
                        }
                    }
                }
                var_16 = ((((((var_4 ? var_3 : var_2)))) ? (arr_11 [i_1]) : ((-var_1 ? var_1 : ((max(var_3, var_0)))))));

                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [2] [i_0] &= ((((min(var_0, (((!(arr_3 [i_5] [i_1 - 1] [i_0]))))))) % (max((arr_12 [i_0] [i_0] [i_5 + 1] [1]), (arr_12 [i_0] [i_0] [i_1 - 1] [2])))));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_17 = (((arr_14 [i_1] [i_1 - 1] [i_1] [i_1]) ? (arr_0 [i_1]) : var_9));
                            arr_22 [i_0] [i_1] [i_1] [11] [i_6] [i_1] = (((var_1 ? var_1 : (arr_5 [i_0] [i_0] [i_6] [i_0]))));
                            var_18 ^= (31457280 ? -31457284 : 1);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_19 -= (((((-(arr_6 [i_1 - 1] [i_5] [i_6] [i_8])))) ? (arr_23 [i_1 - 1] [2] [i_1 - 1] [i_5 + 1] [i_5 - 1]) : (((var_10 < (arr_8 [14] [i_1 - 1] [14] [i_1 - 1] [i_1 - 1]))))));
                            arr_27 [i_0] [i_1] [i_5] [i_1] [i_8] [i_8] = (var_0 > (arr_15 [i_1]));
                            var_20 = (min(var_20, (((!(var_3 | var_1))))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, (arr_12 [i_0] [i_1] [i_5] [4])));
                            arr_30 [i_0] [i_0] [i_0] [i_6] [i_1] [i_0] [i_6] = (var_7 != var_1);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_22 = (((((min(var_5, var_2)))) + var_6));
                            var_23 = (min(var_23, ((max(var_1, (arr_26 [i_0] [i_5 + 1] [i_1 - 1] [i_6] [6] [6]))))));
                        }
                        var_24 -= var_10;

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_25 = var_3;
                            var_26 = (max(var_26, var_5));
                            var_27 += var_6;
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_28 = ((var_2 && ((!(arr_18 [i_1] [i_1 - 1] [i_1] [i_6])))));
                            var_29 = (((0 ? 15 : 31457280)));
                            var_30 = (max(var_30, (((!((((arr_5 [i_6] [7] [i_5] [i_1 - 1]) ? (arr_24 [i_5 - 1] [i_5 + 1] [i_12] [i_5 + 1] [i_5 - 1]) : var_5))))))));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_31 = (((((arr_40 [i_0] [i_0] [i_5] [i_6] [i_13] [i_1] [i_6]) ? (arr_8 [i_1] [i_0] [i_1] [i_0] [i_0]) : (arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [1])))) ? (arr_40 [i_0] [i_1] [i_1 - 1] [i_1] [i_6] [i_1] [i_13]) : ((var_10 ? var_3 : var_7)));
                            var_32 = max(var_9, (((arr_20 [i_0] [i_1 - 1] [i_5 - 1] [i_1] [i_13]) - -var_4)));
                            var_33 = (min(var_33, ((max(1, 1230231915)))));
                        }
                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            var_34 = (min(var_34, (((var_6 == ((var_5 ? ((min((arr_6 [i_0] [i_6] [i_1 - 1] [i_0]), var_9))) : (min((arr_18 [12] [i_5] [i_5] [i_14 + 1]), (arr_43 [i_0] [i_5] [i_6] [1]))))))))));
                            var_35 = (min(var_35, -478962283));
                            arr_44 [i_14] [i_6] [i_1] [i_1] [i_0] [i_0] = (arr_43 [i_0] [i_1] [i_0] [i_6]);
                        }

                        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                        {
                            var_36 = (min((((!((((arr_39 [i_0] [i_1] [i_5] [i_15]) ? (arr_41 [i_15] [i_6] [i_5 - 1] [i_1] [i_0]) : var_9)))))), (((arr_32 [i_1]) % var_6))));
                            var_37 = (min(var_37, (((~(arr_33 [i_15] [i_1 - 1] [i_0] [3] [i_0]))))));
                        }
                        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                        {
                            var_38 += -var_7;
                            var_39 = (max(var_39, (((max(var_8, (arr_24 [i_5 + 1] [i_5] [1] [i_5 - 1] [i_5 + 1])))))));
                            var_40 = ((((var_0 ? var_0 : var_6))) & (min(var_9, ((var_9 ? var_7 : var_9)))));
                        }
                        for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                        {
                            arr_53 [i_1] [i_6] [i_0] [i_5] [i_0] [i_0] [i_1] = (((-(var_9 > var_4))) != (var_8 - var_10));
                            var_41 = (min(var_41, ((min(var_0, ((-var_1 == ((min((arr_41 [12] [12] [i_5] [i_5] [i_1 - 1]), (arr_20 [i_1] [12] [i_1] [12] [i_0])))))))))));
                            var_42 = arr_4 [i_5] [i_5] [i_5];
                        }
                    }
                    var_43 = ((((31457279 < (((arr_39 [i_0] [i_0] [i_1] [i_5]) ? (arr_39 [8] [i_0] [i_1 - 1] [i_0]) : var_7)))) ? ((((arr_9 [i_0] [i_1 - 1] [i_5 - 1]) && ((((arr_23 [i_0] [i_1] [i_5 + 1] [i_0] [i_5 - 1]) ? (arr_28 [1] [i_1 - 1] [i_1 - 1] [i_5] [i_0]) : var_2)))))) : var_3));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 15;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            {
                arr_60 [i_19] [i_19] [i_19] = var_5;
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_44 -= ((+((-var_2 ? (var_1 - var_7) : (arr_67 [i_22] [i_18] [i_19] [i_19] [i_18])))));
                                var_45 = (max(var_45, ((min(31457250, 31457287)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_46 = max(var_5, (max(var_0, (min(var_1, var_9)))));
    #pragma endscop
}
