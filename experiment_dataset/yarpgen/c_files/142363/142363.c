/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 = (((((13 ? var_18 : (~var_4)))) ? ((~(arr_1 [i_0] [i_0]))) : var_4));
        var_20 = ((4611686018427387903 ? var_7 : -1744469013814097465));
        arr_2 [0] = -9223372036854775797;
    }
    var_21 = var_5;
    var_22 = var_16;
    #pragma endscop
}
