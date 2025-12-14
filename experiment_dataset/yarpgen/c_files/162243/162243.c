/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((22942 ? ((var_3 & (2763613162 - var_13))) : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((((arr_2 [24] [i_0] [16]) ? 54140 : var_18)) + var_1)) - var_4));
                arr_5 [i_1] [i_0] [i_0] = (~139);
                arr_6 [i_1] [i_0] [20] = (min(var_6, var_18));
            }
        }
    }
    var_21 ^= ((((((min(8779, var_19))) ? var_8 : (var_15 >= var_15))) & ((var_7 / (min(var_12, 1169268218))))));
    #pragma endscop
}
