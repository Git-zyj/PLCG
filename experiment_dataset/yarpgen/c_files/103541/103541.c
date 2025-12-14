/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((min(var_0, ((var_5 ? var_12 : var_10)))))));
    var_16 = ((((max(var_4, -var_10))) ? var_12 : var_4));
    var_17 = (((max((((var_1 ? var_10 : var_14))), ((var_8 << (var_5 + 7112446647003000829))))) >> (var_0 - 159)));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [0] = var_8;
        arr_3 [i_0] [i_0] &= var_1;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = max(((((var_3 ? (arr_5 [8] [8]) : var_7)) ^ ((((var_10 && (arr_5 [i_1] [i_1]))))))), ((((((arr_4 [i_1]) ? var_10 : var_3)) << ((((0 ? var_1 : var_2)) + 31383))))));
        arr_6 [i_1] [i_1] = ((((((arr_4 [i_1]) | var_1))) > (min((min(var_3, var_7)), (arr_4 [i_1])))));
    }
    var_19 -= var_1;
    #pragma endscop
}
