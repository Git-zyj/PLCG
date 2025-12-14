/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 ? (-var_11 + var_7) : ((-18495 ? -18495 : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 -= (max(var_6, (-18495 ^ var_5)));
                arr_4 [i_1] [i_0] = ((-((((18494 ? 25219 : var_13))))));
            }
        }
    }
    #pragma endscop
}
