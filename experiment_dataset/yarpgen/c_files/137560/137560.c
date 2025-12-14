/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_3, 17857379561247138087));
    var_12 = (min(23, (min(((1276648776 ? 127 : 16352831123414879767)), (var_4 / var_5)))));
    var_13 -= (min((min((((var_10 ? var_3 : var_5))), (min(0, 140720308486144)))), (((264175074 ? 2147483647 : 4294967295)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 += var_10;
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
