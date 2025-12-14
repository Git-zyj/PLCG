/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_2, var_17));
    var_21 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 -= ((min(var_8, var_19)));
                    arr_9 [i_0] [i_0] [i_2] |= var_17;
                }
            }
        }
    }
    #pragma endscop
}
