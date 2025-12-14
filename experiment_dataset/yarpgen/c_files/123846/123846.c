/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 ? var_1 : (max(1, ((1 ? 248293245 : 4))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = ((-6278486163686937850 ? (arr_1 [i_0] [i_0]) : (min((arr_1 [13] [i_0]), (max(3228724930, 16456))))));
        var_16 = ((((4 ? (arr_0 [i_0]) : var_1)) ^ (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 -= var_2;
        var_18 -= (((((((var_9 + 2147483647) >> (var_5 - 1877354313)))) ? (((1066242333 >> (-64 + 90)))) : (((arr_1 [i_1] [i_1]) ? var_11 : -7454776950390868974)))));
        var_19 = (max((((arr_1 [i_1] [i_1 + 1]) ^ 3228724960)), var_12));
        var_20 = (max(((68 ? (13 && var_4) : var_8)), ((min((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1]))))));
        arr_4 [10] = (max(644042388, ((1 ? 51 : -7450841987611013731))));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_21 = ((var_4 << ((((var_12 ? (arr_1 [i_2] [i_2 - 2]) : (arr_1 [i_2] [i_2 + 1]))) + 21))));
        var_22 = ((((arr_3 [i_2 - 1] [i_2 + 1]) ? (((var_13 ? 112 : var_4))) : (max(var_1, -21140)))));
    }
    var_23 = var_2;
    #pragma endscop
}
