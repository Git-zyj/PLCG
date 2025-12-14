/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 *= var_0;
        var_14 = (((((var_6 ? ((var_2 ? (-2147483647 - 1) : var_3)) : 65535))) ? 379361361 : (arr_0 [i_0] [i_0])));
    }
    var_15 = (((~61) > 35183298347008));
    var_16 = -1073737728;
    var_17 = 108;
    #pragma endscop
}
