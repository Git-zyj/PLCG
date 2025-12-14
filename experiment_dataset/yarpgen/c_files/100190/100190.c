/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((max(var_4, var_7))) ? ((var_8 ? var_8 : var_8)) : var_1)), (((((var_7 ? var_1 : var_3)) >= (!var_3))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((((-(((!(arr_2 [i_0])))))) & (var_0 == var_5)));
        arr_4 [6] [12] = (arr_3 [i_0] [i_0]);
    }
    var_12 = max(var_2, (var_1 <= var_1));
    #pragma endscop
}
