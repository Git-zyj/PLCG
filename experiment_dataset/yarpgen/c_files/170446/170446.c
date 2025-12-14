/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (max(((var_4 ? var_13 : (arr_6 [i_0] [i_1] [i_2] [i_0]))), (((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 1683191444))));
                                var_20 = (((((var_4 << (var_1 - 9814281624811235613)))) ? -513213753 : (((-(6357543161704700361 < 1))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((((5550982620453009253 ? 134217728 : 6103747893444742139)))))));
                                var_22 &= var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_23 = max(134217728, ((max(((var_12 <= (arr_18 [i_7] [i_7] [i_7] [i_8] [i_7]))), (1 != var_3)))));
                                var_24 = ((var_13 % 1) || ((((((-2919343191133324634 ? var_11 : 1))) ? -0 : 134217728))));
                                arr_30 [i_7] [i_8] = -1;
                                var_25 = (arr_16 [i_7] [i_8] [i_7] [i_7] [i_11]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_26 = (-(((1 / var_6) ? (6828104582213585825 - var_8) : -var_1)));
                            var_27 = (min(var_27, ((min(1, 1)))));
                            var_28 = (~5550982620453009267);
                            var_29 = ((-(((((2995689745 ? 229 : 1)) != 27586)))));
                            var_30 = ((((((39953 ? 341230298069872998 : var_13)) != ((((arr_29 [i_7] [i_8] [i_7] [i_8] [i_8]) ? 1 : 597454178))))) ? (max((arr_32 [i_8]), 3697513119)) : (((((var_2 ? 11342705694161575453 : 1))) ? (max(var_9, var_8)) : ((var_11 ? 1802493428 : -110))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            {
                                arr_41 [i_7] [i_8] [i_14] [i_7] [i_16] = ((4645635357529248294 ? (((((15850 ? var_18 : var_11))) ? 1 : -1)) : (arr_31 [i_8] [i_8] [i_8] [i_7])));
                                var_31 *= var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
