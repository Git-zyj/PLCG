/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_12 | (((var_9 ? var_4 : var_6))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = ((min(((-2225981407651429862 ? -1 : 1)), var_4)) ^ (((((max(var_7, 35184372088831)) < var_11)))));
        var_16 = (-((((((arr_0 [24]) ? (arr_1 [i_0 + 1] [i_0]) : var_7))) ? ((~(arr_0 [2]))) : (max(var_5, var_10)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [8] &= (((min(var_8, 5582821885026128188))) ? -2 : ((var_2 ? 1 : (min(8796093022207, -7199437510126863526)))));
        var_17 = arr_1 [i_1] [i_1];
        var_18 = (min(var_18, (((arr_2 [i_1]) ? (min(-1653057755780807632, (arr_4 [8]))) : var_0))));
        var_19 += -1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_20 = (max(var_20, ((((arr_2 [i_1]) | (arr_2 [i_1]))))));
                    var_21 = ((min(var_1, (arr_10 [i_1] [i_1] [i_3]))) / ((~(arr_2 [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
