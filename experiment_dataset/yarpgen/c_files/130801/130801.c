/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!var_10) ? var_9 : var_3));
    var_19 += var_11;
    var_20 = (max(((var_0 - (min(var_17, var_7)))), var_14));
    var_21 = ((((min((((var_16 ? var_13 : var_1))), (max(var_7, var_16))))) ? var_14 : var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (min(var_22, (((var_10 ? (((((0 ? 96 : 6156074146526679438))) ? 841717939 : 54058)) : var_6)))));
        var_23 = (max(var_23, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
    }
    #pragma endscop
}
