/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 -= ((var_4 ? ((((max(var_12, (arr_0 [i_0]))) >= var_2))) : ((0 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0])))));
        arr_2 [i_0] = ((8207210614060889815 ? (min((((arr_1 [i_0]) ? var_1 : var_0)), var_12)) : -119));
    }
    var_14 = var_12;

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_15 = -var_6;
        arr_6 [i_1] = (((((max((arr_5 [i_1]), (arr_5 [i_1]))))) - 15));
        arr_7 [i_1] |= (((((min(var_6, -36))) ? ((((arr_5 [i_1]) && var_10))) : (-25 != -109))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_15 [i_2 + 2] [i_3] = (min((min(var_9, (arr_13 [i_2 - 1]))), ((var_1 ? (arr_13 [i_2 + 2]) : var_6))));
                var_16 = ((((((arr_9 [i_2 + 3]) != (arr_13 [i_2 - 1])))) >> (((min(((var_0 ? var_2 : (arr_11 [i_2]))), (arr_8 [i_2]))) + 85))));
                var_17 = ((+(min((arr_14 [i_2] [i_2] [i_2 - 1]), var_12))));
            }
        }
    }
    #pragma endscop
}
