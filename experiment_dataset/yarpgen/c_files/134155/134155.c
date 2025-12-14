/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (min(-var_8, (!1308)));
                var_10 = ((var_8 ? var_0 : (arr_0 [i_0])));
                var_11 = (min(var_11, ((((((var_1 >= ((min(var_0, var_9)))))) * (((!(arr_4 [i_0 + 2])))))))));
                arr_8 [i_0] = arr_2 [i_0 + 3] [i_1];
            }
        }
    }
    var_12 *= var_8;

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_18 [i_3] [4] [12] [i_3] = (((((((var_1 ? var_0 : (arr_17 [i_2] [i_4] [i_4] [i_2])))) ? ((var_3 ? var_3 : var_5)) : ((var_6 ? 14022019867669455719 : var_7))))) ? (arr_13 [i_2] [i_2]) : ((((var_9 ? var_8 : -5577)))));
                    var_13 = (max(var_13, ((((arr_11 [i_4] [i_2]) ? (((var_2 && (arr_9 [i_2])))) : var_7)))));
                    arr_19 [i_2] [i_4] = ((var_4 == (((var_0 >= var_6) ? var_3 : (((32761 ? var_8 : (arr_11 [i_3] [i_2]))))))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        arr_23 [i_5] = (((var_7 ? (arr_20 [i_2] [10] [i_4] [10] [i_5] [i_2]) : (arr_9 [i_5 + 2]))));
                        var_14 = (max(var_14, ((((arr_17 [i_3] [i_5 - 2] [20] [i_5]) < var_9)))));
                        var_15 ^= ((var_1 ? (arr_10 [i_2]) : var_2));
                    }
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (~-var_6);
                        arr_27 [i_3] [16] [1] [1] [i_3] [1] = ((((((var_7 / var_1) + (!var_0)))) * ((var_9 ? var_7 : (arr_22 [i_4] [2] [i_6] [i_6 + 1])))));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_32 [22] [22] [6] [i_2] = (((((min(var_0, var_3)) * (min((arr_11 [i_2] [i_3]), var_3))))) ? -var_1 : ((((var_0 ? var_2 : var_3)) * (((min((arr_15 [i_2] [1] [i_4] [i_7]), var_4)))))));
                        var_16 = -25019;
                        var_17 = (+((var_8 ? (arr_9 [i_2]) : (arr_9 [i_2]))));
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 24;i_8 += 1)
                    {
                        var_18 ^= (arr_34 [i_8 - 3] [i_8 - 3] [i_4] [i_8]);
                        var_19 = 3583683640300943582;
                    }
                    arr_36 [13] [13] [i_4] [i_4] = (((~(arr_10 [i_3]))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    {
                        var_20 = (min(var_20, var_9));

                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            var_21 = ((((var_5 ? var_4 : -22686)) != var_1));
                            var_22 += (((var_3 ? (((~(arr_34 [i_2] [i_2] [i_2] [i_2])))) : (min(10145556060152466635, var_2)))));
                        }
                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 22;i_13 += 1)
                        {
                            var_23 = arr_20 [i_13 - 3] [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_10 + 4] [i_10 - 1];
                            arr_49 [i_13] [14] [i_13] [i_13] [i_13] [i_2] [i_2] = (((24576 ? var_1 : var_6)));
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_24 ^= min(-3074, var_2);
                            arr_53 [2] = (((-((-(arr_39 [9] [15] [i_10] [2]))))));
                            var_25 = (((var_8 ? var_2 : var_0)));
                        }
                        arr_54 [i_2] [14] [14] = ((((min(11144, (var_5 && var_2)))) ? ((((min(var_2, (arr_44 [i_9] [i_11 + 4]))) <= (arr_42 [i_2] [i_9] [i_10] [i_10])))) : (((((var_0 ? var_9 : var_6)) >= (((arr_37 [11]) ? var_0 : var_1)))))));
                        var_26 = 11;
                    }
                }
            }
        }
        var_27 = (max(var_27, ((min(var_0, var_9)))));
        arr_55 [i_2] = min((min((arr_48 [i_2] [8] [i_2] [i_2] [10] [i_2] [i_2]), (arr_48 [i_2] [i_2] [i_2] [i_2] [15] [22] [21]))), (min(var_5, var_3)));
        var_28 = (max(var_28, (((((arr_14 [i_2]) ? (arr_14 [i_2]) : (arr_14 [i_2]))) - (((arr_14 [i_2]) ? (arr_14 [i_2]) : var_2))))));
    }
    for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
    {
        var_29 = (((~-24582) & var_1));
        arr_58 [i_15] [i_15] = ((((((arr_1 [i_15]) ? -19867 : var_9))) && (~var_1)));
    }
    for (int i_16 = 1; i_16 < 15;i_16 += 1) /* same iter space */
    {
        arr_63 [i_16] [i_16] = (min((((((var_7 ? var_9 : var_2))) ? (~var_5) : var_4)), var_8));
        arr_64 [i_16] = var_5;
        arr_65 [12] [i_16] |= ((var_1 || (arr_39 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 + 1])));
        var_30 = var_5;
    }
    var_31 = ((~((31785 ? var_8 : ((var_0 ? var_6 : var_7))))));
    var_32 = ((var_3 ? var_5 : var_8));
    #pragma endscop
}
