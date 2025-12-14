/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max((((((var_7 ? var_0 : 7083387969017915237))) ? -var_3 : ((var_5 ? var_7 : var_6)))), ((min(610162537, 1))));
    var_11 = (((!1) <= (var_1 * var_2)));
    var_12 = (((!1) > var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = (((~var_9) < (((30560 >> (var_5 - 219))))));
        arr_4 [i_0] [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 = 1;
        var_15 *= ((var_6 & ((((-31252 != (arr_2 [4] [i_1])))))));
        arr_8 [8] = (min(((var_7 & (arr_2 [i_1] [i_1]))), (arr_6 [2] [1])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_16 = ((1 & ((min(var_5, (arr_12 [i_2] [i_2]))))));
        var_17 = (arr_12 [i_2] [2]);
        var_18 *= ((+(((arr_0 [i_2] [i_2]) ^ (arr_0 [i_2] [i_2])))));
        arr_13 [i_2] = ((var_6 ? ((max(1, 1))) : ((~(arr_7 [i_2])))));
        var_19 = (max(var_6, 45400));
    }
    #pragma endscop
}
