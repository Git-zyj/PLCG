/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((((1 ? 1 : var_2)) - var_0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 = ((-(((2272679708 >= (arr_1 [i_2 + 1]))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_17 = 186;
                        var_18 = (max(var_18, (((~(arr_8 [0] [i_1] [0] [i_1 + 2]))))));

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            arr_15 [2] [i_1] [9] [i_2] [i_4 + 1] = 91;
                            var_19 = (((!var_0) ? (22458 && var_13) : (arr_10 [i_0] [i_3] [i_2] [i_2 - 3])));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_20 = ((61 ? (var_9 % 70) : (arr_12 [i_0] [7] [i_2] [i_2] [i_2] [i_1] [i_5])));
                            var_21 = (min(var_21, (((!(arr_10 [i_0] [i_1] [0] [i_5]))))));
                            arr_20 [i_2] = ((((((arr_17 [i_0] [i_1 - 1] [i_1] [i_2] [i_2] [i_3] [i_5]) + 1120))) ? 1 : ((((arr_5 [i_0 - 1] [i_0]) || var_9)))));
                            var_22 = (((var_7 < var_13) - (arr_19 [9] [i_1 - 1] [0] [6] [i_1 + 2])));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_23 = ((!(arr_7 [i_1] [i_1] [i_1] [i_1])));
                            var_24 -= (((1 >= 2793696068) == var_4));
                            var_25 = (min(var_25, -670447342));
                            var_26 = var_12;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_27 ^= (((var_14 % var_3) ? var_9 : (arr_18 [i_3 - 1] [i_3 - 1] [i_2 + 1] [i_2 + 3] [i_1 - 1] [i_1 - 1] [i_0 + 1])));
                            var_28 = var_0;
                            var_29 = (((arr_16 [i_1 + 1] [9] [i_2] [9] [1] [i_7] [i_1]) ? (arr_16 [i_1 + 1] [i_1] [i_2] [i_3] [i_1] [i_0] [i_2]) : 1));
                        }
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_30 = ((min((arr_8 [i_2] [i_1 + 1] [i_1] [2]), (!47703417064103867))) >= var_2);

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_31 = (max((((((2319212481 ? 11894972474160099585 : (arr_11 [i_2] [i_2])))) ? (min(var_11, (arr_0 [i_0]))) : (arr_21 [i_2] [i_1] [i_1] [i_9] [i_9] [i_2] [i_0]))), -var_3));
                            var_32 = ((1 ? (((min(var_7, (arr_22 [i_1] [i_1]))))) : (((var_12 && (var_10 % 1))))));
                            var_33 ^= ((((((arr_19 [i_2 - 2] [i_2 + 2] [i_1 - 1] [i_0 + 1] [i_0 + 1]) < var_3))) >= ((0 ? 18679 : (arr_19 [i_2 + 2] [i_2 - 2] [i_1 + 2] [2] [i_0 + 1])))));
                        }
                        arr_32 [i_2] = (((((~((max((arr_21 [i_0] [i_1] [i_2 + 3] [i_1] [i_1 - 1] [i_8] [1]), 1)))))) ? ((((var_4 ? var_8 : var_1)))) : (((!(~64312))))));
                    }
                    arr_33 [i_0] [i_1] [i_2] = (max(var_7, (max(((((-32767 - 1) ? 64980 : (arr_24 [8] [i_0] [i_0] [i_2] [i_2])))), (~var_7)))));
                    var_34 = (min((max((arr_28 [i_0 - 1]), 14808526958833831608)), (((-((max(41344, var_8))))))));
                }
            }
        }
    }
    var_35 = (((((((((var_4 ? var_8 : var_14))) ? (var_10 - var_7) : (var_6 / var_1))) + 9223372036854775807)) << (((var_10 + 1601816401) - 23))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                var_36 = ((((min(1, 200))) ? (arr_34 [i_10] [1]) : 247));
                var_37 = ((!((min((max(var_2, var_3)), (~var_5))))));
                arr_38 [7] [i_11] [i_11] = (((((var_2 ? var_8 : (arr_37 [i_11] [i_11])))) ? (arr_37 [i_10] [i_11]) : ((-(arr_37 [i_11] [i_11])))));
            }
        }
    }
    var_38 = (((min((min(var_4, 1)), var_14)) - ((min((min(var_9, var_3)), var_3)))));
    #pragma endscop
}
