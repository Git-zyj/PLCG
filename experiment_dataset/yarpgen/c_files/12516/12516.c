/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? ((max((var_0 <= var_10), var_12))) : var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_4;
        var_15 = ((((var_0 ? var_10 : 0)) != (((arr_0 [i_0]) ? 268435455 : 2147352576))));
        arr_3 [12] &= (arr_0 [i_0]);
        arr_4 [16] |= 0;
        var_16 = ((var_11 / (((arr_1 [19]) ? (arr_0 [18]) : 18311))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = 0;
        var_17 = ((47231 | (arr_0 [i_1])));
        arr_8 [i_1] = ((~(arr_5 [i_1])));
        arr_9 [i_1] [i_1] = var_3;
    }
    var_18 = var_3;
    #pragma endscop
}
