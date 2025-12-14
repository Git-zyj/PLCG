/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 -= var_0;
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 += var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (var_8 >= 127);
                                var_15 = ((!((max((0 && var_3), (max(var_0, (arr_0 [i_1]))))))));
                                arr_15 [i_3] [i_4] = ((max(((max(4160749568, 0))), (max(var_1, var_8)))));
                                arr_16 [i_4] [i_4] [i_2] [i_4] [i_0] = (min((((((max(768, var_9))) ? (((arr_10 [6] [i_1] [i_2] [i_1] [2]) ? (arr_12 [i_4] [i_3] [i_1] [9]) : 16380)) : (((2 != (-9223372036854775807 - 1))))))), (min((((arr_2 [i_0]) ? var_6 : var_7)), 0))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_23 [1] [1] [i_1] [i_1] [2] = ((((min((arr_8 [i_0] [i_2] [i_5] [i_6]), var_2))) ? var_5 : (max((arr_1 [i_2] [i_5]), var_9))));
                                var_16 = (max(var_16, 255));
                                var_17 -= (arr_17 [i_2] [i_0]);
                                var_18 -= (min((((~(arr_18 [i_0] [i_0] [i_2] [i_5])))), (min((arr_18 [i_0] [i_1] [i_2] [i_6]), var_6))));
                            }
                        }
                    }
                    var_19 = (!(13 | var_6));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_20 = (((arr_20 [i_7] [i_7]) ? (arr_20 [i_7] [i_7]) : (arr_17 [i_7] [i_7])));
        var_21 = ((var_8 && ((((arr_0 [11]) % var_8)))));
        var_22 = ((~(arr_13 [i_7] [i_7] [4] [i_7] [4] [i_7] [0])));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    arr_32 [i_10] [i_9] [i_10] [i_10] = (((((-2 ? 4294967295 : 63))) ? ((18446744073709551615 ? (((arr_31 [i_8] [0] [i_10] [i_10]) ? 0 : 1)) : (((min(var_7, var_7)))))) : ((((arr_31 [i_8] [i_9] [i_10] [i_9]) | (arr_31 [i_8] [i_8] [i_9] [i_10]))))));
                    arr_33 [i_9] = ((max(63, (arr_7 [i_10] [i_10]))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_40 [i_8] [i_8] [i_10] [i_11] [i_12] &= (134217728 % 2);
                                arr_41 [i_12] [i_9] [i_12] [i_11] = 0;
                                var_23 ^= (((arr_4 [i_9]) ? (min((max(var_3, var_7)), (((var_7 <= (-9223372036854775807 - 1)))))) : ((var_6 ? (arr_25 [i_12]) : (arr_13 [i_8] [i_8] [i_11] [12] [i_11] [i_12] [4])))));
                                arr_42 [i_9] [i_9] [i_12] = var_6;
                                arr_43 [i_8] [i_8] [i_8] [i_12] [i_10] [i_11] [i_12] = ((max((arr_30 [i_8]), (arr_30 [i_9]))));
                            }
                        }
                    }
                }
            }
        }
        var_24 += (min(((((((arr_10 [i_8] [i_8] [i_8] [i_8] [i_8]) ? 0 : -1))) ? (max(var_6, (arr_10 [i_8] [i_8] [i_8] [i_8] [i_8]))) : -761)), ((((var_1 ? (arr_24 [i_8]) : var_0))))));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_25 -= ((var_3 ? (min((min(18446744073709551613, (arr_18 [i_13] [i_13] [i_13] [i_13]))), (arr_38 [2] [i_13] [i_13] [i_13] [2]))) : ((min(var_5, 4294967295)))));
        var_26 = (min(var_26, (((~(arr_45 [i_13] [i_13]))))));
        var_27 = (min(var_27, (((((var_5 / (min(var_8, 0)))) * ((4294967294 ? (!-762) : (max(-1, var_4)))))))));
        var_28 = (max(var_28, ((((((1 ? var_4 : 0))) ? (arr_0 [i_13]) : (~var_8))))));
    }
    #pragma endscop
}
