/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 3] [i_1] = 4294967295;
                var_15 = (~var_11);
                arr_5 [i_0 - 1] |= 3553977834652642274;
                var_16 = -1694175542978354908;
            }
        }
    }
    var_17 = 12928270649215518033;
    #pragma endscop
}
