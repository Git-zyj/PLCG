/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_10 = (arr_2 [1] [i_0]);
        arr_3 [i_0] = ((var_1 % (arr_0 [i_0])));
    }
    var_11 = ((var_4 ? var_0 : 2147221504));
    var_12 = ((-(((var_8 + 9223372036854775807) >> (var_1 - 133)))));
    #pragma endscop
}
