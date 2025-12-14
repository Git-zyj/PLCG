/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (arr_6 [i_0] [i_1 + 3] [i_1]);
                var_16 = 12;
                arr_7 [i_1] [i_1 + 2] = (max(var_1, 12));
            }
        }
    }
    var_17 = 1;
    var_18 = ((((min(((-127 ? 109 : 127)), -1481994344016368672))) ? var_14 : 57699));
    #pragma endscop
}
