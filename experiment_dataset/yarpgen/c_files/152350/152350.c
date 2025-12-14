/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((var_10 ? ((min(2017612633061982208, var_3))) : ((var_7 ? var_5 : 9991961244413989266)))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0 - 3] = (((((9991961244413989271 ? 61 : 832299856))) ^ ((((min(64, var_8))) & ((9991961244413989271 ? 9991961244413989263 : 197))))));
        var_13 = (min((1 < 22860), (((max(var_2, 192)) < (var_4 <= var_8)))));
    }
    #pragma endscop
}
