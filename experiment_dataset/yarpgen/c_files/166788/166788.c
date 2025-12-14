/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 ^= var_3;
                            arr_11 [12] [i_1] [2] [i_3] [i_3] [i_3] = ((arr_1 [i_3 + 1]) * (!var_0));
                            var_14 |= var_7;
                            var_15 = (min(var_15, var_6));
                            var_16 = (arr_4 [i_1]);
                        }
                    }
                }
                var_17 = (max(var_17, (arr_0 [i_0] [i_1])));
                arr_12 [i_1] [i_1] [i_1] = ((+(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_9 [0] [6] [i_0] [10] [i_0])))));
            }
        }
    }
    var_18 = (((max((var_10 || var_7), 1)) ? (((6 < var_6) ? var_5 : 105)) : var_11));

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_19 += (150 - 49152);
        var_20 = (var_10 > (arr_9 [i_4] [6] [i_4] [i_4] [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_21 [i_4] [6] [6] = 69;
                    var_21 = (max(var_21, ((max((arr_14 [i_5 + 3] [i_5 + 1]), var_11)))));
                    var_22 = (min(var_22, (((((max((arr_18 [i_5 + 3]), (arr_3 [i_5 + 1] [i_6])))) - var_2)))));
                }
            }
        }
        var_23 = (173 >= -var_1);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 21;i_9 += 1)
            {
                {
                    arr_29 [i_7] [i_7] [i_7] [i_7] = ((var_0 - (arr_28 [i_8 - 1] [i_8 - 3])));
                    arr_30 [i_7] [13] [i_9] = ((2248 ^ ((66 ? (arr_22 [i_7]) : 6))));
                    arr_31 [i_7] [i_7] [i_9] = var_11;
                }
            }
        }
        arr_32 [i_7] = 178;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_37 [i_10] = (arr_35 [i_10]);
        arr_38 [i_10] [i_10] |= (((arr_23 [i_10]) ? (arr_23 [i_10]) : (arr_23 [i_10])));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_24 = (((arr_22 [i_11]) ? (arr_22 [i_10]) : (arr_28 [i_12] [i_11])));
                    arr_43 [i_10] [0] [i_11] [8] = (~((((arr_28 [i_12] [i_11]) >= (arr_34 [i_10])))));
                    arr_44 [i_10] [17] = ((49152 ? 160 : 1386677808));
                    var_25 = (((arr_26 [i_10] [i_10]) % (arr_33 [i_12])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 17;i_15 += 1)
                {
                    {
                        arr_54 [i_10] [i_13] [i_14] [i_13] = var_7;
                        arr_55 [i_13] [i_10] [i_13] [18] [i_15] = (((arr_47 [i_13 - 1]) != ((((arr_35 [i_13 - 1]) + (arr_41 [12] [i_13] [i_10]))))));
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        var_26 = (((arr_36 [i_16]) ? (max((arr_35 [1]), ((var_1 << (var_5 - 22186))))) : ((((arr_36 [i_16]) | var_8)))));
        arr_59 [i_16] [5] = (arr_18 [i_16]);
        var_27 += ((((var_8 ? (arr_15 [i_16]) : var_12)) > ((max((min(var_12, (arr_24 [i_16]))), (arr_13 [i_16]))))));
        arr_60 [i_16] = 26309;
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {
        for (int i_18 = 4; i_18 < 18;i_18 += 1)
        {
            {
                var_28 = ((+((((arr_22 [i_17]) && var_3)))));
                var_29 = (min(((max(var_12, var_6))), (((var_4 / var_1) / (arr_63 [i_18 - 3])))));
            }
        }
    }
    var_30 = (0 != 0);
    #pragma endscop
}
