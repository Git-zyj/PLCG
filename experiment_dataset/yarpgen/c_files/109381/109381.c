/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 2684575700;
    var_12 = (min(var_12, (((((((6668975474205671649 * 576460752303423488) ? (!var_2) : (!0)))) ? var_7 : var_1)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_13 = ((8950071453470847566 ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0 - 1]))) : (arr_2 [i_0])));
        var_14 *= ((~(max(3523694400412640598, (arr_2 [12])))));
    }
    #pragma endscop
}
