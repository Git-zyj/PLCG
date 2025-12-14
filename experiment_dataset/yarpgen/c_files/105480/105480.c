/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= 14618;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = 1;
                var_20 = (min(var_20, 14618));
                var_21 = (min(var_21, (var_4 != -14618)));
            }
        }
    }
    #pragma endscop
}
