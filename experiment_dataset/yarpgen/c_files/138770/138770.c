/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2 + 1] [i_2] = ((((max(65521, (65534 | var_15)))) ? ((((27959 + (arr_1 [i_3]))))) : ((~(!65502)))));
                            arr_11 [i_2] [i_2] = var_16;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] = -var_10;
                                var_20 = (min(var_20, ((((arr_3 [i_4]) | (arr_4 [i_0]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((arr_21 [i_0] [i_8] [i_9 + 2]) ? (arr_27 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_9 - 1] [i_9 - 3]) : var_14))))));
                                var_22 = (min(var_22, 7249));
                                var_23 = (min((arr_9 [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_8]), ((min(65521, (arr_27 [i_8] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 + 1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_24 = (min(var_24, (arr_6 [i_1] [i_10] [i_11 - 1])));
                            var_25 = (min(var_25, (((-(arr_8 [i_0] [i_0] [i_1] [i_0] [i_10] [i_11 - 1]))))));
                            var_26 = -var_11;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            {
                                var_27 = var_12;
                                var_28 = (arr_0 [i_15]);
                                var_29 = (max(var_29, (((~((-(arr_2 [i_13] [i_13]))))))));
                                var_30 = (max(var_30, (min(((((arr_32 [i_13] [i_13] [i_16] [i_16] [i_13] [i_12]) < 46))), (arr_33 [i_15])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 20;i_18 += 1)
                    {
                        {
                            var_31 = (max(var_31, ((((((-((var_18 ? 5815 : var_4))))) && ((!(arr_22 [i_18 + 3]))))))));
                            var_32 = var_2;
                            arr_50 [i_12] [i_12] [i_12] [i_12] = (-(((arr_45 [i_18 + 3] [i_18 + 3] [i_18 + 3] [i_12] [i_18 + 3]) & var_3)));
                            var_33 = ((7253581201417579198 ? ((((arr_27 [i_18 - 2] [i_18] [i_18 + 3] [i_18] [i_18 + 2] [i_18] [i_18 + 1]) ^ (arr_27 [i_18 - 1] [i_18] [i_18 + 1] [i_18 + 2] [i_18] [i_18 - 1] [i_18 - 2])))) : (arr_9 [i_18 + 3] [i_13] [i_17] [i_12])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
