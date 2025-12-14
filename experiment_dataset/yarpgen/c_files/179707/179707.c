/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (max((max(var_1, var_11)), 1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (min((~var_1), (arr_3 [i_0] [i_3 - 2] [i_3])))));
                            var_15 &= ((var_9 ? ((max(1, -570897238))) : (max((!var_7), (max((arr_1 [i_1] [i_2]), var_8))))));
                            arr_12 [i_1] = (max(((((max(var_12, var_0))) ? var_2 : var_7)), ((-35 ? 2097151 : 0))));
                            var_16 |= ((-(((var_2 ? var_8 : (arr_10 [i_0] [i_0] [i_2] [15] [9]))))));
                        }
                    }
                }
                var_17 = var_4;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 = (arr_8 [i_0] [i_0] [i_0]);
                            var_19 = (min(var_19, (arr_6 [i_0] [i_5 + 1] [i_4] [i_5])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_20 = var_8;
                                arr_30 [i_10] [i_9] [i_8] [i_7] [i_7] [14] [i_6] = var_4;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_21 *= 0;
                            arr_36 [i_7] [i_7] [i_7] [i_7] = -var_7;
                        }
                    }
                }
                var_22 = var_4;
            }
        }
    }
    #pragma endscop
}
