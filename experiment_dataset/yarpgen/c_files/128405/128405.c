/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 *= (!0);
                var_14 -= ((0 ? ((127 ? 3301111708 : 23)) : ((((~993855587) ? ((993855603 ? 2147483647 : 993855619)) : 87)))));
            }
        }
    }
    #pragma endscop
}
