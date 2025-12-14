/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((var_3 ? (var_4 ^ var_8) : var_11))) ? var_0 : (((!(42160 / var_6)))))))));
    var_16 = var_7;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0 - 1]);
        var_17 += ((46437 ? (arr_3 [i_0 + 2] [i_0 + 1]) : 88));
        var_18 = (max(var_18, (((-((min((arr_1 [i_0 + 2]), (min((arr_1 [i_0]), (arr_1 [i_0])))))))))));
    }
    var_19 = (var_13 ^ var_3);
    #pragma endscop
}
