/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 += ((~((var_9 ? var_6 : var_6))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [14] [i_1] = (var_2 + (var_1 != var_6));
                        var_11 = ((((var_4 ? var_3 : var_4)) - (var_1 < var_8)));
                    }
                    var_12 *= -var_9;
                }
            }
        }
    }
    var_13 += var_3;
    #pragma endscop
}
