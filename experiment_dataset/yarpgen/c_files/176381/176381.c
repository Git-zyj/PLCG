/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = -32763;
        var_20 = ((-((-439741315 ? (arr_0 [i_0] [i_0]) : 32767))));
        var_21 += (((arr_1 [i_0 + 1]) - (arr_0 [i_0] [i_0 - 1])));
        arr_4 [i_0] [i_0] = (arr_0 [i_0 + 1] [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 = ((!(((((arr_0 [i_1] [17]) ? (arr_1 [i_1]) : (arr_5 [i_1] [i_1]))) <= (arr_2 [i_1])))));
        var_23 = (min(3, -9223372036854775807));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] = ((!(!-19365)));
        var_24 = (min(var_24, (arr_7 [i_2])));
    }
    var_25 = (max(var_25, (((((min(31288, var_6))) >= (((var_0 << var_8) << (((min(58495, var_1)) - 58474)))))))));
    #pragma endscop
}
