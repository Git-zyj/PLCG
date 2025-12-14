/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = ((((((arr_0 [i_0]) && 86))) * (arr_0 [i_0])));
        var_14 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1] = (((arr_3 [i_1 - 1] [i_1 - 1]) ? (((((min(56, 257003737))) || (arr_2 [i_1])))) : (4611686018427387904 > -27)));
        var_15 = (((((((arr_3 [i_1] [i_1]) - (arr_2 [i_1]))) | (((((arr_3 [i_1 + 3] [4]) || (arr_3 [i_1] [i_1 + 3]))))))) >= ((max(240, -1)))));
        arr_5 [i_1] = ((((((arr_2 [i_1]) > -8955590703792989539)))) == (arr_2 [i_1]));
    }
    var_16 = (max(1609063686, 65535));
    var_17 = -7662984914314508445;
    var_18 = var_9;
    #pragma endscop
}
