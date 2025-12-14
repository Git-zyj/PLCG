/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((((((var_4 - var_3) ? (var_11 && var_1) : (var_2 == var_2)))) || ((((((var_1 ? var_6 : var_8))) * (var_15 * var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (((((((arr_4 [i_1] [i_1] [i_1]) >> 0)) ^ (65535 && 11))) & (((((arr_3 [i_0 - 2] [i_0 - 2] [i_1]) != (-127 - 1))) ? ((var_5 ? var_11 : 10)) : (10 | 10)))));
                var_18 += (((((44527 * -21880) * (-21885 * 0))) >> (((((121 & var_6) ^ (((arr_2 [i_0 - 2]) >> (var_12 + 1011931419))))) - 11))));
            }
        }
    }
    #pragma endscop
}
