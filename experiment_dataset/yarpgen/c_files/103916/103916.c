/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = 243;
        var_20 = 3539735850;
        var_21 = (max(var_21, ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = var_4;
        var_22 = (-21384 || -95);
    }
    var_23 = ((-95 ? (var_1 < var_7) : var_9));
    var_24 = var_7;
    var_25 = (min(var_25, ((((!var_16) + (max(var_8, (((var_3 >> (var_8 - 500982526)))))))))));
    #pragma endscop
}
