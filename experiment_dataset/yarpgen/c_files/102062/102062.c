/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (max((((var_7 | (arr_0 [i_0] [i_0 - 2])))), (max((arr_0 [i_0 - 2] [i_0 - 3]), -1))));
        arr_4 [i_0 + 1] = (((arr_0 [i_0 - 2] [i_0 - 1]) ? (((max((arr_0 [i_0 - 1] [i_0 - 2]), var_6)))) : (arr_0 [i_0 - 1] [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    {
                        var_10 = (max((arr_10 [i_1]), (((255 | -3977) ? (arr_11 [i_1] [2] [i_1] [i_1]) : (arr_1 [15] [0])))));
                        arr_13 [i_3] = (((max((arr_10 [i_1]), var_2)) + (((max(112, 0))))));
                    }
                }
            }
        }
        var_11 = (((~(max(var_8, var_4)))));
        arr_14 [i_1] = (!var_7);
        arr_15 [i_1] [i_1] = (max((arr_8 [i_1] [i_1] [i_1]), (max(var_8, (arr_7 [i_1] [i_1])))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_12 = (max(var_12, (arr_19 [i_5])));
        var_13 = (max(((-(((arr_19 [i_5]) * (arr_0 [14] [11]))))), ((-((-1 ? 1 : 8191))))));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_23 [5] [i_6] = 1920;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_14 = (max((((arr_1 [i_5] [i_8]) ? (arr_1 [i_5] [i_5]) : (arr_1 [i_6] [i_8]))), (((!(arr_1 [i_8] [i_8]))))));
                        arr_28 [i_5] [i_6] [i_6] = (((((max(-187621913, 63616)))) & ((-((((arr_1 [8] [i_7 + 1]) || var_8)))))));
                    }
                }
            }
            arr_29 [i_6] = (max(var_3, (max((max((arr_17 [i_5]), var_1)), (max(var_9, (arr_20 [i_6] [1] [i_5])))))));
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_15 = (max(187621912, 57345));
            arr_34 [i_9 + 1] = (((((26513 << (1826299052 - 1826299039)))) ? -3977 : var_6));
            arr_35 [i_5] [i_5] [i_9] = (max((((var_9 * var_3) >> ((((max(-3977, -1))) + 22)))), (max((arr_1 [i_5] [i_9 + 1]), var_5))));
        }
    }
    var_16 = (max((~var_9), (max((max(var_1, var_9)), (var_9 > var_3)))));
    var_17 = (max(((max((max(var_0, var_6)), (max(var_8, var_0))))), var_1));
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                {
                    arr_45 [i_10] [i_11] [7] = (((1 ? (!-48) : -1686494892)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 14;i_14 += 1)
                        {
                            {
                                arr_52 [i_10] [i_10] [i_11] [i_13] [i_11] [i_10] [i_12] = (max((max(-113, 213)), var_8));
                                arr_53 [i_10] [i_11] [i_12] [i_11] [i_14] = ((max((max(6692, 3203920811)), (((var_7 ? (arr_37 [i_10] [i_10]) : var_7))))));
                                arr_54 [i_10] [i_11] [i_12] [i_11] [i_14] = 63615;
                                arr_55 [9] [i_11] [i_12] [i_13] [i_11] [i_13] [i_12] = (!var_2);
                            }
                        }
                    }

                    for (int i_15 = 3; i_15 < 13;i_15 += 1)
                    {

                        /* vectorizable */
                        for (int i_16 = 3; i_16 < 14;i_16 += 1)
                        {
                            var_18 ^= (var_7 / -var_1);
                            var_19 *= (57344 / 511);
                            arr_61 [i_10] [i_11] [i_11] [i_12 + 1] [i_15] [i_15] [i_16] = (var_9 / var_4);
                            var_20 = var_2;
                        }
                        var_21 = (max((max(((var_2 / (arr_49 [i_10] [i_11] [i_12 + 1] [i_12 + 1] [i_15]))), (arr_41 [5] [12] [5]))), ((max((((arr_40 [i_12 - 1] [i_11]) / var_7)), (max(511, 57345)))))));
                    }
                    for (int i_17 = 2; i_17 < 13;i_17 += 1)
                    {
                        arr_64 [i_10] [i_11] [i_12] [i_17] = (!var_6);
                        var_22 &= ((((max((arr_50 [2] [i_11] [i_10] [i_17 - 1] [i_17 - 1] [i_12 - 1] [i_12]), (arr_48 [i_17] [i_17] [i_12 + 1] [i_10])))) > (max(-2, -496214926))));

                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            arr_67 [i_10] [i_11] [i_11] [i_12] [7] [i_18] = ((((((max(187621912, 2002707449))) ? var_8 : ((max(var_9, (arr_2 [i_17 - 2])))))) == ((max(511, 1)))));
                            var_23 += ((~(max((arr_47 [i_17 - 2]), (arr_58 [i_18] [i_18] [i_17 - 1] [i_10])))));
                            arr_68 [i_10] [i_10] [i_12 + 2] [i_11] [i_18] = ((-(max(var_2, (arr_43 [i_10] [i_18])))));
                        }
                    }
                    for (int i_19 = 3; i_19 < 12;i_19 += 1)
                    {
                        var_24 = ((((!(arr_39 [i_19] [10] [i_12]))) ? (!-1) : (!var_0)));
                        var_25 = (max(-8424845082632690649, 1767182184));
                        arr_72 [i_10] [i_10] [i_11] [i_12] [i_12 - 1] [i_11] = var_9;
                        arr_73 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = (max((max((arr_60 [i_19] [i_19 + 2] [i_11] [i_10]), (arr_39 [i_12 + 3] [i_19 + 3] [i_19 + 1]))), (arr_60 [i_11] [i_19 + 3] [i_12] [i_19])));
                    }
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        arr_76 [i_11] = (((!var_3) + ((((arr_1 [i_10] [i_12 + 1]) != var_6)))));
                        arr_77 [1] [i_11] [i_11] [1] = arr_69 [i_12] [i_12 + 2] [i_10] [i_20];
                        var_26 = (max(var_26, ((max(((max(3984, 32761))), (arr_1 [i_10] [5]))))));
                    }
                    arr_78 [i_11] [i_11] = arr_41 [i_11] [i_11] [i_12 + 4];
                    arr_79 [i_11] = var_8;
                }
            }
        }
    }
    #pragma endscop
}
