/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (((((arr_5 [i_3] [i_0] [i_0]) / (arr_9 [i_0] [i_0] [i_0] [0])))))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_14 = (max(var_14, ((max((((+(((arr_5 [i_0] [i_0] [14]) ? var_0 : 56042279))))), (((arr_4 [i_1 - 2]) ? var_0 : (((arr_9 [i_0] [16] [i_2] [14]) ? var_11 : 1008)))))))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = -var_0;
                        }
                        arr_14 [i_2] [i_2] [i_1 - 1] [i_2] = (arr_7 [i_3] [i_2]);
                        arr_15 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] = (!-38);
                        var_15 = var_4;
                    }
                }
            }
        }
        var_16 = (min((((-(((arr_6 [0]) ? (arr_5 [i_0] [i_0] [i_0]) : var_4))))), (arr_12 [i_0] [i_0] [i_0] [i_0] [1])));
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] = (max(((((arr_3 [i_5 - 1]) ? (arr_3 [i_5 - 1]) : var_4))), ((56042288 ? -988 : var_1))));
        var_17 = (min(var_17, (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [22])));
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = 1028;

        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            arr_27 [i_6] [i_6] = (max((((arr_26 [i_6] [i_6 - 1]) ? var_0 : (arr_9 [i_6 - 1] [11] [i_6 + 1] [i_6]))), ((-(arr_9 [9] [11] [i_6 - 1] [i_6])))));
            var_18 = (!var_1);
            var_19 -= ((var_8 ? (arr_24 [10]) : ((((arr_11 [i_6] [i_7 - 3] [i_6] [i_7] [17] [i_6]) ? var_4 : var_12)))));
        }
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_20 += -var_5;
        arr_30 [i_8] = -var_1;
    }
    var_21 -= var_11;

    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_33 [i_9] = ((~(arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_22 = (min(var_22, -var_6));
                        arr_41 [i_10] [i_10] [i_9] [i_12] = 1414159116175019597;
                    }
                }
            }
        }

        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            arr_44 [i_9] = (((((127 ? 18 : 136))) ? ((var_6 ? (var_12 + var_12) : ((var_5 ? -7470406081474991694 : var_0)))) : ((((arr_7 [i_9] [i_9]) ? (arr_16 [i_13 + 2] [i_13 + 1]) : (arr_35 [1] [i_9] [i_9]))))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_23 = (((((arr_52 [i_15 + 1] [i_13] [i_14] [i_13 + 2]) ? (arr_38 [i_13 + 2]) : (arr_38 [i_13 + 1]))) / (((-(arr_36 [i_9] [i_15 - 1] [i_14]))))));
                            arr_56 [13] [i_13] [3] [13] [i_9] [13] [9] = (((arr_43 [5] [i_13]) != 147));
                            var_24 += (arr_53 [i_14] [i_14] [18] [i_15 + 1] [8] [i_15 + 1]);
                            var_25 = (min(var_25, ((((var_2 ? ((arr_24 [1]) : (arr_26 [4] [4]))))))));
                            var_26 = ((1010 ? (-1020 && var_6) : (((arr_10 [i_15 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 2] [i_13 + 1]) ? (arr_10 [i_15 + 1] [i_13] [i_13 - 1] [i_13 + 1] [i_13 - 1]) : (arr_10 [i_15 + 1] [i_14] [i_13 + 2] [i_13 + 2] [i_13 - 1])))));
                        }
                    }
                }
            }
            var_27 = ((((((arr_54 [i_13 + 1] [i_9] [i_13 + 1]) ? (arr_19 [i_9]) : (arr_19 [i_9])))) ? ((7470406081474991720 ? 3925222518151731712 : 255)) : ((~(arr_19 [i_9])))));
            var_28 = (max(var_28, (arr_53 [i_13 + 2] [i_13 - 1] [16] [1] [14] [i_13])));
        }
    }
    #pragma endscop
}
