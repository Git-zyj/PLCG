/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_8;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = -23402;
                arr_7 [i_1] [i_1 - 1] [i_0] = 15;
                arr_8 [9] [12] [i_0] = 1038610808;
            }
        }
    }
    #pragma endscop
}
