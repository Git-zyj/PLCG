/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(!var_9)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0 + 1] = var_14;
        var_16 = (max(var_16, (((var_11 >> ((((~(arr_2 [i_0 + 1]))) + 12309)))))));
        var_17 = (arr_0 [1]);
        var_18 -= ((((var_8 ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1]))) % ((min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_19 &= var_5;
        var_20 = (min(var_20, (arr_6 [i_1 + 3])));
    }
    var_21 = (min((((181 * -7110) ? (78 == 75) : -7)), var_5));
    #pragma endscop
}
