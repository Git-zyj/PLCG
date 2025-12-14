/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [17] = ((-(((((((arr_1 [i_1]) > var_2)))) % -4106914787072324551))));
                arr_7 [i_0] = (-8840 + -8830);
            }
        }
    }
    var_17 = var_6;
    var_18 = var_1;
    var_19 = var_16;
    var_20 = var_16;
    #pragma endscop
}
