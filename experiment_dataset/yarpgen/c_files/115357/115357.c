/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (min(var_0, (~19214)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [12] = (min(-5615342735458317325, ((min((!14372), (min(var_10, -5615342735458317325)))))));
                    var_18 = (min(var_18, (((~(min(5615342735458317328, var_9)))))));
                }
            }
        }
        arr_10 [i_0] &= var_10;
    }
    var_19 = var_0;
    var_20 = min(-14372, (min(0, var_5)));
    #pragma endscop
}
