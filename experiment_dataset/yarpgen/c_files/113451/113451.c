/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -42;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [16] [16] [16] = (arr_6 [i_0 - 2] [5]);
                var_13 = (arr_4 [i_0] [1] [15]);
            }
        }
    }
    #pragma endscop
}
