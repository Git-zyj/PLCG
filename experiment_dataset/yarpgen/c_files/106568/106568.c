/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = 2642982424329701606;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = min((((min(1, (arr_0 [i_0]))) ? (min(-78375656, var_9)) : ((var_3 ? (arr_1 [i_0]) : var_1)))), ((((((1 || (arr_1 [i_0])))) & 0))));
        var_16 = (min((arr_0 [i_0]), ((2765062668 / (arr_0 [i_0])))));
    }
    var_17 *= ((var_8 ? (max(9617719022796470998, (((1529904628 ? 70 : 160))))) : (min(((var_1 ? var_12 : var_10)), ((min(var_5, var_6)))))));
    #pragma endscop
}
