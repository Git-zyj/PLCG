/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_4;
    var_11 &= (var_6 && (-27 && var_2));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!((((arr_1 [i_0] [i_0]) % -118))));
        var_12 = ((max(-111, (var_0 % 101))));
        var_13 -= ((max((arr_0 [0]), (arr_1 [i_0] [i_0]))) % ((var_4 ? (max(118, (arr_0 [2]))) : 117)));
    }
    var_14 = -111;
    #pragma endscop
}
