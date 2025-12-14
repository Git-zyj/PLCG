/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = ((((((arr_0 [i_0]) > (arr_0 [i_0])))) * (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] [i_0] |= ((var_11 * ((0 ? 0 : 92))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_9 [i_1] [i_0] = 16929577353395581181;
            var_13 = (arr_7 [i_1] [i_0] [i_0]);
            arr_10 [i_0] [i_0] [i_1] = ((((~7910828905426916968) ? -826615498 : ((var_10 ? var_0 : var_0)))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_21 [i_0] [i_2] [i_3] [i_4] [i_5] = ((7910828905426916968 ? 1592630873 : 6299311163220806588));
                        arr_22 [i_5] [i_4] [i_3] [i_0] [i_0] = var_7;
                        arr_23 [i_3] = (((arr_17 [i_3] [i_3 - 1] [i_0] [i_0]) >= var_7));
                        var_14 = ((var_10 ? var_1 : var_9));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_15 = (140 < 16929577353395581193);
                        arr_26 [21] [i_0] [i_0] [i_0] [i_3] [i_4] [i_6] = (!20773);
                    }
                    arr_27 [i_4] [i_3] [i_3] [i_0] = (((((var_2 ? 2147483619 : 1))) ? 70 : 0));
                    arr_28 [i_2] [i_3] = ((((arr_0 [i_3]) && var_3)));
                }

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_16 = (min(var_16, (arr_7 [i_3 - 1] [i_2] [i_3 - 1])));
                    var_17 *= (arr_6 [i_3 - 1] [i_0] [i_0]);

                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        var_18 &= 1999859596;
                        var_19 = (max(var_19, var_0));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_9] [2] [i_3] [i_3] [20] [i_2] [i_0] = (((arr_3 [i_3 + 2]) ? 0 : (arr_15 [i_3] [i_3 + 1])));
                        var_20 = ((-32767 - 1) * 1);
                        arr_37 [i_0] [i_0] |= ((7910828905426916968 ? (arr_17 [i_3] [11] [9] [i_3 - 1]) : (arr_19 [i_0])));
                        arr_38 [i_3] [15] [i_3] [i_0] [i_0] [i_3] = ((!(var_6 != var_4)));
                    }
                }
                arr_39 [i_3] [i_2] = var_10;
            }
            for (int i_10 = 1; i_10 < 24;i_10 += 1)
            {
                arr_42 [i_10] = var_11;
                var_21 = ((((arr_15 [i_10] [i_10]) - (arr_14 [i_10 + 1]))));
                arr_43 [i_10] [i_0] [i_10] = -29101;
                var_22 += (arr_2 [i_10]);
            }

            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                arr_47 [i_11] [i_0] [i_11] = (arr_11 [i_2] [i_2]);

                /* vectorizable */
                for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                {
                    arr_50 [i_0] [i_11] [i_11] [i_11] = (!(arr_20 [i_11] [i_11]));
                    var_23 = ((((arr_41 [i_2] [i_11] [i_2] [i_0]) != 1517166720313970435)));
                    var_24 = ((var_9 / ((var_8 ? var_1 : (arr_34 [5])))));
                }
                for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, (~var_1)));
                    var_26 += var_5;
                    var_27 = 1999859596;
                }
                for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 2; i_15 < 22;i_15 += 1)
                    {
                        arr_59 [i_0] [i_0] [i_0] [i_11] [i_0] = (min(var_1, (((var_8 ? var_8 : (arr_55 [i_14] [i_14] [i_15 + 1] [i_14 + 1] [i_14] [i_11]))))));
                        arr_60 [i_11] [i_14] [i_11] [i_2] [i_2] [i_11] = (~((max((arr_55 [i_15 + 2] [i_15 - 1] [i_15 - 2] [i_15] [23] [i_15 - 1]), (arr_55 [16] [i_15 + 2] [i_15 - 1] [i_15] [i_15] [i_15])))));
                        var_28 = 3338585179;
                        arr_61 [i_0] [0] [i_11] [i_11] [i_15] = (((1 >= -124) * var_5));
                        arr_62 [i_0] [i_11] [i_11] [i_14] [i_15] = ((23435 ? (((0 ? 0 : 44763))) : (max(((-102 ? (arr_12 [i_15]) : -1534822640202214585)), var_2))));
                    }
                    var_29 = ((var_7 == (max(((((arr_46 [23] [i_2] [23] [i_2]) ? (arr_33 [1] [i_11] [1] [i_2] [i_0]) : var_4))), (((arr_13 [i_0] [i_2] [9] [i_2]) ? var_8 : var_9))))));
                }
                var_30 = (max(var_30, 819981467713265648));
            }
        }
    }
    var_31 = ((var_7 + ((-1 ? var_4 : var_6))));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 17;i_17 += 1)
        {
            {
                var_32 = var_2;
                var_33 = (max(((max(-6481, 18))), ((((!-45) ? ((((arr_57 [i_17] [i_17]) != var_4))) : ((var_9 ? 116 : var_3)))))));
            }
        }
    }
    var_34 = var_5;
    #pragma endscop
}
