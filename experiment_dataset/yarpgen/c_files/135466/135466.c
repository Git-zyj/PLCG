/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_2;
                var_10 = (min(var_10, (max((min((arr_2 [i_0]), (arr_2 [i_0]))), (max(304592807, (arr_2 [i_0])))))));
            }
        }
    }
    var_11 = -304592807;
    #pragma endscop
}
