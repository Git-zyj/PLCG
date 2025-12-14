/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (((3618 % -2011188082) ? 27634 : 27631));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 + 1] [i_1 + 1])))) && (arr_1 [i_0] [i_1]))))));
                var_15 *= ((((var_4 >> (((arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 2]) + 32508)))) >> (((max(var_8, -28045)) + 28046))));
                var_16 = ((min(var_9, 22876)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 8;i_4 += 1)
                            {
                                var_17 = (max(var_17, var_5));
                                var_18 = (max(var_18, ((((~(arr_3 [i_1 + 2] [1] [i_2])))))));
                            }
                            var_19 = (min(((max(var_10, 1030093310))), (max(var_10, (((var_6 << (((arr_10 [i_1] [i_0]) - 1199156784)))))))));
                            var_20 = 1;
                            arr_11 [i_0] [5] [i_0 + 1] [i_0] = 1;
                        }
                    }
                }
                var_21 |= ((((min(var_3, 1816134366))) && 1));
            }
        }
    }
    var_22 ^= ((var_6 ? var_7 : var_7));

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_23 ^= ((arr_17 [i_6 - 1] [i_6]) / (arr_13 [i_6 + 1] [i_6 + 1]));
            arr_18 [12] = ((1 == (!0)));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_24 ^= ((~(arr_13 [i_6 - 1] [i_8 - 1])));
                            var_25 &= ((~(arr_20 [i_8 + 3] [i_8 + 2] [i_6 + 1] [i_6 + 2])));
                            arr_26 [i_5] [i_5] [i_5] [i_5] [12] [i_5] = var_8;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_26 = (max(var_26, (arr_14 [i_11])));
                var_27 = ((1 ? -12 : 1));
            }
            var_28 = var_5;
        }
        arr_33 [1] [i_5] = (max((((arr_29 [i_5]) ? (arr_29 [i_5]) : 0)), (arr_29 [i_5])));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_38 [i_12] = var_2;
        var_29 = 1;
        var_30 = (max(4294967279, 522388562));
        arr_39 [1] [1] = ((((((arr_19 [i_12] [i_12]) << (-1898484453581301181 + 1898484453581301206)))) ? (min(28923, -3807096196687128529)) : 1));
    }
    var_31 = -var_11;
    #pragma endscop
}
