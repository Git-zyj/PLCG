/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = var_2;
        var_20 -= arr_0 [i_0] [i_0];
    }
    var_21 = (max(var_21, ((((((0 ? (min(18446744073709551615, 53483)) : 18446744073709551615))) ? ((-((var_8 ? var_3 : var_4)))) : (((max(var_17, var_2)))))))));
    #pragma endscop
}
