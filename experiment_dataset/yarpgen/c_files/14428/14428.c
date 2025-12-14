/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_5));
    var_14 = (((((max((-3356263695911905825 < var_2), var_10)))) | (var_0 < 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] [1] = ((!(arr_5 [i_0])));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] = (min((((arr_6 [i_2]) ? 28 : 1)), ((var_5 ? (arr_8 [i_3]) : 127))));
                        arr_13 [i_3] [i_3] [i_3] [6] [i_1] [i_0] = ((~(((min(-3356263695911905820, (arr_1 [i_2] [11])))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [1] [4] [1] [3] = max(0, -6356092278036923122);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_15 = ((~(((arr_9 [11] [11]) | (arr_5 [i_0])))));
                            var_16 ^= (min((((arr_14 [i_0] [i_1] [i_1] [12]) ? ((0 ? (arr_2 [i_0] [i_1]) : 3356263695911905819)) : (min(var_9, var_2)))), (((var_7 / var_3) ? -1 : (((arr_10 [i_4] [i_4] [i_4] [i_4]) - 1))))));
                            arr_19 [i_0] [i_5] [i_0] [i_0] [i_5] = arr_3 [i_0];
                            var_17 = var_11;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_4] [i_0] = ((((!(arr_15 [i_0] [i_1] [i_2] [i_4]))) ? (arr_23 [1] [i_1]) : (arr_0 [9] [9])));
                            var_18 = (((-(arr_0 [i_0] [i_4]))));
                        }
                        arr_25 [i_4] [i_2] [1] [i_0] = (((max((((arr_8 [i_1]) * var_7)), (((-(arr_4 [i_0] [12])))))) * ((max(((1 / (arr_6 [i_0]))), -1)))));
                    }
                    var_19 = var_2;
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_30 [i_0] [i_1] [i_0] = ((((var_5 ? (var_3 && -5509678990944227243) : 211)) == (((arr_17 [i_0] [i_1] [i_7]) - var_9))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_37 [i_9] [11] [i_0] [i_0] = ((~(arr_36 [i_8] [i_0] [i_0] [i_0])));
                            arr_38 [i_0] [i_9] [8] [8] [i_9] [i_9] [8] = (((arr_36 [i_0] [i_0] [i_0] [i_0]) & (~var_8)));
                        }
                        arr_39 [i_0] [4] [i_7] [1] [1] [1] = ((var_1 ? (arr_20 [i_0] [i_1] [i_1] [i_0] [0] [i_8]) : ((var_8 & (arr_23 [i_0] [i_0])))));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_43 [i_0] [i_1] [i_1] [i_0] = (max(((var_12 | (arr_0 [i_7] [i_0]))), (arr_8 [i_1])));
                        var_20 -= ((-(min((((var_0 ? 1 : var_10))), (min(-7300758469143228725, var_0))))));
                    }
                    arr_44 [i_0] = ((var_3 ? ((((max(var_2, -7300758469143228727))) ? (max(1, (arr_10 [5] [i_1] [i_1] [5]))) : (~var_10))) : ((var_4 ? (((max(1, var_9)))) : var_6))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((var_6 ? (arr_14 [i_0] [10] [i_13 + 1] [i_12 + 1]) : var_10)) <= (((arr_17 [i_13 + 4] [1] [i_12 + 2]) & (arr_17 [i_13 - 2] [i_1] [i_12 - 1])))))));
                                var_22 = var_10;
                            }
                        }
                    }
                    arr_53 [i_11] [i_1] [i_0] = -1;
                    arr_54 [i_1] [i_1] [3] = (!((min((arr_42 [i_0] [i_0] [0] [0] [i_1] [1]), (arr_42 [i_0] [i_0] [i_0] [8] [i_0] [i_0])))));
                }
                var_23 = 7300758469143228713;
                arr_55 [i_0] = (min(((~(min((arr_45 [i_1] [i_0] [i_0]), var_12)))), (((((((-(arr_27 [i_0] [i_0] [i_1]))) + 2147483647)) >> (arr_27 [i_0] [i_1] [i_0]))))));
            }
        }
    }
    var_24 = var_1;

    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_25 = ((1 ? -9223372036854775806 : 238));
        arr_58 [8] = ((arr_34 [i_14]) | (arr_34 [i_14]));
    }
    #pragma endscop
}
