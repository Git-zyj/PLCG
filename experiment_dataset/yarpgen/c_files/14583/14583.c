/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((~(arr_3 [17] [i_0 - 2])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((2 ? ((min(-97, -1))) : (((arr_15 [i_1] [i_2] [i_3]) ? -1949566342378741540 : -1949566342378741540))))));
                                var_15 *= -496705554;
                                arr_16 [0] [i_1] [i_2] [i_3] [i_4] = 2188;
                            }
                        }
                    }
                }
                arr_17 [i_1] = -5;
            }
        }
    }
    #pragma endscop
}
