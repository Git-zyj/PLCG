/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [6] = (arr_1 [i_0]);
        var_20 = ((!((max((1 && 4206435660), ((var_7 << (var_13 - 7482))))))));
        arr_4 [i_0 - 1] = max(var_14, (min((((arr_1 [i_0 + 1]) ? (arr_1 [i_0]) : var_17)), -var_9)));
    }
    var_21 = var_8;
    var_22 = var_5;
    var_23 &= -14325;
    var_24 = (9830 && 11);
    #pragma endscop
}
