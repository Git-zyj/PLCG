/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174692
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
    var_17 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_18 = ((/* implicit */int) max((((short) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))), (((/* implicit */short) var_14))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */int) var_10);
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((var_10) ? (var_11) : (((/* implicit */long long int) var_12)))));
                        var_19 = ((/* implicit */_Bool) var_0);
                    }
                }
                /* vectorizable */
                for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    var_20 += arr_15 [i_4] [i_4 - 2] [i_1 - 3];
                    var_21 = ((/* implicit */unsigned int) ((signed char) arr_10 [i_1 - 2] [i_4 + 1] [i_4 + 1]));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)20005)) ? (((/* implicit */int) (short)20001)) : (((/* implicit */int) (signed char)2))));
                }
                var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_0]))))) : (((/* implicit */int) ((_Bool) var_2)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) + (((unsigned int) var_11)))) : (((unsigned int) max(((short)20005), ((short)-20020))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))) ^ (var_0)))) - (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            {
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_4)) ? (arr_20 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_5] [i_6] [i_5])) : ((-(((/* implicit */int) var_13)))))) : (((/* implicit */int) ((unsigned char) var_4))))))));
                /* LoopSeq 4 */
                for (long long int i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 12; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((long long int) max((max((((/* implicit */long long int) arr_18 [i_8])), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_7]))))))));
                        var_27 &= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned int) var_12)) : (((unsigned int) arr_20 [i_5] [i_5])))));
                    }
                    var_28 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_17 [i_6]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))))));
                    var_29 = var_5;
                    arr_25 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_14 [i_5] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6] [i_6 + 2] [i_7 + 1]))) : (((((/* implicit */_Bool) arr_14 [i_5] [i_7])) ? (arr_10 [i_5] [i_6] [i_7]) : (((/* implicit */unsigned int) var_12)))))))));
                    var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_18 [i_6 + 2])) : (((/* implicit */int) var_13)))) < (((/* implicit */int) ((unsigned char) var_11)))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    arr_29 [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) arr_26 [i_6 - 1] [i_6 - 1] [i_9] [i_6 - 1]);
                    arr_30 [i_5] = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_9))))) / (var_1))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((long long int) var_1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16)))))))));
                    arr_31 [i_9] [i_5] = ((/* implicit */_Bool) arr_9 [i_9] [i_6] [i_6] [i_5]);
                    var_31 = ((/* implicit */unsigned int) ((((arr_14 [i_6 + 3] [i_9]) - (arr_14 [i_6 + 2] [i_6]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) arr_7 [i_9])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 4; i_10 < 13; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            {
                                var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((int) var_8))) : (var_15)))) ? (max((((((var_15) + (9223372036854775807LL))) << (((((var_0) + (5588853253918245878LL))) - (36LL))))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_6] [i_10] [i_11])) ? (var_15) : (((/* implicit */long long int) arr_5 [i_11])))))))));
                                arr_37 [i_11] [i_10] [i_5] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) var_12)))) - (((long long int) max((var_12), (((/* implicit */int) arr_34 [i_11] [i_9] [i_9] [i_6])))))));
                            }
                        } 
                    } 
                }
                for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        arr_45 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_15);
                        var_33 = ((/* implicit */unsigned int) var_7);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_15 = 2; i_15 < 12; i_15 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) var_10);
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_6 + 1] [i_6] [i_6 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 - 1] [i_6] [i_6 - 1]))) : (arr_48 [i_6 - 1] [i_6] [i_14] [i_14] [i_15 + 4] [i_15])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((arr_15 [i_6 + 3] [i_6] [i_12]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 + 2] [i_6] [i_12])))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
                        {
                            var_36 = var_10;
                            arr_54 [i_16] [i_16] = ((/* implicit */long long int) ((arr_38 [i_6 + 4] [i_6] [i_6 - 1] [i_6 + 2]) + (((int) 67108863))));
                            arr_55 [i_5] [i_5] [i_16] [i_16] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20017)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29295))) : (var_11)))) ? (((/* implicit */int) var_9)) : (var_12)))), (((max((((/* implicit */unsigned long long int) var_5)), (var_1))) % (((/* implicit */unsigned long long int) var_0))))));
                        }
                        for (short i_17 = 1; i_17 < 12; i_17 += 1) 
                        {
                            arr_58 [i_5] [i_6] [i_12] [i_5] [i_17] [i_17] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) arr_27 [i_5] [i_5] [i_12] [i_12])))) : (((((/* implicit */_Bool) arr_47 [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))) ? ((-(((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (var_5)))))));
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))) ? (arr_52 [i_5] [i_6] [i_12] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((long long int) arr_41 [i_5])))))));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(var_1))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (arr_8 [i_5] [i_12] [i_17]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((var_15) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))))) % (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (var_0)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_5] [i_6] [i_12]))))) : (((((/* implicit */unsigned int) var_12)) - (var_5)))))));
                            var_39 = ((/* implicit */unsigned int) ((short) (signed char)62));
                            arr_59 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((((_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((int) (short)-32755))) : (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_13)) - (7390)))))) ? (arr_8 [i_5] [i_5] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                        {
                            arr_63 [i_5] [i_5] [i_12] [i_5] [i_18] = ((/* implicit */long long int) ((unsigned long long int) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_8 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((unsigned int) var_7)) != (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_5] [i_5] [i_12])) : (arr_38 [i_5] [i_6] [i_5] [i_18]))) >= (((/* implicit */int) ((short) var_10))))))))))));
                            arr_64 [i_5] [i_5] [i_12] [i_12] [i_14] [i_18] = ((/* implicit */int) min((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_26 [i_5] [i_6] [i_6] [i_14])) : (arr_51 [i_12] [i_12] [i_12] [i_12] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))))), (((/* implicit */long long int) ((((unsigned int) var_1)) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6] [i_12] [i_14]))))))));
                            var_41 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_5] [i_6] [i_12] [i_14])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) & (arr_48 [i_6 + 4] [i_6 - 2] [i_6 - 1] [i_6] [i_6 + 2] [i_6])))));
                        }
                        for (short i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                        {
                            var_42 *= ((/* implicit */signed char) ((((unsigned int) arr_23 [i_6 + 2] [i_6 + 2])) >= (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6 + 2] [i_6 + 2]))) : (var_5)))));
                            var_43 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                        }
                        var_44 = ((/* implicit */long long int) (((-(arr_21 [i_14] [i_12] [i_6] [i_5]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_21 [i_5] [i_5] [i_5] [i_5]) == (arr_21 [i_5] [i_5] [i_12] [i_14])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) /* same iter space */
                    {
                        arr_69 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((((/* implicit */_Bool) arr_3 [i_5] [i_12] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_44 [i_5] [i_6] [i_6] [i_12] [i_20]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (var_1)))))));
                        arr_70 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6 + 2] [i_6 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_47 [i_6 + 4])));
                        arr_71 [i_5] [i_12] = ((/* implicit */unsigned int) arr_39 [i_5]);
                        arr_72 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_8);
                        var_45 -= ((/* implicit */unsigned char) var_8);
                    }
                    arr_73 [i_5] [i_6] = ((/* implicit */int) max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (short)-20020)) : (916488586))))));
                    arr_74 [i_6] = ((/* implicit */short) min((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned char) ((_Bool) arr_53 [i_5] [i_5] [i_5] [i_5] [i_5])))))), (((((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (76))))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_6])) & (((/* implicit */int) var_14)))))))));
                }
                /* vectorizable */
                for (signed char i_21 = 1; i_21 < 15; i_21 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        for (long long int i_23 = 0; i_23 < 16; i_23 += 4) 
                        {
                            {
                                arr_82 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = var_14;
                                var_46 += ((/* implicit */signed char) ((long long int) -7799824784669060837LL));
                                arr_83 [i_5] [i_6] [i_5] [i_22] [i_23] [i_23] = ((/* implicit */_Bool) ((short) ((unsigned int) var_10)));
                            }
                        } 
                    } 
                    arr_84 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((short) (signed char)-36));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 1; i_24 < 15; i_24 += 4) 
                {
                    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_0))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 4) 
                            {
                                var_48 = ((/* implicit */long long int) ((short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_5] [i_25] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_13)) ? (arr_32 [i_5] [i_6] [i_6] [i_24] [i_25] [i_26]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_5] [i_6] [i_6] [i_25]))))))));
                                arr_92 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) var_15);
                            }
                        }
                    } 
                } 
                arr_93 [i_5] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
            }
        } 
    } 
}
