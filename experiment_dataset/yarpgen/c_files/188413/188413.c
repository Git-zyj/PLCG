/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max((max(var_7, var_14)), var_2)), var_19));
    var_21 = var_10;
    var_22 = var_13;
    var_23 = (min(var_23, var_13));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_24 = (((1 ^ var_18) & ((~(arr_1 [i_0])))));
        var_25 ^= (((((var_10 + var_14) + (arr_1 [i_0]))) + (arr_1 [i_0])));
    }
    #pragma endscop
}
