/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((!(!14)))), var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 |= -3;
        var_16 = (((-3 > -3) ? -15 : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = (arr_4 [i_1]);
            var_18 = (((arr_2 [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1 + 1] [i_1 + 1]) : var_0));
            var_19 = ((!((((arr_3 [i_1]) / var_13)))));
            var_20 = var_0;
            var_21 = ((~((var_10 ? var_4 : -17))));
        }
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            arr_12 [i_1] = ((var_12 ? (arr_2 [i_3] [i_1]) : (~67108864)));
            var_22 = ((((((-2147483647 - 1) ? 28 : -14))) ? -9223372036854775802 : 67108866));
            arr_13 [i_3] &= -424324238;
            var_23 = ((-(arr_3 [i_1])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    {
                        var_24 -= (((arr_20 [i_5] [i_4] [i_1] [i_1]) ? 6 : (9223372036854775807 == 2)));
                        var_25 += (arr_11 [i_5] [i_3] [24]);

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_26 = (((~-3) ? -424324238 : 0));
                            var_27 = (~(var_9 <= var_5));
                            arr_23 [i_1] [i_1] [i_4] [14] = ((-(arr_14 [12] [17] [i_1] [i_5])));
                            var_28 = var_11;
                        }
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            var_29 = var_9;
                            arr_26 [i_5] [i_1] [i_1] [i_1] = (((arr_17 [i_1] [i_1] [i_3 - 2] [i_7 + 1]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_4]) : (arr_17 [i_3] [i_1] [i_3 - 2] [10])));
                        }
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            arr_30 [i_8] [i_1] [i_1] = -3;
            var_30 = (arr_6 [21] [i_1] [i_8]);
            var_31 -= ((-4294967295 ? 4227858416 : var_10));
        }
        var_32 += -9223372036854775802;

        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {
            var_33 = (arr_31 [i_1]);
            var_34 ^= (((9 ^ -20) * (((var_8 ? (arr_32 [i_9]) : 1)))));
            var_35 = (((var_9 > var_3) ? (127 + 67108864) : (~-6)));
        }
        var_36 = (arr_2 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
    {
        var_37 = (~4294967295);
        var_38 = (((((arr_29 [i_10 + 1] [i_10 + 1]) + 2147483647)) << ((((var_12 << (32767 - 32728))) - 14701923467981225984))));
    }
    #pragma endscop
}
