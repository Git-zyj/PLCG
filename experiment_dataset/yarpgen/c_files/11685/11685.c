/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 += var_17;
                                var_19 = var_6;
                                arr_13 [i_1] [i_3] [i_2 + 3] [i_1] [i_1] = var_16;
                            }
                        }
                    }
                    var_20 = (max(var_20, (((-(((arr_11 [i_2 + 1] [i_0] [i_2 + 1] [i_0] [i_2 + 1]) - (arr_11 [i_2 + 3] [i_0] [i_2 - 1] [i_0] [i_2 + 2]))))))));
                    var_21 = (((((~(arr_4 [i_1] [i_1] [i_2 + 3])))) ? (min(((var_14 ? (arr_1 [i_0]) : var_7)), var_15)) : (((((arr_11 [i_0] [i_1] [i_1] [i_2 + 2] [i_2 + 2]) == (33 <= 68719476735)))))));
                    var_22 += (min(((var_13 ? var_8 : (arr_5 [i_2 + 1]))), (((~(arr_5 [i_2 + 3]))))));
                }
            }
        }
        var_23 = var_12;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_24 &= (max((((((((arr_4 [i_5] [i_7] [i_8]) ? (arr_6 [i_7] [i_6] [i_5] [i_5]) : (arr_14 [i_5])))) ? ((var_5 ? var_3 : var_1)) : var_2))), (((arr_7 [i_5] [i_6] [i_8]) ? (arr_7 [i_5] [i_6] [i_7]) : var_14))));
                        var_25 += var_9;
                        arr_23 [i_6] [i_6] [i_7] [i_8] = ((((min(var_10, 34))) ? ((3922361659064569116 ? (arr_2 [i_5]) : (arr_2 [i_5]))) : ((max(var_10, 12945)))));
                    }
                }
            }
        }
        var_26 += (min((((!(((1 ? 1 : var_13)))))), (max((((var_5 ? 1147422419 : 24560))), (var_7 & var_12)))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_31 [i_10] [i_9 + 1] = var_7;
                        var_27 = (arr_0 [i_11]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                {
                    var_28 += ((-var_10 & ((((min(33, (arr_38 [i_5] [i_12] [i_13 - 1] [i_13 - 1]))) == (arr_5 [i_12]))))));
                    var_29 &= var_3;
                    var_30 = (max(var_30, (((-(min(((min(var_7, var_9))), (arr_38 [i_5] [i_12] [i_13 - 2] [i_12]))))))));
                    var_31 += ((var_2 ? (((((~(arr_15 [i_13 - 2])))) ? ((((arr_29 [i_5] [i_13 - 1] [i_5]) ? var_16 : var_17))) : (arr_30 [i_5] [i_12] [i_13 + 1]))) : (arr_11 [i_13 - 1] [i_12] [i_12] [i_12] [i_5])));
                }
            }
        }
    }
    var_32 = var_12;
    var_33 = (-(((var_2 && var_4) ? ((var_13 ? var_0 : var_3)) : (!var_9))));

    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        arr_43 [i_14] = var_3;
        arr_44 [i_14] = (max((min(((var_2 ? var_1 : (arr_18 [i_14] [i_14] [i_14] [i_14]))), ((min(var_14, var_3))))), 1));
        arr_45 [i_14] = var_14;
    }
    var_34 = (min(var_34, ((max((18446744073709551615 * 25566), (((var_2 ? (var_10 - var_8) : var_17))))))));
    #pragma endscop
}
