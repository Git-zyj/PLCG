/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = 1;
                arr_4 [i_0] = ((max((((2916803186 ? 1 : var_6)), (max(1378164110, 6113))))));
            }
        }
    }
    var_14 = max(-2492425883174601790, var_0);
    var_15 = (max((var_8 - var_3), var_9));
    var_16 = ((var_9 & (!var_11)));
    #pragma endscop
}
