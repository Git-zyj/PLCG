/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 ? (min(var_6, (((var_8 ? var_9 : var_0))))) : (!var_9)));
    var_12 &= (((((var_5 ? var_10 : var_8)))) ? ((((var_7 ? var_0 : var_1)))) : (min(((var_6 ? var_0 : var_9)), (((var_5 ? var_0 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = ((!((!(((~(arr_0 [i_4]))))))));
                                var_14 = (min(var_14, ((min(((-1 ? 0 : 2)), ((-(arr_9 [i_0] [i_1] [i_0] [i_3]))))))));
                                var_15 = (min((((arr_9 [i_0] [i_2] [i_0] [i_0]) ? var_5 : (!var_4))), ((((min((arr_1 [i_4]), (arr_3 [i_0] [i_2] [i_3])))) ? ((((arr_8 [i_2] [1] [1] [23]) / var_0))) : var_6))));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, ((min(((((arr_7 [i_1] [i_1] [i_1] [i_1]) + var_4))), ((((min((arr_11 [13] [i_0] [13] [i_1]), (arr_5 [i_0] [i_0])))) ? (((min(var_3, (arr_5 [i_0] [i_1]))))) : ((~(arr_10 [24] [i_1] [i_0] [i_0] [i_1]))))))))));
                arr_14 [i_0] [i_1] = ((((((((arr_12 [i_0] [i_1]) && (arr_0 [i_0]))) ? ((var_10 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_1]))) : 16777215))) ? 61212 : (((var_1 ? var_4 : (arr_3 [i_0] [i_0] [i_0]))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
    {
        var_17 = arr_15 [i_5];
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_25 [16] [16] [i_8] [16] |= (arr_23 [i_5] [20] [i_8]);
                        arr_26 [i_6] [i_7] [i_6] [i_6] [i_6] = (min((((((var_2 ? var_3 : (arr_1 [i_5 + 1])))) <= ((-(arr_13 [i_5] [i_7] [i_7] [i_8] [i_8]))))), ((!(arr_4 [i_5] [i_8])))));
                        var_18 = (min((((arr_4 [i_5] [i_5]) ? (arr_13 [i_5] [i_7] [i_5] [i_5 + 1] [i_5 + 1]) : (20 ^ 0))), (((-(arr_5 [i_8] [i_6]))))));
                        arr_27 [i_7] [i_8] = var_10;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
    {
        var_19 -= ((~((~(arr_28 [16] [i_9])))));
        arr_30 [i_9] = (min((((arr_21 [i_9]) ? ((((!(arr_22 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1]))))) : ((var_9 - (arr_7 [i_9] [i_9] [i_9] [i_9]))))), var_2));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                {
                    arr_36 [i_9] [i_10] [i_9] = ((((min(((var_0 ? (arr_2 [i_9] [i_9]) : (arr_8 [i_9] [i_10] [i_10] [i_10]))), (!var_2)))) ? (((!(!var_7)))) : (((arr_12 [i_10] [i_11]) ? ((3674109199 ? -20176 : 91)) : (min((arr_22 [i_9 + 1] [i_10 + 1] [i_10] [i_10] [i_11 - 2] [i_11 - 1]), (arr_9 [i_9] [i_9] [i_10] [i_11])))))));
                    var_20 = (min((((!((((arr_7 [i_9] [i_9] [i_11] [i_11]) ? var_2 : var_4)))))), (arr_23 [i_9 + 1] [i_10] [i_9])));

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_21 ^= (arr_4 [i_9 + 1] [i_11]);
                        var_22 -= ((((((var_2 & (arr_29 [i_10]))))) * (min(((min(var_3, (arr_21 [i_10])))), (((arr_37 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_11] [i_12] [i_12]) ? var_10 : (arr_34 [i_9] [i_10] [i_11] [i_9])))))));
                        var_23 = 1770602883;
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_41 [i_9] [i_9] [i_11 + 1] [18] = ((~(min((min((arr_24 [i_9] [i_9] [i_13]), var_6)), (((-20187 ? 0 : 1770602883)))))));
                        arr_42 [i_9] [i_10 + 1] = (((min(((min(var_4, var_8))), (min((arr_10 [i_13] [i_11] [i_11 - 3] [i_10] [i_9 + 1]), (arr_5 [i_10] [i_10]))))) + (min(var_9, ((var_5 ? (arr_35 [i_9] [i_10] [i_9] [i_13]) : var_10))))));
                    }
                }
            }
        }
        arr_43 [14] &= ((((var_9 ? ((((((arr_29 [4]) + 2147483647)) >> (((arr_29 [4]) + 17))))) : ((var_10 ? (arr_24 [5] [i_9 + 1] [i_9 + 1]) : (arr_22 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9] [i_9]))))) > ((((!(((-(arr_28 [12] [i_9 + 1]))))))))));
    }
    for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
    {
        arr_46 [i_14] = (((((~(min(var_2, (arr_8 [i_14] [i_14] [i_14] [i_14 + 1])))))) ? (arr_19 [i_14]) : ((var_2 ? (((arr_31 [i_14] [i_14 + 1] [i_14]) ? (arr_31 [i_14] [i_14] [i_14]) : var_8)) : ((((arr_39 [i_14] [i_14] [i_14 + 1] [i_14]) ? var_3 : (arr_0 [i_14]))))))));
        var_24 = (min(var_24, (((((min((min(var_5, (arr_10 [i_14] [i_14 + 1] [i_14 + 1] [4] [i_14]))), var_4))) ? (arr_28 [18] [18]) : ((-(~var_10))))))));
    }
    for (int i_15 = 0; i_15 < 0;i_15 += 1) /* same iter space */
    {
        var_25 = arr_3 [i_15] [i_15] [i_15 + 1];
        arr_49 [i_15] [1] = (((((!((min((arr_16 [i_15]), (arr_13 [i_15] [22] [i_15] [22] [i_15]))))))) >= var_4));
    }
    #pragma endscop
}
