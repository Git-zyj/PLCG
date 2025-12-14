/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = var_9;
                var_16 = var_4;
            }
        }
    }
    var_17 = (max(var_17, (((var_10 + ((min(var_8, var_4))))))));
    var_18 = -var_1;
    var_19 = (((((var_13 + var_14) - var_5)) - ((((var_8 + var_7) ? (var_2 - var_10) : var_3)))));
    #pragma endscop
}
