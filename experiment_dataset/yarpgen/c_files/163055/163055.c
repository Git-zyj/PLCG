/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = 255;
                var_16 = var_9;
                var_17 = (min(((+(((arr_2 [i_0]) % var_8)))), ((((arr_4 [i_1]) > var_1)))));
            }
        }
    }
    #pragma endscop
}
