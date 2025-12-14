/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 ^= (max(((max(1, 21))), (min(0, 1))));
                var_15 = (min(-7742807806545012292, 252));
            }
        }
    }
    var_16 = (max(65284, -6690676145114611647));
    #pragma endscop
}
