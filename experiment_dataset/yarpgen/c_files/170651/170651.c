/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((((min(var_11, var_9)))) != (((var_0 && var_10) ? (((0 ? 8 : 30869))) : (max(var_1, 2632267781))))));
    var_17 *= ((((((var_12 && var_11) && (((var_14 ? 2146004960 : var_9)))))) != ((((min(var_13, var_4)) <= var_2)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = var_11;
        var_19 = (((165 % var_13) ? (var_14 / var_13) : 2632267779));
        var_20 = (arr_0 [1] [i_0 + 1]);
    }
    #pragma endscop
}
