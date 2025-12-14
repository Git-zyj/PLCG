/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((~(max((arr_3 [i_1]), var_0))))));
                var_15 -= arr_3 [i_0];
            }
        }
    }
    var_16 = ((2208788088 ? 2712601594 : ((1694641671 ? 2712601608 : 3911279367))));
    #pragma endscop
}
