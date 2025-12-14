/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((~(0 + var_4)))));
    var_11 |= ((var_2 ? var_8 : (((((0 ? -18 : 18446744073709551615))) ? (max(var_4, var_9)) : ((max(var_3, var_6)))))));
    var_12 = (((((((max(var_6, var_4))) - var_8))) ? (((var_4 ^ ((1 ? -60 : 1))))) : (((1 ^ 1) ? ((28997 ? 0 : -1114597258335036221)) : (((min(var_7, var_5))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (min((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0]))), ((4095 ? 0 : (-127 - 1)))));
        var_13 = (arr_1 [i_0]);
        arr_5 [i_0] = (max((min(((((arr_3 [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0])))), (-7013010534123589193 % 10971682663593699092))), (((((min((arr_2 [i_0]), (arr_2 [i_0])))) + (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_14 = (((arr_8 [i_4 + 1] [i_4 - 1] [i_4 - 1]) & (arr_7 [i_4 - 1])));
                                arr_18 [i_1] [i_2] [i_2] [i_1] [i_2] [i_2] [i_5] = ((~(arr_14 [i_4] [i_2] [i_2] [i_4 + 1])));
                                arr_19 [i_2] [i_2] [i_2] [i_1] = ((((((arr_14 [i_1] [i_2] [i_3] [i_4 + 1]) != (arr_10 [i_2])))) * (((arr_3 [i_2]) ? (arr_13 [i_1] [i_2]) : (arr_6 [i_1])))));
                                var_15 = (((((~(arr_14 [i_2] [i_2] [i_2] [i_2])))) ? (arr_14 [i_3] [i_2] [i_3] [i_3]) : (arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_5])));
                                arr_20 [i_2] [i_2] = (((arr_16 [i_1] [i_4 - 1] [i_1] [i_4 + 1] [i_4 - 1]) ? (arr_16 [i_1] [i_4 + 1] [i_1] [i_1] [i_4 + 1]) : (arr_16 [i_4 - 1] [i_4 - 1] [i_3] [i_4 - 1] [i_5])));
                            }
                        }
                    }
                    var_16 = (max(var_16, (arr_15 [i_2] [i_2] [i_1] [i_1])));
                }
            }
        }
        var_17 = (((arr_9 [i_1]) - (arr_9 [i_1])));
        var_18 = (arr_13 [i_1] [i_1]);
        var_19 = arr_9 [i_1];
        var_20 = (min(var_20, (((arr_8 [i_1] [i_1] [i_1]) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_6 [i_1])))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                {
                    arr_28 [i_6] = (((((arr_25 [i_6] [i_6] [i_6]) + 2147483647)) >> (((max(((~(arr_10 [i_6]))), (min((arr_2 [i_6]), (arr_9 [i_7]))))) - 6520600188366370638))));
                    var_21 = (max((1 || 0), (arr_12 [i_7] [i_7])));
                }
            }
        }
        arr_29 [i_6] = (min(((min(134086656, ((min((arr_27 [i_6]), (arr_25 [i_6] [i_6] [i_6]))))))), (((arr_13 [i_6] [i_6]) ? (((1945631418 ? -21 : (arr_2 [i_6])))) : (((arr_6 [i_6]) ? (arr_23 [i_6] [i_6]) : (arr_11 [i_6] [i_6] [i_6])))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] [i_9] = ((((((arr_6 [i_9]) * (arr_22 [i_9])))) ? (arr_3 [i_9]) : (((arr_22 [i_9]) - (arr_10 [i_9])))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    arr_38 [i_9] [i_9] [i_11] = (((arr_10 [i_11]) == (((~(arr_15 [i_9] [i_9] [i_9] [i_9]))))));
                    var_22 += ((arr_31 [i_9] [i_10]) ? (arr_31 [i_11] [i_10]) : (arr_31 [i_10] [i_11]));
                }
            }
        }
        var_23 = ((64 ? 0 : 1793722950035596287));
    }
    #pragma endscop
}
