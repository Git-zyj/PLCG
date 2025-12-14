/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 = (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 - 1] = (((((arr_2 [i_1 - 1]) + 9223372036854775807)) >> (695002166 - 695002141)));
        var_17 = ((-363774373 / (arr_0 [i_1 + 1] [i_1 - 1])));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2 + 1] = ((min(((var_12 ? var_2 : var_1)), (((-(arr_4 [i_2])))))));
        var_18 = (max((((max((arr_7 [i_2]), (arr_0 [i_2] [i_2]))))), ((4294967288 * (arr_0 [i_2 - 1] [i_2 + 1])))));
        arr_9 [i_2] = (max(var_1, 3955679793));
        var_19 = (arr_6 [i_2 - 1] [i_2 - 1]);
    }
    var_20 = (max(var_12, (var_1 != -var_7)));
    #pragma endscop
}
