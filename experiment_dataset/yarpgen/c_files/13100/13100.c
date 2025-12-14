/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (52969 | 41402);
        var_18 = (((-(max((arr_0 [i_0]), var_5)))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1]);
        arr_7 [i_1] [i_1] = ((140737454800896 ? -4294967293 : 14));
        var_19 = (max(var_19, 1569431135));
    }
    var_20 = (min((max((var_14 - 252), var_8)), (~-5481478914838153472)));
    var_21 = (max(var_21, var_7));
    #pragma endscop
}
