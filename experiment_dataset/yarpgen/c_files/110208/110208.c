/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((+((var_11 ? (arr_7 [i_0 - 2] [i_1]) : ((((arr_1 [i_0] [i_0]) && (arr_3 [i_0]))))))));
                var_19 = ((17129834939814298869 ? 0 : 13857995164788750548));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_11 [i_2] = ((+(((arr_3 [i_2]) ? (arr_3 [i_2]) : (arr_3 [i_2])))));
        var_20 = max(var_9, ((((arr_0 [i_2]) ? 227 : var_2))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_21 = ((var_13 ? (~var_12) : 17196532061250100999));
                        var_22 = var_13;
                        var_23 = (((arr_17 [i_3] [i_4]) ? (((var_12 && (arr_19 [i_4])))) : (arr_0 [i_4 + 1])));
                    }
                }
            }
        }
        var_24 = 402653184;
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_25 = (min(((~(arr_22 [1]))), 62363));
                                var_26 = (arr_15 [i_8]);
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_38 [i_7] [i_8] [i_8] [i_7] = ((((var_6 > (((arr_18 [i_7] [i_9] [i_8]) ? 1 : 11699))))) - ((((var_16 ? var_14 : (arr_36 [i_7] [i_7] [2] [i_9] [i_12]))))));
                        arr_39 [i_8] [i_8] [i_9] [i_12] = (((((((arr_37 [i_7] [i_7] [i_8] [i_9] [i_9] [i_12]) ? (arr_1 [2] [2]) : var_10)) & 402653185))) ? (var_6 & 102) : (((~(arr_14 [8] [i_12])))));
                        var_27 = -40;
                        arr_40 [i_12] [i_8] [6] [i_8] [i_7] = ((((((min(var_5, 5638))) > (((arr_12 [i_7] [i_8]) ? 3551352536 : (arr_32 [i_8] [i_9] [10] [i_7] [i_7] [i_8])))))));

                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            var_28 = (min((arr_1 [i_13 + 1] [i_13 + 1]), 32531));
                            arr_43 [i_7] [i_7] [i_8] [i_7] [i_8] = (((((arr_23 [i_13 + 1]) > ((max(2147483618, var_9))))) && (((arr_34 [i_13] [i_13 + 1] [i_8] [i_13 + 1] [i_13]) != (arr_34 [i_13 + 1] [i_13 + 1] [i_8] [i_13 + 1] [13])))));
                            var_29 = (((((((2117066930 / (arr_15 [i_8])))) & var_4)) << (((((((var_9 ? var_8 : (arr_30 [i_8] [3] [i_9])))) ? var_18 : (arr_17 [i_9] [i_8]))) - 19619))));
                            var_30 = ((((((0 - -32752) & (var_10 != var_1)))) ? 65535 : -65535));
                        }
                    }
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        arr_47 [8] [i_8] [8] [i_8] [i_8] = (-(402653185 - 402653185));
                        arr_48 [1] [i_8] [i_8] [i_8] [i_14] = var_18;
                    }
                    arr_49 [i_7] [i_7] [i_8] = ((-7 ? ((245 ? 2929032656 : 90)) : 3288452937));
                }
            }
        }
        var_31 = (((arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (((!2097151) ? (var_7 != 0) : -65533)) : ((~((var_13 ? (arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : var_1))))));
    }
    for (int i_15 = 3; i_15 < 23;i_15 += 1)
    {
        arr_53 [i_15] = (arr_6 [20] [i_15 - 3] [i_15]);
        var_32 = arr_52 [i_15 - 2] [i_15 - 2];
        var_33 = (((((var_12 ^ (arr_1 [i_15 + 1] [i_15 + 1])))) > ((var_16 ? ((((!(arr_0 [i_15]))))) : ((-1453268284 ? 0 : (arr_4 [i_15 - 1])))))));
    }
    #pragma endscop
}
