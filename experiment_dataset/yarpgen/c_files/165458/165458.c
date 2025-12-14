/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_14;
                var_16 = ((174574311 / (((min(var_3, (arr_0 [i_0])))))));
                var_17 *= 127;
            }
        }
    }
    #pragma endscop
}
