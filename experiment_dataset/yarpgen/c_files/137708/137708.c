/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((~(~var_1))))));
                var_12 = (min((min((((arr_0 [1]) * (arr_5 [i_1]))), (arr_0 [i_1 + 1]))), (((arr_3 [i_1 - 1]) ? (((arr_2 [i_0]) ? (arr_4 [i_1] [2]) : (arr_2 [i_0]))) : ((-(arr_6 [9] [i_1 + 1])))))));
                var_13 = (((((-(arr_3 [i_1 + 1])))) ? -1947143472 : ((((max((arr_0 [i_0]), 1098084515)))))));
            }
        }
    }
    var_14 ^= ((-((-var_7 ? (var_8 || var_5) : 127))));
    var_15 ^= (((max((min(var_10, var_0)), ((min(var_6, var_5))))) - -var_0));
    var_16 = (min((((((var_9 ? var_8 : var_9))) ? ((var_10 ? var_7 : 124)) : (var_8 * var_8))), (min(((var_1 ? var_7 : -126)), ((var_9 ? var_8 : var_2))))));
    #pragma endscop
}
