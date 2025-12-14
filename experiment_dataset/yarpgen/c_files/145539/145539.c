/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_0 ? (((4294967281 ? var_3 : var_0))) : ((var_0 ? var_8 : var_2)))) >= var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (((arr_2 [i_0]) || var_7));
        arr_3 [i_0] = (((((~(arr_2 [i_0])))) ? (arr_2 [i_0]) : (arr_2 [i_0])));
    }
    var_13 = ((var_10 - (((((max(var_5, var_0))) | (!var_6))))));
    var_14 = (max(var_14, var_4));
    #pragma endscop
}
