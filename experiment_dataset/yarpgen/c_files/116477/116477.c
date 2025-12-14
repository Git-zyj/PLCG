/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = ((((max(((max(1, var_1))), -var_15))) ? var_7 : (max(var_7, var_4))));
    var_19 = (1 / 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((-(((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_21 = ((((max(var_11, (var_8 <= var_15)))) >> (((var_14 >= (((arr_1 [13]) ? 31744 : var_15)))))));
        arr_3 [i_0] = ((((max((arr_2 [i_0]), ((max((arr_0 [i_0]), (arr_2 [3]))))))) ? (arr_0 [i_0]) : ((1 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    #pragma endscop
}
