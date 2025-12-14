/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_11 ^ (((var_3 ? 1 : (min(var_7, var_5)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = ((var_18 * ((((!(576579073 & 1)))))));
        var_22 = ((121 ? ((((arr_2 [i_0]) + var_18))) : (((arr_2 [i_0]) + var_10))));
        arr_3 [i_0] [i_0] &= (((arr_1 [i_0]) ? (max((arr_1 [i_0]), var_12)) : (((((!(arr_0 [6]))) ? (max(var_5, var_16)) : -1)))));
    }
    #pragma endscop
}
