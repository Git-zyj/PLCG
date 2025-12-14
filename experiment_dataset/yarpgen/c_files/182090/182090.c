/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 -= var_8;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = (((((arr_0 [i_0]) / (arr_1 [i_0 - 1] [i_0 - 1]))) / (4294967293 / 2768554856)));
        arr_2 [i_0] [i_0 - 1] = (((max(var_5, 10))) || (arr_0 [i_0]));
    }
    #pragma endscop
}
