/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-var_2 > var_4) ? var_1 : (var_3 <= 11165213127293446126)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_0 [i_0]), (arr_2 [i_0])));
        arr_4 [i_0] [3] = ((max(var_0, (arr_2 [i_0]))));
    }

    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] [0] = ((((max(-20607, 245931463))) ? (-23013 & 245931475) : (((var_9 ? (arr_0 [6]) : var_10)))));
        var_14 = (min((arr_5 [i_1]), var_11));
        var_15 = (max(var_15, var_2));
    }
    #pragma endscop
}
