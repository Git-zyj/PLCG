/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_0] |= (((-(-127 - 1))));
                    var_15 = var_3;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_16 ^= (((~var_12) % var_8));
                        var_17 = (min(var_17, (!109)));
                        arr_14 [i_0] [0] [i_0] [i_0] [i_3] = (min(((var_7 ? (var_1 >= var_0) : ((min(var_12, 0))))), (~3795291967801321918)));
                    }
                    arr_15 [i_0] = var_14;
                }
            }
        }
    }
    var_18 = (max(var_18, (((!1) ? (min((1 && var_2), var_0)) : (min((!1), -61819754451929654))))));
    var_19 ^= var_3;
    #pragma endscop
}
