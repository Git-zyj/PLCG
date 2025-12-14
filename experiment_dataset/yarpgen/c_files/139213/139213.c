/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0 - 1];
        var_14 = (min((arr_1 [i_0 - 1]), ((1523406603 ? (arr_1 [i_0]) : var_7))));
        var_15 = ((((-(!203))) * ((7380 ? 203 : (1644530732 * 1)))));
    }
    var_16 = var_11;
    var_17 = var_4;
    var_18 = var_13;
    var_19 = 52;
    #pragma endscop
}
