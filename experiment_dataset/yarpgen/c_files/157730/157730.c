/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((~(~-1105209643)));
                var_10 = -var_0;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_4] [8] = var_4;
                                var_11 = (min(-var_2, 5162408015319830922));
                                var_12 = ((~(var_0 && var_6)));
                                var_13 = var_3;
                            }
                        }
                    }
                    var_14 = var_8;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_28 [i_2] [i_4] = (((var_7 && 13284336058389720708) & ((((~var_5) || var_4)))));
                                var_15 = (((~var_2) ? ((8657452067520224987 ? var_7 : var_4)) : (((var_9 ? 0 : var_6)))));
                                var_16 = var_1;
                                var_17 = (min(var_17, (((((var_7 ? (!var_5) : ((var_7 ? var_5 : var_6)))) - var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 7;i_13 += 1)
                        {
                            {
                                arr_42 [i_9] [i_9] [i_9] [i_11] [i_9] [i_12] [i_9] = ((max(146, 126)));
                                var_18 = var_1;
                                var_19 = (min(var_19, ((219 ? (var_6 + -var_8) : (!var_3)))));
                            }
                        }
                    }
                }
                var_20 = ((-((~(min(67108863, var_9))))));
                var_21 = var_4;
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] = var_9;
                                var_22 = var_5;
                                arr_51 [i_14] [i_9] [i_14] [0] [i_9] [i_9] = ((-var_5 ? var_9 : var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
