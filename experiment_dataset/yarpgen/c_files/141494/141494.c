/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = ((-(((((var_4 ? var_8 : var_0))) ? -var_6 : (max(var_0, var_3))))));
                var_11 = ((var_8 ? (119 != 1) : var_5));
                var_12 += (max((min((var_4 ^ var_2), ((var_1 ? var_8 : var_1)))), var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                var_13 = (max(var_13, (((-((((var_1 ? var_0 : var_0)))))))));
                var_14 = (min(var_14, (((((min((max(var_5, var_2)), var_3))) ? ((((max(var_9, var_8))) ? var_3 : var_6)) : var_3)))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_9, ((var_9 ? var_1 : var_1))));
                                var_16 ^= (1 & ((min(119, 32))));
                                var_17 = ((((max(var_5, var_5))) ? (((((var_9 ? var_6 : var_5))))) : (max(1, -2125873319288991139))));
                                var_18 = (max(var_18, (max(var_9, (min(var_9, var_3))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_22 [i_2] [i_3] |= var_1;
                            var_19 ^= var_6;
                            arr_23 [i_3 - 3] = (((((var_3 ? ((var_5 ? var_4 : var_3)) : (min(var_9, var_8))))) ? (~var_0) : ((((max(var_5, var_6))) ? ((min(var_6, var_0))) : ((var_2 ? var_1 : var_5))))));
                        }
                    }
                }
                arr_24 [i_2] [i_2] = var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_20 = (((min(var_8, (var_2 || var_0))) ^ (((!(((var_7 ? var_2 : var_9))))))));
                                var_21 = ((var_1 ? ((var_0 ? var_4 : var_0)) : (var_8 > var_7)));
                                var_22 += (max((var_1 ^ var_1), ((var_8 ? var_2 : var_5))));
                                arr_42 [i_13] [i_13 + 3] [i_11] [i_13] [i_13 + 2] = -8020780132102337097;
                            }
                        }
                    }
                    arr_43 [i_11] = ((((min(var_3, var_2))) ? var_5 : ((var_8 ? (min(var_8, var_5)) : ((max(var_2, var_0)))))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                arr_50 [i_9] [i_11] [i_11 - 2] [i_14] [i_10] [i_14] = (min(var_8, (min(((var_7 ? var_6 : var_2)), var_2))));
                                var_23 = (min(var_8, (!var_9)));
                                var_24 *= (max(((max(var_6, var_9))), (min(var_8, var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((-(max(var_1, var_0))))) ? (((-(~var_1)))) : var_5);
    var_26 = var_6;
    #pragma endscop
}
