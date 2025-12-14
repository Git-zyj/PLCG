/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((((var_5 && var_3) ? (~var_4) : ((-6 ? -1 : -112)))) ^ var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0] [i_0]) - ((var_5 ? -2147483619 : (arr_0 [i_0])))));
        var_18 ^= (arr_1 [8] [i_0]);
        arr_3 [i_0] = 1;
        var_19 *= var_5;
        var_20 = (((arr_2 [i_0]) ? 22 : (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = (min((((((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_5 [2]))) + ((4528 ? var_11 : var_13)))), (arr_4 [i_1])));
        arr_7 [i_1] = (arr_5 [i_1]);

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_21 ^= (arr_11 [i_1] [15] [i_4]);
                        var_22 = (max(var_22, (((((((((arr_13 [i_4]) ^ (arr_12 [i_2]))) ^ (1023 ^ -32761)))) ? (min(((((arr_13 [i_3]) ? 44256 : 127))), (arr_13 [i_1]))) : (((((min((arr_15 [10] [i_2] [i_3] [i_4 - 1]), 4786891821459297969))) ? (((arr_13 [i_1]) ? (arr_5 [i_4]) : -32757)) : (((arr_15 [12] [i_3] [15] [i_1]) ? (arr_5 [i_2]) : var_15))))))))));
                        arr_16 [i_1] [i_2] = (!(arr_13 [i_4 - 1]));
                        var_23 = (max(var_23, (arr_8 [i_1])));
                        var_24 = (arr_8 [i_3]);
                    }
                }
            }
            var_25 |= var_13;
            var_26 = (min(var_26, (arr_5 [i_1])));

            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_27 = (min(var_27, (((26624 / ((((((arr_18 [i_5] [i_2] [i_1]) * 232))) * (min(var_4, var_14)))))))));
                var_28 = -32762;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_29 = var_10;
                            var_30 &= (min((arr_22 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]), (((arr_22 [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1]) ? (arr_22 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 + 1]) : (arr_22 [i_7] [i_7 - 1] [18] [i_7 + 1] [i_7 + 1])))));
                            var_31 = (max((!20781), (arr_17 [i_7] [i_1])));
                        }
                    }
                }
                var_32 *= (((arr_19 [i_1] [8] [i_2] [i_5]) ? (((max(4786891821459297989, 2508803235)) - (arr_17 [i_2] [i_1]))) : ((((arr_4 [6]) ? var_1 : (arr_8 [i_1]))))));
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {
                arr_26 [i_1] [i_1] [i_1] [i_1] = (((min((((var_13 ? (arr_19 [i_1] [3] [i_2] [i_8]) : var_10))), -7681955563975966688)) ^ ((min((arr_17 [i_2] [i_1]), (arr_25 [i_1] [i_1] [i_1]))))));

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_33 -= (min(((-30984 ? -1 : ((0 ? (arr_18 [i_9] [i_8] [i_1]) : -1763685290213660759)))), -614));
                    arr_31 [i_1] [i_1] [i_1] = (((((((var_12 ? var_0 : (arr_9 [i_8]))) - (arr_20 [i_9] [i_8] [7] [i_1])))) ? (arr_18 [22] [i_2] [9]) : (arr_23 [i_1] [i_1] [i_2] [i_8] [i_9])));
                }
                var_34 = (max(var_34, (arr_28 [i_8] [19] [i_2] [i_1] [i_1])));
            }
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_36 [i_1] [i_10] [i_1] = 17171249574738729663;
            var_35 = (((min(1, -57)) ^ ((1483 ? ((7 - (arr_23 [i_1] [i_1] [i_10] [i_10] [23]))) : var_1))));
        }
        var_36 = (arr_12 [i_1]);
    }
    var_37 = (min((((!(var_4 && var_1)))), var_15));
    var_38 = (min(var_38, var_8));
    var_39 -= (max((254 + 0), 29466));
    #pragma endscop
}
