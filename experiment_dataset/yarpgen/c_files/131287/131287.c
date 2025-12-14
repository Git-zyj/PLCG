/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((min(var_3, var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] [i_0] = var_18;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (((!(4294967292 || var_11))));
                                var_21 = (max(var_21, (min(11495667479337771402, (min(11495667479337771392, ((min((arr_10 [4] [i_2] [6] [i_3]), var_4)))))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] = (max(6951076594371780204, 11495667479337771401));
                                arr_27 [i_0] [15] [15] [i_6] [i_0] [15] = (arr_22 [i_0 - 1] [i_1] [i_5] [i_0 + 2] [i_0] [8]);
                            }
                        }
                    }
                    arr_28 [i_0] [i_0 + 3] [i_0] [i_0] = ((max(((var_11 ? var_12 : (arr_2 [15]))), 65535)));
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    var_22 = (min(var_22, var_10));

                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        var_23 = (max(((((((arr_2 [i_0]) | var_0)) <= (((max((arr_30 [i_0]), var_3))))))), var_3));
                        arr_34 [i_0] [1] [i_8 - 1] [i_9] = max(-601633354, (min(var_18, var_16)));
                    }
                }
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    var_24 = var_16;
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_42 [i_0] [1] [i_1 + 2] [i_10] [i_11] [9] [i_12] = ((601633353 ? 8936830510563328 : 2205));
                                var_25 *= (max((arr_20 [i_0] [i_0] [i_12] [i_1]), (arr_10 [i_0] [i_1] [i_11] [i_12])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 18;i_14 += 1)
                        {
                            {
                                arr_47 [i_0] [i_1] [i_10 + 2] [i_0] [i_0] = (min((max((((arr_41 [i_10] [15] [i_10] [i_1] [i_1]) ? (arr_36 [i_0]) : -1582585135077713827)), var_14)), (max((arr_2 [i_0]), (arr_31 [i_0] [i_0 + 3] [i_0])))));
                                arr_48 [i_10] [i_0] = (arr_16 [i_0] [i_0]);
                                var_26 = 65516;
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_27 = (max((((arr_16 [i_0] [i_0]) / -601633364)), -1));
                        var_28 = (min(((min((0 & var_15), (arr_21 [i_0] [i_0] [i_10] [i_15] [i_0] [i_15])))), (((min((arr_7 [3] [3] [10] [19]), 6951076594371780208)) | (252 | -10)))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
                    {

                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            arr_58 [i_0] [i_1] [i_0] [i_16] [3] [13] = ((((686113164 / (arr_9 [i_0] [i_10] [i_10 - 1] [i_0]))) - ((-(arr_40 [i_0] [i_0] [i_0] [19] [3] [19])))));
                            var_29 = (arr_49 [i_10 - 1] [i_10 + 2] [i_1 - 2] [i_0 + 1]);
                        }
                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            arr_63 [3] [i_1] [i_10] [i_16] [i_0] = (((arr_61 [i_18] [i_0]) <= (arr_35 [i_0] [i_0])));
                            arr_64 [i_0] [i_1] [i_0] [i_0] [i_0 - 2] = -var_7;
                            var_30 = (max(var_30, (arr_36 [i_18])));
                            arr_65 [i_0 + 1] [i_1 - 2] [i_10] [i_1 - 2] [i_0] = 10;
                            var_31 -= 6951076594371780203;
                        }
                        var_32 = (((arr_55 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 3]) - (arr_32 [i_0] [7] [i_10 - 1] [4] [i_0] [i_10 - 1])));
                        var_33 = (((arr_38 [6] [6]) || 14453));
                        var_34 = -1171345157975703585;
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                    {
                        var_35 = (((arr_60 [i_1] [i_1] [i_1 - 2] [i_0] [i_1] [i_1 - 2]) - 11495667479337771392));
                        var_36 = ((11495667479337771400 ? 40659 : -1));
                    }
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        arr_70 [i_0] [i_0 + 4] [i_0] [i_0 + 4] [18] [i_0] = (((!1885698924760002357) ? (((arr_2 [i_10 + 1]) ? var_0 : 1023)) : ((min((min((arr_22 [16] [i_0] [17] [i_10 + 2] [i_0] [i_20]), var_16)), (arr_40 [5] [i_1] [i_0] [i_1] [16] [0]))))));
                        arr_71 [i_0] = -var_1;
                        arr_72 [i_0 + 4] [i_1] [i_0] [i_10] [19] = ((+(((arr_32 [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 1] [12] [i_1 - 2]) ? (arr_12 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_0]) : 63841))));
                        arr_73 [i_0] = (((-(arr_10 [i_1] [i_1] [i_1 + 2] [i_0]))));
                    }
                }
            }
        }
    }
    var_37 = (min(var_37, var_1));
    #pragma endscop
}
