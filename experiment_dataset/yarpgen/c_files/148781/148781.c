/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 &= max((((0 == (~0)))), (min((1 * 0), (max(-1, -24111)))));
                arr_4 [i_1] [i_0] = ((min(-1, (arr_1 [i_1] [i_0]))));
                var_17 = (min(var_17, (~0)));
            }
        }
    }
    var_18 = ((0 ? (min((max(0, var_2)), var_9)) : var_7));
    #pragma endscop
}
