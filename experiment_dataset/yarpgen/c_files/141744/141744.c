/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_12 += ((!(134386851463139564 == var_10)));
                var_13 = var_1;
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
