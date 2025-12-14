/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((max((min(166, var_3)), (((682154152 ? -104 : var_14))))) <= (((var_14 ? (((-114 + 2147483647) << (((-104 + 119) - 15)))) : ((min(1, 125))))))));
    var_21 = (((((var_8 ? var_18 : (var_10 / 4266560435666999328)))) ? var_13 : var_17));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [12] &= (arr_0 [i_0] [i_0]);
        var_22 = (~177);
        arr_3 [i_0] &= (arr_1 [i_0] [i_0]);
        var_23 *= (-127 - 1);
        arr_4 [i_0] &= ((209 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    var_24 = 1;
    #pragma endscop
}
