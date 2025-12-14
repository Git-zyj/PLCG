/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 |= ((~((((arr_0 [8]) || ((((arr_1 [i_0 + 1]) ^ (arr_1 [9])))))))));
        var_15 = (-(((max((arr_1 [i_0]), (arr_0 [i_0]))) + (((arr_1 [i_0]) & (arr_0 [i_0]))))));
    }
    var_16 = (~-80297958);
    var_17 = (max(var_11, (min((var_13 || var_2), (var_3 ^ var_9)))));
    #pragma endscop
}
