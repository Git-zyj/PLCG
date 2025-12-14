/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 -= (max(51, 440472237));
        var_11 = (arr_1 [i_0]);
    }
    var_12 = (min(var_9, (var_6 & var_3)));
    var_13 = (var_7 ? var_4 : (min(18446744073709551611, var_4)));
    #pragma endscop
}
