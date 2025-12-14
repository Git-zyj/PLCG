/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((-59 - 113), (((max(var_4, var_2))))));
    var_21 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = 59;
                var_23 = (!var_6);
            }
        }
    }
    #pragma endscop
}
