/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 -= ((255 - (arr_1 [i_0 - 1])));
        var_17 = (((-(arr_1 [i_0 + 1]))));
        var_18 -= (((((arr_1 [i_0 + 1]) * ((~(arr_1 [5]))))) | ((min((!var_3), ((120 || (arr_1 [i_0]))))))));
        var_19 = ((((max((!120), 2591713548519185493))) ? -1 : (max(442151108, -8672143593725312875))));
        arr_2 [i_0 + 1] = (max((arr_0 [i_0] [i_0 - 1]), (((((arr_1 [0]) - var_11))))));
    }
    var_20 = 5;
    var_21 = ((-79 ? (min((((var_15 >> (var_0 + 119)))), ((var_3 ? var_14 : var_9)))) : var_2));
    var_22 = (max(var_22, var_3));
    #pragma endscop
}
