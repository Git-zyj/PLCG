/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_15 / ((var_13 ? var_14 : var_12)))) * (!55786)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_0])));
        var_21 = (max(var_21, (!1)));
        var_22 = (((((var_8 ? (arr_1 [i_0]) : var_4))) ? var_0 : (var_2 + var_9)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_23 &= (arr_3 [8] [8]);
        arr_5 [i_1] = (var_0 ^ var_6);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] = ((((((var_6 > ((9223372036854775807 >> (((-9223372036854775797 - -9223372036854775772) + 76)))))))) & ((var_0 / (-9223372036854775807 - 1)))));
                    var_24 -= ((!(var_12 <= var_10)));
                }
            }
        }
        var_25 *= var_7;

        /* vectorizable */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            var_26 = ((var_14 < (((arr_9 [2] [2]) | var_4))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_25 [i_2] [i_5] [i_2] [i_6] [i_2] |= var_15;
                            var_27 = ((~var_16) ? var_1 : (arr_15 [i_2] [i_2] [3]));
                            var_28 = (min(var_28, 9223372036854775807));
                            var_29 = var_6;
                            arr_26 [i_2] [i_7] [1] [i_5] [i_2] = ((0 ? (~54273) : (((arr_12 [i_2] [i_2] [i_2]) ? var_0 : var_1))));
                        }
                    }
                }
            }
            var_30 = (((arr_15 [i_2] [i_2] [4]) <= (arr_17 [i_5] [i_2])));
            var_31 = ((var_1 ? 255 : 4));
            var_32 = var_17;
        }
        for (int i_9 = 3; i_9 < 8;i_9 += 1) /* same iter space */
        {
            var_33 = (255 + 1);
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_34 = (arr_23 [i_9] [i_9] [i_11] [i_12]);
                            arr_37 [i_2] [i_9] [i_9 + 2] [i_9] [i_9] = ((!(~var_15)));
                        }
                    }
                }
            }
            var_35 -= var_11;
            var_36 |= var_4;
        }
        for (int i_13 = 3; i_13 < 8;i_13 += 1) /* same iter space */
        {
            arr_40 [i_2] [i_2] = (min(((max(1, -28))), (max(var_10, (2147483647 % var_0)))));
            arr_41 [i_13] [i_2] = ((var_16 == ((min(var_16, var_17)))));
            arr_42 [i_2] = ((-(max(var_8, (1 ^ 8434461630265883963)))));
            var_37 ^= ((9223372036854775807 ? var_7 : -1651652341));
        }
        arr_43 [i_2] [i_2] = (max(((((arr_16 [i_2] [i_2] [i_2]) ? ((((arr_20 [i_2] [i_2] [i_2]) <= var_0))) : var_15))), var_13));
    }
    #pragma endscop
}
