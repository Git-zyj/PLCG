/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = min(-31273, -31273);
                arr_6 [i_1] = 31268;
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
