/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-2147483647 - 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((~(arr_1 [i_0])));
        var_18 -= (5050833144266430309 | 17910851432152983781);
        arr_2 [8] &= ((137 != (arr_1 [0])));
    }
    #pragma endscop
}
