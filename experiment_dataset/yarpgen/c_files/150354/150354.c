/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_15 ? ((((min(var_3, -706342936)) == ((var_10 ? var_15 : var_1))))) : (((max(var_3, 40)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (min(var_14, (arr_2 [i_0] [i_0])));
        var_18 = (((((arr_0 [i_0]) / (arr_2 [i_0] [i_0])))) ? (((((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))) ? -706342936 : 40))) : (max(((var_14 ? -3500099492419201809 : var_3)), (arr_0 [i_0]))));
        arr_3 [10] [i_0] = ((((-70 ? 40 : -1)) - (-41 <= var_8)));
        var_19 = (min(var_19, 127));
    }
    #pragma endscop
}
