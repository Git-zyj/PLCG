/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 9223372036854775807;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 ^= 562949886312448;
                                arr_13 [i_1] = -4137;
                                var_12 = 0;
                            }
                        }
                    }
                    var_13 -= 50;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_14 = 198;
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = 524317481;
                            }
                        }
                    }
                    var_15 = 1728131681;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_16 -= 3677405959;
                                var_17 = -13553;
                                arr_25 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = 18443387688689096097;
                            }
                        }
                    }
                }
            }
        }
        var_18 = (max(var_18, 2566835614));
        var_19 = 22069;
    }
    for (int i_9 = 3; i_9 < 18;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_41 [i_9] [i_9] [i_13] [i_9] [i_9] = 10837282487846306527;
                                var_20 &= 617561336;
                                arr_42 [i_9] [i_9] [i_13] [i_13] [i_9] = 211080269382111709;
                                arr_43 [i_9] [i_9] [i_9] [i_13] [i_9] = 59;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_21 -= 212;
                                var_22 = 4051;
                                var_23 = 59;
                            }
                        }
                    }
                    var_24 = 19;
                }
            }
        }

        /* vectorizable */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            var_25 = -3773916959628308394;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 16;i_18 += 1)
                {
                    {
                        var_26 -= -1259;
                        arr_57 [i_9] [i_16] [i_16] [i_9] = 3968;
                    }
                }
            }
            var_27 = 44;
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            var_28 -= 18446744073709551615;
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 4; i_21 < 18;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 19;i_22 += 1)
                    {
                        {
                            var_29 -= (-2147483647 - 1);
                            var_30 = -60;
                        }
                    }
                }
            }
            arr_67 [i_9] = 13657090610396953064;
            var_31 = 7609461585863245089;
        }
        /* LoopNest 2 */
        for (int i_23 = 3; i_23 < 15;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 19;i_24 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_25 = 3; i_25 < 18;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 19;i_26 += 1)
                        {
                            {
                                var_32 ^= 47145;
                                var_33 *= 13344;
                                arr_80 [i_9] = -1;
                            }
                        }
                    }

                    for (int i_27 = 1; i_27 < 18;i_27 += 1)
                    {
                        var_34 = 0;
                        arr_83 [i_27] [i_27] = 10837282487846306527;
                        arr_84 [i_27] [i_27] = 65535;
                    }

                    for (int i_28 = 2; i_28 < 18;i_28 += 1)
                    {
                        var_35 = (min(var_35, 18446744073709551615));
                        var_36 = 4294967276;
                    }
                    for (int i_29 = 1; i_29 < 17;i_29 += 1) /* same iter space */
                    {
                        var_37 = (min(var_37, 1678517827));
                        arr_89 [i_9] [i_9] [i_9] [i_9] [i_9] = 44;
                        arr_90 [i_23] &= 0;
                    }
                    for (int i_30 = 1; i_30 < 17;i_30 += 1) /* same iter space */
                    {
                        arr_93 [i_9] [i_9] = -21;
                        var_38 = -57;
                        arr_94 [i_9] [i_9] [i_9] [i_9] &= -2;
                        var_39 += 1917755188;
                    }
                    /* LoopNest 2 */
                    for (int i_31 = 1; i_31 < 17;i_31 += 1)
                    {
                        for (int i_32 = 3; i_32 < 17;i_32 += 1)
                        {
                            {
                                var_40 ^= 1678517816;
                                var_41 = 32752;
                                arr_99 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = 1;
                                var_42 *= -9758;
                            }
                        }
                    }
                }
            }
        }
        var_43 = 2;
    }
    #pragma endscop
}
