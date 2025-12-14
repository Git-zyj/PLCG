/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_1;
        var_11 = (max(var_11, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = var_9;
        arr_7 [i_1] = (((1 / var_3) < 65535));
    }
    var_12 = var_1;
    var_13 = (var_2 ^ -159915854);
    #pragma endscop
}
