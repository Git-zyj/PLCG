/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min(((max(31305, -31304))), (max(2220185892, 26)))), -31293));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1] = -31306;
                var_11 = 229;
            }
        }
    }
    #pragma endscop
}
