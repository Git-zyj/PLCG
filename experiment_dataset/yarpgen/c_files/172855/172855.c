/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_16 / (((-3811193086112153691 ? var_13 : var_7))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_0 [i_0]) ? (max(32767, -1)) : (((arr_1 [i_0]) ? 1383558393 : 8)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 += ((var_15 ? ((min(27313, var_16))) : ((((((((arr_4 [i_0] [i_0]) << (var_3 - 1891249383)))) && 21))))));
                    arr_11 [i_0] |= var_13;
                }
            }
        }
        var_19 = (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [6]) : var_8));
    }
    var_20 = (max((!38198), (max((((var_3 ? var_9 : var_5))), var_14))));
    var_21 = var_13;
    #pragma endscop
}
