/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1844421990094395652;
    var_18 = ((var_9 ? ((((!((max(var_16, 16252928))))))) : ((~(min(4278714368, var_15))))));
    var_19 = (((1851554638 ? ((var_6 ? var_8 : var_11)) : var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1 + 4] [i_0] [i_2 + 1]);
                    arr_9 [i_1] [i_1 - 1] [i_2 + 1] = (max(var_11, ((~((var_7 ? 16252928 : var_12))))));
                }
            }
        }
    }
    #pragma endscop
}
