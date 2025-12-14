/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((~1551210444) ? var_4 : (max(1551210445, ((1 ? 1551210443 : 1551210444)))))))));
    var_21 = var_9;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_22 ^= (((max((((0 ? 34 : 0))), (4294967295 | 0))) | (((((max(var_11, var_15))) ? (min((arr_0 [i_0] [i_0]), var_16)) : (max(-1551210445, (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((~(max(6746590923689888662, (arr_1 [i_0 - 1])))));
        var_23 ^= var_17;
        var_24 = arr_2 [i_0 + 1];
    }
    #pragma endscop
}
