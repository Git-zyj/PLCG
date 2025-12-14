/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_3;
    var_13 = (!var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 += var_10;

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            var_15 = ((var_4 ? 1 : (arr_0 [i_1 - 2])));
            var_16 = (min(var_16, (arr_1 [i_1 - 3])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_17 = (!35996);
                            var_18 = (min(var_18, var_9));
                        }
                    }
                }
            }
            var_19 = (arr_11 [4] [0]);
        }
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            var_20 -= ((!(arr_8 [i_5 - 1] [i_5] [i_5 - 3] [i_0] [10])));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_21 = 4294967284;
                    var_22 = ((var_3 ? var_2 : (arr_9 [i_6] [i_5 - 1] [i_0])));
                }
                var_23 = (~35980);
                var_24 = (((-3026 + 2147483647) << (3001 - 3001)));
                arr_23 [4] [4] [1] |= -2976;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_29 [i_0] [i_5] [i_6] [7] [i_5] = (((-232526196 + 2147483647) << (((-var_2 + 61145) - 14))));
                            arr_30 [i_5] [i_5 + 1] [3] [i_8] [i_8] = 8191;
                        }
                    }
                }
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                var_25 = (((arr_24 [i_10 - 1] [i_5 - 2] [i_0]) ? 29536 : 232526191));
                arr_34 [i_5] = ((var_9 << (((var_4 + 15244) - 54))));
            }
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_26 = (arr_39 [i_0] [i_5] [i_5] [i_11] [i_12] [i_13 + 1]);
                            var_27 = 232526210;
                            var_28 = -29531;
                            arr_42 [i_0] [i_5 - 2] [i_11] [i_0] [i_5] = ((((var_7 - (arr_6 [i_5 + 1]))) ^ (arr_5 [8] [i_5 - 1] [5] [i_13 + 1])));
                        }
                    }
                }
                var_29 = var_9;
            }
            var_30 *= (var_8 >= 29530);
            arr_43 [i_5] [1] [i_5] = (((((20139 ? -2 : 3017))) ? var_0 : 8213));
            var_31 = (max(var_31, (arr_9 [i_5] [i_5 + 1] [i_5])));
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            arr_47 [i_0] [i_0] [i_14] = ((~(arr_15 [i_0] [i_14] [i_14])));
            var_32 ^= (((arr_5 [i_0] [i_0] [i_14] [1]) | var_7));
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                {
                    arr_53 [i_16] [i_15] [i_0] = (var_9 + var_8);
                    arr_54 [i_16] = 16383;
                    arr_55 [9] [i_15] [i_15] [i_0] = ((!(arr_22 [i_16] [i_16] [i_15] [i_16] [i_0])));
                }
            }
        }
        arr_56 [i_0] = (var_7 <= var_7);
    }
    #pragma endscop
}
