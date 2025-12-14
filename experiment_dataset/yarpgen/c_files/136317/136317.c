/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [12] &= (arr_3 [i_1] [1] [i_0]);
                var_15 = ((-1684311100264040857 ? 3809750620534343200 : 1));
            }
        }
    }
    #pragma endscop
}
