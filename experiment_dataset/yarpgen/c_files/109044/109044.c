/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 += var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = 1051585113;
        var_20 *= (max(-18, (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = var_5;
        arr_6 [i_1] [i_1] = (min(var_0, (arr_4 [4])));
        var_21 = ((((((48143 || var_16) ? (arr_1 [i_1]) : 32))) - (~430451663548403503)));
    }
    #pragma endscop
}
