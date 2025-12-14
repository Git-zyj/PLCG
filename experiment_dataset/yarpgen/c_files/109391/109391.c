/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (-9223372036854775807 - 1);
                arr_5 [6] [i_1] [i_1] = 9223372036854775790;
                arr_6 [i_1] = 9223372036854775804;
            }
        }
    }
    var_20 = -7980850448908475274;
    var_21 = 9223372036854775807;
    #pragma endscop
}
