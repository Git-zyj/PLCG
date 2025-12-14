/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (!var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((min(var_17, (min(-459782403, 0))))) - var_5))));
                    var_20 ^= (!var_9);
                }
            }
        }
    }
    #pragma endscop
}
