/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((1097364144128 ? (arr_3 [4] [i_0] [i_0]) : (((((arr_2 [i_1 - 1] [i_1] [i_0]) ? (arr_2 [i_1] [i_0] [i_0]) : 0))))))));
                var_15 = (((((((var_9 ? var_3 : var_7)) - ((var_11 + (arr_1 [1] [1])))))) ? (--1097364144134) : var_9));
            }
        }
    }
    var_16 = ((((((2047 + var_5) - var_11))) ? ((var_2 ? var_3 : var_4)) : -var_10));
    #pragma endscop
}
