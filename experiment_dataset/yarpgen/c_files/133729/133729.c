/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = 36056;
                    var_20 *= 9223372036854775807;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = 21;
                                var_22 |= 57344;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_5] [i_2] [i_5] [i_2] = 108;

                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            arr_22 [i_5] = 0;
                            var_23 += 8187;
                            arr_23 [i_0] [i_1] [i_2] [1] [i_5] [i_2] = -4;
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_24 = 1;
                            var_25 |= 6025834736480865513;
                        }
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_26 = (max(var_26, 12));
                        var_27 = 6025834736480865522;
                        arr_29 [i_0] [i_1] [1] [i_1] = 1;
                    }
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_28 += 1;
                            arr_36 [i_2] [12] [i_10] [i_9] [i_9] [i_10] = -1992182284;
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_29 *= 32601;
                            arr_39 [i_0] [i_0] [i_2] [i_11] [i_11] = 96;
                        }
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            var_30 = 5740106449324081022;
                            var_31 = 40200;
                            var_32 |= 6025834736480865522;
                            var_33 += 1;
                            arr_42 [i_12] = 1752552650;
                        }
                        for (int i_13 = 4; i_13 < 14;i_13 += 1)
                        {
                            arr_46 [i_9] [i_1] [i_2 - 1] [i_9] |= 8208;
                            var_34 = 1767147946;
                            var_35 = 1;
                            var_36 = 1;
                            arr_47 [i_0] [i_0] [16] [i_2 + 1] [i_9] [5] = -1668366935;
                        }
                        arr_48 [i_1] [5] [i_1] [i_1] [i_1] = 2147483647;
                        arr_49 [i_2] [6] [6] [i_9] [6] [i_9] = 0;
                        var_37 = 40200;
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        var_38 = 7;
                        var_39 ^= 1;
                    }
                    arr_53 [i_0] [i_0] [i_1] [i_0] = 1;
                }
                for (int i_15 = 1; i_15 < 15;i_15 += 1)
                {
                    var_40 = 6025834736480865522;

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        arr_58 [i_0] [i_15] [i_16] = 1105117859;
                        arr_59 [i_16] [10] [i_15] [i_15] = 0;
                        var_41 = 32909;
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        var_42 ^= 580881121;
                        var_43 = (max(var_43, 0));
                    }
                    arr_62 [i_1] [i_15] = 6025834736480865522;
                }
                var_44 += 6;
            }
        }
    }
    #pragma endscop
}
