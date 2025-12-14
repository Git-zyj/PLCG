/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_16;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 += (!(!var_0));
        var_22 = max((arr_0 [i_0] [i_0]), 0);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_23 = ((((!(arr_4 [i_1]))) ? (((max((arr_5 [i_1 - 2]), (arr_5 [i_1 - 2]))))) : (arr_4 [i_1])));
        var_24 = (max(var_24, (((1880575426 ? 1 : 1)))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_25 = ((var_5 ? (arr_6 [i_1] [i_1 - 1] [i_1 - 2]) : var_1));
            var_26 = (min((var_13 || var_12), ((var_14 ? (6953415647604341802 ^ var_6) : (!0)))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_27 = -347685869;
            var_28 += (((((-(arr_7 [i_1 - 2])))) ? (((arr_7 [i_1 - 1]) ? ((var_18 ? var_3 : 227)) : (((!(arr_8 [i_3])))))) : 1579));
            var_29 ^= (((((arr_8 [i_1 - 2]) != (arr_8 [i_1 + 1]))) ? (((arr_8 [i_1 + 1]) / (arr_8 [i_1 + 1]))) : (~207)));
        }
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_30 = ((((min((min(7095549423098811384, (arr_3 [i_4 + 1] [i_4 + 1]))), (((var_17 ? (arr_8 [i_4]) : var_10)))))) ? (arr_3 [i_4 + 1] [i_4 + 1]) : var_13));
        var_31 = (min((((-(var_7 <= var_19)))), (min((arr_4 [i_4]), var_10))));
        arr_13 [i_4] = (arr_3 [i_4 - 1] [i_4 - 1]);
        var_32 = ((!(arr_9 [i_4] [i_4] [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_33 ^= (arr_8 [i_5]);
        var_34 = 7;
    }
    var_35 = ((var_9 ? var_14 : (--126)));
    #pragma endscop
}
