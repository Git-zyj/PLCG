/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_0;
    var_11 = var_5;
    var_12 = (1876651435480483107 + 1);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 *= ((((var_9 / (arr_1 [16] [14]))) / -var_1));
        var_14 = (min(var_14, (var_7 <= 9223372036854775807)));
    }
    #pragma endscop
}
