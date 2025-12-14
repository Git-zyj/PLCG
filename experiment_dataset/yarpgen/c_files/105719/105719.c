/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((var_12 - 13357640525159672061), ((min(((1 ? var_8 : var_4)), 595741513)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 = (!var_8);
        var_15 = (((arr_0 [i_0 + 2]) ? (arr_2 [i_0]) : ((var_4 % (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (((arr_2 [i_1]) + (arr_5 [i_1] [i_2])));
            var_17 = (((~1285712415) & (arr_0 [i_2])));
            var_18 = (-595741514 ? (arr_4 [i_1] [i_2]) : (arr_6 [6] [i_1] [i_1]));
            var_19 += var_11;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_20 = (min(var_20, var_6));
                        arr_14 [i_3] = ((18014398509219840 ? -595741514 : -595741514));
                    }
                }
            }
            arr_15 [i_3] [i_3] [i_3] = (arr_2 [i_3]);
            var_21 = (((arr_7 [i_1] [6] [i_3]) - (arr_5 [i_1] [i_1])));

            for (int i_6 = 4; i_6 < 11;i_6 += 1)
            {
                arr_19 [i_3] = (((((-(arr_10 [13] [i_3] [i_3])))) ^ (((arr_11 [i_6] [6] [i_3] [i_3] [i_1] [i_1]) * 13277254473332087408))));
                var_22 = (max(var_22, ((((arr_8 [i_1] [i_6 + 2] [i_6]) | (arr_8 [i_1] [i_6 + 1] [i_6]))))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_23 ^= ((511 ? (arr_7 [i_7] [i_6 + 1] [i_1]) : (arr_12 [i_7] [i_3] [i_1])));
                    var_24 = (arr_17 [4] [i_3] [i_1] [i_6 - 2]);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_25 = ((~(((1 != (arr_10 [i_1] [i_1] [i_3]))))));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_26 = (!var_7);
                        var_27 = (arr_27 [11] [11] [i_3] [i_8] [i_8]);
                        arr_28 [i_1] [i_3] [i_3] [i_8] [i_9] = (arr_7 [i_6 - 2] [i_6 - 2] [i_6 - 4]);
                    }
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_28 = (((arr_20 [i_3] [i_3]) ? (arr_0 [21]) : (arr_18 [i_1])));
                    arr_33 [i_1] [i_1] [i_1] [i_1] [i_3] = var_12;
                    var_29 = var_3;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_30 &= (arr_35 [i_11]);
                    arr_36 [i_11] [i_3] [6] [i_3] [i_1] = (arr_35 [i_1]);
                }
                var_31 = ((122 ? ((~(arr_27 [i_1] [i_3] [i_1] [4] [i_6 + 2]))) : ((((!(arr_4 [i_3] [i_1])))))));
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_32 += 28;
                arr_39 [i_3] = (((arr_12 [i_12] [i_1] [i_1]) % var_12));
                var_33 = (arr_23 [i_1] [i_1] [i_3] [i_3] [i_1] [i_12]);
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_34 = (min(var_34, (1 | 15539)));
                        arr_51 [i_13] = (arr_29 [i_13] [i_13]);
                    }
                }
            }
        }
        arr_52 [i_1] [i_1] = max((~var_11), (((!(arr_25 [i_1] [1] [i_1])))));
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        var_35 = (max(0, -595741514));
        var_36 = (min((((arr_25 [i_16] [i_16] [i_16]) ? var_8 : (arr_32 [i_16] [i_16] [i_16] [i_16]))), (arr_32 [i_16] [i_16] [i_16] [i_16])));
        var_37 = ((-(((arr_54 [i_16]) | (arr_54 [i_16])))));
    }
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        arr_58 [i_17] [i_17] = ((!(arr_55 [19] [i_17])));
        arr_59 [i_17] = (min(var_5, (arr_56 [i_17])));
    }
    var_38 ^= (!var_2);
    #pragma endscop
}
