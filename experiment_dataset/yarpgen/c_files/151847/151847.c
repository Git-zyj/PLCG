/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 &= ((3266338881 + ((-15 ? (arr_1 [i_1] [2]) : var_7))));
                                var_17 = (min(var_17, (((((63896 ? 65521 : 65520)) != var_5)))));
                                var_18 *= (((65505 ? var_1 : (arr_12 [i_3 + 4] [i_4] [i_4] [i_0] [i_3 - 1] [i_3 + 4] [i_3 + 4]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 29 : (max(var_2, var_12))))) ? var_15 : 65494));
                                var_20 = ((1 ? 15 : 426157945));
                                arr_21 [i_5] [i_1] [i_2] [i_5] = (((((28246 ? 1 : (arr_17 [i_0] [i_0] [8] [6] [i_6])))) ? 9 : -28413));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_38 [i_7] [1] [i_9] [15] [i_11] [i_9] [i_7] = (min(239, 203));
                                var_21 = (min(var_21, var_12));
                                arr_39 [i_7] [i_8] [i_7] [i_10] [i_7] = (((1 && 28387) ^ (((arr_26 [i_7] [i_7] [i_7]) ? var_12 : (arr_3 [i_7] [i_7])))));
                                var_22 = (min(var_22, (((((43 >= (arr_7 [i_10 - 1] [1]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_45 [i_7] [i_8] [i_12 - 2] [i_12 - 2] = 65527;
                            var_23 = (~var_13);
                            arr_46 [i_13] [9] [9] = (~-30441);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
