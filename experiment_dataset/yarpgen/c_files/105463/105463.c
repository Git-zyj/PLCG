/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max((9223372036854775807 & 1), var_5)), ((max(((min(var_6, var_0))), -0)))));
    var_11 = var_7;
    var_12 = ((min((min(var_3, 127)), (!var_7))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) - (-32767 - 1)));
        var_13 = (min(var_13, ((127 <= (max((arr_0 [i_0]), (((arr_0 [i_0]) - var_8))))))));
    }
    #pragma endscop
}
