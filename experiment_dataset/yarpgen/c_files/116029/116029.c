/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_10 = 197;
                            var_11 = (min(var_11, ((max(16725641839687070436, (((arr_9 [i_0 - 1] [18] [7] [i_1 + 1]) ? var_9 : (arr_9 [i_0 - 2] [i_0] [9] [i_1 - 3]))))))));
                            var_12 -= 62623;
                            var_13 = (min(var_13, (((((arr_4 [i_1 - 3]) & (arr_4 [i_1 - 1])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_17 [16] [18] [i_1] [i_4] [i_1] [8] = var_1;
                                var_14 = (max(var_14, ((((min(-var_8, ((var_8 ? var_0 : (arr_0 [i_1] [i_4]))))) * ((min(((min(-13, 656471586))), (arr_8 [i_1] [5] [13] [i_6])))))))));
                                var_15 ^= ((((((arr_16 [i_0 + 2] [i_5] [i_1 - 3] [i_6] [i_6] [i_1 - 3] [i_6]) ? (~var_4) : ((656471587 ? 35184372088831 : (arr_1 [i_5])))))) ? ((2912 ? ((max(85, 0))) : -255)) : 62623));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_16 = var_1;
                            var_17 = (((arr_12 [i_0 + 2] [i_0 - 2] [i_1] [i_7] [i_8]) & (~62624)));
                            var_18 -= 240;
                            arr_24 [i_0] [i_1 - 1] [i_7] [i_1] = (((1 ? var_9 : (arr_14 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 - 1] [i_1 - 2]))) < (((0 ? 0 : 18))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((min(((min((arr_31 [i_10] [i_11] [i_12]), ((0 ? var_6 : var_6))))), 15)))));
                            var_20 = (((1 * 1777185747805287584) / 14230844438033319868));
                            arr_36 [i_10] = 13317088847330494326;
                            var_21 = (max(0, (!238)));
                            var_22 = (max(var_22, ((((!var_4) ? (((((min(2912, var_2))) ? (arr_2 [i_11] [i_12] [i_9 - 1]) : -var_1))) : ((max(15383729234190546012, var_9))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_41 [3] [i_10] [i_13] [i_14] = ((((((arr_27 [i_9 + 1]) | (arr_3 [i_9 + 1] [i_9 - 1])))) ? (((var_9 ? ((max((arr_38 [i_9] [i_13] [i_10] [i_9]), var_4))) : var_9))) : (min((var_6 & var_0), var_8))));
                            var_23 -= (arr_29 [i_13]);
                            arr_42 [i_9 - 1] [i_10] [17] [i_10] = (25 & (((min(62623, 22007)))));
                            var_24 &= (((arr_26 [i_9 - 1] [i_9 - 1]) ? 8388607 : ((var_8 + (((var_4 ? (arr_25 [10]) : var_4)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        {
                            arr_48 [i_9] [i_10] [i_15] [12] |= var_8;
                            var_25 = (min(var_25, ((((~15) && var_0)))));
                            arr_49 [18] [i_10] [i_15] [i_15] [6] &= min(18446744073709551612, (arr_16 [i_9 + 1] [i_15] [10] [i_15] [i_15] [i_16 - 1] [4]));
                            var_26 = (min(var_1, 8734041407441161960));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 4; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        {
                            var_27 = min(((var_4 ? 18446744073709551603 : var_0)), (min(((min(3364873038, 230))), ((62627 % (arr_0 [i_20] [i_19 + 1]))))));
                            var_28 = ((62623 ? 203 : 2912));
                            var_29 ^= -36;
                            arr_61 [i_17] [i_20] [i_17] [i_19 + 1] [5] [i_20] = (((max(18446744073709551589, (arr_31 [i_17] [i_18] [4]))) << (2912 < 16281930454199441781)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_21 = 3; i_21 < 14;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 13;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 17;i_23 += 1)
                        {
                            {
                                var_30 = 930094227;
                                var_31 |= var_3;
                                var_32 = ((62623 ? (930094257 / -3459) : 130));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
