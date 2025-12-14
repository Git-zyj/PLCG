/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-57 * var_12);
    var_17 = (((-(max(var_1, -57)))));
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = 89;
        var_20 *= ((((!(arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
