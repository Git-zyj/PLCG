/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_17 -= ((((arr_1 [i_0 + 1]) & var_2)));
        var_18 = ((((arr_0 [i_0] [i_0 - 2]) + 9223372036854775807)) >> (-5559330502345640090 + 5559330502345640102));
        var_19 = (min(var_19, (((arr_1 [i_0 + 1]) / ((6437 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1] = (arr_0 [i_1] [i_1]);
        var_20 = (min(var_20, var_15));
    }
    var_21 = min(5559330502345640073, 8318);
    #pragma endscop
}
