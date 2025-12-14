/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((var_10 ? ((var_5 ? var_9 : var_14)) : var_2)) ^ ((((max((-127 - 1), var_10))) ? (((-127 - 1) ? 1 : 18446744073709551594)) : var_17))));
    var_19 = (-2058579385 ? var_7 : (max(var_14, (min(var_2, var_15)))));
    var_20 = (min(var_20, ((min(((min(var_1, var_13))), ((var_14 ? 50 : ((var_7 ? var_2 : var_13)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 += (arr_3 [i_0]);
        var_22 -= (arr_0 [1]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((min(var_9, (min(-90, (arr_5 [i_1])))))) ? (~26325) : 7970057275003824936);
        arr_7 [i_1] = ((((((var_6 ? var_7 : 39266525)))) ? ((((arr_4 [0]) ? (arr_4 [i_1]) : ((min(9254, var_10)))))) : (min((arr_1 [i_1]), var_12))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_23 -= (min(var_16, 2058579398));
                arr_13 [3] = (((((((((arr_8 [i_3]) ? var_6 : var_9))) ? var_4 : ((max(var_2, var_8)))))) ? var_1 : ((var_15 ? (((28520 ? 1 : 3054651231))) : (max(var_13, var_8))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 = arr_11 [i_6] [21];
                                var_25 = var_15;
                                var_26 = var_2;
                                arr_24 [i_2] = (1 ? (arr_19 [i_2] [i_3] [i_3] [i_6]) : ((1073741824 ? 31962 : 206)));
                                arr_25 [i_5] [20] [19] [12] = (arr_8 [i_2 + 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_31 [i_2] [i_3] [i_2 + 2] [i_7] [i_8] = (arr_9 [i_2 + 1]);
                                arr_32 [i_2] [i_2 + 2] [2] [i_2 + 2] [i_2] [i_2 + 1] [i_2] = var_15;
                                var_27 = (arr_20 [i_2] [i_2] [i_3] [i_4] [i_7] [i_8]);
                                var_28 = (((arr_27 [i_3] [i_4] [i_8]) <= (arr_17 [i_2 - 1] [i_2])));
                                var_29 -= ((var_6 ? 0 : ((((arr_29 [i_3] [i_3] [i_4] [i_7] [i_3]) ? 2858162174 : (arr_30 [i_2] [i_2] [i_3] [i_4] [i_7] [i_4] [i_8 - 2]))))));
                            }
                        }
                    }
                    var_30 = (arr_12 [i_2] [i_3] [i_4]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_31 = (min(var_31, (((~(arr_20 [i_2] [i_2 + 2] [i_3] [12] [i_2 + 2] [12]))))));
                    var_32 = ((~(arr_26 [i_2] [i_2] [i_2] [4] [i_9])));
                    var_33 = ((1 ? var_2 : (arr_21 [i_2] [i_3] [i_9] [i_2 - 1] [18])));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_38 [i_10] [i_2] [i_2] = var_16;
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_34 = (arr_37 [i_2 - 2] [i_11 + 1] [1] [i_11 - 2]);
                                var_35 ^= (((arr_8 [i_2 - 1]) ? var_8 : (arr_8 [i_2 + 2])));
                            }
                        }
                    }
                    var_36 &= var_5;
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_37 &= (arr_50 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2 + 1]);
                                var_38 ^= 255;
                                var_39 += (((arr_33 [i_2 + 2]) ? ((var_17 ? (arr_37 [i_13] [i_10] [i_3] [i_2]) : (arr_14 [i_10] [i_10] [i_14]))) : (!var_15)));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_15 = 4; i_15 < 21;i_15 += 1)
                {
                    var_40 = (arr_23 [i_2 + 1] [i_2] [i_2 + 2] [i_15] [i_15 - 2] [6] [i_15 - 4]);
                    var_41 += (((((1 ? 681 : (arr_10 [7] [7])))) ? -120 : var_17));
                    arr_54 [i_2] [i_2 - 2] [i_2] = var_17;
                    arr_55 [i_15] = var_9;
                    var_42 *= 0;
                }
                arr_56 [i_2 - 2] [i_2 - 2] = (min((min((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]), (arr_29 [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 1]))), (max(2058579384, (arr_43 [i_3] [i_2] [9] [i_2 - 2] [i_2 - 1] [16])))));
                var_43 = (max((max((arr_36 [i_2 + 1] [i_2 - 2] [i_2 - 1]), var_4)), (min((arr_27 [i_2 + 2] [i_2 - 1] [i_2 + 2]), (arr_36 [i_2 + 1] [i_2 - 2] [i_2 - 1])))));
            }
        }
    }
    #pragma endscop
}
