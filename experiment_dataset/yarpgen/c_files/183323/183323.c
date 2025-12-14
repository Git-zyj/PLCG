/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_18 -= (((((((arr_2 [i_0]) + 9223372036854775807)) >> (((min(var_5, var_6)) + 345029673))))) ? (arr_0 [i_0] [i_0]) : (((min(1, 1)))));
        var_19 = (min(var_19, ((((((~(arr_1 [i_0] [i_0])))) ? 1 : (((1 ^ var_10) ? ((min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [1])))) : (arr_1 [i_0] [i_0]))))))));
        var_20 = (((var_10 != (((arr_0 [i_0] [i_0]) ? var_11 : 1)))) ? 1 : (-321785656 + 32));
        arr_3 [i_0] = ((!(((-(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 1)))))));
        arr_4 [i_0] = ((20 ? 45 : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_21 = (((arr_2 [14]) & (arr_5 [i_1] [i_1])));
        var_22 = ((-878194829 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])));
        var_23 = ((18893 ? (arr_5 [i_1] [i_1]) : var_5));
        var_24 = var_14;
    }
    var_25 = var_9;
    var_26 = var_8;
    #pragma endscop
}
