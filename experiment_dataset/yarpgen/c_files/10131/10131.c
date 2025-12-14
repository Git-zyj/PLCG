/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (((arr_3 [i_0 + 1]) ? (arr_4 [i_0]) : var_4));
            arr_6 [i_0 - 3] [18] [i_0] = (!var_6);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_0] [i_0 - 4] [i_0] = (((arr_0 [i_0 - 1] [i_0 + 1]) + (arr_0 [i_0 - 3] [i_0 - 4])));
            var_18 -= ((((!(arr_2 [i_2]))) ? (arr_3 [i_2]) : 0));
            var_19 *= (((((arr_1 [i_2]) + (arr_3 [i_2])))) - (((arr_0 [i_0] [i_0]) - (arr_5 [i_0]))));
            var_20 += ((799477818 != 240518168576) << ((377147721 ? 1 : 15)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_2] = (((arr_2 [i_0 - 3]) != (arr_2 [i_0 - 1])));

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_21 = (arr_2 [i_0 - 1]);
                            var_22 = ((~(arr_16 [i_0 - 4])));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_23 = ((~(arr_3 [i_6 + 1])));
            arr_23 [i_0] [i_0] = (0 ? 2101604182 : 997784158);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    {
                        var_24 += var_15;
                        var_25 &= var_5;
                    }
                }
            }
            var_26 ^= ((arr_1 [i_6 + 1]) | 16329580111043673894);
        }
        var_27 |= ((~(arr_7 [i_0 + 1] [i_0 - 3])));

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_28 = (~var_11);
            var_29 = (((arr_16 [i_0 - 1]) - (arr_16 [i_0 - 4])));
            var_30 = ((((arr_13 [0] [12] [i_0 - 1] [i_0]) + 2147483647)) >> (var_2 + 16));
        }
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 24;i_10 += 1) /* same iter space */
    {
        var_31 -= ((arr_10 [i_10 - 4] [i_10]) ? ((var_15 - (arr_10 [i_10] [4]))) : ((((arr_21 [i_10 - 2]) ? (arr_28 [i_10]) : 0))));

        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 4; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        {
                            arr_45 [i_10] [i_14] [i_12] [i_12] [i_14 + 1] [i_14] = (((arr_1 [i_10 - 1]) - var_1));
                            var_32 = (min(var_32, (~var_7)));
                        }
                    }
                }
            }
            var_33 = (arr_28 [i_10]);
            var_34 = (min(var_34, (((~(arr_15 [i_11 + 1] [i_11 - 1] [i_11 + 1]))))));
        }
        for (int i_15 = 1; i_15 < 24;i_15 += 1)
        {
            var_35 = (max(var_35, (((0 > (arr_7 [i_10] [i_15 + 1]))))));
            var_36 = (arr_2 [23]);
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_55 [i_10] [i_15 - 1] [i_16] [i_17 - 1] = ((!(arr_44 [i_10 + 1] [i_15 - 1] [i_15 + 1] [i_17 + 4])));
                        var_37 = (((arr_37 [i_15 - 1] [i_15 - 1]) - (arr_37 [i_15] [i_15 - 1])));
                        var_38 = ((!(((-1776885775 ? (arr_7 [i_10] [i_15]) : -21)))));
                        var_39 = ((~(((6544888788107713676 == (arr_29 [5]))))));
                    }
                }
            }
            var_40 = arr_38 [i_10 - 2];
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_41 = (max(var_41, var_4));
            arr_60 [i_10] [i_18] = ((!((!(arr_37 [i_10] [i_18])))));
        }
    }
    for (int i_19 = 4; i_19 < 24;i_19 += 1) /* same iter space */
    {
        var_42 = (((((arr_1 [14]) + 2147483647)) << ((((((min(11901855285601837940, 20006526))) ? (~4294836224) : var_9)) - 18446744069414715391))));
        var_43 = (max(var_43, (((((~(arr_12 [i_19] [i_19 - 3] [i_19] [i_19] [i_19 - 4] [i_19]))) > (((arr_12 [6] [i_19 - 2] [i_19 - 1] [i_19] [i_19] [i_19 - 2]) / (arr_12 [i_19 - 4] [i_19 - 2] [i_19] [i_19 - 1] [i_19] [i_19]))))))));
        var_44 |= ((!(arr_31 [i_19])));

        /* vectorizable */
        for (int i_20 = 2; i_20 < 23;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    {
                        var_45 = 15;
                        arr_71 [i_19] [i_20] [i_21] = (arr_44 [i_19] [i_20] [i_21] [i_22]);
                        var_46 = (arr_49 [i_19] [i_20] [i_21]);
                        arr_72 [i_22] [17] [i_19] [i_19] = 31;
                    }
                }
            }
            arr_73 [i_20] = ((((7413760615202831760 >> (var_5 - 3417207675))) >= (arr_58 [i_19 - 4])));
            var_47 |= (((arr_5 [i_20 - 1]) % -136550664));
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 25;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 25;i_24 += 1)
                {
                    {
                        arr_79 [i_19] [i_19] [i_19] [0] = (arr_33 [i_19]);
                        var_48 = (arr_32 [i_19 - 4] [i_19 - 4]);
                    }
                }
            }
        }
    }
    var_49 = 23;
    var_50 = (min(var_50, (var_8 % var_10)));
    var_51 = var_12;
    var_52 &= var_15;
    #pragma endscop
}
