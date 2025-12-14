/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_2 == var_2);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) * (((!(((var_5 ? (arr_1 [i_0]) : (arr_2 [i_0])))))))));
        arr_4 [1] [i_0] = var_5;
        var_11 = ((((min(var_2, 28952))) ? (((var_4 << (((arr_2 [i_0 - 1]) - 55626))))) : ((var_8 ? (var_6 * 2017394233) : var_7))));
        var_12 = -var_6;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = ((max(var_6, 150)));
        arr_8 [i_1] = var_4;
        var_14 = ((8135014863373468405 && (((arr_7 [i_1]) || var_9))));
    }
    #pragma endscop
}
