/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (--1);
                var_12 += ((((((arr_0 [i_1 - 3] [i_0 - 1]) ? var_8 : var_0))) & (max(var_4, 1))));
                var_13 = var_1;
            }
        }
    }
    var_14 = (min(((max(var_0, var_10))), var_0));
    var_15 = ((~(~var_8)));
    #pragma endscop
}
