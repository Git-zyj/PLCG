/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_10 &= 65521;
                var_11 *= ((~(((arr_2 [i_1]) ? var_2 : ((-(arr_6 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_12 = (max(var_12, ((((1 * 7272447557380512740) * (arr_9 [i_4]))))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_13 = (arr_7 [i_3]);
                            var_14 = 9223372036854775807;
                            var_15 = (min(((((-(arr_17 [i_2] [i_3] [i_4] [i_5] [i_6]))) != var_2)), var_9));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_21 [i_2] [i_3] [i_5] [i_5] [i_5] = ((var_2 ? ((~((63912 | (arr_11 [i_2] [i_5] [i_5]))))) : var_8));
                            arr_22 [i_2] [i_3] [i_4] [i_3] [i_3] [i_2] [i_5] = ((((((var_9 ? var_0 : var_0)) ? (arr_18 [i_5]) : ((var_9 ? var_4 : -8388608))))));
                        }
                        var_16 += ((-(arr_9 [i_3])));
                        arr_23 [i_4] &= (((((arr_8 [i_2] [i_5]) ? (arr_8 [i_2] [i_5]) : (arr_9 [i_2]))) - ((var_0 ? (arr_9 [i_5]) : (arr_8 [i_2] [i_4])))));
                    }
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        arr_26 [i_4] [i_3] [1] [i_8] = var_3;
                        var_17 = (((arr_9 [i_2]) / (((arr_10 [i_2] [i_2]) ? var_6 : (arr_25 [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_8 + 1])))));
                        var_18 = (arr_7 [i_8 + 2]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_19 -= ((((((var_2 && (arr_24 [i_2] [3] [i_3] [i_4] [i_9]))))) ^ (arr_24 [i_2] [i_3] [11] [i_4] [i_4])));
                        var_20 ^= var_9;

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_21 = (max(var_21, (~var_5)));
                            var_22 = (arr_18 [i_4]);
                            var_23 = (!var_5);
                            arr_32 [i_2] [i_3] [i_4] [14] [i_10] = ((((var_8 && (arr_28 [i_10] [i_9] [5] [5]))) ? (arr_11 [2] [2] [i_9]) : var_1));
                            var_24 -= var_4;
                        }
                        var_25 = (((arr_19 [i_2] [i_9] [i_4] [i_3] [i_2] [i_4] [i_9]) ? (arr_28 [i_9] [i_4] [i_3] [i_2]) : (arr_19 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] [i_2])));
                        var_26 += ((23709 ? 43781 : -1510080430));
                    }
                }
            }
        }
    }
    var_27 |= var_2;
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_28 = (max(var_28, -var_8));
                            var_29 = 1776898886;
                            var_30 = ((((var_7 ? (arr_37 [i_12] [i_12]) : (arr_37 [i_12] [i_12]))) ^ ((~(arr_37 [i_12] [i_12])))));
                        }
                    }
                }
                var_31 = (arr_34 [i_11 + 1]);
                var_32 = (arr_41 [i_11 - 2] [i_11 - 2]);

                /* vectorizable */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    arr_46 [i_11] [i_12] [i_15] = (((arr_38 [i_12]) != (arr_40 [i_12])));
                    arr_47 [1] [1] [i_12] = (((arr_37 [i_12] [i_12]) || ((var_3 >= (arr_34 [i_11])))));
                }
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    arr_50 [i_11] [i_12] [i_12] [i_16] = var_0;
                    arr_51 [i_11 - 1] [i_12] = (arr_49 [i_11 - 1] [i_12] [i_12] [i_12]);
                    arr_52 [i_11 + 1] [i_12] [i_12] = (arr_49 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]);
                    var_33 = var_0;
                }
                var_34 = ((var_5 ? var_4 : ((var_1 + (((min(-18, var_2))))))));
            }
        }
    }
    #pragma endscop
}
