/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max(((max(-1831507369, ((1831507357 ? var_5 : var_0))))), var_10));
    var_16 = (((min(32762, 13)) < var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((+(((-985150023 + 2147483647) >> (var_14 - 23871)))));
                var_18 = (max(var_18, ((max((((min(1831507368, 803883080609091708)))), 7546)))));
            }
        }
    }
    #pragma endscop
}
