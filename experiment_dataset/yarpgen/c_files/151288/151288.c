/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1 << (var_12 && -65535)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [0] = ((96 % (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]));
        var_16 = ((var_9 ? -7072095084833649704 : 1426662727));
        arr_5 [i_0] = var_4;
    }
    var_17 = var_2;
    var_18 = (min(var_11, var_5));
    #pragma endscop
}
