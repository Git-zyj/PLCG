/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((-(((var_6 >= ((max(-13, var_14))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_16 = (((((0 >> (((max((arr_0 [i_0]), var_6)) - 156893088538947139))))) ? ((max((!6), -1))) : (((((var_7 ? var_13 : 43472310))) ? (arr_1 [i_0 + 1]) : 4251494999))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 = var_8;
                        arr_11 [0] [i_2] [i_2] [i_2] [i_2] [i_2] = (14 & var_3);
                        var_18 = ((((var_5 >> (var_9 - 20471))) != (arr_8 [i_2])));
                        var_19 = ((var_12 ? var_13 : var_1));
                    }
                }
                var_20 = (arr_4 [i_0] [i_0 - 2]);
                var_21 += var_4;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_22 = (-9223372036854775807 - 1);
                    arr_15 [i_0] [i_0] [i_0] = 32760;
                }

                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            arr_27 [i_1] [i_5] [i_5] [i_1] [i_5] [i_0] = ((((max(14, (arr_7 [i_1] [i_5])))) || ((((arr_22 [i_0 - 2] [i_0 - 1]) >> (arr_22 [i_0 - 2] [i_1 - 2]))))));
                            var_23 = var_12;
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_24 = max(var_13, (((arr_3 [i_0 + 1] [i_0 - 1]) ? var_2 : (arr_3 [i_0 + 1] [i_0 - 1]))));
                            var_25 = (((((((arr_8 [i_5]) ? (arr_10 [i_1] [i_5] [i_5] [i_1]) : var_5)) / 3)) <= 13923));
                            var_26 = min(-1425458706, (((5662010601105448321 ? -65525 : ((var_14 ? (arr_10 [i_6] [i_5] [i_5] [i_0]) : 19))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_5] [i_5] [i_5] [i_6] [i_5] = ((-196398464 ? (((arr_12 [i_0] [1] [i_5]) - 196398439)) : (!18874)));
                            arr_34 [i_0] [i_0] [i_5] [i_5] [i_6] [i_9] [i_9] = 23;
                            var_27 = (min(var_27, 86));
                            var_28 = 51619;
                            var_29 = (((arr_28 [i_1 - 1] [i_5]) >> (((arr_13 [i_0 - 2] [i_1] [i_0 - 2] [i_1 - 1]) - 384))));
                        }

                        for (int i_10 = 4; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_0 - 1] [i_5] [i_6] [i_10 - 4] = (max(32536, (-9223372036854775807 - 1)));
                            arr_38 [i_5] = (((!236) ? 30720 : (167 ^ 57331)));
                            var_30 ^= (max(((((var_9 ? (arr_25 [8] [i_6] [i_5] [i_0] [8]) : -115)) >> ((86 ? 0 : var_7)))), 89));
                        }
                        /* vectorizable */
                        for (int i_11 = 4; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            var_31 = ((-6138400499817607444 - (((-(arr_12 [i_0 - 2] [i_0 - 2] [0]))))));
                            var_32 = 576320014815068160;
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        var_33 |= (((arr_22 [i_0 - 1] [3]) & (arr_19 [i_12] [i_5] [i_1] [10])));
                        var_34 = (max(var_34, (((((((arr_14 [i_12]) & (arr_19 [i_0 - 1] [i_1 + 1] [i_5] [i_12])))) ? (((arr_8 [1]) ? 2830536540 : (arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))) : (((((arr_19 [i_0] [i_1] [i_5] [1]) || 9201)))))))));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_1 + 1] [i_13] [i_5] [i_5] [i_1 + 1] [i_0] = ((var_6 ? 99 : ((((var_13 && (arr_23 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]))) ? ((min(248, 161))) : (var_1 || 1090711428)))));
                        var_35 = (((arr_2 [2]) ? (((var_10 ? 1 : (arr_40 [i_1 + 1] [i_0 + 1])))) : (min(((112 ? (arr_43 [i_5]) : 141)), (arr_21 [10] [10] [i_5])))));
                        var_36 = ((-(arr_19 [i_13] [4] [i_0 - 2] [i_0 - 2])));
                    }
                    var_37 = ((-70300024700928 && ((max((arr_3 [i_0 + 1] [i_0 - 2]), (-127 - 1))))));
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                {
                    arr_50 [i_0 - 2] [i_14] [i_1 + 1] [i_14] = ((((((arr_44 [i_0] [i_0 - 2] [5] [i_0 - 1]) & -6138400499817607455))) ? ((max((arr_2 [i_0]), var_5))) : var_7));
                    var_38 |= (((arr_32 [0]) / (arr_49 [i_0] [i_1 - 2])));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_39 ^= (arr_2 [i_0 + 1]);
                                var_40 = ((var_5 ? -6138400499817607444 : ((((arr_39 [2]) / var_4)))));
                            }
                        }
                    }
                    arr_61 [i_0 - 2] [1] [i_0 - 2] [0] = arr_39 [1];
                }
            }
        }
    }
    var_41 -= var_7;
    #pragma endscop
}
