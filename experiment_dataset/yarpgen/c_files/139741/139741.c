/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [0] = (((((arr_2 [i_0 + 1]) & (arr_5 [i_0 + 1] [i_0 + 1]))) << (((((arr_2 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_3 [i_0 + 1]))) - 15752451105816142967))));
                var_19 |= var_3;
            }
        }
    }
    #pragma endscop
}
