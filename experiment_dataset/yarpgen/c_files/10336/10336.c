/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 9223372036854775801;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 *= max((arr_0 [i_0] [i_0]), 26128);
                arr_4 [i_0] [12] = (arr_3 [i_1] [1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_22 = (max(var_22, 65529));
                    var_23 = (arr_6 [i_0 - 2] [i_1] [i_0 - 3]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_3] [i_1] [i_1] = (~0);
                        var_24 |= ((32747 ? (arr_3 [i_0 - 3] [i_0 - 3]) : (((arr_1 [2] [2]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 - 1] [7])))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_25 = ((((~(arr_12 [i_0] [i_1]))) / -125));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [1] [i_4] = 9223372036854775801;
                            var_26 &= 6528356095569287443;
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_27 = (arr_10 [i_0 - 2]);
                            var_28 = 9223372036854775806;
                        }
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            var_29 = 2008894219;
                            arr_22 [i_7 + 2] [i_4] [16] [i_4] [i_7] = (arr_21 [i_0] [i_0] [i_0] [i_0] [i_7]);
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_29 [i_0] [i_8] [i_0] [i_0] [1] [10] = 0;
                                arr_30 [i_0] [i_0] [i_0] [i_8] [i_9] [i_8] = (arr_11 [i_0] [i_8 - 1] [i_9] [i_9 + 1] [i_9] [i_10 - 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            {
                                var_30 = 22;
                                var_31 = (min(var_31, (arr_10 [i_1])));
                            }
                        }
                    }
                    var_32 = -160;
                    var_33 = 26104;
                }
                /* vectorizable */
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    arr_39 [i_13] [i_13] [i_1] [i_13] = 18446744073709551614;
                    arr_40 [i_0] [i_1] [i_13] = ((~(arr_18 [i_0 - 3] [i_1] [i_13])));

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_45 [i_13] [i_1] [i_13] [i_1] [i_13] [i_1] = (-32767 - 1);
                        var_34 = (min(var_34, 1));
                    }
                    arr_46 [i_13] [i_13] [16] [i_13] = 633017738;
                }
                for (int i_15 = 4; i_15 < 19;i_15 += 1)
                {
                    arr_49 [i_0] [i_0 + 1] [i_0 - 1] = (arr_6 [i_1] [i_1] [i_15 + 1]);

                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        var_35 -= ((max(1775745497, 45709)));
                        var_36 = arr_7 [i_0] [i_1] [i_15 + 1] [i_15 - 3] [i_16];
                    }
                }
            }
        }
    }
    #pragma endscop
}
