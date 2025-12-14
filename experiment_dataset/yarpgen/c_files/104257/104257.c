/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(((603839984291935831 ? 603839984291935831 : 603839984291935831)), (min(((min(var_4, -7834))), var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = 2147483647;
                var_18 = (-1 ^ -7507);
            }
        }
    }
    var_19 += var_0;
    #pragma endscop
}
