/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = -var_1;
        arr_4 [i_0] = (min(((1 - (1 <= 0))), ((((arr_1 [i_0]) < (arr_2 [i_0]))))));
    }
    var_12 = (min(var_12, (((var_5 & 7) - (min(-var_0, var_2))))));
    var_13 = var_8;
    #pragma endscop
}
