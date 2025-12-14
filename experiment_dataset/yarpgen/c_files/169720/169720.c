/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_1;
    var_21 = ((19948 ? 1341747464533043932 : 244));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 &= (((((((0 ? 0 : 68)) & (arr_0 [i_0] [i_0])))) ? ((min((arr_0 [i_0] [i_0]), var_2))) : (((((max(var_18, (arr_1 [i_0])))) || (arr_1 [i_0]))))));
        arr_2 [i_0] = ((((min(((min(var_18, var_1))), ((var_12 / (arr_0 [i_0] [i_0])))))) ? (((((arr_0 [i_0] [i_0]) ? 2233785415175766016 : (arr_0 [i_0] [i_0]))) | var_4)) : (((var_12 / (max((arr_1 [i_0]), 245)))))));
        var_23 += ((1 ? 128 : (min(((var_8 ? 55029 : (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0])))));
        var_24 *= (min((min((max(255, 3)), (max((arr_0 [i_0] [0]), (arr_0 [i_0] [i_0]))))), (arr_0 [i_0] [i_0])));
    }
    var_25 = (var_10 / 8796076244992);
    #pragma endscop
}
