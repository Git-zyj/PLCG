/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!50);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((53871 ? (arr_3 [i_0 + 1]) : 19215))) ? (((((max((arr_0 [i_0]), var_2))) >= (!1)))) : var_6)))));
        var_14 = (((arr_0 [i_0 + 3]) && (((arr_0 [i_0 + 2]) && (arr_0 [i_0 + 3])))));
        arr_4 [11] [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_7 [1] &= (arr_5 [i_1 + 1] [i_1 + 1]);
        var_15 = (max((max((((var_1 ? (arr_1 [i_1]) : 632211693))), -322615201336966087)), ((1 ? -19216 : 322615201336966087))));
        arr_8 [i_1] = ((-(((arr_2 [i_1 + 1]) ? 9165 : ((min((arr_6 [4]), 115)))))));
    }
    var_16 = (max((var_0 || var_9), (var_3 || 57340)));
    #pragma endscop
}
