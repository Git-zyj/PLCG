/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_9 - 11635507761016363112) | (var_8 / var_3)));
    var_11 = ((-(((((min(var_5, 1)))) ^ ((2605943344 ? var_9 : 4225461203))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (max((arr_1 [i_1]), (((min((arr_1 [i_0]), (arr_1 [i_1]))) ? (((arr_1 [i_0]) + (arr_1 [i_0]))) : ((((arr_3 [i_1] [i_1]) > 21908)))))));
                var_13 = (max(var_13, (arr_3 [i_0] [i_0 - 2])));
                var_14 = (max(var_14, (((((15817 ? 25366 : 2457833137))) ? ((min(0, (((arr_1 [1]) ? (arr_2 [i_1] [i_0]) : (arr_1 [i_1])))))) : 998834701))));
                var_15 |= ((((((arr_3 [i_0] [i_1]) | (arr_3 [i_0] [5]))) >> (arr_3 [i_1] [i_0 + 1]))));
            }
        }
    }
    var_16 |= ((var_9 & (~var_9)));
    var_17 += -var_5;
    #pragma endscop
}
