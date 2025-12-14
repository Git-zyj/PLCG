/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 ? 67 : var_1));
    var_15 = ((max(11145191729113212398, (17126294377072615602 <= 0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = 1;
        arr_3 [i_0] &= (((17126294377072615584 <= var_8) ? ((var_7 ? -73 : 17126294377072615602)) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [1]) : (arr_0 [i_0])))));
        var_17 = var_1;
        arr_4 [i_0] = ((17126294377072615590 ? 102 : 1));
        var_18 = (max(var_18, ((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
    }
    #pragma endscop
}
