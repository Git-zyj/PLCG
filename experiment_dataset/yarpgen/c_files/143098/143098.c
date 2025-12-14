/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_7);
    var_17 = var_2;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0 - 1]) ? ((var_10 ? (arr_0 [i_0 - 1]) : var_1)) : ((var_12 + (arr_0 [i_0 - 1])))));
        var_19 ^= ((((!(arr_1 [0]))) ? (((arr_1 [14]) ? 2147483633 : (arr_1 [10]))) : ((var_9 ? (arr_1 [0]) : -168))));
        var_20 = (arr_1 [i_0]);
        var_21 += (arr_1 [10]);
    }
    #pragma endscop
}
