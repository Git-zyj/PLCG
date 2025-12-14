/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = 50159;
                                var_20 = ((!((min((arr_10 [i_1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [5]), (arr_10 [i_3] [i_4 - 4] [i_4 - 2] [i_4] [i_4 - 3] [i_4 - 4] [9]))))));
                                var_21 = (min(var_21, (-2395901077486698485 / 30720)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_22 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_23 = ((+((((((arr_16 [i_1]) / (arr_7 [i_0] [i_0] [i_0] [i_5] [i_1] [i_7])))) ? (-941 / 1255265028) : 63))));
                                var_24 *= (max(-2272081217849880253, 536869888));
                                var_25 = (((((((min(-30720, (arr_9 [i_5])))) ? ((76 ? 224 : 246)) : ((min(30720, var_18)))))) / (arr_2 [i_7] [i_1] [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_26 = ((var_17 ^ ((min((~var_4), var_4)))));
                                arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] |= max(20875, (max((max(10, (arr_19 [i_11] [5] [i_11] [i_11] [i_11] [i_11 + 1]))), (!var_18))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 9;i_14 += 1)
                        {
                            {
                                arr_42 [i_9] [i_9] = var_14;
                                arr_43 [i_9] [i_9] [i_9] [5] [i_9] [i_9] = ((((arr_7 [i_8] [i_8] [i_10] [i_14 + 1] [i_10 - 2] [i_13]) || ((min(63, (arr_27 [0] [i_10])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 8;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_27 = ((31 / ((4 ? (arr_6 [i_10 - 1] [i_15 - 2]) : (arr_50 [i_8] [i_15 - 2] [i_8] [i_15] [i_8] [i_15] [8])))));
                                var_28 = (min(((((arr_40 [i_10 - 2] [i_10 + 1] [i_9] [i_10 + 2] [i_10 + 2]) - var_7))), ((((max(var_5, var_8))) ? var_14 : (arr_0 [i_10 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
