/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((((min(var_9, (-9223372036854775807 - 1)))) ? (0 ^ var_1) : var_0))) ? var_9 : (((~var_16) & ((max(var_16, var_6))))))))));
    var_19 = (min(var_19, (((((var_6 ? var_5 : var_13)))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_20 &= ((var_9 ? ((max(var_5, ((16320 ? 1311397000 : 15210))))) : (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 + 4]) : (arr_0 [i_0 - 1])))));
        var_21 = 2147483647;
        var_22 = (((arr_1 [i_0 + 3] [i_0 - 2]) ? ((max(var_4, (max((arr_1 [i_0] [13]), -2147483630))))) : (arr_0 [i_0])));
        arr_2 [18] = ((((max(var_2, (arr_1 [i_0 + 2] [i_0 + 1])))) ? (arr_0 [i_0 + 2]) : (((max((arr_1 [i_0 + 4] [i_0 + 2]), (arr_1 [i_0 + 4] [i_0 + 3])))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_23 = ((((-2 ? (arr_5 [i_1]) : var_17)) * (arr_1 [16] [i_1 + 3])));
        var_24 &= ((((var_9 ? 0 : var_17)) + (arr_3 [i_1 + 3])));
    }
    var_25 &= 33292288;
    #pragma endscop
}
