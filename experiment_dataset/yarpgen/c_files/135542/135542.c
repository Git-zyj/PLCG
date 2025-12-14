/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_13 = (~(arr_4 [i_3 + 1] [i_3 - 1] [i_2 + 1]));
                        arr_8 [i_0] [i_1] [i_2 - 2] [i_3 - 2] [i_1] = ((arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (((arr_0 [i_0]) ? (-2147483647 - 1) : 0)) : (-2147483647 - 1));
                    }
                    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_4 + 1] [i_2 - 1] [5] = (~-2147483646);
                        var_14 = ((10663710518770652524 ? (arr_5 [i_0] [i_2 + 1] [i_4 - 1] [i_1]) : (var_0 | var_2)));
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_15 = var_0;
                            var_16 = (max(var_16, ((((arr_5 [i_0] [i_1] [i_2 + 1] [i_5 + 1]) ? ((var_12 ? var_8 : 22)) : (((arr_13 [2] [2] [i_6 - 1]) ? var_1 : 8471873072515770476)))))));
                        }
                        for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_17 = (var_12 ? (arr_15 [i_0] [i_2 + 1]) : var_12);
                            var_18 = (--2147483647);
                            var_19 = (min(var_19, (arr_5 [i_0] [i_0] [i_0] [i_5 + 1])));
                        }
                        for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_1] [i_8 + 1] |= (~0);
                            var_20 = (max(var_20, ((((arr_14 [i_0] [i_2 - 2]) && (arr_14 [i_0] [i_1]))))));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_26 [1] [1] [2] [i_0] [i_0] = arr_15 [i_0] [i_2 + 1];
                            arr_27 [2] [i_0] [i_2 - 1] [i_1] [i_0] = ((!(arr_12 [i_9] [i_1] [i_1] [i_0])));
                        }
                        var_21 = var_10;
                        var_22 = (((arr_3 [i_2 - 2] [i_2 + 1]) ? (arr_3 [i_2] [i_2 - 2]) : 0));
                    }
                    var_23 *= (arr_18 [17] [9] [9] [i_1] [i_1] [i_2 - 1]);

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_30 [i_10] [i_2 - 2] [i_1] [5] = (-2147483647 - 1);
                        arr_31 [i_0] [i_1] [9] [i_10] = (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    }
                    var_24 = -var_7;
                }
            }
        }
        arr_32 [i_0] [i_0] = 9466176072034457073;
    }

    for (int i_11 = 3; i_11 < 19;i_11 += 1)
    {
        var_25 = 2147483646;
        arr_36 [i_11 - 3] = (arr_35 [i_11]);
        var_26 = (min(var_26, ((min(((+((9 ? (arr_33 [i_11 - 1]) : var_1)))), (1 - 227))))));
        var_27 ^= (min((((max((arr_33 [15]), (arr_35 [i_11]))))), (arr_34 [i_11 + 1])));
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
    {
        var_28 = (max(var_28, ((min(((~(arr_33 [i_12]))), ((((arr_10 [i_12] [i_12] [12] [i_12] [i_12] [1]) + -var_4))))))));
        var_29 = (min(var_29, (arr_21 [i_12] [i_12] [i_12] [16] [i_12] [i_12] [i_12])));
        var_30 = (max(var_30, (arr_33 [i_12])));
        var_31 = (min(var_31, ((((((1 / (arr_34 [i_12])))) ? 2147483647 : (arr_34 [i_12]))))));
        var_32 = (max((((1 && (arr_12 [i_12] [i_12] [i_12] [i_12])))), (arr_29 [i_12] [9] [i_12] [i_12] [i_12])));
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        var_33 |= var_0;
        var_34 = (min(var_34, ((min(var_6, ((min((arr_19 [i_13] [15] [i_13] [15] [i_13] [i_13]), 23799))))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 3; i_15 < 15;i_15 += 1) /* same iter space */
        {
            var_35 += var_4;
            var_36 = (max(var_36, (18446744073709551615 + 65523)));
        }
        for (int i_16 = 3; i_16 < 15;i_16 += 1) /* same iter space */
        {
            var_37 = (arr_5 [i_14] [i_16 - 2] [i_16 + 1] [i_14]);
            var_38 = 479339939677537195;
            var_39 = (((arr_43 [i_14] [i_14]) ? (arr_24 [i_16] [i_16 - 3] [i_16 - 1] [i_16 - 2] [i_16 - 3] [i_16 - 2]) : var_0));
        }

        for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
        {
            var_40 = (max(var_40, (arr_34 [i_14])));
            var_41 = (max(var_41, (~1048575)));
            arr_53 [i_14] = var_3;
        }
        for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
        {
            arr_57 [i_14] [i_18] = ((~(~var_5)));

            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                var_42 = (min(var_42, (((~(arr_19 [i_19] [i_19] [i_19] [i_14] [i_14] [i_14]))))));

                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    var_43 = (min(var_43, ((((arr_1 [i_19]) && -1)))));
                    var_44 = (arr_15 [i_19] [i_20]);

                    for (int i_21 = 2; i_21 < 15;i_21 += 1)
                    {
                        arr_64 [i_14] [i_14] = -18446744073709551615;
                        var_45 += 1;
                    }
                }
                for (int i_22 = 1; i_22 < 15;i_22 += 1)
                {
                    var_46 = (max(var_46, (arr_43 [i_14] [i_18])));

                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        var_47 = (max(var_47, ((~(arr_45 [i_18] [i_22 - 1] [i_22 - 1])))));
                        arr_71 [12] [i_14] [i_14] [i_22 + 1] [8] [i_23] = 18184659610804127947;
                        arr_72 [12] [12] [i_14] [i_22 + 1] [11] = ((65516 ? (arr_66 [i_18] [i_22 - 1] [i_22 + 1] [i_23] [i_18] [i_18]) : -958243382));
                    }
                    var_48 = (max(var_48, ((203 | ((var_12 ? (arr_29 [i_14] [9] [9] [9] [i_22 - 1]) : (arr_44 [i_14])))))));
                }

                for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
                {
                    arr_75 [i_19] [7] [i_14] [i_24] [8] [7] = (-2147483647 - 1);
                    arr_76 [i_14] [i_14] = (((arr_49 [i_14] [i_14] [11]) ? ((((arr_46 [i_14] [i_14] [i_14]) >> (((arr_2 [i_14] [i_14] [i_14]) - 40894))))) : (((arr_60 [i_14] [i_14] [i_14] [i_14]) ? (arr_50 [i_14] [i_18] [i_18]) : (arr_18 [15] [15] [6] [i_19] [i_19] [17])))));
                    arr_77 [13] [13] [i_18] [i_18] [13] [i_14] = -278554233;
                }
                for (int i_25 = 0; i_25 < 16;i_25 += 1) /* same iter space */
                {

                    for (int i_26 = 0; i_26 < 16;i_26 += 1)
                    {
                        var_49 = (max(var_49, 14));
                        arr_84 [14] [i_14] = (arr_35 [i_25]);
                        var_50 = (var_12 > var_9);
                    }
                    for (int i_27 = 1; i_27 < 14;i_27 += 1)
                    {
                        var_51 = (min(var_51, (((1 ? ((~(arr_61 [i_19] [i_27 + 2]))) : ((3464723634176329673 ? -2147483635 : 1)))))));
                        var_52 = (min(var_52, (arr_59 [i_14] [i_25] [i_25])));
                    }
                    var_53 = (arr_39 [i_14] [12]);
                }
                for (int i_28 = 0; i_28 < 16;i_28 += 1) /* same iter space */
                {

                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        arr_91 [i_29] [i_18] [i_18] [i_29] |= ((~(arr_17 [i_14])));
                        var_54 = (max(var_54, (arr_50 [1] [i_19] [13])));
                    }

                    for (int i_30 = 0; i_30 < 16;i_30 += 1)
                    {
                        var_55 = var_9;
                        var_56 = (min(var_56, (arr_81 [i_19] [9] [i_19] [i_14])));
                    }
                }
            }
            arr_94 [i_14] [i_14] = ((arr_7 [i_18]) ? var_7 : (arr_46 [i_14] [i_18] [i_14]));
            var_57 = ((!(arr_9 [i_18] [i_18] [i_14])));
        }
    }
    #pragma endscop
}
