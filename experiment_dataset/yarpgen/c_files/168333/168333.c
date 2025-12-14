/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((119 ? -98 : 29363)))));
                arr_6 [3] [i_0] [8] = (min(((min((arr_5 [i_0] [i_0]), var_9))), ((var_5 >> (((arr_4 [5] [i_0] [i_0]) - 33837))))));
            }
        }
    }
    var_13 = var_9;

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_14 = min(((max(-29364, (!var_3)))), ((var_11 ? (arr_8 [1] [i_2]) : (arr_7 [5] [12]))));
        var_15 = var_9;
        arr_10 [i_2] [i_2] = (min((((arr_9 [2]) ? (arr_8 [i_2] [i_2]) : (arr_7 [i_2] [10]))), (((((arr_8 [i_2] [i_2]) > -29364)) ? 29159 : (var_0 > -12)))));
        var_16 = (min(var_16, ((max(((-var_10 ? ((-29152 ? var_4 : (arr_7 [i_2] [i_2]))) : ((((arr_8 [2] [i_2]) | var_6))))), (((-2 ? -1484629466 : (arr_9 [i_2])))))))));
    }
    #pragma endscop
}
