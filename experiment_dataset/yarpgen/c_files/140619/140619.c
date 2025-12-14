/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = var_10;
        var_12 = ((~(((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [14])))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_13 = (min(var_13, ((((arr_5 [i_1]) ? (arr_4 [i_1]) : ((~(arr_0 [i_1 + 3]))))))));
        var_14 = ((((((!(arr_5 [i_1]))))) % (arr_1 [i_1] [i_1])));
    }
    var_15 = ((+((var_6 ? (!5462016591081584352) : var_7))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_16 = ((-(~1447314074732868605)));
                        var_17 = arr_0 [i_2];
                    }
                }
            }
        }
        arr_15 [i_2] [i_2] &= (~13786840183290129702);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_18 = (min(var_18, var_6));

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    arr_27 [6] [i_6] [i_6] [i_6] [i_6] [6] |= (arr_22 [8]);
                    var_19 = (~var_3);
                    arr_28 [i_6] [i_6] [i_7] [i_7] [i_6] [i_9 - 1] = ((!((((arr_17 [i_6]) | var_10)))));
                }
                var_20 = (~5462016591081584352);
                arr_29 [i_6] [i_6] [i_8] = var_8;
                arr_30 [1] [i_6] = ((!(arr_20 [i_6])));

                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_21 = ((~((~(arr_1 [i_7] [i_8])))));
                    arr_34 [i_6] [i_7] [i_7] [i_6] = arr_16 [i_7] [i_8];
                    var_22 = var_8;
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, (arr_24 [i_6] [10] [i_6] [10])));
                    var_24 = ((((((arr_23 [i_6] [i_6] [i_8] [i_11]) ? -111 : 206702156))) == ((var_0 ? var_0 : var_2))));
                    var_25 = (min(var_25, 0));
                    arr_37 [i_8] [6] &= (arr_33 [i_11] [i_6] [4] [i_6]);
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_26 &= var_10;
                        var_27 = (max(var_27, (((((arr_18 [2]) ? var_7 : var_0))))));
                        arr_44 [4] [i_7] [i_8] [i_6] [i_12] [i_13] = (arr_17 [i_6]);
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_28 *= (((arr_31 [6]) & (arr_26 [i_6] [i_8] [i_8] [14] [4])));
                        arr_47 [i_6] [i_6] [i_6] [i_6] [i_14] = (((-5226814620677115460 ? 3092111988622154303 : -110)));
                    }
                    var_29 = (arr_35 [i_6] [i_7] [i_6] [i_7]);
                    arr_48 [i_6] [i_6] [i_8] [15] [i_8] [i_6] = arr_43 [i_6] [i_6] [i_6] [i_6] [i_6];
                }
            }
            var_30 = (arr_45 [i_6] [i_6] [i_6] [i_6] [11]);
            arr_49 [i_6] [i_6] = (arr_41 [i_6] [i_6] [i_6]);
        }
        arr_50 [i_6] [4] |= var_5;
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {

                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        var_31 -= (((arr_58 [i_6] [i_15] [i_6] [i_15]) ? (((var_2 < (arr_53 [i_17] [i_16] [i_16] [i_6])))) : (arr_46 [i_6] [i_6] [8] [i_6] [i_6] [i_6] [i_6])));
                        var_32 ^= ((var_6 <= (~-105)));
                        var_33 = (min(var_33, (-105 <= 8329145674939632332)));
                        arr_60 [i_6] [i_16] [i_16] [i_6] [i_17] = (arr_18 [i_6]);
                    }
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {

                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            var_34 = var_0;
                            var_35 &= (arr_19 [i_6]);
                        }
                        arr_68 [i_6] [1] [i_16] [10] = (--2104936263);
                    }

                    for (int i_20 = 2; i_20 < 15;i_20 += 1)
                    {
                        var_36 ^= (arr_17 [i_16]);

                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            var_37 = var_9;
                            arr_75 [i_6] = (arr_1 [i_20 + 1] [i_20 + 1]);
                        }
                        for (int i_22 = 2; i_22 < 13;i_22 += 1)
                        {
                            var_38 = var_0;
                            var_39 = (max(var_39, (((!(arr_43 [i_15] [i_22 + 1] [i_22] [i_22] [i_22]))))));
                            var_40 = (var_2 ? var_4 : (((arr_62 [i_6] [i_6] [i_16] [i_15] [i_6] [i_6]) ? (arr_46 [i_22] [i_22] [i_16] [i_22] [i_22] [i_20 - 1] [15]) : (arr_40 [i_6]))));
                        }
                    }
                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {

                        for (int i_24 = 0; i_24 < 16;i_24 += 1)
                        {
                            var_41 = (arr_0 [i_6]);
                            var_42 = (max(var_42, (2104936268 < var_2)));
                            var_43 -= ((!(arr_46 [i_24] [i_24] [i_23] [i_16] [i_15] [i_6] [i_6])));
                            var_44 *= ((((((var_2 + 9223372036854775807) >> (((arr_66 [i_15] [i_15] [i_16] [i_23] [i_23]) - 1314573348802711488))))) ? -94 : (arr_63 [i_15] [i_23] [i_24])));
                        }
                        arr_83 [i_6] [i_6] [i_16] [1] = var_4;
                    }
                }
            }
        }
    }
    #pragma endscop
}
