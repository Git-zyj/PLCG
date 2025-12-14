/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127132
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
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 *= (((-(arr_8 [i_0] [i_0] [1] [21]))) < (((var_7 ? ((var_13 ? 0 : -793810349)) : var_2))));
                                arr_11 [12] [12] [5] = (((var_11 || (((arr_7 [i_1] [i_4] [1] [7]) && var_6)))));
                                var_17 = (max(var_17, -var_14));
                            }
                        }
                    }
                }
                arr_12 [i_0] [18] &= 39;
            }
        }
    }
    var_18 = (((((((var_3 && -2106549733) <= var_11)))) | -2791000517));
    var_19 = var_8;
    var_20 = var_1;
    #pragma endscop
}
