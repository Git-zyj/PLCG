/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-2015106138759832110 > 67);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((-((-34 ? 33 : 3048488948)))))));
                var_20 = -35;
            }
        }
    }
    var_21 &= var_6;
    #pragma endscop
}
