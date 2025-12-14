/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min((min(((var_0 ? var_8 : (arr_1 [i_0]))), (((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))), (((~(arr_0 [i_0]))))));
        arr_4 [i_0] = ((max((arr_1 [i_0]), (arr_0 [i_0]))) & (min((arr_1 [i_0]), (arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_13 = (min(113, ((~(max(2793148046243670282, -114))))));
        arr_7 [i_1] = (max(var_11, (((!(arr_5 [i_1 - 1] [i_1 + 1]))))));
        arr_8 [i_1] = (((((arr_6 [i_1 - 1]) && 15653596027465881333)) && (var_1 && 15653596027465881340)));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_14 = (((arr_11 [i_2] [i_2 + 1]) && (arr_9 [i_2 - 1] [i_2 - 1])));
        arr_12 [i_2] = (max((((arr_5 [i_2 + 2] [i_2 - 1]) ? (arr_9 [i_2] [i_2]) : (arr_10 [i_2]))), (((arr_6 [i_2 - 1]) ? (arr_10 [i_2 + 2]) : ((max(1, var_3)))))));
        var_15 = ((((max((arr_11 [3] [i_2]), (arr_11 [i_2] [i_2])))) >= (((-48408748 & (((var_6 || (arr_5 [i_2] [i_2 - 1])))))))));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_16 = ((((-var_11 + (arr_5 [i_3 + 2] [i_3 - 1]))) + (((arr_11 [i_3 - 1] [i_3 + 2]) ? (arr_11 [i_3 - 1] [i_3 + 2]) : var_10))));
        var_17 = ((~(arr_10 [i_3])));
        var_18 = (arr_13 [i_3 - 1] [i_3 + 1]);
    }
    var_19 = (max(var_19, ((((~15653596027465881303) ? var_8 : var_4)))));

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_20 = ((-(((arr_10 [i_4]) - var_7))));
                    var_21 -= (arr_20 [i_4] [i_5]);
                    var_22 = (min(var_22, (78 <= 32767)));
                }
            }
        }
        arr_23 [i_4] [i_4] = (((((((((arr_20 [i_4] [6]) & var_3))) ? (max(2, var_9)) : ((var_4 ? var_5 : 12098))))) ? -116 : ((var_4 & (arr_11 [i_4] [i_4])))));

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_23 = (min(var_23, ((min((max((arr_16 [i_4] [i_7]), var_6)), ((var_1 ^ (arr_25 [i_4] [i_7]))))))));
            var_24 ^= (max((max(((var_9 ? 42185 : var_9)), var_0)), 21));
            var_25 += (((arr_16 [i_4] [i_7]) != ((((max((arr_18 [i_4]), (arr_9 [19] [i_7])))) ? (((~(arr_18 [i_4])))) : var_8))));
            var_26 = ((~(max(((var_11 ? 48 : (arr_20 [i_7] [5]))), (((arr_13 [i_4] [i_4]) & (arr_25 [i_4] [i_7])))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_30 [i_8] [i_8] = (arr_18 [i_4]);
            arr_31 [i_4] [i_4] [i_8] = arr_17 [i_4];
            arr_32 [i_8] [i_8] = 137;
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_35 [i_9] = ((((((arr_13 [i_9] [i_9]) << (((max(17334177459658906760, (arr_24 [i_9] [i_9]))) - 17334177459658906758))))) ? ((-(arr_33 [i_9]))) : (((-63 || 0) ? (arr_17 [i_9]) : (arr_17 [i_9])))));
        var_27 -= var_0;
        var_28 = (min(var_28, 1056003698));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_29 -= ((((max((arr_21 [i_10] [i_10] [i_10] [i_10]), (arr_21 [i_10] [i_10] [i_10] [i_10])))) ? (arr_25 [i_10] [i_10]) : (max((arr_21 [i_10] [i_10] [i_10] [i_10]), 1))));

        /* vectorizable */
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            var_30 -= ((var_9 << (7473190239206396598 - 7473190239206396596)));
            arr_40 [6] [6] |= 2612527837753065669;
        }
    }
    #pragma endscop
}
