/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 = ((((~(min(var_2, var_4))))) ? ((~(var_4 ^ var_1))) : (((((max(818640044, 41504))) ? (var_7 + var_0) : ((var_7 ? var_8 : var_7))))));
        var_11 = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = ((var_4 ? ((((var_0 ? var_3 : var_1)) ^ ((var_0 ? var_1 : var_9)))) : ((((((var_5 ? var_1 : var_7))) ? (min(var_2, var_4)) : var_6)))));
                    var_13 = var_5;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_14 += (((((var_9 ? var_3 : var_9))) ? (max(var_6, var_8)) : ((var_2 ? var_0 : var_0))));
        var_15 = (((((-((var_8 ? var_7 : var_6))))) ? ((((((var_1 ? var_5 : var_7))) ? var_3 : ((var_0 ? var_4 : var_4))))) : (((((var_2 ? var_0 : var_7))) ? (~var_2) : ((var_3 ? var_9 : var_1))))));
    }
    var_16 = ((((max(((var_7 ? var_3 : var_1)), (671133404 - var_6)))) ? ((var_2 ? (var_7 + var_7) : ((var_1 ? var_5 : var_6)))) : -var_5));
    #pragma endscop
}
