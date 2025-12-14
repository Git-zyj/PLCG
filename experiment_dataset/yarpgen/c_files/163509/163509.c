/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 += ((var_4 > (min((~13145), ((max(50, 205)))))));
                var_19 = ((max(4023577524, 216)));
            }
        }
    }
    #pragma endscop
}
