/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 67108863;
        var_19 = (8589672448 ? (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) : (min((arr_1 [i_0]), 1023)));
        arr_4 [i_0] |= var_14;
        var_20 = ((((((arr_1 [i_0]) ? -7609743998809107837 : 1))) || 70368744177663));
    }
    var_21 = -9223372036854775807;
    var_22 = (min(var_8, ((min(var_18, var_17)))));
    var_23 = (min((var_4 - var_4), ((((min(4460, 0)))))));
    #pragma endscop
}
