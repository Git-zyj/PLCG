/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 ^= (((arr_10 [i_0] [i_2] [i_2] [i_4]) != var_3));
                                arr_13 [i_2] = 5327408113805445438;
                                var_14 ^= (~var_9);
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_3] = (arr_6 [i_0 + 3]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] = (arr_18 [i_2]);
                                var_15 = 14911428135095612667;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_24 [i_0 - 1] [i_1] [i_2] [i_2] = var_4;
                        var_16 -= arr_23 [14] [1] [i_1] [i_2] [i_2] [i_7];
                    }
                }
            }
        }
        arr_25 [i_0] = (-5327408113805445437 / 3752);
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_17 = -55;
                            var_18 = 19240;
                            var_19 *= (((arr_37 [i_8 - 2] [i_9] [i_11 + 1] [i_11] [i_8]) >= (arr_37 [i_8 - 2] [i_9] [i_11 - 1] [i_11] [i_12])));
                            var_20 = (max(var_20, var_3));
                        }
                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            var_21 = ((-(arr_29 [i_8 - 2] [i_8 - 2] [i_8 + 1])));
                            var_22 |= (((~(arr_0 [i_9]))));
                            var_23 = (((arr_17 [i_8] [i_11 - 1] [i_10] [i_10] [i_13]) | (arr_17 [i_8 + 1] [i_11 - 1] [i_8 + 1] [i_11] [i_13])));
                        }
                        for (int i_14 = 4; i_14 < 16;i_14 += 1)
                        {
                            arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [13] = (((arr_8 [i_8] [i_8] [i_8 - 2] [i_11 - 1] [i_14] [i_14 - 2]) >= (19240 >= var_0)));
                            arr_43 [16] [i_8] [9] [i_8] = (arr_7 [i_8 - 2] [6] [6] [6]);
                            var_24 = var_7;
                        }
                        arr_44 [i_11 + 1] [i_8] [i_10] [i_8] [i_8] [i_8 + 1] = 19240;
                        var_25 += 3418760400;
                        arr_45 [i_8] [i_9] [i_9] [i_10] [i_8] [i_11] = (~var_7);
                        var_26 = ((-(arr_32 [i_8 + 1] [i_9] [0] [i_11 - 1])));
                    }
                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        arr_49 [14] [i_9] [i_9] [10] [i_9] [i_9] |= (~var_11);

                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            arr_54 [14] [i_9] [i_8] [i_9] [i_9] [i_9] [i_9] = 46296;
                            arr_55 [i_8] = ((max(var_1, var_4)));
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 15;i_17 += 1)
                        {
                            var_27 |= ((var_5 ? var_11 : (((arr_4 [i_9] [i_9]) % (arr_20 [i_8] [i_9] [i_10] [i_15 - 1] [i_15 - 1])))));
                            arr_60 [i_8] [i_8] = ((-(arr_36 [i_15] [i_15] [i_15] [i_15 + 1] [i_15] [i_8])));
                            var_28 = ((((arr_8 [i_8] [i_9] [i_10] [i_8] [i_17] [9]) >= (arr_6 [i_8]))));
                            var_29 += (arr_17 [i_8] [14] [i_10] [i_15] [i_17]);
                        }
                        /* vectorizable */
                        for (int i_18 = 3; i_18 < 15;i_18 += 1)
                        {
                            var_30 ^= var_0;
                            arr_64 [i_8] [i_18] [i_8] [1] [i_18] [i_8] = var_5;
                        }
                        var_31 = ((!(((+(min((arr_59 [6] [i_9] [i_9] [i_9] [i_9]), var_4)))))));
                    }
                    for (int i_19 = 3; i_19 < 14;i_19 += 1)
                    {

                        for (int i_20 = 1; i_20 < 15;i_20 += 1)
                        {
                            var_32 = var_5;
                            var_33 = (46292 >= -547697381);
                            var_34 = ((((((var_8 | var_7) >= 19239))) != var_6));
                        }
                        for (int i_21 = 0; i_21 < 17;i_21 += 1)
                        {
                            var_35 = var_8;
                            var_36 = (max(var_36, (((var_4 != (min(var_10, 3623085566615920422)))))));
                            var_37 = (min(var_37, (((((((arr_0 [i_21]) | var_8))) / 46297)))));
                        }
                        for (int i_22 = 0; i_22 < 17;i_22 += 1)
                        {
                            var_38 = arr_29 [i_8] [i_9] [i_10];
                            var_39 += (5327408113805445438 < 32745);
                            arr_76 [i_8] [4] [4] [i_22] = (min(-var_3, -var_2));
                            var_40 = ((min(var_2, var_9)));
                        }

                        for (int i_23 = 2; i_23 < 13;i_23 += 1)
                        {
                            var_41 &= (max(((((arr_70 [i_19] [i_19] [10] [i_19] [i_19 - 1]) - (arr_16 [i_10] [i_19] [i_23 - 1])))), (((arr_30 [i_8 + 1] [4] [i_10]) & var_4))));
                            var_42 |= min((arr_53 [2]), (arr_66 [i_8] [i_9] [i_10] [16] [16]));
                        }
                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 17;i_24 += 1)
                        {
                            var_43 = (((arr_0 [i_8 - 1]) != (arr_6 [i_8 - 1])));
                            arr_82 [i_8 - 2] [0] [i_10] [i_8] [i_19] [i_24] = ((21715 | (arr_36 [4] [i_8] [i_9] [i_10] [i_19] [i_8])));
                        }
                        for (int i_25 = 4; i_25 < 16;i_25 += 1)
                        {
                            var_44 ^= var_2;
                            var_45 += var_9;
                        }
                    }

                    for (int i_26 = 0; i_26 < 17;i_26 += 1)
                    {
                        var_46 = (min(var_46, (arr_34 [i_8] [2] [4] [i_26])));
                        var_47 *= (var_10 & var_6);
                        arr_88 [i_8] [i_8] [i_10] [6] = var_9;
                        arr_89 [i_26] [i_8] [i_26] [i_26] [i_26] [i_26] = ((~(((max(var_11, var_6))))));
                    }
                    for (int i_27 = 0; i_27 < 17;i_27 += 1)
                    {
                        var_48 = (((var_10 < (arr_36 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 - 1] [i_8]))));

                        for (int i_28 = 1; i_28 < 15;i_28 += 1)
                        {
                            arr_97 [i_8] [i_28 + 1] [i_27] [i_10] [i_9] [i_8] [i_8] = 19240;
                            var_49 ^= var_7;
                        }
                    }
                    var_50 *= 5327408113805445440;
                }
            }
        }
        var_51 *= (((((arr_51 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) >= var_11))));
        var_52 ^= ((((arr_37 [i_8 - 1] [i_8] [i_8 + 2] [i_8] [i_8 - 1]) ? (max(var_2, var_11)) : ((19264 ? 664137491 : 542546936409301101)))));
        var_53 = ((-((((var_0 / (arr_63 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
    }
    var_54 &= (var_2 | var_5);
    #pragma endscop
}
