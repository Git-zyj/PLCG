/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 -= var_3;
                            var_21 = (min(var_21, var_5));
                            var_22 ^= ((4523377408082797662 ? var_18 : (((var_17 ? var_14 : var_16)))));
                            var_23 ^= ((377711971 ? 15895121191266931530 : 15895121191266931530));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_24 = -6451445297239877826;
                            arr_12 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = 0;
                            arr_13 [i_0] [4] [i_0 + 1] [i_4] |= 2551622882442620085;
                            var_25 = 2551622882442620085;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_26 = 15895121191266931527;
                            arr_18 [i_1] = -26;
                            arr_19 [i_0] [i_1] [i_6] [i_7] = -5766169791647667990;
                            arr_20 [i_0] [i_0] [i_6] [i_1] = (arr_11 [i_0] [i_1] [i_1] [i_6] [i_7] [i_7 + 1]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_27 = -7792562047710169907;
                            var_28 ^= ((((((~(arr_31 [i_11] [i_10] [i_8 - 3]))))) | 8184));
                            var_29 ^= 80;
                            var_30 = -9457;
                            var_31 = (((18276571934308827646 + 88) | (3399509656 && var_8)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_32 = (arr_15 [i_14] [11] [i_8 + 1]);
                                arr_40 [i_14] [i_8] [i_12] [i_12] [i_8] [i_8] = -var_3;
                                var_33 = (442016124 / 6698553676262510810);
                                arr_41 [i_8 - 1] [i_8] [i_8 - 1] = ((205 ? (~var_10) : ((var_14 ? var_3 : -var_10))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            {
                                arr_50 [i_8] = var_14;
                                var_34 = var_4;
                                var_35 = -85;
                                arr_51 [i_8] [i_9] = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 2; i_18 < 19;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 20;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 21;i_20 += 1)
                        {
                            {
                                var_36 = ((!((((((-(arr_32 [i_8] [i_8])))) * -var_18)))));
                                var_37 = (((57367 | 4294967291) < (((var_12 + 32540) ? 160 : var_4))));
                                var_38 = (((~68) - 24));
                                var_39 = (min(var_39, var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        for (int i_22 = 3; i_22 < 11;i_22 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        for (int i_25 = 3; i_25 < 11;i_25 += 1)
                        {
                            {
                                arr_73 [i_25 + 1] [i_21] [i_21] [i_22] |= 479299105;
                                arr_74 [i_21] [i_22] [i_22] [i_24] [i_25] [i_24] [i_24] = var_14;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 14;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        {
                            var_40 = 95;
                            arr_80 [i_26] [i_26] [i_22] [i_26] |= (((-124 ? 93 : 123)));
                            var_41 = var_19;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
