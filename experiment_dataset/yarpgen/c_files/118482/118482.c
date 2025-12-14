/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 ^= 1023;
        var_19 = (min(var_19, (~0)));
        var_20 = ((0 | (arr_0 [i_0])));
        arr_4 [i_0] = (((var_7 ^ 3339671570) | var_2));
    }
    var_21 = var_16;
    var_22 = (min(var_0, -1674));
    #pragma endscop
}
