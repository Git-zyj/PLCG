/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, ((((arr_2 [i_0]) ? (((((~var_8) + 2147483647)) >> (((var_3 % 45978) - 7064)))) : -1)))));
        var_12 -= ((!14105) >= (((((((arr_1 [8] [8]) && 19558)))) * (var_0 / var_2))));
        var_13 = (min(var_13, 19546));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_14 = ((((max((var_3 ^ var_6), 3260))) ? ((12509020743551866133 ? var_2 : (arr_3 [i_1] [i_1]))) : 3943519202));
        var_15 += 19565;
        var_16 = ((((max((arr_2 [i_1 + 2]), 1))) ? 57407 : ((45994 ? -20 : 127))));
        arr_6 [i_1] = 0;
        var_17 = (((arr_2 [i_1]) | ((((-3244 >= 166) > (arr_1 [i_1 + 2] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_18 &= 6303805572341721734;
        var_19 = (var_7 - -115);
    }
    var_20 = (max(var_20, (((((max((var_8 > 173960484), (var_9 < 1)))) >= (((((43820 ? 63272 : -3252))) ? ((-3266 ? -7 : 39497)) : 90)))))));
    #pragma endscop
}
