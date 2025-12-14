/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (arr_0 [i_0]);
                                arr_10 [i_0] [i_0] [13] [i_3] [i_0] = var_11;
                                var_20 = (max((arr_8 [i_2] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (((((var_5 ? var_14 : var_10))) ? var_2 : 543816726))));
                            }
                        }
                    }
                }
                var_21 *= -var_0;
            }
        }
    }
    var_22 = var_5;

    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        arr_14 [14] &= (((var_15 % var_17) ? var_17 : ((((var_13 ? var_17 : var_4))))));
        var_23 = -10944;
    }
    #pragma endscop
}
