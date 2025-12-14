/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_17));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max(((var_15 ? (arr_0 [i_0 - 3] [i_1]) : (arr_3 [i_0 - 3] [1] [i_1 + 1]))), (arr_0 [i_0 - 3] [i_1])));
                arr_4 [8] &= ((((max((max((arr_2 [12]), (arr_0 [i_1 + 1] [i_0]))), (((44345 / (arr_1 [i_0 - 2]))))))) ? (((((var_13 ? var_1 : (arr_3 [i_1] [11] [11])))) ? (var_12 < var_10) : (((arr_0 [i_1] [i_0]) ? var_10 : (arr_2 [0]))))) : 124));
            }
        }
    }
    #pragma endscop
}
