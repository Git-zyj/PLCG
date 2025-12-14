/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(200, var_5));
    var_12 = (~var_10);
    var_13 *= var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = -var_7;
        var_15 = (((arr_2 [i_0] [i_0]) | 200));
        arr_3 [i_0] [i_0] = 68;
    }
    var_16 = var_7;
    #pragma endscop
}
