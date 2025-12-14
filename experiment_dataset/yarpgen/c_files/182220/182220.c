/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [2] [i_0] = (!((((~(arr_1 [i_0] [i_0]))))));
        var_20 = (min(var_20, (((-(((!1170572670) | -198701666)))))));
    }
    var_21 = (!198701665);
    var_22 = (min((-198701666 == 2147483647), var_2));
    var_23 = ((74 ? ((max(198701673, var_16))) : ((max(10157, 10157)))));
    #pragma endscop
}
