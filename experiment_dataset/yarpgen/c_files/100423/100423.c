/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((min(-var_10, ((var_2 ? (-2147483647 - 1) : var_0)))) & (~-381884259443787437))))));
                    var_18 ^= (min((13448 / 1), ((3678429055172259859 ? var_11 : (arr_6 [i_2 + 2] [0] [3] [i_2 + 1])))));
                    var_19 = (max(((((min(381884259443787449, 2147483647)) <= -2017723602))), 4));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0] [i_5] [i_0] = (min(((min(var_5, (arr_14 [i_0] [i_0] [i_4] [i_6 - 3] [i_0])))), (arr_13 [i_0] [i_6 - 1] [16] [i_0] [i_6] [i_6])));
                                var_20 += (max(var_16, (min(var_5, (arr_13 [i_0] [i_0] [14] [i_5] [i_6 + 1] [i_0])))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_3] [i_0] = ((~((var_5 ? -381884259443787428 : (-9223372036854775807 - 1)))));
                    arr_18 [i_0] = var_13;
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_21 = (min(var_21, var_11));
            arr_22 [i_0] [i_0] = ((1 ? var_5 : (arr_14 [i_7] [i_7] [i_7] [i_0] [i_0])));
            arr_23 [i_0] = (arr_7 [i_7] [1] [i_7]);
        }
        var_22 = var_4;
    }
    var_23 |= (max(((-75 ? ((min(var_1, var_16))) : ((var_12 / (-9223372036854775807 - 1))))), var_6));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                arr_28 [i_8] [i_8] = ((!(!381884259443787441)));
                arr_29 [i_8] [i_9] = (max(((((min((arr_24 [i_8] [i_8]), var_3))) ? ((-95 ? var_7 : 1)) : (~var_1))), ((((-9223372036854775788 / var_4) ? (((arr_27 [i_9]) ? (arr_8 [i_8] [i_8] [i_9]) : (arr_11 [i_8] [2] [2] [i_9]))) : var_9)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 8;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 8;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_24 *= (((max((var_4 <= var_11), (min(-381884259443787435, var_9)))) / var_3));
                                arr_44 [i_10] [i_12] [i_12] [i_12] [1] = (-32767 - 1);
                            }
                        }
                    }
                    arr_45 [i_12] [i_12] = (-9223372036854775807 - 1);
                    arr_46 [i_10] [i_11] [i_10] |= (max(var_6, (((((arr_4 [i_10] [i_12 + 3]) + 2147483647)) << (381884259443787443 - 381884259443787443)))));
                    var_25 = var_6;
                }
            }
        }
    }

    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {
        arr_50 [i_15] = ((381884259443787440 ? ((min((var_5 == 623416085), (arr_24 [i_15] [i_15])))) : ((((min(var_5, (-2147483647 - 1)))) ? (((var_5 != (arr_4 [i_15] [i_15])))) : var_4))));
        var_26 ^= ((-2147483637 ? 1 : 1));
    }
    #pragma endscop
}
