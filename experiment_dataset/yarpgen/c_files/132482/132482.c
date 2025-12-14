/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_3 [i_0 + 1]) ? var_4 : var_10)))));
        var_17 = (((arr_0 [i_0 + 2]) ? (((max(227, 11055)))) : (((((var_12 ? 28 : (arr_3 [i_0 - 3])))) | (max((arr_0 [i_0 + 1]), var_3))))));
        var_18 = ((-(((!(((var_9 << (var_12 - 2722472899)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [1] = var_7;
        var_19 = var_14;
        arr_8 [i_1] [i_1] = ((-29 + (19 / 41)));
        var_20 = (arr_6 [i_1] [1]);
        var_21 = (max(var_21, (var_14 < var_12)));
    }
    var_22 = (var_11 & var_4);
    #pragma endscop
}
