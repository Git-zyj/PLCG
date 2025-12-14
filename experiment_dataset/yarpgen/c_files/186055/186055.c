/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((min(((var_13 & ((1 ? (arr_1 [i_0]) : (arr_1 [i_0]))))), ((1 ? (arr_1 [i_0]) : var_5)))))));
                arr_4 [i_0] [i_1] = (((max(1, ((var_15 ? 1 : 1))))) ? (min(98, ((1 + (arr_2 [i_0] [i_1] [i_1]))))) : ((min((arr_0 [i_0]), (arr_0 [i_0])))));
                var_18 = (max(var_18, ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : 1)))))));
                var_19 = (((((var_1 ? (arr_1 [i_0]) : 1)))) ? (min(var_14, ((var_3 ? 0 : (arr_2 [i_0] [i_0] [i_1]))))) : (((((2793242623019444012 / (arr_3 [i_1])))) ? -1 : ((1 ? 1 : 1)))));
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
