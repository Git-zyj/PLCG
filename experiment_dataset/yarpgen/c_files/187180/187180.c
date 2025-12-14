/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 &= var_3;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0] = (((((17 ? -18 : (((arr_7 [13] [i_0]) * 125))))) ? (((arr_2 [i_3]) ? (arr_2 [i_3 - 2]) : 127)) : -36));
                        var_15 = arr_9 [i_0] [i_1 - 2] [i_2] [i_3];
                        arr_13 [i_0] = (min((((arr_9 [i_0] [i_1 + 1] [i_1 - 2] [i_1 + 3]) ? (arr_9 [i_0] [i_1 - 2] [i_1 - 1] [i_1 + 2]) : (arr_9 [i_0] [i_1 - 1] [i_1 - 2] [i_1 + 2]))), (((max((arr_3 [i_0]), var_9))))));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_16 = (((~116) % (((((~17) + 2147483647)) >> (-18 + 46)))));
                        var_17 += arr_8 [8] [8] [i_2] [i_2] [i_2] [i_2];
                        arr_16 [i_0] [i_4] = (((((var_7 ? ((max((arr_3 [i_0]), 79))) : ((min(var_4, -83)))))) ? ((~(arr_10 [i_0] [i_4]))) : (((122 & 17) & ((~(arr_7 [i_0] [i_0])))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = (max(var_18, ((max((((!((max(120, 17)))))), (((!var_10) ^ ((max(var_4, 114))))))))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_19 ^= (arr_9 [8] [i_1 - 1] [16] [i_1 - 1]);
                            arr_21 [2] [i_5] [i_2] [i_0] [2] &= (!5);
                            arr_22 [i_0] [i_0] = var_4;
                        }

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_20 = var_7;
                            var_21 += ((var_11 ? (arr_11 [i_0] [i_5] [i_2] [i_0] [i_7 + 1] [11]) : (arr_4 [22])));
                            var_22 = ((!(((var_3 ? (arr_26 [i_0] [i_0] [1] [i_0] [i_0]) : (arr_23 [i_0] [i_0] [i_2] [i_5] [i_7]))))));
                            var_23 = var_5;
                        }
                        /* vectorizable */
                        for (int i_8 = 4; i_8 < 23;i_8 += 1)
                        {
                            var_24 &= var_9;
                            arr_30 [i_8] [i_8] [i_0] = arr_26 [i_0] [i_1] [i_2] [4] [i_8];
                        }
                        var_25 = ((var_9 ? (min((0 + var_9), ((min(var_6, 55))))) : -17));
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_26 = (min((max((arr_4 [i_0]), (arr_4 [i_0]))), (!52)));
                        var_27 = (max((min(((~(arr_15 [i_0] [i_1 + 3] [i_2] [i_9] [i_0]))), ((-(arr_24 [i_9] [i_0]))))), (arr_27 [i_0] [i_1 + 3] [13] [21] [i_9] [i_9] [i_9])));

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_28 = (max((min(((var_3 ? 0 : -45)), 86)), ((-23 ? ((max(99, var_8))) : ((max((arr_15 [i_0] [i_1 - 2] [i_2] [i_9] [i_10]), (arr_20 [i_10] [i_2] [i_0] [i_2] [i_0] [i_0] [i_0]))))))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (122 & -88);
                            var_29 |= var_2;
                            arr_37 [i_0] [i_9] [i_2] [i_1] [i_0] [i_0] = (((arr_33 [i_0] [i_1] [i_0] [7] [i_9] [i_10]) ? (~var_9) : (((arr_33 [i_0] [i_1 + 3] [i_2] [i_9] [i_10] [i_2]) | (arr_33 [i_0] [i_1] [i_0] [i_2] [i_9] [i_10])))));
                        }
                        for (int i_11 = 1; i_11 < 23;i_11 += 1)
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_2] [i_0] [i_11 - 1] [i_11] = ((((((-(arr_7 [i_0] [i_0]))) ? 99 : ((max(101, var_7)))))));
                            arr_41 [i_9] [10] |= arr_7 [i_0] [i_9];
                            var_30 &= (~var_11);
                        }
                    }
                    var_31 += 78;

                    for (int i_12 = 4; i_12 < 22;i_12 += 1)
                    {
                        var_32 &= (((!var_7) ? (arr_20 [12] [i_1] [i_1] [i_1] [8] [i_1 - 1] [i_12 + 1]) : (arr_0 [0])));
                        var_33 = (max(var_33, (arr_18 [18] [18] [i_12 - 4])));
                    }
                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        var_34 = ((((((((arr_5 [i_0] [22] [i_0]) || (arr_43 [i_0]))) && ((((arr_20 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]) ? -88 : var_11)))))) / (max(86, (~var_6)))));
                        arr_48 [i_0] = -19;
                        var_35 *= arr_46 [8];

                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_51 [i_0] [i_0] [23] [i_0] [0] = (((max(var_3, (((-127 - 1) ? var_1 : var_11)))) >= (((!var_2) / ((-18 ? var_0 : var_7))))));
                            arr_52 [20] [i_1] [i_1] [i_1] [i_1] |= (min((((!(arr_17 [0] [0] [i_13 + 2] [2] [10] [i_13 - 1])))), (((arr_24 [i_1 - 2] [10]) ? (arr_17 [4] [4] [i_13 - 2] [6] [i_13 - 2] [4]) : (arr_17 [i_1] [i_1] [i_13 + 1] [14] [i_1] [i_13])))));
                            var_36 = (((((((!(arr_4 [i_0])))) == var_8)) ? (max((~var_1), -83)) : ((min((arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_14]), -93)))));
                            arr_53 [i_0] = ((~((max((min((arr_33 [i_0] [i_1 + 2] [i_0] [7] [i_0] [i_14]), var_10)), (min((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [4]), -122)))))));
                            var_37 = (((~var_6) ? ((max((min((arr_42 [i_0] [i_1]), (arr_49 [i_0] [i_2] [i_0] [7]))), (min(var_12, var_3))))) : ((~((42 ? 45 : (-127 - 1)))))));
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_38 = arr_25 [i_0] [i_0] [i_0] [2];
                            var_39 = max((((!(((var_12 ? -79 : var_0)))))), (max(110, -18)));
                            var_40 = arr_18 [14] [i_1 - 2] [i_13 + 3];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
