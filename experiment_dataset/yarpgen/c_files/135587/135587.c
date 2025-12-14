/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 145;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_21 = (-111326187 != var_17);
                    var_22 = (~-11973);
                    var_23 = 111326186;
                }
            }
        }
    }
    #pragma endscop
}
