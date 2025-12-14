/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 - (((!((min((-127 - 1), var_10))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? (!-102) : 137));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = var_5;
                    arr_8 [8] [i_1] [i_2 + 1] = ((!(((arr_3 [i_0] [i_1 - 2] [i_2 + 2]) || (var_7 & 1528608414)))));
                    var_12 = (max(var_12, (arr_5 [i_1 - 2] [i_1 - 1] [i_2 + 1])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    {
                        var_13 = max((116 - var_2), (((arr_9 [i_3]) / var_10)));
                        var_14 *= var_0;
                    }
                }
            }
        }
        var_15 = (min(var_15, (arr_18 [i_3] [i_3] [i_3] [i_3] [8] [i_3])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_23 [i_7] [i_7] = -2147483647;
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 17;i_9 += 1)
            {
                {
                    var_16 = (arr_27 [i_9] [i_9 - 2] [i_9] [i_9]);
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_33 [i_8 - 2] [i_10] = ((((2766358881 ? var_7 : (arr_24 [i_7] [0]))) / (arr_24 [i_8 - 2] [i_8 - 1])));
                                arr_34 [i_7] [i_10] [i_10 + 1] [i_11] = ((var_2 >= (0 ^ -5026932313228965071)));
                            }
                        }
                    }
                    var_17 ^= (var_3 && var_4);
                    var_18 = (max(var_18, (((-var_10 * (((arr_28 [i_7] [i_7] [i_7] [3] [i_7] [13]) ? var_4 : (arr_24 [i_7] [i_8 - 2]))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_19 = (((arr_24 [i_8 - 2] [1]) ? (arr_24 [i_8 - 1] [i_13]) : (arr_24 [i_8 + 1] [i_12])));
                                arr_40 [i_7] [i_8] [17] [i_12] = ((var_7 * (arr_30 [i_12] [i_9 - 2] [i_9 - 1] [i_8 - 1] [i_13] [i_9 - 1] [i_8 - 2])));
                                arr_41 [i_7] [i_8] [i_9] [3] [1] [i_8] = (!18446744073709551615);
                                var_20 *= var_6;
                            }
                        }
                    }
                }
            }
        }
        arr_42 [i_7] = ((arr_29 [i_7] [i_7] [0] [14] [0]) | var_4);
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 17;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                {
                    arr_51 [i_14] [i_15] [i_16] [i_15] = ((-(arr_27 [i_14 - 2] [i_14] [i_14 - 2] [i_14 - 1])));
                    arr_52 [i_15] [i_15] [i_16] [i_16] = ((~((var_5 ? var_2 : var_6))));
                }
            }
        }
        arr_53 [i_14 - 2] = (((var_0 + (arr_36 [i_14] [i_14] [i_14] [15] [i_14]))));
    }
    var_21 = (min(var_9, (max((0 / -120), var_4))));
    var_22 = ((var_6 - (((-127 - 1) ? (((var_0 ? var_2 : var_2))) : 5026932313228965071))));
    #pragma endscop
}
