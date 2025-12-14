/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (arr_1 [i_0 + 1] [i_1 - 2])));
                arr_4 [i_1] = (max(((var_6 / (arr_3 [i_0] [5] [i_1]))), (((((2147483647 ? var_1 : var_4)) != ((((arr_2 [i_1]) ? 1 : (arr_1 [i_0 - 1] [i_1])))))))));
            }
        }
    }
    var_11 = ((((-var_8 + (2147483662 + var_9)))) ? var_1 : var_0);
    var_12 = var_6;
    var_13 = (!var_7);

    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_14 -= (arr_6 [i_2 + 3]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_15 = (((var_6 < (arr_5 [i_4]))));

                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        arr_15 [i_5] [i_5] [i_4] [i_3] [17] [i_2 + 3] = 1;
                        var_16 = (!var_6);
                        var_17 = (-(((arr_10 [11] [11] [16] [17]) * var_6)));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_18 [i_2 + 2] [i_3] [i_4] [i_6] = (((arr_7 [i_2 + 3] [i_2 + 3] [i_6]) ? (arr_14 [i_2] [i_2] [5] [i_2 + 3] [i_2 + 3] [i_2]) : (18446744071562067964 < var_8)));
                        var_18 = (max(var_18, ((((var_6 ? (arr_9 [i_6]) : var_4))))));
                        var_19 = ((-(arr_12 [5] [i_3] [i_4] [i_6])));
                        var_20 = (max(var_20, var_2));
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        var_21 = (~6);
                        var_22 = ((2 < (arr_21 [i_2 + 1] [i_7 - 2] [i_7 + 1] [i_7 - 2])));
                    }
                    arr_22 [5] = 18446744071562067968;

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_23 = (((arr_11 [i_2 + 2] [i_2 - 1]) < (((-9223372036854775807 - 1) ? (arr_9 [i_4]) : var_1))));
                        var_24 = (((arr_5 [i_2 + 2]) ? (arr_5 [i_2 - 1]) : (arr_5 [i_2 - 1])));
                        arr_26 [1] [i_8] [i_8] = (((arr_17 [i_2] [i_3] [i_2 + 2]) < (arr_9 [i_2 - 1])));
                        var_25 = 1489406792;
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_30 [i_9] [i_3] [i_3] [1] = ((var_8 < (arr_12 [i_2 + 1] [i_2 + 4] [i_4] [i_9])));
                        var_26 = ((+((((arr_11 [3] [i_9]) || var_8)))));
                        arr_31 [i_2] [i_4] [i_2] [i_2] [i_2] = var_1;
                        arr_32 [i_2] [i_9] [i_9] [i_9] [i_9] = (((-(arr_10 [i_2] [i_3] [i_4] [3]))));
                        var_27 -= (arr_27 [i_2 + 4] [i_2 - 1] [i_2 + 3] [i_2 + 3]);
                    }

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_28 = (max(var_28, ((((arr_33 [1] [i_2] [i_2 - 1] [i_2]) ? 562949953420288 : (arr_11 [i_2 + 4] [i_10]))))));
                        var_29 = var_1;
                        var_30 = var_5;
                        arr_36 [i_2] [2] [6] [i_10] [i_10] = var_1;
                        arr_37 [i_2] [i_4] [1] [i_10] [i_4] [i_3] = (((arr_10 [i_2 + 3] [i_2 + 3] [i_10] [i_4]) - (arr_6 [i_2 + 1])));
                    }
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 24;i_11 += 1)
    {
        var_31 = ((((max((max((arr_38 [i_11] [i_11 - 3]), var_8)), (arr_38 [i_11] [i_11])))) ? (((((var_5 ? (arr_38 [i_11] [i_11 - 4]) : (arr_38 [i_11] [i_11 - 1])))) ? (arr_39 [i_11 - 2]) : ((var_2 ? (arr_39 [i_11]) : (arr_39 [i_11]))))) : (arr_39 [i_11])));
        var_32 = (min(var_32, ((((((-(arr_38 [i_11] [i_11])))) ? (arr_39 [i_11 - 1]) : (((((var_8 ? var_2 : var_8))) ? (-562949953420288 | var_0) : var_2)))))));
        var_33 = ((((((arr_39 [i_11]) ? (arr_38 [i_11] [12]) : var_2))) ? (arr_38 [i_11 - 1] [i_11 - 3]) : (((-(max((arr_39 [i_11]), var_6)))))));
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        arr_42 [i_12] = (((!var_3) << 0));
        arr_43 [7] = (max((arr_1 [i_12] [7]), ((((arr_19 [i_12] [i_12] [i_12] [i_12]) != var_6)))));
    }
    #pragma endscop
}
