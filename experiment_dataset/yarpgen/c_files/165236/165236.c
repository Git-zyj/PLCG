/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_10));
    var_12 = (max(var_12, var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_13 = 26727;

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            var_14 = (max(var_14, 26725));
                            var_15 = (((28 % 1) ? (((!(arr_10 [i_0] [i_0] [i_2] [i_0] [19] [i_4])))) : (arr_17 [17] [i_4] [i_4] [i_1 - 1])));
                            var_16 += 28;
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_17 *= (((((arr_10 [i_5 + 1] [i_0] [i_2] [i_1 - 1] [i_0] [i_0]) != -26728)) ? var_2 : (arr_20 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_5 - 2])));
                            var_18 = (((((243 | (arr_6 [20] [20] [i_2])))) ? (((var_2 ? var_6 : var_7))) : ((var_10 ? 14219 : var_3))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = (arr_9 [i_0] [20] [i_3] [11]);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_26 [i_0] [10] [i_2] [16] [i_6] = ((var_8 ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1])));
                            arr_27 [i_6] [i_3] [i_0] [i_1] [i_0] [i_0] = (arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_30 [i_0] [i_0] [1] [1] [i_7] = 64325;
                            var_19 = (min(var_19, (((-(arr_5 [i_1 - 1]))))));
                            var_20 = 110;
                        }
                    }

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_1] [i_8] [i_0] = var_3;
                        var_21 = (max(var_21, (arr_29 [i_2] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])));
                        var_22 = ((var_0 ? var_1 : var_4));
                        var_23 = (max(var_23, var_10));
                    }

                    for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_24 = ((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]));
                        var_25 -= -111;
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, (!var_1)));

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_27 = 1;
                            var_28 = (max(var_28, (arr_4 [i_11] [i_0])));
                            arr_43 [i_0] [i_1] [i_0] = (((~1) >= 2756386101));
                        }
                    }
                    for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_12] [i_12] [i_12] = (arr_29 [i_12] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_12] [i_12 + 1]);

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_29 = 14102166822253404051;
                            var_30 = (max(var_30, ((((arr_13 [11] [11] [i_2] [11] [i_0]) ? (arr_36 [i_1] [i_13] [i_12 + 1] [i_1]) : -1545909612)))));
                            var_31 = (min(var_31, ((((arr_12 [i_12 + 1] [i_12 + 1] [i_1 - 1] [i_1 - 1]) >= ((1 ? (arr_6 [i_2] [i_2] [i_13]) : var_6)))))));
                        }
                        arr_51 [i_0] [i_1] [i_12] [i_12] [i_12 + 1] [i_12 + 1] = -26727;
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_12] = arr_32 [i_1 - 1];
                    }
                    for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
                    {
                        arr_56 [i_14 + 1] [i_14] [i_14] [i_0] = (arr_24 [i_0]);
                        var_32 -= (((arr_24 [i_1 - 1]) ? 6154 : (arr_42 [i_1 - 1] [i_14 + 1] [i_1 - 1] [i_14] [i_14])));
                        arr_57 [i_14] [i_14] = (42 ? 26727 : -17);
                        var_33 = ((25825 >> (((arr_38 [i_1 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]) + 156))));
                    }
                    arr_58 [i_1] [i_1 - 1] [i_1] = (((arr_11 [i_2]) ? var_6 : var_9));
                }
            }
        }
        var_34 = -56;
        arr_59 [i_0] = var_7;
    }
    var_35 = var_4;
    #pragma endscop
}
