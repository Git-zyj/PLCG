/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(((max(var_15, var_8)), (min(var_14, var_1))))));
    var_17 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (max((arr_0 [i_0] [i_0]), ((((17051285715899137805 && 0) ? (var_1 && var_6) : var_0)))));
        arr_2 [i_0] = ((((min(-var_13, (((!(arr_1 [i_0]))))))) ? var_11 : var_1));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_19 = 17051285715899137805;
        var_20 = var_11;
    }
    #pragma endscop
}
