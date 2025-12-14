/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] = ((((max((((var_12 ? (arr_0 [6] [i_1]) : -1691029444))), var_4))) | ((~((var_0 ? var_4 : 663879332627574133))))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_13 [i_0] [i_3] |= -var_15;
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = (-(((((arr_7 [16] [i_1] [15] [i_4]) + var_1)) - var_3)));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_18 = (((-2147483647 - 1) / -663879332627574130));
                                var_19 = (max((max(var_8, 100458794)), 1));
                                arr_18 [i_3] [i_3] [i_2] &= (((arr_6 [i_0] [i_3] [i_0] [i_3]) && ((((1254405564 | 100458794) ? (max(var_8, (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : (((arr_17 [i_5] [i_1] [i_2] [1] [i_1]) ? (arr_8 [i_3] [i_2 - 1] [i_2] [i_3] [i_5] [i_3]) : var_15)))))));
                                arr_19 [i_2 + 2] [i_2] [i_2] [i_2] [i_2] [i_0] = (arr_2 [i_0]);
                                var_20 = max((arr_1 [i_0]), (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [7] [6] [i_3] [i_1]) : var_10)));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_21 *= (max(1, 28780));
                                var_22 = (max(var_22, (-28780 > 1840258196)));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_23 = ((((((arr_20 [i_0] [i_1] [i_2 - 1] [i_3] [i_0]) ? var_11 : (arr_6 [i_3] [i_0] [i_0] [i_3])))) | (~var_2)));
                                var_24 = ((-var_11 ? (arr_23 [i_2 + 1] [i_2] [i_0] [i_0] [i_2] [i_2 - 1]) : (arr_15 [i_0] [i_0])));
                                var_25 *= (((arr_12 [i_2 - 1] [i_3] [i_2] [i_2 + 2] [i_3] [i_2]) <= (arr_12 [i_2 - 2] [i_3] [i_2] [i_2 - 3] [i_3] [i_2])));
                            }
                            var_26 = var_9;
                        }
                    }
                }
                arr_25 [i_0] [2] [i_0] = arr_2 [i_1];
                var_27 = (!1);
            }
        }
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_28 [i_8] = var_5;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_38 [i_8] [i_9] [i_10] [i_11] [i_10] [i_12] = max((((-(arr_27 [i_10 + 1] [i_10 - 1])))), (((((arr_15 [i_8] [i_9]) ? -663879332627574133 : var_12)) + (arr_5 [2] [i_12 + 3] [i_12 - 3]))));
                                var_28 = (max(var_28, (((-(var_11 & var_0))))));
                            }
                        }
                    }
                    var_29 = arr_33 [i_10];
                }
            }
        }

        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            var_30 = (arr_40 [i_13] [i_8]);
            arr_41 [i_8] [i_13] = arr_33 [i_13];
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            var_31 = (max(var_31, ((((arr_35 [i_8] [i_14] [i_8]) ? (max(var_15, 1840258196)) : (arr_35 [i_8] [i_8] [i_8]))))));
            var_32 = (min(var_32, var_13));
            var_33 = (max(var_6, ((var_10 ? (arr_24 [i_8] [i_8] [i_8] [i_14] [i_14] [i_14]) : (arr_24 [i_14] [i_14] [i_8] [i_8] [i_8] [i_14])))));
            arr_44 [i_8] = var_13;
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
        {
            var_34 = (((!var_5) ? (((max((arr_12 [i_8] [i_8] [14] [1] [i_8] [0]), 28780)))) : ((~((var_15 ? var_3 : var_0))))));
            var_35 -= (arr_29 [i_8] [11] [i_15]);
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 13;i_17 += 1)
                {
                    {
                        arr_51 [i_8] [i_15] [i_16] [i_17] = var_11;
                        var_36 = (-(arr_11 [i_17 - 3] [i_17] [i_17 - 2] [i_17] [i_8]));
                        var_37 = arr_46 [i_8] [5];
                    }
                }
            }
            var_38 = (min(var_38, (((+(max((arr_48 [i_8]), (arr_48 [i_8]))))))));
        }
        var_39 = (min(var_39, ((((((var_14 ? 1 : -663879332627574153))) % (arr_11 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
    {
        var_40 = (max(var_40, ((((arr_53 [1] [i_18]) >= (arr_52 [2] [i_18]))))));
        var_41 = (min(var_41, ((((arr_53 [14] [i_18]) <= (arr_52 [4] [i_18]))))));
        arr_54 [i_18] [i_18] = (((var_15 ? var_8 : var_2)));
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
    {
        var_42 = (-2147483647 - 1);
        arr_57 [i_19] = (((((-(arr_53 [i_19] [i_19])))) ? ((((arr_53 [i_19] [i_19]) || (((~(arr_53 [i_19] [i_19]))))))) : 1));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
    {

        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            var_43 = var_0;
            arr_65 [i_20] = (arr_58 [i_20]);
            arr_66 [i_20] = arr_61 [i_20];
        }
        var_44 = (arr_55 [i_20] [17]);
    }
    #pragma endscop
}
