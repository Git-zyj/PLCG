/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((((max(var_0, var_13))) ? (((((max(var_10, (arr_3 [1] [1]))))) - ((var_12 ? var_16 : (arr_1 [4] [14]))))) : (((min(114, -3))))));
                arr_6 [i_1] [6] [9] = (max(var_11, (max(-18826, 7118600477367877211))));
                var_20 = (min(var_20, (arr_1 [i_0 + 3] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, (arr_10 [10] [1] [i_2])));
                            var_22 = var_10;
                            var_23 |= var_9;
                            var_24 = (~13194);
                        }
                    }
                }
                var_25 = (max(var_25, (!var_6)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_26 = (((((arr_1 [i_5 - 1] [i_5 + 2]) ^ var_18)) * (arr_1 [i_5 + 2] [i_5 - 3])));
                    var_27 = (min(var_27, var_12));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_28 *= (!1);
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_29 = (!var_4);
                                arr_29 [i_7] [i_9] = var_5;
                            }
                        }
                    }
                }
                arr_30 [i_4] = -30138;

                /* vectorizable */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_30 = ((~(~179)));
                    var_31 = ((~((var_6 & (arr_8 [i_4] [i_4] [i_4])))));
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    arr_38 [i_4] [i_4] = ((!((((max(var_12, (arr_31 [7] [2] [i_11]))) ? var_2 : 1569178152)))));
                    var_32 = (arr_5 [i_4] [i_4] [i_4]);

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_33 = ((((arr_22 [5] [i_5 + 4] [i_5 + 2] [i_5 + 3]) > (arr_22 [i_4] [i_5 + 4] [i_5 + 2] [i_5 + 3]))));
                        var_34 = ((((~(0 - 127))) % var_4));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_50 [i_11] [i_5] [i_11] [i_14] [0] = (39755 != -22);
                                arr_51 [i_4] [i_14] [i_4] [i_4] [i_4] [i_4] = var_12;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_35 = (min(var_35, (((~(((!(var_10 || var_17)))))))));
                                var_36 *= (54 - 2237460601);
                            }
                        }
                    }
                }
                for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                {

                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            var_37 = (arr_10 [i_17] [i_4] [i_17]);
                            arr_67 [i_4] = var_14;
                            arr_68 [i_4] [i_18] [i_17] [0] = (((arr_22 [i_5] [i_5 + 4] [i_5 - 1] [8]) || (var_0 <= var_5)));
                            var_38 = var_18;
                        }
                        var_39 = (~180896265);
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_40 |= (arr_9 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_4]);
                        arr_72 [i_4] [i_5] [i_17] [i_20] = (max((max(var_3, (arr_1 [i_4] [i_5 + 1]))), ((((-28 + 2147483647) << (1937321662 - 1937321662))))));
                        arr_73 [i_5] [i_20] [9] [1] [i_20] = ((((((arr_40 [i_5 - 3] [i_5 - 1] [i_5 + 1]) - 1450002479))) ? (arr_62 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 2]) : ((~(max(1461132896, 1023))))));
                        var_41 |= var_12;
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 10;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            {
                                var_42 = (((max(-18, 13443243650211168513)) - ((((!(155 & 3625026552308448966)))))));
                                arr_80 [i_4] [i_5] [i_4] [i_21] [i_22] [i_22] [i_4] &= var_15;
                                arr_81 [i_21] [i_5] [i_17] = var_17;
                                arr_82 [i_21] [i_21] = (((arr_21 [i_22] [i_5 - 3] [i_22] [i_21]) ? (((max((arr_3 [i_21 - 1] [i_5 - 3]), var_0)))) : var_18));
                            }
                        }
                    }
                    var_43 = (min((arr_22 [i_17] [5] [i_4] [i_4]), ((254 ? 16 : -25589))));
                    var_44 = max((arr_44 [1] [1] [1] [2]), ((~(((arr_52 [i_4] [i_4] [i_17] [i_17] [5] [i_17]) | var_7)))));
                }
                arr_83 [i_4] = (1 % var_15);
            }
        }
    }
    var_45 = (max(29223, -289726817));

    for (int i_23 = 0; i_23 < 19;i_23 += 1)
    {
        var_46 = var_5;
        arr_86 [i_23] [i_23] = arr_84 [i_23] [i_23];
    }
    /* vectorizable */
    for (int i_24 = 2; i_24 < 24;i_24 += 1)
    {
        var_47 = ((~(arr_87 [i_24 - 2] [1])));
        arr_90 [i_24] = (arr_87 [i_24 + 1] [i_24 - 1]);
    }
    #pragma endscop
}
