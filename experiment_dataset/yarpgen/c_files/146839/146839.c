/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (min(var_4, (max(var_14, 26953))));
                    arr_9 [i_0] [i_0] [i_2] = var_6;
                    var_15 += (max(((var_6 | (arr_5 [i_0]))), (var_9 | var_6)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_22 [i_5] [i_5] [i_5] [i_5] [i_3] = ((((((var_7 - (arr_21 [i_3 + 1] [9] [i_5] [i_6]))))) ? (((1 % 1) ? 1 : (arr_20 [i_3] [i_4] [i_5 + 1] [1] [i_7 + 2] [12] [i_7]))) : (var_3 - 1)));
                                var_16 *= (((arr_14 [i_3 + 2] [i_7] [i_3 + 2]) ? ((-2155749891781984143 ? (arr_14 [i_3 + 2] [i_4] [i_3 + 1]) : 2155749891781984158)) : (((var_11 ? var_11 : (arr_14 [i_3 + 2] [i_7] [i_3 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_29 [i_3] [i_3] [1] = ((1 ? var_9 : (((((var_3 ? var_6 : var_0))) ? var_4 : 0))));
                                arr_30 [i_3] [i_4] [i_5] [i_8] [i_9] = (max(var_14, (arr_14 [0] [i_3] [i_5 - 2])));
                                var_17 = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
