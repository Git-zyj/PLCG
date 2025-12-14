/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = 0;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] = (((arr_0 [i_0 + 1]) - 40282));
                            var_15 |= arr_8 [i_1] [i_2];
                        }
                    }
                }
            }
            var_16 = (arr_2 [i_0 + 1]);
            arr_15 [i_0] = var_8;
            var_17 -= ((-var_2 ? (var_12 | var_4) : (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
        }
        arr_16 [i_0] = ((+((-1976025643 % ((var_11 ? (arr_12 [i_0] [7] [i_0 + 1] [5] [i_0]) : 40282))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_22 [i_6] [i_5] [i_6] |= (arr_4 [i_0] [i_6] [i_6]);
                    var_18 = ((-(((arr_3 [i_0 + 1] [i_5] [i_0]) >> 0))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_19 = 24;
                                var_20 = var_6;
                            }
                        }
                    }
                    var_21 = ((((-var_1 ? (-1976025628 | var_9) : (max(0, 12177662201184105321)))) + (((arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [i_6]) * 0))));
                    arr_29 [i_0 + 1] [i_5] [i_6] [i_0] = var_8;
                }
            }
        }
    }
    var_22 ^= var_11;

    /* vectorizable */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        var_23 |= ((-6 + (arr_27 [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 2])));
        var_24 = (((arr_11 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 2] [7]) ? (arr_11 [i_9] [i_9 + 2] [i_9] [i_9] [i_9] [i_9]) : (arr_11 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 2] [19])));
        arr_32 [i_9] = ((-726002153 || (0 >= var_1)));
        var_25 *= ((var_0 ? 1 : ((((arr_20 [i_9] [i_9 + 2] [i_9]) != var_0)))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                {
                    arr_37 [i_10] = (((arr_18 [i_9 - 1]) % 2147483647));
                    arr_38 [i_10] = 0;
                    var_26 ^= 0;
                }
            }
        }
    }
    for (int i_12 = 3; i_12 < 13;i_12 += 1)
    {
        arr_41 [i_12] = ((11 << (var_7 - 21729)));
        arr_42 [i_12] = ((var_10 ? ((((var_13 ? (arr_24 [i_12] [i_12] [i_12 + 3] [i_12]) : var_14)) - var_0)) : (!var_10)));
    }
    #pragma endscop
}
