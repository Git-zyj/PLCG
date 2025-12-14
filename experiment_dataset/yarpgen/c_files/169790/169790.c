/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 1] [i_1 + 1] = (arr_0 [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = ((-(arr_6 [i_0 - 1] [i_0 - 3])));
                                arr_16 [i_4] [i_4] [i_4 - 1] [i_4] [i_4] [i_4] &= (arr_3 [i_0 - 1]);
                                var_12 -= ((((((arr_2 [11] [i_2] [i_2]) ? var_5 : var_8))) ? var_9 : (197 < 1)));
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_0] |= -1151046279;
                            }
                        }
                    }
                    arr_18 [10] |= ((var_9 ? (arr_11 [2] [i_1 + 2] [2] [i_2] [i_0 - 1] [i_0]) : 102));
                    var_13 = 19616;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_14 = (min((((min(var_2, var_4)) ^ (arr_3 [i_5]))), (2147483647 - 153)));
                    arr_22 [i_0] [i_1] [i_0] = (((min((~2147483647), (((arr_8 [i_0] [i_0 + 1] [i_0] [i_5]) - (arr_8 [i_0] [i_0 - 2] [i_1] [i_5]))))) % (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? -41 : ((~(arr_20 [i_0 - 2] [i_0] [4])))))));
                    var_15 = (var_3 % 1076482115);
                    var_16 = (((arr_8 [i_0] [i_1] [i_1] [i_0]) ? (min(146, (~1))) : (((33473 - 99) ? var_6 : ((241 * (arr_21 [i_5] [i_0] [i_0] [0])))))));
                }
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    var_17 = (((var_5 / var_0) || (min(1, (arr_24 [i_1 + 1])))));

                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_18 += (min((185 + var_2), (((arr_8 [4] [4] [4] [i_7 + 2]) ? (((-127 - 1) - (arr_14 [i_8] [i_7 + 1] [1] [1] [i_0] [i_0]))) : (arr_3 [i_8])))));
                            var_19 = var_6;
                            var_20 -= (((((+(((arr_20 [i_6 - 1] [10] [10]) | var_8))))) ? 115 : (max((159 != 4294967284), var_4))));
                        }
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            arr_32 [i_9] [i_0 - 3] [i_0] [i_1 + 1] [i_0 - 3] = (i_0 % 2 == 0) ? ((min((+-14919), ((var_9 << ((((var_7 * (arr_11 [i_0] [i_0] [i_6] [11] [i_7] [i_6]))) - 603111190))))))) : ((min((+-14919), ((var_9 << ((((((var_7 * (arr_11 [i_0] [i_0] [i_6] [11] [i_7] [i_6]))) - 603111190)) - 75876938)))))));
                            var_21 = ((var_7 ? ((+((151 ? (arr_9 [i_7] [i_1]) : (arr_5 [i_0 - 2] [i_0 - 2] [i_0]))))) : (arr_20 [i_0 - 1] [i_1 + 2] [i_9 + 2])));
                            var_22 = (min(var_1, (arr_9 [i_0] [i_1 + 1])));
                            var_23 = var_5;
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_7 + 1] [i_9]);
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_24 = (min((arr_19 [i_0 - 2] [i_7 - 1]), var_5));
                            var_25 = (1 == var_4);
                            var_26 = (max(var_9, ((41 ? 1 : var_3))));
                            var_27 = var_1;
                            var_28 = -var_4;
                        }
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_1] [9] = ((((-((max(111, 127))))) == (!-1302)));
                            var_29 = ((min(((var_5 ? var_8 : var_1), var_9))));
                            var_30 -= ((!((max(var_9, (arr_5 [0] [i_6] [0]))))));
                        }
                        var_31 = (min((((!(((var_2 ? var_8 : var_8)))))), var_7));
                        var_32 = (max(-2241728486, (arr_36 [i_0] [i_0] [i_6] [i_7 + 2] [i_7 + 2])));
                    }
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_33 += (arr_3 [i_1]);

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_34 = ((~((-(arr_8 [i_0] [i_0 - 2] [i_0] [i_0])))));
                            var_35 = (((!((((arr_48 [i_0]) ? 102 : var_6))))));
                            var_36 -= var_5;
                            var_37 = ((98 ? (arr_35 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 3] [i_0]) : -3789412777470104435));
                            var_38 = (((((50133210600470643 ? -1840904027 : (arr_1 [i_0] [i_0 + 1])))) ? (max((arr_28 [i_0] [i_0] [i_12] [i_13] [i_12]), (arr_28 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : (((((arr_48 [i_0]) || (arr_48 [i_0])))))));
                        }
                        var_39 += (((min(0, var_6)) >> (!3212841293)));
                        var_40 = (((~((0 ? var_2 : 42482)))));
                    }
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 11;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_41 = (((arr_52 [i_1] [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_1]) > ((var_7 ? var_4 : 1082126008))));
                            var_42 = (arr_11 [i_0] [i_0 - 1] [i_1 - 1] [i_15 + 1] [i_15] [i_15]);
                            var_43 = (((arr_25 [i_0] [i_0] [i_0]) ? (arr_48 [i_0]) : var_5));
                            arr_55 [i_16] [1] [i_0] [i_12] [i_0] [i_0] [i_0] = (((arr_1 [i_0] [i_15 + 1]) ? (arr_1 [i_0] [i_1]) : 126));
                        }
                        for (int i_17 = 1; i_17 < 13;i_17 += 1)
                        {
                            arr_59 [i_0] [i_0] [i_0] = var_1;
                            var_44 = (~var_9);
                            var_45 -= ((!(arr_29 [i_15] [i_1] [i_1] [i_15] [i_17 + 1] [i_12])));
                        }
                        var_46 = (((arr_7 [i_0] [7] [i_0]) ? (var_7 <= 14) : (arr_25 [i_0] [i_0 - 1] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
                    {
                        var_47 = (arr_24 [i_0]);
                        arr_62 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((!(arr_34 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
                    {
                        var_48 = (arr_6 [3] [i_19]);
                        var_49 = (arr_28 [i_19] [i_19] [i_19] [i_19] [8]);
                        var_50 = -1767650033;
                    }
                }
                arr_66 [i_0] [i_1] = (arr_10 [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
