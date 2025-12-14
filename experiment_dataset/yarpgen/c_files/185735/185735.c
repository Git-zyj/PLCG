/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = 6166021110524050459;
        var_14 += ((((((arr_2 [4] [4]) ? 0 : -55))) ? (arr_2 [2] [2]) : (var_12 - 55)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = ((!(56 + 65535)));
        arr_6 [i_1] [i_1] = (!-985354672036263348);
        var_16 ^= (112 <= 64);
        var_17 = var_8;
    }
    var_18 += var_11;
    var_19 = (min((var_1 + 54), var_6));
    #pragma endscop
}
