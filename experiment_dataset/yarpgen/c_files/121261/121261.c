/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0 - 1] = 3462899656;
                arr_7 [i_0] [i_0] = (max(4294967286, (-127 - 1)));
                var_13 = (max(var_13, var_0));
                var_14 ^= (max(-25696, var_3));
            }
        }
    }
    var_15 = ((min(var_6, var_5)));
    var_16 = var_11;
    #pragma endscop
}
