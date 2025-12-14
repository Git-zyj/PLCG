/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = 16884772283549580688;
                    var_14 = (max(var_14, 1561971790159970928));
                }
            }
        }
    }
    var_15 &= var_9;
    var_16 += var_4;
    #pragma endscop
}
