/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_0;
    var_17 = ((23 ? var_7 : (((var_15 + 1705247518419074102) % ((min(var_10, 65513)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 |= ((var_10 ? var_11 : var_12));
        arr_2 [i_0] [i_0] = var_2;
    }
    var_19 *= ((~((var_11 ? ((0 ? 4429692499449004232 : 159)) : (((max(23, 65520))))))));
    #pragma endscop
}
