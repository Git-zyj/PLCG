/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_10 - (var_13 + 3458764513820540928)))), -3091235106));
    var_16 -= var_7;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 - 3] [i_0]) * (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (-(arr_0 [i_0] [i_0 + 1]));
        var_17 = ((!(arr_1 [i_0 - 3] [i_0 + 2])));
    }
    var_18 -= (((((min(992, var_5)))) / var_12));
    #pragma endscop
}
