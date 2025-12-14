/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15227
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
    var_14 += ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) 0)) ? (-1) : (((/* implicit */int) var_5)))))), (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((short) arr_3 [8ULL] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44602)) && (((/* implicit */_Bool) 9))))) : (((/* implicit */int) (short)-17151))));
                var_16 = ((((((/* implicit */_Bool) var_1)) || (var_13))) ? (min((((/* implicit */unsigned long long int) -1)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 29ULL)) ? (13) : (2147483647)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) -1);
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [i_1 - 4] [i_1] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [(unsigned char)11] [i_1] [i_2] [i_3])) | (arr_0 [i_0] [i_3])))) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_2] [(short)8])) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_2] [i_3])) : (18446744073709551586ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_3 [i_0] [(unsigned char)2] [i_0]))))) : (((/* implicit */int) (!((_Bool)1))))));
                            var_21 = arr_2 [i_0] [i_1] [i_4];
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_2] [i_1 - 2] [i_1 - 3]))));
                            var_23 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) var_4)));
                            var_24 -= ((/* implicit */unsigned short) ((((-1054027020) > (((/* implicit */int) var_8)))) ? (-29) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_5]))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) var_1);
                    }
                    var_26 = ((/* implicit */_Bool) arr_5 [(unsigned char)9] [i_1] [i_0]);
                }
                for (short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) (~(((int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_11)))))));
                    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_12))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((_Bool) ((((arr_1 [i_1]) + (2147483647))) >> (((((((/* implicit */_Bool) arr_5 [(unsigned char)0] [i_1] [11LL])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))))) - (1209883552791772107LL))))));
                        var_30 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7 - 1] [6U] [i_7 - 1])) && (((_Bool) var_11)))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_6] [i_8 - 1]))) : (arr_15 [i_0] [i_1 - 3] [i_6] [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-17139))))) : (arr_20 [i_1 + 1] [9] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8])))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [11ULL] [i_1] [i_1] [i_8] [i_8 - 1] [i_8])) ? (((((/* implicit */_Bool) (signed char)-44)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17151))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (unsigned char)94))))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            var_33 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_11), ((_Bool)1)))))))));
                            var_34 = ((/* implicit */unsigned short) min(((~(arr_20 [i_1 - 4] [i_8 - 1] [i_9] [i_9] [i_9 + 3] [i_9 + 3]))), (1030792151040ULL)));
                            var_35 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_0 [i_0] [(_Bool)1])));
                            var_36 ^= ((/* implicit */unsigned short) ((var_13) ? (min((arr_0 [i_9 + 4] [i_8 - 1]), (arr_0 [i_9 - 1] [i_8 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (int i_10 = 2; i_10 < 11; i_10 += 2) 
                        {
                            arr_27 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)17150)) ? (((unsigned int) max((7703174153662135071ULL), (((/* implicit */unsigned long long int) -596323441))))) : (((/* implicit */unsigned int) (((_Bool)0) ? (596323456) : (((/* implicit */int) arr_17 [i_10 + 1] [i_10] [i_10 + 2] [i_10])))))));
                            var_37 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_10 + 1])) && (((/* implicit */_Bool) 1167509711571900943ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_11))))) : (max((17279234362137650675ULL), (((/* implicit */unsigned long long int) 2147483635))))));
                            arr_28 [i_0] [i_1 - 1] [i_6] [i_8] [i_10 - 2] [i_10] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) var_13)), (156242453U)))));
                        }
                        for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((unsigned long long int) 4138724846U)) : (arr_0 [i_8 - 1] [i_1 - 2])))));
                            var_39 = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) 18446744073709551580ULL)) ? (156242453U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [i_11 - 2] [i_1 - 2] [i_8 - 1] [i_8]), (((((/* implicit */_Bool) 29ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8]))) : (-9223372036854775791LL)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) 8692715392495862067ULL))))))));
                        }
                        var_41 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_13 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) 9)))))))), (((((/* implicit */_Bool) -8)) ? (((((/* implicit */_Bool) 2147483647)) ? (12856518614483833278ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) 140678269))))));
                        var_42 = ((/* implicit */int) (unsigned short)32985);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (var_2)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (arr_7 [i_0] [i_1] [11U] [8ULL]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)51441))))));
                        var_44 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (140678269) : (((/* implicit */int) (unsigned short)13073))));
                    }
                }
                for (unsigned short i_13 = 1; i_13 < 10; i_13 += 4) 
                {
                    var_45 = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) -9)) ? (-7) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned char) 3520762193159363286LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 4) 
                    {
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            {
                                var_46 *= ((/* implicit */_Bool) (-((+(53ULL)))));
                                var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_48 = var_7;
    var_49 = ((/* implicit */unsigned short) min((var_49), (((unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_2)) : (var_0))))))));
}
