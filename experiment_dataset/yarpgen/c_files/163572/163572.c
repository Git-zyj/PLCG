/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (min(var_11, 54892));
        var_12 = (max(var_12, 18));
        arr_3 [i_0] = (((18 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_13 = ((((~((var_9 | (arr_4 [i_1]))))) & (arr_5 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 = arr_6 [13] [i_2 - 1];
                        var_15 = (((min((arr_7 [i_2] [i_2 - 1]), var_3)) > (arr_7 [i_2] [i_2 - 1])));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            var_16 += (((arr_8 [i_5 + 1] [i_5 + 2]) ? 117 : (arr_7 [i_1] [i_5 - 1])));
            arr_18 [i_5] [i_5 + 2] [i_1] = var_6;

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_22 [i_6] [i_5 + 1] [i_1] = ((((((arr_14 [i_1] [i_5] [i_6] [i_5] [i_5] [i_1]) ? (arr_20 [i_1] [i_5] [i_6]) : 12))) & ((var_1 ? (arr_10 [i_6] [i_5] [i_1]) : (arr_20 [i_6] [2] [i_1])))));
                arr_23 [i_1] [i_5] = (((((arr_11 [i_6] [i_6] [i_6] [i_1]) ? (arr_4 [i_1]) : var_10)) < 15));
                var_17 = (min(var_17, (((arr_15 [i_5 - 2] [i_5 + 2] [i_6]) ^ (arr_7 [i_6] [i_1])))));
                var_18 = 3043;
                arr_24 [i_1] [i_5] [i_6] [i_6] = (((arr_6 [i_5 - 2] [i_5 + 2]) ? (arr_11 [i_5 - 3] [i_6] [i_5] [i_6]) : (arr_19 [i_5 - 3] [i_5 - 3])));
            }
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                arr_29 [i_1] [i_5] [i_5] [i_7] = ((((((arr_4 [i_7]) ? -3070 : var_1))) ? (((arr_28 [i_1] [13] [i_1]) ? 65520 : var_6)) : 5295));
                var_19 = (arr_26 [i_1] [1] [i_1]);
                var_20 = 65534;
                var_21 = (arr_15 [i_1] [i_1] [i_7]);
            }
            arr_30 [i_1] [i_5] = ((!(var_10 % 48)));
            var_22 = (arr_15 [i_5 + 3] [i_5 + 3] [i_5 + 3]);
        }
        arr_31 [i_1] = 46670;
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_23 = ((((((arr_13 [i_8] [i_8]) / (arr_16 [i_8] [i_8])))) * (((35184372088831 / var_10) * 53))));
        arr_35 [i_8] [i_8] = (min((((arr_4 [i_8]) ? var_1 : var_9)), ((((1536 ? var_9 : (arr_17 [i_8] [i_8] [i_8])))))));
        var_24 = var_2;
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_25 = ((13735 ? (((14 && ((max(3, 64021)))))) : ((8796093022207 ? (((-3026 && (arr_38 [i_9] [i_9])))) : ((46665 ? 56779 : -57))))));
        arr_39 [i_9] = ((!((min(32740, ((var_0 - (arr_36 [i_9]))))))));
        var_26 ^= (((4552 - -99) + ((min((arr_37 [i_9]), (arr_38 [i_9] [i_9]))))));
        arr_40 [i_9] = var_8;
        var_27 = (min((arr_36 [i_9]), 1846256310));
    }
    var_28 = var_4;
    var_29 -= (max(((var_2 ? (min(63988, 9223372036854775807)) : (((max(1, var_5)))))), (((max(2021, var_6))))));
    #pragma endscop
}
