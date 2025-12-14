/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_11;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_13 = (arr_2 [i_0]);
        arr_3 [i_0] = ((-(max(var_10, (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = (max(var_14, (((var_1 | ((3281 ? (arr_0 [i_1] [i_1]) : (arr_2 [i_1]))))))));
            var_15 = (!var_5);
            var_16 &= 254;
            var_17 = (arr_1 [i_1]);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_18 &= (arr_5 [i_1 + 1]);
            var_19 = (arr_7 [i_1] [i_3] [i_3]);
            var_20 = ((-(arr_10 [i_1 - 2] [i_3])));
            var_21 = 3271;
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_22 &= (arr_2 [i_1 - 1]);
            var_23 = (arr_6 [i_1]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_15 [i_1 - 2] [15] = 390897843;
            arr_16 [i_5] [i_1] = (arr_10 [i_1] [i_1 + 1]);
        }
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_24 -= (max(var_6, (((var_2 ? (arr_2 [i_6 - 1]) : 87)))));
        var_25 = (((254 & (arr_0 [i_6] [i_6 - 1]))));
        var_26 = (min(var_26, (arr_2 [i_6 - 1])));

        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_27 = ((max(var_1, (arr_0 [i_6 + 1] [i_7]))));
            var_28 = ((max(-210370200, 11)));
            arr_22 [i_6 - 1] [i_7] = ((((!(arr_18 [i_6 - 1]))) ? (((((arr_18 [i_6 + 1]) || (arr_18 [i_6]))))) : (((arr_18 [i_6 - 1]) ? (arr_19 [i_6 + 1] [i_6 - 1]) : (arr_18 [i_6 + 1])))));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            arr_25 [i_6] [i_6 - 1] [16] = (max((min(-5068294085583221285, var_4)), var_6));

            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                arr_28 [i_9] = (!-1880967408);
                arr_29 [i_9] = (min((arr_20 [i_6 + 1] [i_6 - 1] [i_6]), (arr_1 [i_9 + 2])));
            }
            arr_30 [i_8] [i_6] = (((((~((((arr_18 [i_6]) == var_8)))))) ? ((((((!(arr_27 [9] [i_8] [i_6 - 1] [i_8]))))) & ((~(arr_26 [i_6] [i_6] [i_8] [i_6]))))) : (((-(((arr_17 [i_6]) ? (arr_21 [i_6]) : (arr_27 [i_6 + 1] [i_6] [i_6 + 1] [9]))))))));
            var_29 -= min(((((127 ? 1 : 2000931600)))), ((-((1 ? (arr_2 [i_8]) : var_5)))));
        }
    }
    for (int i_10 = 3; i_10 < 23;i_10 += 1)
    {
        var_30 |= (max(87, ((((((arr_32 [i_10 + 1]) ? var_1 : var_9))) ? -3253 : (arr_1 [i_10])))));
        var_31 = (var_4 % 2612151028);
        var_32 = (((~var_4) & (((arr_32 [i_10 - 2]) | (arr_0 [i_10] [i_10])))));
    }
    var_33 = var_1;
    var_34 = (~((~(~var_6))));
    #pragma endscop
}
