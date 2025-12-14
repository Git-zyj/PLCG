/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 9273459;
    var_18 = (max((((max(9273459, -458832617)) < (max(var_5, var_15)))), (((9273459 != var_16) != (min(var_10, var_13))))));
    var_19 = 1073741824;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, (((arr_1 [i_0]) ? var_16 : -377440431))));
        arr_2 [i_0] [i_0] = 127;
    }
    #pragma endscop
}
