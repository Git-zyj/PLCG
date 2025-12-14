/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_10 | var_6) >= ((((127 >= 1) + var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((var_6 ? (((((((arr_0 [0]) ? var_7 : (arr_1 [i_0])))) && -3970004958902870255))) : (arr_0 [i_1])));
                var_14 ^= ((((min(var_9, ((max((arr_0 [i_0]), -113)))))) && ((((((arr_5 [i_0] [i_0] [i_1]) ? (arr_5 [i_1] [i_0] [2]) : var_11))) || (1 || 0)))));
                arr_6 [i_0] = (max(((max((arr_2 [i_1] [i_0]), var_7))), (max((arr_4 [i_1]), (arr_4 [i_0])))));
                var_15 = (min(var_15, (min(0, 1))));
            }
        }
    }
    var_16 = (((((var_7 ? var_0 : -98)) < ((var_0 ? var_1 : var_9)))));
    var_17 = (var_9 && var_6);
    var_18 = var_6;
    #pragma endscop
}
