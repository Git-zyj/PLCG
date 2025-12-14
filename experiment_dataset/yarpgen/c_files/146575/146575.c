/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = -var_7;
        arr_2 [i_0] [16] = var_0;
        var_14 = (min(var_14, var_0));
        arr_3 [0] [i_0] = (((((((min(var_8, var_6))) && (arr_1 [i_0] [i_0])))) & (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 = (((((var_2 != (arr_1 [i_1] [i_1]))))) != ((~(arr_1 [i_1] [i_1]))));
        arr_8 [i_1] |= ((var_0 ^ ((((((arr_0 [i_1] [i_1]) + 2147483647)) << (var_10 - 61))))));
        var_16 = 25378;
    }
    var_17 = (var_1 % var_7);
    var_18 = (!var_6);
    var_19 = (min(((var_5 >= (!var_10))), (!var_9)));
    #pragma endscop
}
