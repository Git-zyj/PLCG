/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((((max(var_1, 4398038122496))) ? (((min((arr_1 [i_0]), -162064878)) * (58 * var_1))) : (((-(arr_1 [i_0]))))));
        var_14 = (((((-127 - 1) != 324677647)) ? (max(((min(-81, -4398038122497))), (max(5044412518807354869, var_3)))) : (max((max(1498753477419696771, -1749917693)), ((((arr_0 [16]) ? var_7 : 6949991358472922251)))))));
    }
    var_15 = (max(var_15, ((max((max((4398038122500 * 131071), (var_5 >= var_7))), (min(-1168394173, (min(var_0, -6517114589408668655)))))))));
    #pragma endscop
}
