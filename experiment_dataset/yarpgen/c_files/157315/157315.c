/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (~(0 || 1048064));
                arr_8 [i_0] [i_1 - 1] = var_7;
                arr_9 [i_1] [11] = 4293919235;
            }
        }
    }
    var_20 = (max(var_20, var_0));
    #pragma endscop
}
