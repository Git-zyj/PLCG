/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 += (((arr_0 [13]) ? (max(((min((arr_1 [i_0]), (arr_0 [i_0])))), (16554510645868261940 & var_2))) : ((((arr_0 [i_0]) >> (((arr_0 [i_0]) - 43)))))));
        arr_2 [i_0] = (((((!(((224 ? 16554510645868261940 : -2018501161)))))) >> (((!12) * (((var_1 + 2147483647) >> (((arr_0 [i_0]) - 54))))))));
        var_14 += min(-var_1, (((arr_1 [i_0]) & (arr_1 [i_0]))));
        var_15 = (max(var_15, (((((min((arr_1 [i_0]), 233))) ? (!-var_8) : -var_11)))));
    }
    var_16 = (((((var_1 ? var_6 : (!var_7)))) ? var_12 : var_12));
    #pragma endscop
}
