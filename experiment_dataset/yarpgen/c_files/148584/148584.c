/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_6 % var_12) ? ((((-32767 - 1) ? 1546730386 : (-32767 - 1)))) : ((var_4 ? var_11 : var_4)))));
    var_15 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_1 [i_0] [i_0]) <= (arr_1 [10] [i_0]))))));
        arr_2 [i_0] = ((~(((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [14])))));
        var_17 = (min(var_17, (((!(((~(arr_1 [2] [i_0])))))))));
    }
    var_18 = ((-((~((var_11 ? var_8 : var_6))))));
    #pragma endscop
}
