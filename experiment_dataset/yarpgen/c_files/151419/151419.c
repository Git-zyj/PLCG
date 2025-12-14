/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [9] [12] = (min((max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))), (arr_3 [i_0] [i_1])));
                arr_7 [i_1] [i_1] = 116;
                var_10 = (max(-21323, ((-((min(var_2, -116)))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_11 -= (((arr_2 [i_2]) > (((max(116, (arr_0 [i_2])))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [10] [i_1] [i_0] [i_0] = (((((1 ? ((523549956 ? var_4 : var_7)) : var_4))) ? (((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (arr_10 [i_0] [i_1] [i_2] [i_2] [i_3]) : (~13549502736747502273))) : (((~(~-116))))));
                        arr_13 [i_1] = (~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]));
                        arr_14 [i_0] [i_0] [i_1] [i_0] = ((max(var_7, (arr_4 [i_1]))));
                    }
                    arr_15 [i_0] [i_1] = 1400420042171816031;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_12 = (min(var_12, (arr_0 [1])));
                                arr_22 [i_2] [i_1] = (((((((max(14261, (arr_11 [7] [i_1] [4] [i_1] [i_1]))))) & ((var_0 ? (arr_4 [i_1]) : var_1)))) < ((((51275 > ((max((arr_17 [i_0] [i_0]), var_2)))))))));
                                var_13 = (--90);
                                arr_23 [i_1] [i_1] [i_1] = 8204;
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_26 [i_0] [i_0] [i_1] [i_6] = (arr_3 [i_0] [i_1]);
                    arr_27 [i_0] [i_1] [i_6] [i_1] = 127;
                    var_14 = (min(var_14, (((((14338 ? 2897913859351484367 : 0)) > var_0)))));
                    arr_28 [17] [i_1] [i_6] [i_1] = ((-(min((arr_4 [i_1]), (arr_21 [i_0] [i_0] [i_6] [i_6] [i_1] [i_1] [i_6])))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    var_15 = (((arr_11 [i_7 + 4] [i_7 + 2] [i_7 - 1] [i_7] [i_1]) ? (arr_16 [i_7 + 2] [i_7] [i_7] [i_7] [i_7 + 2]) : 0));
                    arr_31 [i_0] [i_1] [7] = (arr_20 [i_0] [i_1] [i_0] [i_7 - 1] [i_7]);
                }
            }
        }
    }
    var_16 &= (max((((-27252 | var_6) ^ (~var_1))), 1));
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            {
                arr_38 [2] [i_9] [i_9] = (~2708637424);
                arr_39 [14] [i_9] = ((~(arr_34 [i_9 + 2])));
                arr_40 [i_9] = 67;

                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    var_17 = (min(var_17, (((((((max((arr_41 [i_8] [i_9]), 226)) + (((((arr_33 [i_8]) <= 4109420714000842922))))))) ? (!-var_2) : (((arr_42 [i_8]) >> (80 - 64))))))));
                    var_18 *= (max((((!90) ? (~8910686229611100486) : (((arr_36 [i_8 + 2]) ? 13040322024581820562 : var_6)))), ((max((arr_35 [i_9 + 2]), (arr_42 [i_8]))))));
                    arr_44 [i_9] = (arr_42 [i_9]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_52 [i_8] [i_8] [i_9] [5] [i_8] [i_8] = (((((arr_45 [i_10 - 1] [i_10 + 1] [i_9 - 2] [i_9]) ? ((var_5 ? (arr_50 [i_9]) : var_9)) : ((((arr_36 [i_9 - 2]) + var_2))))) % ((min((arr_41 [i_9] [i_9 - 1]), (arr_45 [i_10 - 1] [i_9 + 2] [i_10] [i_10]))))));
                                arr_53 [i_8] [i_9] [i_12] = (arr_48 [i_8] [i_8]);
                                arr_54 [i_9] [i_9] [i_10] [i_9] [i_11] [i_11] [i_12] = (max((((arr_45 [i_8] [i_8] [i_8 + 1] [i_8 - 1]) ? ((((arr_50 [i_9]) ? -92 : var_8))) : (max(0, (arr_50 [i_9]))))), ((-(arr_33 [i_8 + 3])))));
                                var_19 = (min(var_19, ((min((((!2586296988468735326) ? 18446744073709551615 : -5)), 75)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
