/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = ((((max(0, 1))) & 1));
        var_16 = (arr_0 [i_0]);
    }
    var_17 = var_11;
    var_18 = var_12;
    var_19 = (!((min(var_1, (var_2 ^ 458752)))));
    var_20 = var_7;
    #pragma endscop
}
