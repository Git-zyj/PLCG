/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] [4] = var_5;
                arr_7 [10] [i_1 - 1] [i_0 + 2] &= var_0;
                var_11 *= (!((max((max(var_6, var_1)), (var_0 + var_3)))));
                var_12 += ((~(0 + var_4)));
            }
        }
    }
    var_13 = ((((~(~var_9))) ^ var_2));
    var_14 = ((var_9 - (((2905 < (~var_0))))));
    #pragma endscop
}
