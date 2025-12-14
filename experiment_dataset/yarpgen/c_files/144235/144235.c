/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = ((16376 ? 32 : (arr_0 [i_0])));
        arr_5 [i_0] = (arr_1 [i_0]);
        var_13 = (((!-16377) ? ((var_1 ? 1 : (arr_2 [10]))) : ((1 ? (arr_2 [i_0]) : 1))));
    }
    var_14 = (max(var_12, var_11));
    var_15 = ((((((var_9 ? 12819286690873434718 : var_8)))) ? (!var_3) : ((var_11 ? (!var_2) : ((62 ? 1595550857789081445 : 1))))));
    #pragma endscop
}
