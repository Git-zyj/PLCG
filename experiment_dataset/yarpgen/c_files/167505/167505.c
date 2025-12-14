/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1 - 2] [i_3] [i_4] = (((arr_4 [i_4 + 1] [i_1 + 1] [i_2]) >> (((arr_4 [i_4 + 1] [i_1 - 1] [i_2]) - 484912381))));
                                var_19 = ((!(arr_4 [i_0] [i_1 - 1] [i_4 + 1])));
                                arr_14 [i_0] [i_4] [i_2] [i_0] [i_4 - 1] = ((6 ? 24 : 5325308061583417918));
                            }
                        }
                    }
                    var_20 = (((38894 >> (6256890354338742157 - 6256890354338742147))));
                    var_21 = (arr_7 [i_1 + 1]);
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_5] [i_1 - 1] [i_5] [i_0] = (min((arr_12 [i_5] [i_1] [i_1] [i_0] [i_0]), (arr_6 [i_0] [i_1 + 3] [i_1 + 2] [i_5 + 1])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [7] [i_5] [i_6] [i_7] [18] = (((!var_13) % ((-(arr_6 [i_1] [i_1] [i_1 - 2] [i_5 + 2])))));
                                arr_26 [i_7] [i_6] [15] [i_0] = ((((((!(arr_21 [i_0] [1] [1] [1] [i_7]))))) - (((var_4 > ((-(arr_6 [i_0] [i_1 + 1] [i_6] [i_7 + 1]))))))));
                                var_22 = ((var_14 ^ var_14) & var_0);
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_9 [13] [8] [12] [15])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_34 [i_8] [i_8 + 2] [i_5] [i_1 + 3] [i_8] = (arr_30 [i_8] [i_8] [i_5] [i_8]);
                                arr_35 [i_8] [i_8] [i_5] [i_1] [i_1] [i_8] = -53370;
                            }
                        }
                    }
                    arr_36 [i_0] [i_1] [i_1] [i_0] = (arr_31 [i_0] [i_5] [i_1 + 3] [i_0] [i_0] [i_0]);
                }
                arr_37 [i_1] [i_0] [i_0] = ((((max(var_8, (var_2 && var_13)))) ? var_0 : var_3));
                arr_38 [i_1] [i_0] = (((min(((var_16 ? var_16 : var_11)), var_6)) <= (arr_20 [i_1 + 3] [i_1 + 1] [i_1 + 2] [i_1 - 2])));
            }
        }
    }
    var_23 = (max(var_23, var_13));
    var_24 = (min((~var_16), var_18));
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] = (var_6 - var_12);
                        var_25 = ((arr_3 [i_13]) ? (arr_28 [i_10 - 1]) : var_16);
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_26 += (((((arr_5 [i_14]) << ((((var_11 | (arr_22 [i_11] [i_12]))) - 11071373731203774074))))) ? (((((min(242, 52819)))) ^ ((var_11 ? var_2 : var_0)))) : var_6);
                        var_27 |= (((((((var_8 != (arr_31 [i_14] [i_11] [i_11] [i_12] [i_11] [i_14]))) ? ((-(arr_41 [i_10 + 1]))) : (arr_40 [i_11] [i_14])))) ? ((var_9 ? (((arr_23 [i_10] [i_11] [i_11] [i_11] [i_10] [i_10]) ? (arr_22 [i_10] [i_11]) : (arr_11 [12] [i_11] [i_11] [i_11] [i_11]))) : -var_6)) : ((((var_0 > var_13) ? ((min(var_15, (arr_6 [i_10] [0] [0] [7])))) : ((var_12 ? (arr_46 [i_12 + 3] [i_12 + 3] [i_11] [i_11] [i_10]) : (arr_8 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_14]))))))));
                        var_28 = (163 != 15539273371707281872);
                        var_29 = (max(var_29, ((min(((max((var_6 && var_5), (max(var_8, (arr_1 [i_10])))))), (var_1 & var_3))))));
                        var_30 = (arr_43 [i_14] [7] [i_10]);
                    }

                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        var_31 = (max(var_31, (((107 ? 22654 : 15539273371707281872)))));
                        var_32 += var_6;
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_33 = (max((~var_12), ((max(((var_3 ? var_15 : var_7)), (var_4 ^ var_7))))));
                        var_34 &= (((((var_9 ? var_13 : (arr_16 [i_16]))) | (((var_14 <= (arr_2 [i_10] [i_11])))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        arr_64 [i_11] [i_10] = (arr_49 [i_10 + 1] [i_10 + 1] [i_10] [i_10]);
                        arr_65 [i_10] [i_10] = var_9;
                        arr_66 [i_17] [i_10] [i_10 - 1] [i_10] [i_10 - 1] = ((!(arr_46 [i_12 + 3] [i_12 + 1] [i_12] [i_12 + 3] [i_12 + 3])));
                    }
                    var_35 = (max(var_35, (arr_55 [2])));
                    arr_67 [i_10 + 1] [i_10] [i_12] = var_9;
                    var_36 += (min(-var_10, ((max((arr_29 [10] [i_10 - 1] [i_10 + 1] [10]), (arr_29 [10] [i_10 - 1] [i_10 - 1] [10]))))));
                }
            }
        }
    }
    #pragma endscop
}
