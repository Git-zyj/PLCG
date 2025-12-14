/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 |= (!var_10);
        arr_4 [i_0] = ((((((!(arr_3 [i_0])))) << (var_1 - 11065))));
    }
    var_13 &= (((((max(-1945341500, 0)) | var_7)) >> (var_3 - 32490)));
    var_14 = (min(65535, var_10));
    var_15 = var_8;
    var_16 = var_4;
    #pragma endscop
}
