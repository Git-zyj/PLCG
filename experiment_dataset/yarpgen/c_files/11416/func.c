/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11416
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */signed char) arr_0 [i_0 - 2]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_17 &= ((1947557061) / (33554431));
            /* LoopSeq 4 */
            for (unsigned short i_2 = 4; i_2 < 24; i_2 += 3) 
            {
                var_18 = ((/* implicit */short) var_14);
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -33554431)) ? (503418338) : (33554431)));
                            arr_16 [i_4] [i_3 + 1] [i_2 + 1] [i_4] &= ((/* implicit */signed char) var_1);
                            arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_5 = 3; i_5 < 22; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_5] [i_1] = var_10;
                        var_20 = ((/* implicit */long long int) (-(0U)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_21 += ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) 33554430)) : (18446744073709551615ULL)));
                        arr_26 [i_0] = ((/* implicit */_Bool) var_6);
                    }
                    arr_27 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((-1240325411) ^ (((/* implicit */int) (unsigned char)16))));
                }
                for (short i_8 = 3; i_8 < 22; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_22 = ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) var_5)));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_13 [i_9] [i_8] [18ULL] [(unsigned short)8] [(unsigned short)8]))));
                    }
                    for (int i_10 = 1; i_10 < 24; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */int) var_10);
                        arr_36 [i_0] [(short)14] [i_2 - 2] [(short)14] [i_8 - 2] [i_0] = ((/* implicit */int) arr_31 [i_0 + 1] [i_2 - 2]);
                        var_25 = ((/* implicit */signed char) ((18446744073709551615ULL) / (11566321840431877892ULL)));
                    }
                    var_26 ^= ((/* implicit */_Bool) arr_18 [i_0 + 2] [i_0 + 2] [i_0 + 2] [2LL] [i_0 + 2]);
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        arr_39 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? ((+(-33554431))) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0]))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned char)8] [i_0] [(short)20] [i_0]))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) -1881072897))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_43 [i_8 + 3] [i_8 + 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                        var_29 = ((/* implicit */unsigned short) var_0);
                        arr_44 [i_8] [i_0] [i_2] [i_8] [i_12] [i_1] [i_8 - 2] = ((/* implicit */unsigned char) ((int) (_Bool)0));
                    }
                }
                for (short i_13 = 3; i_13 < 22; i_13 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 3; i_14 < 23; i_14 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)27)) ? (3341034030U) : (((/* implicit */unsigned int) -1))));
                        arr_50 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_47 [i_0] [i_0] [i_13 - 1] [i_14]);
                        var_31 = ((/* implicit */unsigned long long int) var_9);
                        arr_51 [22U] &= ((/* implicit */_Bool) 0U);
                    }
                    arr_52 [i_0] [i_1] [i_0] [i_13] [i_2] = arr_3 [i_0];
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        arr_56 [i_0] = ((/* implicit */unsigned int) var_8);
                        arr_57 [i_0] = arr_45 [7LL] [i_1] [i_0];
                        arr_58 [i_0] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_15] [i_0] [11ULL] [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned int) 33554431))));
                        var_32 = ((/* implicit */short) (_Bool)1);
                    }
                    for (short i_16 = 1; i_16 < 23; i_16 += 2) 
                    {
                        arr_63 [i_0 - 1] [i_16] [i_2] [i_0] = ((/* implicit */_Bool) var_11);
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)115))));
                        arr_64 [i_0] [i_0 + 2] [i_1] [1U] [i_13 + 3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (4096ULL) : (((/* implicit */unsigned long long int) 33554430))));
                        arr_65 [i_0] [i_1 - 1] [i_2 + 1] [i_2 + 1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        arr_66 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] = var_6;
                    }
                }
            }
            for (unsigned short i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
            {
                arr_71 [i_0] [i_1 - 1] [12] [i_1] = arr_10 [i_1] [i_0];
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))));
                arr_72 [i_0] = ((/* implicit */unsigned short) (+(-33554432)));
            }
            for (unsigned short i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
            {
                arr_77 [i_1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */_Bool) (((_Bool)1) ? ((-(3048632934U))) : (var_1)));
                var_35 = ((/* implicit */unsigned int) arr_76 [i_0] [i_0 - 1] [i_0] [i_0]);
                var_36 -= ((/* implicit */_Bool) ((long long int) (_Bool)0));
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))));
            }
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)44387)) : (((/* implicit */int) (_Bool)0)))))));
                    arr_82 [i_0] [i_19] [i_0] [i_0] = ((/* implicit */unsigned int) arr_79 [i_0]);
                    var_39 ^= ((((/* implicit */_Bool) (unsigned short)27734)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (signed char)-32)));
                }
                for (int i_21 = 1; i_21 < 24; i_21 += 3) 
                {
                    var_40 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)126))));
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 1; i_22 < 24; i_22 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)178)) ? (var_12) : (((/* implicit */int) (unsigned short)63183)))))))));
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) arr_69 [24]))));
                        arr_88 [i_0] [i_0] [i_19] [i_0] [i_22 - 1] [i_1 - 1] = ((/* implicit */short) arr_22 [(unsigned short)8] [i_0]);
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) var_9))));
                    }
                    for (long long int i_23 = 0; i_23 < 25; i_23 += 2) 
                    {
                        arr_93 [i_0] [i_0] [i_23] [(unsigned short)0] [i_0] |= ((/* implicit */_Bool) var_6);
                        arr_94 [i_0] = arr_53 [i_0 + 1] [i_0 + 1] [i_19] [i_0] [(unsigned char)12];
                    }
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 25; i_24 += 3) 
                    {
                        var_44 = ((/* implicit */int) ((_Bool) (_Bool)1));
                        var_45 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24531))));
                        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned short)0)))))));
                    }
                    var_47 = ((/* implicit */int) min((var_47), (((((/* implicit */_Bool) (unsigned short)65535)) ? (-1) : (((/* implicit */int) (_Bool)0))))));
                }
                arr_98 [i_0] [2ULL] [i_0 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)77))));
                var_48 = ((/* implicit */signed char) ((((/* implicit */int) (short)0)) < (((/* implicit */int) (unsigned short)29095))));
                arr_99 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) (~(2369822706072671357ULL)));
                arr_100 [i_0] [i_0 + 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)36563)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))));
            }
        }
        for (int i_25 = 0; i_25 < 25; i_25 += 3) 
        {
            arr_103 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1137324331)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17067)))));
            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) ? (-1) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3802667155276235678LL))))));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_26 = 2; i_26 < 12; i_26 += 3) 
    {
        var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        arr_108 [i_26] [i_26 + 2] = ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
}
