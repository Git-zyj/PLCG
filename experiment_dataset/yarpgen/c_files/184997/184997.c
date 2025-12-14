/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [1] &= (((max((((arr_0 [i_0] [16]) ? (arr_0 [i_0] [10]) : (arr_1 [i_0] [i_0]))), -var_11))) ? ((max((arr_0 [i_0] [16]), var_4))) : 35932);
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? ((-1 ? ((8868342432056580421 / (arr_0 [i_0] [i_0]))) : ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_3))))) : ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_15 ^= ((((((~(arr_0 [i_0] [1]))) + (arr_1 [i_0] [i_0]))) ^ (((arr_1 [i_0] [i_0]) / 63488))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 |= ((var_14 * ((((((arr_4 [i_1] [i_1]) ? var_3 : var_3))) ? (!63488) : (63488 * var_6)))));
        arr_7 [i_1] = max((arr_5 [i_1]), (arr_6 [i_1]));
        var_17 &= (((var_10 ? (!63488) : (var_14 != var_2))));
        var_18 = (arr_5 [i_1]);
    }
    var_19 = ((var_14 << (!89)));
    #pragma endscop
}
