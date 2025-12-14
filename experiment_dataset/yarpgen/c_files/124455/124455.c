/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 &= ((~((~((2147483647 ? 0 : var_17))))));
                                arr_15 [i_0] [11] [i_2] [i_3] [i_4] [i_2] [i_0] = max((((-862550009 + 2147483647) << ((((12859807100489181586 ? var_11 : 1794295867)) - 156)))), ((min(252, -2068158848))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_20 = (max((max((((-101 ? 0 : -8))), (max(12457041442424572536, 1535460727430172158)))), ((((var_0 + var_14) + (((arr_8 [i_6] [i_5] [8] [i_0]) ? 119 : (arr_12 [i_0] [i_0] [i_1] [i_0] [i_0]))))))));
                            var_21 = var_0;
                            var_22 = (max(var_22, (~var_10)));
                            arr_20 [20] [i_1] [i_5] [i_1] = var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_26 [i_7] [i_7] = -var_5;
                            var_23 = ((-3358 + (min((arr_18 [i_0] [i_0] [i_1]), (12387845326314496493 - var_4)))));
                            var_24 = ((1 << ((((20 ? ((-(arr_23 [i_0] [i_8 - 1]))) : -var_1)) + 59))));
                            var_25 &= ((!((((max(var_9, (arr_4 [i_0] [11] [i_7] [i_8]))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_39 [i_13] [i_12] [i_11] [i_10 + 2] [i_9] [11] = 10312;
                                var_26 = (max(((((65535 - 268427264) + -594334298))), ((-(arr_38 [i_12] [i_12 + 1] [i_12] [i_13 + 1] [i_13 + 2] [16] [i_13])))));
                                var_27 = (max(var_27, ((~((min(1, var_4)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 22;i_15 += 1)
                    {
                        {
                            arr_45 [20] [i_10 + 2] [i_14] [i_15] = ((max(((min(65, -70))), ((-(arr_42 [i_9] [i_14] [i_15]))))));
                            var_28 = (((((((-26288 ^ var_3) ? (~1708554936) : ((min(var_4, 7))))) + 2147483647)) << (((((max(-448778057, -28232)) + 28236)) - 4))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
