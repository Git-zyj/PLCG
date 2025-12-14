/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max((var_13 && var_2), (max(1, -0)))))));
    var_19 = (min(((max(60, (-10774 < 9)))), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = var_6;
                var_21 ^= (max((max(-31928, 10761)), 199));
            }
        }
    }
    #pragma endscop
}
