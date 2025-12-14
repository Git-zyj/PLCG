/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113893
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (!((_Bool)0)))) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (-1468629369))))))))))));
                                var_11 = (~(((/* implicit */int) var_6)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1]))))));
                                var_12 |= ((/* implicit */unsigned long long int) var_3);
                                var_13 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_20 [i_0] [i_1] [i_5] [i_6] [i_7])), (arr_15 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)144)) : (arr_0 [i_0] [3]))))))) <= (((/* implicit */int) min((arr_20 [(unsigned char)2] [i_0] [i_1 + 1] [i_6 + 2] [i_7]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) 394246286282198747LL)) ? (max((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1 - 3] [i_1 + 1] [i_5])) ? (arr_5 [i_0] [i_1] [(unsigned short)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [4] [i_5]))))))) : (((((/* implicit */_Bool) arr_3 [i_5])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11261))) * (arr_5 [i_0] [23ULL] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0] [18LL] [i_1 - 3] [i_1 - 1] [i_5] [i_5]))))))))))));
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_15 ^= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_8] [i_1 - 3] [(short)22])) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (4611686018427387872LL)))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (((((arr_10 [i_0] [i_1 - 2] [i_1] [i_1] [i_5] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_0] [(unsigned short)7] [i_1 - 1] [i_5] [i_8] [i_8])), (arr_20 [i_0] [(short)2] [i_0] [15] [i_1 + 1])))))));
                    }
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(arr_11 [i_0] [i_1 - 3] [i_5] [i_9]))))));
                        var_18 -= ((/* implicit */signed char) var_7);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 1) 
                        {
                            arr_31 [1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_1] [i_1] [(signed char)1] [i_9] [i_10 - 1]))))) != (((((/* implicit */int) (signed char)110)) * (((/* implicit */int) (unsigned short)44208))))));
                            var_19 = ((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_10]);
                            arr_32 [i_1 + 1] [i_5] [i_1] [i_10 + 2] = ((/* implicit */short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (short)-11261))));
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                            var_21 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_2 [(unsigned short)6] [(unsigned short)6])) * (((/* implicit */int) var_2)))));
                        }
                        var_22 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [(_Bool)1] [2ULL]))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        arr_35 [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) % (((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_5] [i_11] [i_11]))))) + (((/* implicit */int) var_2))))));
                        /* LoopSeq 2 */
                        for (short i_12 = 4; i_12 < 23; i_12 += 3) 
                        {
                            var_23 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) (unsigned short)44220)))));
                            var_24 = ((max((min((var_8), (((/* implicit */long long int) arr_8 [i_0] [i_1] [(signed char)4] [(unsigned short)21] [(_Bool)1] [16LL])))), (((/* implicit */long long int) ((unsigned short) (short)-11260))))) <= (((/* implicit */long long int) ((/* implicit */int) var_9))));
                        }
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_1 - 1] [i_11]))) - (((((/* implicit */unsigned long long int) arr_6 [(_Bool)1])) / (((((/* implicit */_Bool) arr_21 [i_0] [(signed char)16])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_13] [i_5]))))))))))));
                            arr_42 [i_1] = ((/* implicit */int) (+(((((min((var_8), (((/* implicit */long long int) arr_40 [i_5] [(unsigned char)4])))) + (9223372036854775807LL))) >> (((((var_1) / (((/* implicit */long long int) ((/* implicit */int) (short)32764))))) - (52118281417826LL)))))));
                            var_26 = ((/* implicit */long long int) (signed char)14);
                            var_27 = ((/* implicit */short) (!(((_Bool) ((((/* implicit */_Bool) 465323891)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_33 [i_0] [i_5])))))));
                        }
                    }
                    for (long long int i_14 = 2; i_14 < 23; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) var_4);
                            var_29 += ((/* implicit */_Bool) (+(arr_30 [i_0] [i_1 + 1] [(unsigned char)2] [i_14] [(unsigned char)22])));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [i_0] [(_Bool)1] [i_14] [i_15]) + (((/* implicit */unsigned long long int) 8562839460404581977LL))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [19ULL])) ? (67108863ULL) : (((/* implicit */unsigned long long int) var_7)))))))));
                            arr_47 [i_0] [i_1] [i_1 - 1] [i_5] [i_14] [i_1] [i_15] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_3)) <= (((((/* implicit */int) arr_9 [(unsigned char)8] [i_1] [i_5] [i_14 + 1])) % (((/* implicit */int) var_3)))))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (min((var_4), (((/* implicit */unsigned long long int) arr_4 [i_14] [i_15]))))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_1 - 3] [i_14 - 1] [i_14] [8LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_1 - 3] [i_14 - 1]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_44 [13] [i_1] [i_14] [i_15])))) & ((~(((/* implicit */int) arr_1 [i_15])))))))));
                        }
                        for (unsigned short i_16 = 2; i_16 < 22; i_16 += 3) 
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1 - 2] [(_Bool)1] [(short)11]))) >= (min((arr_21 [i_1] [i_16 - 2]), (((/* implicit */unsigned long long int) var_0))))))) * (((/* implicit */int) arr_37 [i_0] [i_0] [i_1 + 1] [i_5] [i_14] [i_14] [i_16 - 1])))))));
                            var_33 = ((/* implicit */int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_0))))) : (((var_4) - (arr_11 [1] [i_1] [i_5] [i_14]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_5] [i_14]))) : (var_4)))) ? (((/* implicit */int) (signed char)-117)) : (((((/* implicit */int) var_6)) - (var_7))))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_7)), (var_1))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) == (var_8)))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) arr_37 [i_0] [5] [0] [i_14 - 2] [i_14] [i_14] [i_16])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_5] [i_5] [i_16]))))))))))));
                        }
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_6))));
                        var_36 += arr_38 [i_0] [i_1] [i_1 - 2] [i_5] [i_14 + 1];
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 22; i_17 += 3) 
                {
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        {
                            arr_55 [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_17 + 2] [i_17] [i_18])) ? (arr_21 [i_1] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [19U] [i_1 + 1] [i_17] [i_18])))))))) ? ((+(min((((/* implicit */int) arr_13 [i_1])), (arr_30 [i_0] [i_1 + 1] [i_1] [i_17 - 2] [i_1]))))) : ((+(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_13 [i_17]))))))));
                            var_37 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1 - 3] [i_17 + 2] [i_17 - 2] [i_17 - 2])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    arr_60 [i_0] [i_1] [i_1 + 1] [i_19] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_19]))) : (var_1))) == (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [23] [7])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-32761)))))));
                    var_38 = ((/* implicit */_Bool) ((unsigned char) arr_46 [i_1 + 1] [i_1 - 1]));
                }
            }
        } 
    } 
    var_39 = ((/* implicit */int) (((-(var_4))) - (((/* implicit */unsigned long long int) min((((((var_8) + (9223372036854775807LL))) << (((((((/* implicit */int) var_2)) + (106))) - (11))))), (((/* implicit */long long int) var_0)))))));
}
