/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_5 ? var_4 : var_2)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = 32523;
                var_13 = 994256317;
            }
        }
    }
    #pragma endscop
}
