/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_20 = var_12;
                            var_21 = (var_2 ? (((arr_3 [i_1] [i_0]) ? (arr_2 [i_0]) : (arr_7 [9] [i_0] [i_0] [24]))) : (((arr_9 [i_4]) ? (arr_13 [i_3] [17]) : var_1)));
                            var_22 *= ((!((((arr_10 [18]) ? var_4 : (arr_2 [i_2]))))));
                            var_23 = ((-var_13 ? ((((arr_5 [i_0] [i_1]) ? var_14 : (arr_1 [i_0])))) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_15))));
                        }
                    }
                }
            }
            var_24 = (~14504);
        }
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 24;i_7 += 1)
                {
                    {
                        var_25 = (((~(arr_0 [i_7] [i_6]))));
                        var_26 ^= ((-(((arr_21 [i_7 + 1] [2] [2] [22]) ? var_18 : var_4))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_27 = (min(var_27, (((-var_1 ? (arr_27 [17] [i_7 - 2] [i_5] [i_5] [i_0]) : (arr_7 [24] [i_6 - 2] [24] [i_8]))))));
                            var_28 ^= ((+((var_17 ? (arr_12 [i_8] [0] [10] [0] [10]) : var_6))));
                            var_29 = ((-((~(arr_12 [i_8] [i_0] [1] [i_0] [i_0])))));
                            var_30 = (min(var_30, (((((-(arr_1 [12])))) ? var_13 : ((var_2 ? (arr_4 [18] [18]) : var_13))))));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_31 = var_15;
                            var_32 -= ((17952 ? -67 : 14707488877392770679));
                        }
                        for (int i_10 = 1; i_10 < 24;i_10 += 1)
                        {
                            var_33 = (min(var_33, ((((((arr_25 [i_10] [i_10] [i_6 - 2] [i_10 + 1] [i_10] [i_10]) ? var_10 : var_15))) ? var_3 : (arr_8 [i_6] [i_5 + 1] [i_6] [i_0])))));
                            var_34 = var_6;
                            arr_33 [i_0] [i_5] [i_5] [i_7] [i_0] = (arr_1 [i_0]);
                        }
                        var_35 -= (arr_22 [i_0] [i_0] [i_6] [i_6] [i_7 - 3]);
                    }
                }
            }
        }
    }
    var_36 += (min((((((var_11 ? var_12 : var_12))) ? -var_2 : ((var_5 ? var_6 : var_1)))), (max(((max(var_8, var_12))), ((var_7 ? var_18 : var_7))))));
    var_37 = ((((max((min(var_4, var_0)), ((max(var_11, var_13)))))) ? ((((~var_9) ? (~var_17) : ((min(var_14, var_0)))))) : (max((max(3, 67092480)), (((14707488877392770679 ? 6 : 0)))))));

    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        arr_36 [i_11] = ((-(~var_8)));

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_38 = (~-var_4);
            var_39 = (((arr_22 [i_11] [24] [i_12] [i_12] [i_12]) ? ((~(arr_19 [1] [i_12] [i_12] [1]))) : ((~(arr_12 [i_11] [i_11] [i_11] [16] [i_12])))));
            var_40 = ((var_18 ? ((-(arr_31 [i_11] [i_11] [i_11] [i_12] [18]))) : (((-(arr_2 [18]))))));
            var_41 ^= var_7;
            var_42 = -var_12;
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_43 = (arr_31 [i_13] [9] [i_11] [7] [i_11]);
            var_44 = (arr_29 [i_11] [i_11] [i_13] [i_13] [i_13]);
        }
        var_45 = (arr_15 [12] [i_11]);
    }
    #pragma endscop
}
