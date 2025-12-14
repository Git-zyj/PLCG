/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = ((-(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(((((arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0]) ? (arr_6 [i_0 + 1] [i_0] [5] [i_0 + 1]) : var_13))), (max((arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 1]), -8380477772171143959))));
                    var_18 ^= ((~(arr_6 [i_2] [i_2] [i_2] [8])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    arr_12 [i_0] [i_0] = (((-(~var_0))));
                    arr_13 [i_4] [13] [i_4] [i_0] = ((!(((+((var_5 ? (arr_0 [i_0 - 1]) : (arr_3 [i_0]))))))));
                    arr_14 [i_0] [i_4] = (((min(((72056494526300160 ? var_10 : var_6)), -var_15)) == (min(var_14, (min(-8380477772171143959, var_10))))));
                    arr_15 [i_0] [i_3] [16] [i_0] = (min(((~(arr_1 [i_0] [i_4 + 1]))), var_8));
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        arr_19 [16] [16] |= 11600293644916117262;
        arr_20 [4] [4] &= var_10;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                arr_28 [i_6] = ((-(arr_26 [i_6] [i_6])));
                arr_29 [i_6] [i_6] = (((((~(~18374687579183251455)))) ? (((((-(arr_27 [i_6]))) | var_16))) : ((-((72056494526300160 ? 72056494526300160 : var_3))))));
                arr_30 [i_6] [i_6] = (max((arr_22 [i_6]), ((var_1 * (arr_26 [23] [12])))));

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_39 [i_6] [i_7] [i_8] [i_9] [i_8] = ((-((max(18374687579183251455, (arr_21 [i_7]))))));
                                var_19 = (max(var_19, (((((max(var_5, ((var_7 % (arr_25 [i_6])))))) ? ((-(max(var_7, (arr_35 [i_6] [i_10] [i_8] [i_8]))))) : (arr_36 [i_6] [i_6] [i_8]))))));
                                arr_40 [i_6] [i_6] [i_8] [i_10] [i_8] = (arr_25 [i_8]);
                                arr_41 [i_6] [i_6] [i_8] [i_8] [i_10] [i_6] = ((((max((((arr_36 [i_6] [i_7] [i_8]) << (var_10 - 8128372390965008243))), (((var_12 ? (arr_32 [i_6] [i_6] [18]) : (arr_24 [i_6] [i_7] [i_7]))))))) ? (((((-4945413495836204409 ? (arr_24 [i_7] [i_8] [i_10]) : (arr_24 [i_7] [i_8] [i_8])))))) : (min((arr_31 [i_6] [i_6] [i_6] [i_6]), (arr_26 [i_6] [i_7])))));
                                arr_42 [i_6] [5] [i_8] [i_9] = var_15;
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_20 = (max(((!((((arr_24 [i_8] [i_11] [i_8]) ? var_3 : (arr_21 [i_8])))))), (((arr_36 [i_6] [i_6] [i_6]) < var_0))));
                        arr_46 [i_8] [i_7] [17] [i_11] = ((arr_45 [i_6] [i_6] [i_7] [i_11]) ? (((((arr_33 [i_8]) && 255)))) : -8380477772171143958);
                        arr_47 [i_8] [i_7] [i_7] = ((!((max(((~(arr_22 [i_11]))), -53)))));
                        arr_48 [i_7] &= (~var_0);
                    }
                    var_21 = (max(var_21, ((((((!((max((arr_38 [i_6] [i_7] [i_7] [i_8]), (arr_21 [i_6]))))))) + (((var_12 > (arr_35 [i_6] [i_6] [i_6] [i_6])))))))));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {

                    for (int i_13 = 3; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        var_22 = ((+((((min((arr_31 [i_6] [i_7] [i_12] [i_13]), -36)) != (arr_27 [i_7]))))));
                        arr_55 [i_6] [i_7] [i_12] [i_13] = (((((arr_45 [14] [i_13 - 3] [i_13] [i_13]) != -1774635950)) ? (max((arr_38 [i_6] [i_13 - 3] [i_6] [i_13 - 3]), var_13)) : (max((arr_25 [i_13 - 1]), (arr_38 [0] [i_7] [i_7] [i_7])))));
                    }
                    for (int i_14 = 3; i_14 < 23;i_14 += 1) /* same iter space */
                    {
                        arr_58 [i_6] [i_6] [i_6] [i_12] [i_12] [i_14 - 3] = ((((((var_13 ? var_1 : 96)))) ? (~1) : (max((min(10, 35)), -1))));
                        arr_59 [i_14] [i_7] [i_6] = (arr_38 [6] [i_7] [i_12] [i_14 - 3]);
                    }

                    /* vectorizable */
                    for (int i_15 = 3; i_15 < 21;i_15 += 1)
                    {
                        var_23 = ((0 ? var_6 : var_15));
                        var_24 = (((arr_32 [i_15 - 3] [i_12] [i_6]) != var_12));
                        var_25 = ((var_7 ? (arr_43 [i_15 + 2]) : -32581));
                    }
                }
                arr_62 [i_6] = min(((~(arr_32 [i_6] [i_6] [19]))), ((min((arr_27 [23]), (arr_24 [i_7] [18] [i_6])))));
            }
        }
    }
    #pragma endscop
}
