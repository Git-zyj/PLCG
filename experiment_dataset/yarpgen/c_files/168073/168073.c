/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        arr_3 [i_0] = (min(var_8, (arr_0 [i_0])));
        var_20 = (max(var_20, (arr_1 [1])));
        arr_4 [i_0] = (max(var_15, (((var_6 * var_15) * (((arr_1 [i_0]) / var_18))))));
    }
    var_21 = var_5;
    #pragma endscop
}
