/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(((max(var_4, var_9))), (var_5 / var_4))), ((~(~var_1)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((!((((arr_0 [i_0]) ? (var_3 || var_5) : (min(var_7, -2687)))))));
        arr_3 [i_0] = var_14;
    }
    #pragma endscop
}
