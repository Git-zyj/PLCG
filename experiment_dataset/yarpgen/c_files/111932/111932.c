/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = var_5;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = var_3;
            arr_7 [i_0] = 18446744073709551615;
            arr_8 [i_0] = 235;
            arr_9 [i_0] [i_0] [i_0] = (min(((206 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))), ((max(((var_13 ? var_3 : 0)), (var_5 ^ var_10))))));
        }
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            var_18 = var_4;
            arr_14 [i_0] [i_2] = (((~-var_0) ? ((((-46 ? 1011247347 : 307830744851866145)) % var_14)) : ((max((var_4 * var_8), var_10)))));
        }
        arr_15 [i_0] = ((-(min((var_5 - var_0), (var_4 + var_3)))));
        arr_16 [i_0] [i_0] = (min((2631537966550381593 / -64), (((var_8 & (arr_13 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_19 [14] = (arr_13 [4]);
        arr_20 [i_3] = (max(1, var_5));
        var_19 = (max(var_19, var_8));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_20 -= ((!(!var_10)));
        arr_25 [i_4] = 32767;
        arr_26 [i_4] = 45;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_29 [i_5] [i_5] = (arr_12 [i_5] [9] [10]);
        arr_30 [i_5] = (((arr_4 [i_5]) != (arr_4 [i_5])));
        arr_31 [i_5] = (var_13 & 52);
        arr_32 [i_5] = var_0;
        var_21 ^= (((arr_1 [2]) ? 15815206107159170023 : 62));
    }
    var_22 = (min(var_10, (-9223372036854775807 - 1)));
    #pragma endscop
}
