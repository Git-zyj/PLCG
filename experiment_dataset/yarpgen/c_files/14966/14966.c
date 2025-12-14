/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = 21147;
                var_18 = ((var_1 > ((32760 ? (arr_4 [i_1 + 2]) : var_9))));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
