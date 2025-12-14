/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_11 ^= (max((arr_1 [i_0 - 2]), (arr_0 [i_0 - 2])));
        var_12 = (max((arr_1 [i_0]), (((arr_0 [i_0]) ? (max((arr_1 [i_0]), var_0)) : (((arr_1 [i_0]) ? var_0 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = (max((-32767 - 1), 36301));
        var_14 = (max(((max((arr_2 [i_1]), (arr_2 [i_1])))), (max(((var_8 ? (arr_2 [i_1]) : (arr_2 [i_1]))), (arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_15 = (max(2305843009213693952, 36301));
        var_16 = (max(var_16, (arr_5 [1])));
    }
    var_17 = var_0;
    var_18 -= (max((max(var_2, (var_9 / var_7))), var_4));
    var_19 = (max(var_10, ((var_0 ? ((max(var_7, var_0))) : (max(var_0, var_9))))));
    #pragma endscop
}
