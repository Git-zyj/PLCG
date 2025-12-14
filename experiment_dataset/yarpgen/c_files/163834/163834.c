/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((((!(arr_4 [12]))))) | (((arr_3 [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1]))))))));
                var_19 = (max(var_19, (((((max(10096679250200716300, -126))) ? ((~(arr_3 [i_0]))) : (min((arr_3 [i_1]), 52950)))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_20 = ((min(((1567997541 ? 52953 : 9079256848778919936)), 18446744073709551615)));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 = (min(var_11, (arr_2 [i_2] [i_2])));
                        arr_18 [i_2] = (arr_0 [i_2] [i_2 - 1]);
                        arr_19 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] = ((!(((~(((arr_5 [i_5]) ? (arr_12 [i_5 - 1] [0] [0] [i_2 - 2]) : (arr_3 [i_2]))))))));
                    }
                }
            }
            var_22 = (arr_17 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2]);
        }
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_23 = (min(var_23, ((((((arr_23 [i_6 + 2] [i_6]) > (arr_20 [i_6]))) || 1)))));
            var_24 = (min(var_24, (((-(arr_23 [i_6 + 4] [i_7 - 1]))))));
            var_25 = ((((var_9 && (arr_22 [i_6 - 1] [i_7 - 1]))) ? (arr_20 [i_6 - 1]) : (((arr_22 [i_6 + 3] [i_6 + 3]) ? 0 : 12029854706387780189))));
            var_26 = (arr_21 [i_6 + 4]);
        }
        arr_24 [i_6] = (~(((arr_22 [i_6 - 2] [i_6 + 1]) ? (arr_20 [i_6 + 2]) : var_4)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_27 = var_14;
                        var_28 = (max(var_28, ((((var_1 > (arr_22 [i_9] [i_8])))))));
                        var_29 &= 1302119483;
                    }
                    var_30 = (max(var_30, (((-(arr_22 [i_6] [i_6 + 1]))))));
                }
            }
        }
    }

    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        var_31 = (((~var_10) > ((((((arr_28 [i_11] [11] [2]) >= var_1))) * ((min(var_1, 255)))))));
        var_32 = (min(((max(var_5, ((((arr_10 [i_11] [i_11] [i_11]) == (arr_17 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1]))))))), ((~(arr_33 [i_11])))));

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_33 *= (((-(26032 >= -28409))));
            var_34 = (max(var_34, (arr_35 [i_11])));
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_35 = (max((arr_41 [i_13]), var_17));
        var_36 = (max(var_36, ((var_1 ? (((arr_41 [i_13]) ? (arr_41 [i_13]) : var_16)) : (((!((max(var_10, (arr_41 [i_13])))))))))));

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            var_37 = (max(var_37, ((((((14833635036121216224 <= (((max(var_4, (arr_42 [i_13] [i_14])))))))) >> (-42 + 48))))));

            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
            {
                var_38 |= var_3;

                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    var_39 = var_0;
                    var_40 = var_17;
                    arr_49 [i_14] [i_14] = (((arr_46 [18] [18] [18] [i_16]) ? (min((arr_46 [i_13] [i_14] [i_14] [i_14]), var_14)) : ((min((((var_5 < (arr_45 [i_13] [i_14] [i_13])))), ((~(-127 - 1))))))));
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_55 [i_13] &= -2129947290;
                            arr_56 [i_13] [i_14] [i_14] [i_14] = (min((((~20) ? (arr_48 [i_18 + 1] [i_18 + 2] [i_18 + 2] [i_18 + 1] [i_18 + 2]) : -1)), (arr_45 [i_13] [i_14] [i_15])));
                        }
                    }
                }
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
            {
                var_41 = (((((((((arr_43 [i_13] [i_19]) / var_9))) ? (min((arr_39 [i_13]), (arr_46 [i_13] [i_13] [i_13] [i_13]))) : (arr_60 [i_19] [i_14] [i_14] [i_13])))) ? (min((arr_41 [i_13]), 47)) : -0));
                var_42 = (((((arr_43 [i_13] [i_14]) * (var_7 <= var_17))) / (arr_39 [i_13])));
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
            {
                var_43 = ((-63 ? (min(((19237 ? (arr_45 [i_13] [i_14] [i_14]) : (arr_50 [i_13]))), ((((arr_40 [i_13] [i_13]) ? -15175 : var_16))))) : var_2));
                var_44 = ((((min((arr_54 [13] [i_14]), (((arr_57 [i_13] [i_13] [3] [3]) ? var_11 : 2142497159))))) ? (((((arr_53 [i_13] [i_14] [i_14] [i_14] [i_20] [i_20]) * -68)))) : (min(((14820 ? (arr_60 [i_13] [i_13] [i_14] [i_13]) : 19237)), var_16))));
            }
        }
        var_45 = var_7;
    }
    #pragma endscop
}
