/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((max(var_6, var_2)))));
    var_14 = ((!(((max(var_12, var_3)) <= ((var_0 ? var_6 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((14554350338450827813 ? 3892393735258723803 : (((-(arr_0 [i_0] [i_1 - 1]))))))));
                arr_5 [i_1] [i_0 - 2] [i_0 - 2] = (arr_1 [i_0]);
            }
        }
    }
    var_16 = ((var_12 << ((((((var_1 ? var_8 : var_5)) & (var_7 & var_9))) - 2756345382333542392))));
    var_17 -= -var_1;
    #pragma endscop
}
