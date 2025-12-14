/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 ^= (~var_12);
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = ((!125829120) > (((1 >> 1) + ((min(var_12, 96))))));
                                var_17 |= (((~(arr_10 [i_3] [i_1 - 1] [i_1 - 1]))));
                                var_18 = ((!((((-(arr_12 [i_2])))))));
                                arr_16 [i_0] [i_2] [i_0] [i_0] [9] = (!var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_6;
    var_20 = ((15497077382715892496 ? 15497077382715892482 : 51216));
    #pragma endscop
}
