/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, (-9223372036854775807 - 1)));
        arr_2 [i_0 - 2] [i_0] = -9223372036854775800;
        var_17 -= (-9223372036854775807 - 1);
    }
    var_18 = (max(var_18, -82));
    var_19 = (-9223372036854775807 - 1);
    var_20 &= (((((!(-9223372036854775807 - 1)))) | (((((max(1125510245, 52))) + (~var_12))))));
    #pragma endscop
}
