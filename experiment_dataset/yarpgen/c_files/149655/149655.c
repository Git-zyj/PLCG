/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 = 21026;
        var_17 = ((~((65530 ? 1 : 65531))));
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 *= var_7;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (max(var_20, (arr_0 [i_1] [14])));
        var_21 = var_6;
    }
    var_22 *= (((((var_13 < ((var_8 >> (38 - 34)))))) / 202));
    var_23 = var_1;
    #pragma endscop
}
