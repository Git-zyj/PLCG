/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_9 ? var_11 : var_9))) ? (((min(1, var_10)))) : 862491762620367046))) ? (((max(var_4, var_11)) & var_1)) : (((((var_9 ? var_5 : 1))) ? ((var_0 ? var_5 : var_5)) : ((var_4 ? var_12 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] = ((~((~(arr_9 [0] [i_0 + 1] [i_0 + 1])))));
                    var_16 -= (~6668);
                }
            }
        }
    }
    var_17 = 2080374784;
    var_18 = (((((min(var_5, var_8)))) | (min((max(-24, 1)), var_9))));
    var_19 -= var_11;
    #pragma endscop
}
