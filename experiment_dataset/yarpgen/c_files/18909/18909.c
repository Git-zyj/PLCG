/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((((((((142 ? 12905755696232214537 : var_2))) ? var_0 : var_9))) ? (((max(var_9, var_7)) >> var_11)) : (((((min(var_4, var_8))) ? var_13 : ((92 ? var_9 : var_6)))))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 = (((-(arr_1 [i_0 - 1]))));
        var_21 = (!var_18);
        arr_2 [14] &= (min((((!(((~(arr_0 [6]))))))), (min((((!(arr_1 [i_0])))), ((var_14 ? 71 : (arr_0 [0])))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (min((max(var_6, (arr_3 [i_1]))), ((((arr_3 [i_1]) <= var_7)))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_22 = ((1 ? (((arr_4 [i_1] [i_1]) * (arr_7 [1] [i_2]))) : (!var_13)));

            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                arr_10 [i_1] = (arr_4 [i_1] [i_1]);
                var_23 = (min(((((arr_6 [i_3 - 1] [i_2] [i_1]) ? var_9 : (arr_8 [i_3 - 2] [i_2] [i_1] [i_1])))), (~-8)));
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                var_24 = var_17;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_25 &= (~var_8);
                            var_26 &= (13328 ^ 1);
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((0 - (((9223372036854775807 || (arr_11 [i_1] [i_1] [i_5 - 2])))))) ^ var_0));
                        }
                    }
                }
            }
            var_27 = ((arr_8 [13] [i_4] [i_4] [i_4]) ? ((821552832 ? -var_7 : ((min(-1097579676, (arr_8 [i_1] [i_4] [13] [i_1])))))) : (((255 ? (!var_9) : (arr_11 [i_1] [i_1] [i_1])))));
            arr_20 [i_1] [i_1] [i_1] = ((~(arr_12 [i_1] [i_1] [i_1])));
        }
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            var_28 = (max(var_28, (((!((((!var_14) ? 96 : ((var_10 ? (arr_18 [i_1] [i_8] [i_1] [i_8 + 1] [i_8] [4]) : var_16))))))))));
            var_29 = (~127);
            arr_23 [i_1] [i_1] = (arr_21 [i_1] [i_8] [1]);
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_28 [i_1] [i_1] = 1131673054363506096;
                arr_29 [10] &= 182;
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_30 = ((~217) ^ ((12 | (arr_27 [i_1]))));
                arr_32 [i_1] [i_1] [i_1] = ((-((max((arr_24 [i_1]), 0)))));
            }
            arr_33 [i_1] [i_1] [i_1] = (((1 ? var_3 : var_4)));
            arr_34 [i_1] [i_9] [i_1] = 8176;
            arr_35 [i_1] = (max((arr_16 [i_1] [i_9] [i_9] [i_9]), (~var_13)));
        }

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_31 = (min(1, (min(337770711, 1122300271))));
            var_32 = ((~(arr_30 [i_12])));
            arr_40 [i_1] [i_1] [i_1] = (((max(13308233255307582064, (arr_3 [i_1])))) ? (var_5 <= var_5) : (arr_8 [i_1] [i_12] [i_12] [i_12]));
            arr_41 [i_1] [12] &= 44119;
            arr_42 [i_1] [i_12] = (max(((var_11 ? (!var_15) : 1)), ((((min((arr_16 [i_1] [i_12] [i_12] [i_12]), var_13))) / (arr_21 [i_1] [i_12] [i_12])))));
        }
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 19;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    {
                        var_33 = var_2;
                        arr_52 [i_13 + 1] [i_14] [i_15] [i_15] [i_13] = ((-(((arr_43 [i_13]) % var_7))));
                        arr_53 [i_13] [i_14] [1] [i_16] = 4167216737;
                        var_34 = var_4;
                        arr_54 [i_13] [i_13] [i_15] [19] = ((arr_45 [i_13 + 1] [i_13]) ? (arr_45 [i_13 - 2] [i_13]) : (arr_45 [i_13] [i_13]));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 18;i_18 += 1)
            {
                {
                    arr_61 [8] [i_13] [i_13] [i_13] = (!var_12);
                    var_35 *= (5487 / 796377204);
                }
            }
        }
    }
    var_36 = ((var_3 ? (((min(-1, 65522)))) : (max(((min(var_14, var_9))), (var_7 ^ var_14)))));
    #pragma endscop
}
