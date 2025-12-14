/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(105, 201));
    var_19 = 105;
    var_20 ^= var_14;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = 1;
        arr_2 [i_0] = (min((max(16624, var_4)), -30));
        var_22 = (min(((var_4 ? 1 : var_14)), (max(134213632, 21826))));
        var_23 += 576460752303423360;
    }
    #pragma endscop
}
