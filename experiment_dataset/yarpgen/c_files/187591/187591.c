/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? var_2 : (arr_0 [i_0])));
    }
    var_18 = ((-21 ? (((8412597005950676562 && var_11) ? ((var_13 ? var_5 : var_8)) : var_16)) : var_1));
    var_19 ^= var_16;
    var_20 = ((1 ? (((min((max(84, var_11)), ((max(var_15, 1))))))) : (((((3939231056 ? var_17 : var_3))) & (max(var_13, var_2))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                var_21 = (arr_5 [i_1]);
                arr_11 [i_2] [11] = (arr_6 [i_1] [12]);
                arr_12 [i_1] [i_2] [i_1] = ((((((min((arr_9 [0]), 524256)) <= ((((arr_6 [3] [i_1]) ? -71 : (arr_4 [i_1]))))))) > ((max((arr_8 [i_1] [i_1] [0]), (arr_8 [i_1] [i_2] [i_2]))))));
                arr_13 [6] [i_2] = (arr_8 [14] [i_2] [14]);
            }
        }
    }
    #pragma endscop
}
