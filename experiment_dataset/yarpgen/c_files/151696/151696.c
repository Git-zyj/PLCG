/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-6827320889593113984 || 42323) ? (max(var_5, (var_8 ^ var_9))) : (((((var_1 ? var_1 : var_3))) ? ((var_9 ? var_7 : var_7)) : var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(((max(var_5, var_0))), ((var_11 ? (arr_0 [i_0]) : (-32767 - 1)))));
                var_14 ^= (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_15 = (max(var_15, var_0));
    var_16 = (max(var_2, var_3));
    #pragma endscop
}
