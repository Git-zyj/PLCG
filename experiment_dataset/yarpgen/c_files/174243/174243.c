/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((18446744073709551607 ? -34 : -10001)));
        var_12 |= -9223372036854775799;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_13 = (arr_4 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = (!3633312834);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_14 -= (((var_0 + var_8) < (((~(arr_6 [i_5]))))));
                                var_15 = (((arr_4 [i_1]) < var_2));
                                var_16 = ((1 ? var_2 : (arr_16 [i_1 + 1] [i_1 + 1] [i_3] [i_4 - 1] [i_3] [i_3])));
                            }
                        }
                    }
                    var_17 = (max(var_17, (((var_9 ? var_2 : (var_0 - var_9))))));
                }
            }
        }
        arr_18 [i_1] [i_1] = (arr_9 [i_1 + 1] [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        var_18 -= ((~(-11492 | 1)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_19 = ((var_3 | (!var_0)));
                                var_20 = var_0;
                            }
                        }
                    }
                    var_21 += (arr_25 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6 + 3]);
                }
            }
        }

        for (int i_11 = 2; i_11 < 22;i_11 += 1)
        {
            var_22 &= ((25 ? (-2147483647 - 1) : (1 == 1)));
            var_23 = var_8;
            var_24 = (((var_5 ? (arr_23 [i_6] [i_6] [i_6] [i_6]) : (arr_23 [i_11] [i_11] [i_11 - 2] [i_11]))));
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_34 [i_12] [i_12] = (((~var_10) / ((~(arr_27 [i_12] [i_12] [i_12] [i_12])))));
        var_25 ^= (((arr_22 [i_12] [i_12]) & (arr_19 [i_12])));
    }
    var_26 &= ((((max(var_4, (472 / 9977)))) ? var_1 : var_1));
    var_27 = var_10;
    var_28 = ((((62 ? -11471 : -11497)) <= (((~-73) * 1))));
    #pragma endscop
}
