/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_1] = 4879934338821768586;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 ^= ((((((((var_15 ? var_13 : 58))) ? (arr_2 [i_4] [i_2]) : var_6))) ? (arr_3 [i_0] [i_2]) : 44564));
                                arr_13 [i_0] [i_1 + 2] [i_0] [i_3] [i_4] = max(((-(((arr_1 [i_0] [i_1]) ? -116 : 64)))), 119);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [i_6] [i_7] [i_8] [i_9] = ((((((((var_2 ? var_4 : 1))) ? 21380 : -var_16))) ? ((min((!-4), var_4))) : var_4));
                                var_19 *= (!121369849);
                            }
                        }
                    }
                    var_20 = (var_17 < var_13);
                }
            }
        }
    }
    var_21 = (min(var_21, (!var_17)));
    var_22 &= ((-(((((var_15 ? 198 : var_5))) ? (var_6 && var_11) : ((var_8 ? 115 : var_1))))));
    var_23 = (min(var_23, var_14));
    #pragma endscop
}
