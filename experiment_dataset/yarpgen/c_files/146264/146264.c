/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_2);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_5 [1] |= ((((var_6 ? var_3 : var_7)) != 4227034103104966037));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, 520187362712728962));
                        arr_11 [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = ((1 ? -520187362712728963 : 520187362712728948));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_18 = 28597;
                            arr_15 [i_0] [i_1 + 2] [i_3] [i_3] [i_4] = (~var_15);
                            var_19 = ((arr_1 [i_1 + 1] [i_1 + 2]) < (arr_8 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 + 1]));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = 21;
                            var_20 ^= ((!(~var_13)));
                            arr_19 [i_3] [i_2] [i_2] [9] [4] [i_2] [4] = (arr_14 [i_0] [i_3] [i_5 - 1] [i_3] [i_1 - 1]);
                        }
                        var_21 = (arr_17 [i_1 + 1] [i_1 + 3] [i_3] [i_1] [i_3] [i_1] [i_1]);
                        var_22 = var_0;
                    }
                }
            }
            var_23 = (arr_8 [i_0] [i_0] [i_1] [9]);
            arr_20 [i_0] = ((!(arr_14 [i_0] [i_0] [i_1 + 2] [i_0] [i_1 + 2])));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_24 ^= (max(18446744073709551615, 7753527945799245478));
            arr_23 [i_0] [i_6] = ((((((arr_21 [i_6] [i_6] [i_0]) ? (arr_21 [i_6] [i_0] [i_0]) : (arr_21 [i_0] [7] [i_6])))) / (max(var_2, (arr_21 [i_0] [i_6] [i_0])))));

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_28 [i_6] [i_0] [i_7] [i_6] = -var_6;
                arr_29 [i_0] [i_0] [i_6] [i_7] = var_11;
            }
        }
        arr_30 [4] [i_0] &= (min(((((((!(arr_24 [i_0] [i_0] [3])))) <= ((max(224, (arr_7 [i_0] [i_0] [i_0]))))))), ((((max((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_0] [i_0])))) ? (arr_16 [i_0] [i_0]) : var_3))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_33 [i_8] [i_8] = ((((((arr_10 [8] [i_8] [i_8] [i_8]) ? (arr_26 [i_8] [6] [i_8] [i_8]) : 0)) != (arr_21 [i_8] [i_8] [i_8]))));
        var_25 = ((~(arr_25 [i_8] [i_8] [i_8] [i_8])));

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_36 [i_9] [i_9] = (min(((!(arr_21 [i_8] [i_8] [i_8]))), (((arr_10 [i_8] [i_8] [i_9] [i_9]) >= (max(var_10, 206))))));
            var_26 = ((((min(104, 0))) && (~var_3)));
            arr_37 [i_9] = (arr_24 [i_8] [i_8] [i_8]);
            arr_38 [i_9] [i_9] [i_9] = (max((arr_31 [i_8] [i_8]), (((arr_31 [i_9] [3]) ? (arr_31 [i_8] [i_9]) : var_15))));
        }
        for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
        {
            var_27 = ((7753527945799245478 ? ((~((min(var_15, (arr_2 [6] [i_8])))))) : (var_5 | var_15)));
            arr_41 [i_10] [i_8] = 28;
        }
        for (int i_11 = 2; i_11 < 9;i_11 += 1) /* same iter space */
        {
            arr_45 [i_11] = (3913286977 * 2047);
            arr_46 [i_8] [i_8] [i_11] = (min((arr_13 [i_8] [i_11 - 2] [i_11]), ((((~var_15) || var_0)))));
        }
        for (int i_12 = 2; i_12 < 9;i_12 += 1) /* same iter space */
        {
            var_28 = ((var_4 ? (((max((arr_32 [i_12 + 1]), 28592)))) : (max(1457971194, (arr_32 [i_12 - 2])))));
            arr_51 [i_8] [i_8] [i_8] = ((53 ? 201 : 17421145941578316537));

            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                arr_54 [i_8] [i_8] = (min(((-((53 ? (arr_25 [2] [6] [i_13] [i_13]) : var_3)))), (min((max((arr_34 [i_13] [i_13] [i_13]), var_14)), (min((arr_35 [i_13]), var_2))))));

                /* vectorizable */
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    arr_57 [i_14 - 1] = (arr_0 [i_13] [i_8]);
                    arr_58 [i_8] [i_8] [i_13] [i_14] = (arr_32 [i_14]);
                    arr_59 [i_8] [i_12] [5] [i_12] = 13122051538049297591;
                }
                arr_60 [i_13] [i_13] [2] [i_8] = (min(var_10, var_1));
                arr_61 [1] [i_12] |= (arr_21 [i_8] [i_8] [i_8]);
                var_29 = var_2;
            }
            arr_62 [i_12] [i_8] [i_8] = 65535;
            var_30 = (max(var_30, ((((((((~(arr_21 [i_8] [i_8] [i_12 + 1]))) | ((max((arr_2 [i_8] [i_8]), var_6)))))) ? (((~(var_0 | 16134)))) : (((arr_34 [i_12 + 1] [i_12] [i_12 + 1]) ? (arr_44 [i_12 - 1] [i_8]) : (max(65535, 2)))))))));
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        arr_65 [i_15] = 8065873413514787832;
        var_31 &= (arr_64 [i_15]);
        arr_66 [i_15] [i_15] = (arr_64 [i_15]);
    }
    var_32 = (min(var_32, var_4));
    #pragma endscop
}
