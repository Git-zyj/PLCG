/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [6] [i_1] = 23948;
                arr_7 [i_0] [1] [i_1] = 2470;
            }
        }
    }
    var_12 = (min(1, (~var_1)));
    #pragma endscop
}
