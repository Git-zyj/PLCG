/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= -94184014;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((9223372036854775807 >> (-56 + 119)));
                arr_4 [i_1] = var_16;
            }
        }
    }
    #pragma endscop
}
