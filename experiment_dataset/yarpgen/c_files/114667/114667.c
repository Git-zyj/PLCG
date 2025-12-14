/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_19 = ((-(arr_1 [i_0])));
    }
    var_20 = ((((var_1 | var_2) ? ((max(var_15, var_11))) : -62373)));
    var_21 = (((var_0 && var_5) == (((var_0 < var_16) - var_7))));
    var_22 = (min(var_22, 5862244448311000317));
    var_23 = (((((((var_3 << (var_5 - 6265))) < ((var_15 ? 59991 : var_10))))) >= (5557 - var_11)));
    #pragma endscop
}
