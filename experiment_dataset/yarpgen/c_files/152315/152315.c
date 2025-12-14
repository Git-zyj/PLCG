/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((-((1899715866 ? (arr_2 [i_0]) : ((0 ? 4095 : var_6))))));
        var_17 = (arr_2 [i_0]);
        var_18 &= ((-(((((var_7 ? var_8 : (arr_3 [i_0] [2])))) ? var_0 : (((arr_1 [i_0]) ? (arr_2 [i_0]) : 1))))));
    }
    var_19 = (min((max(((var_0 ? var_12 : var_16)), ((var_16 ? var_12 : var_10)))), var_3));
    var_20 = var_9;
    #pragma endscop
}
