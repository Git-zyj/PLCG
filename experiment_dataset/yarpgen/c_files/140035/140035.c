/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_19 = ((1 ? -466130778 : 8565));
                            var_20 = 1;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_21 = ((var_12 ^ (arr_16 [i_0 + 2] [i_0] [i_0 - 3] [i_0] [i_3])));
                            var_22 = (0 ? 0 : 3752814848);
                            var_23 = 2147483647;
                            var_24 = 17739257933441412823;
                            var_25 = var_17;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_26 += ((3474446968344221609 > (var_13 * 17228868682779875150)));
                            var_27 = var_6;
                        }
                        var_28 = (arr_10 [6] [i_3]);
                        var_29 = ((~(arr_12 [i_0 + 1] [i_0] [i_1] [i_1] [i_0])));
                        var_30 = (((((var_3 ? 0 : 3474446968344221609))) ? ((((arr_9 [i_0 - 1] [i_1] [1] [i_3]) ? var_11 : 0))) : (arr_1 [i_0])));
                        var_31 = ((~(arr_2 [i_0 - 3] [i_0 - 3])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_32 = var_8;
                            var_33 -= var_14;
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 22;i_9 += 1)
                        {
                            var_34 = (arr_11 [i_0] [i_0 + 1]);
                            var_35 = (var_9 < -6504803928179792872);
                        }
                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            var_36 = (min(236, var_9));
                            var_37 ^= (arr_4 [i_0 + 1]);
                            var_38 = ((!((min(3474446968344221609, (((1980908750 ? 2147483647 : (-2147483647 - 1)))))))));
                        }

                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_39 = var_9;
                            var_40 = -var_7;
                            var_41 = (!3474446968344221609);
                            var_42 = (min(-1217875390929676465, (-10 / 224)));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_43 += ((((((arr_14 [i_12] [i_12] [i_2] [i_7] [i_1]) <= var_18))) | (arr_19 [i_0 + 1] [i_1])));
                            var_44 = ((var_12 & (arr_1 [i_0 - 1])));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_45 = ((((min((arr_37 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 2]), 644039610))) + (arr_21 [i_7] [i_0] [i_0] [19])));
                            var_46 = (arr_27 [i_13] [14] [i_7] [i_2] [14] [i_1] [3]);
                            var_47 = (arr_3 [14]);
                        }
                        var_48 = ((-var_4 + (((var_14 ? (arr_8 [i_0] [i_1] [i_2] [13]) : var_4)))));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_49 = 14972297105365330006;
                        var_50 = 644039610;
                        var_51 = 1;
                        var_52 = (min((((((min(var_11, var_12)))) + 35465847065542656)), (arr_32 [i_0] [i_1] [i_1] [i_1] [i_0] [i_14])));
                    }
                    var_53 = 0;
                }
            }
        }
    }
    var_54 *= var_0;
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                var_55 = (var_16 ? -975498718 : (arr_53 [i_15] [i_16] [i_17] [i_18] [i_16]));
                                var_56 = ((1 ? (min(((min(850589681, (arr_30 [i_16] [i_16])))), -var_4)) : var_11));
                            }
                        }
                    }
                    var_57 = ((((-(arr_15 [i_17] [i_16] [i_16] [2] [i_17]))) + (-3089 < 0)));
                }
            }
        }
    }
    var_58 = (max(var_58, var_11));
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 23;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 23;i_21 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 23;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        {
                            var_59 = ((-(arr_13 [i_20] [i_21] [i_21] [8] [i_23])));
                            var_60 = ((((min(-1, 0))) >= var_14));
                        }
                    }
                }
                var_61 = (arr_40 [i_21]);
            }
        }
    }
    #pragma endscop
}
