/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_4));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 ^= (arr_3 [i_0]);
        var_15 = (var_9 + var_3);
    }
    var_16 = (max(var_16, (((var_12 == (((12 / var_12) ? (max(65533, var_2)) : var_4)))))));
    var_17 = (max(65535, 12));
    var_18 ^= min(0, var_5);
    #pragma endscop
}
