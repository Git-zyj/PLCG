/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((var_4 << (((arr_1 [i_0]) + 2150545220087927974))))) + (arr_1 [i_0]))))));
        arr_2 [i_0] = (((((-48 ? 119 : 5280157777619073210))) ? 26151 : ((141 ? 3609303654 : 114))));
        arr_3 [i_0] [i_0] = (((((131 >> (131 - 128)))) ? (((((((arr_1 [i_0]) ? -13988 : (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((var_13 ? (arr_1 [i_0]) : var_18))))) : (max(var_0, (((145 ? 128 : var_11)))))));
    }
    var_21 |= ((var_14 - ((4288597467707015761 ? 150 : -111))));
    #pragma endscop
}
