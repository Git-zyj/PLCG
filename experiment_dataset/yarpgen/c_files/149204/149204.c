/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 38;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [7] = ((-((((((arr_0 [i_0]) != 38))) | var_8))));
        arr_4 [i_0] = (min((!139), (arr_1 [i_0 + 2])));
        arr_5 [i_0] [1] = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (((((218 ? 28156 : var_1))) ? ((((arr_6 [i_1]) != (arr_6 [i_1])))) : ((((arr_6 [i_1]) != var_12)))));
        var_15 = var_10;
    }

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_16 = (min(var_16, (((!((218 || (((-31523 ? 62 : 87))))))))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_17 += (arr_11 [2] [i_3] [i_2 - 1]);
            var_18 = (arr_6 [i_2]);
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_15 [i_2] [2] = (arr_2 [i_2]);

            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_19 = (min(var_13, (((~703161453391379592) ? (arr_9 [i_2]) : (arr_0 [i_2 - 1])))));
                var_20 = (arr_11 [i_2] [i_4] [i_2]);
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_21 = (min(var_21, (arr_6 [16])));
                arr_23 [i_2] [i_4] = var_11;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_30 [i_2] [i_7] [i_6] [i_4] [i_2] = ((238 ? (((arr_26 [i_2]) ? var_8 : var_13)) : 123));
                            arr_31 [i_2] [5] [i_2] [i_2] [i_2] = arr_13 [i_4 + 1] [i_2] [i_4];
                            arr_32 [i_2] [i_4] [i_2] [i_7] [i_8] = ((-(arr_17 [10] [i_6 - 1] [i_8])));
                            var_22 = ((-(arr_7 [i_6 + 1])));
                        }
                    }
                }
                arr_33 [i_2] = (arr_19 [i_6] [i_6 + 1] [2] [i_6]);
            }
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_37 [i_9] [i_2] [i_2] = 87;
            var_23 = (!5629970889224999624);
            arr_38 [0] [i_2] = var_10;
            arr_39 [i_2] = ((((!(arr_24 [i_2]))) ? 3590261394460667896 : 5629970889224999618));
        }
        arr_40 [i_2] = -28156;
    }
    var_24 = -7107116626495131013;
    #pragma endscop
}
