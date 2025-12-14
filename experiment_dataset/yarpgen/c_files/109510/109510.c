/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 ^= ((((((((-(arr_0 [1] [i_0 + 2])))) ? 6553843206362607748 : 1625280093))) ? (-9223372036854775807 - 1) : (((arr_1 [i_0 + 3]) ? (arr_0 [5] [5]) : (arr_1 [i_0 + 1])))));
        var_20 = ((((max((((arr_0 [i_0 + 3] [i_0]) ? (arr_0 [i_0] [1]) : 6)), ((min(3, (arr_1 [i_0]))))))) ? -32767 : (((((var_14 ? (arr_0 [i_0 + 3] [i_0 + 4]) : (arr_0 [9] [i_0])))) ? ((((arr_0 [i_0] [i_0]) * -693786523))) : var_17))));
    }
    var_21 &= (-var_11 < var_8);
    #pragma endscop
}
