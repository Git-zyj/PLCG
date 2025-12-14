/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [4] = (((min(var_4, (max(22168, (arr_1 [i_0])))))) >> (((((arr_1 [i_0]) ? 7936 : 13228)) - 7935)));
        var_10 = (min(var_10, (var_4 & -22169)));
        var_11 = (max(var_11, ((((~-27589) == 32764)))));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_12 = (((arr_4 [16]) == (arr_4 [i_1 - 2])));
        arr_5 [i_1] [i_1 - 4] = arr_4 [i_1];
        var_13 -= var_2;
        var_14 = ((var_0 + (arr_3 [i_1 - 4])));
    }
    var_15 = (min(var_15, (min(var_7, -628773628))));
    var_16 = 628773610;
    #pragma endscop
}
