/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = var_4;
        arr_2 [i_0] = var_4;
        arr_3 [i_0] = 49630;
        var_12 = (min(var_12, ((((((15921 ? 17001 : 29635))) ? (((1 < 9223372036854775798) ? var_6 : (~2549941024))) : (((-((15934 ? var_7 : var_2))))))))));
    }
    #pragma endscop
}
