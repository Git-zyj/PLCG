/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_11;
    var_21 += var_9;
    var_22 = var_10;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_23 = (((arr_2 [i_0]) * (((((4294967295 < (arr_0 [i_0])))) * 23279))));
        var_24 = (max((arr_1 [i_0 - 1]), (arr_3 [i_0 + 1])));
        arr_4 [i_0] = (max((((arr_3 [i_0 + 1]) * (!140737488355327))), ((((arr_3 [i_0]) && ((!(arr_0 [i_0 + 1]))))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_25 = (min(var_25, ((((arr_0 [i_1 - 1]) ? (~var_10) : ((~((~(arr_2 [i_1]))))))))));
                    var_26 *= ((((((var_6 + var_11) ? ((var_6 ? var_3 : (arr_9 [i_3] [i_2] [i_1 + 1]))) : var_4))) / ((2295562939469268098 ? ((((3477078185 || (arr_12 [i_1] [i_2] [i_1 + 1]))))) : (max(140737488355327, (arr_2 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_4] [i_3] [i_2] [i_2] [i_2] [i_5] = -22827;
                                var_27 = var_17;
                                var_28 = (!var_5);
                                var_29 = 16777215;
                                arr_18 [i_3] [i_5] = 16383;
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_1] = -1;
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_30 = ((((arr_3 [i_6 + 1]) | 6)));
        arr_23 [i_6] = (arr_7 [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_32 [i_6] [i_6] [i_8] = (((99 ? 3 : 2810491701)));
                    arr_33 [i_6 - 1] [i_6] [i_8] [i_8] = (127 ? 2147483647 : -1958696554);
                    var_31 = ((((((232 ? -30 : 101)) + 2147483647)) << (((((2295562939469268098 && (arr_21 [i_6 - 1])))) - 1))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_37 [i_9] = (arr_26 [i_9] [i_9] [i_9]);
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 8;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 7;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_32 = (min(var_32, (arr_46 [i_9] [i_10 + 1])));
                                arr_50 [i_9] [i_12] [i_11] [i_12] [i_13 - 1] = ((var_18 ? (arr_24 [i_9] [i_11 + 1] [i_12]) : ((36518794 ? (arr_7 [i_9] [i_11] [i_13]) : (arr_30 [i_13 - 1])))));
                                var_33 = ((arr_30 [i_9]) ? (arr_5 [i_12 + 3]) : -320804756);
                                var_34 *= (!11993750873868148423);
                            }
                        }
                    }
                    var_35 = (arr_38 [i_11] [i_10] [i_9]);
                }
            }
        }
        var_36 = 472136198;
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                {
                    var_37 -= ((520190779 ? ((((((23 ? 16151181134240283518 : -1236041753))) && (5017 ^ -140737488355327)))) : (((arr_54 [i_16] [i_16]) ? (((36 >= (arr_43 [i_14] [i_15] [i_16] [i_14])))) : (((var_8 != (arr_9 [i_16] [i_15] [i_14]))))))));
                    arr_58 [i_15] [i_16] = (arr_6 [i_16]);
                }
            }
        }
        var_38 = (min(var_38, var_18));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                {
                    var_39 = ((((((arr_1 [i_14]) & 979788406))) >= (min(var_5, 630407551))));
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 9;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            {
                                var_40 ^= ((94 ? (arr_48 [i_14] [i_17] [i_18] [i_19] [i_17]) : 141));
                                arr_70 [i_20] [i_19] [i_18] [i_17] [i_14] = (arr_40 [i_14] [i_17]);
                                var_41 &= ((255 / (arr_65 [i_14] [i_17] [i_19 - 1] [i_20])));
                                var_42 *= ((2295562939469268098 ^ (arr_29 [i_18] [i_19] [i_20])));
                            }
                        }
                    }
                    arr_71 [i_18] [i_17] [i_14] = (var_11 ? ((0 % (arr_41 [i_14] [i_18] [i_18] [i_18]))) : (arr_65 [i_14] [i_17] [i_18] [i_18]));
                    var_43 = 3261146972;
                }
            }
        }
        var_44 = var_2;
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
    {
        var_45 = (arr_73 [i_21]);
        var_46 = (((arr_73 [i_21]) + (arr_73 [i_21])));
        arr_76 [i_21] = 101;
    }
    for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
    {
        arr_81 [i_22] [i_22] = 6805523265706451115;
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 23;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 23;i_24 += 1)
            {
                {
                    arr_88 [i_24] [i_23] [i_22] = 140737488355327;
                    arr_89 [i_22] [i_22] [i_23] [i_23] = var_16;
                }
            }
        }
    }
    #pragma endscop
}
