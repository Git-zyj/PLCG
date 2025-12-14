/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = ((0 <= (var_14 / var_1)));
                    var_21 = 8313700145328527994;
                    var_22 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
