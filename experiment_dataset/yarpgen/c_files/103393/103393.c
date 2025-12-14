/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (var_2 >= (((var_16 >= ((var_14 ? 9927237725255864152 : 8519506348453687464))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((arr_2 [6] [i_0]) ? (arr_1 [i_0]) : var_5));
        arr_4 [i_0] &= (((arr_1 [i_0]) == (arr_1 [i_0])));
        var_19 = ((((((arr_2 [i_0] [i_0]) ? 9927237725255864133 : 14851259573697621754))) ? 3398867833830942331 : (arr_1 [i_0])));
        var_20 = (arr_1 [6]);
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        arr_8 [i_1] = ((var_8 ? ((1 ? (min(-22, (arr_3 [i_1 - 4] [i_1 - 4]))) : (arr_1 [i_1 - 1]))) : ((var_10 ? (arr_2 [i_1 - 2] [i_1]) : (arr_2 [i_1 - 2] [i_1 - 2])))));
        var_21 = -8292405820119252091;
    }
    #pragma endscop
}
