/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186770
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned int) max((((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [1ULL] [i_4] [i_2] [i_3] [i_3] [i_0])) || (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) ((int) var_10)))))), (max(((short)23881), (((/* implicit */short) (unsigned char)239))))));
                                var_19 += ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_3] [(unsigned short)4])), (((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (unsigned short)28890))))));
                                var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_1 + 3]), (((/* implicit */long long int) arr_10 [8] [i_4] [i_1 + 3] [i_3]))))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) min(((unsigned short)6), (((/* implicit */unsigned short) var_12)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1 + 2] [1LL] [i_1] [i_1 - 1]))));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 13686600879164527135ULL)) ? (1377480955) : (2047289061)));
                            var_23 |= ((/* implicit */unsigned short) (unsigned char)249);
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) var_14);
                            var_25 = ((/* implicit */unsigned short) ((5946057639421930955ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7274)))));
                            var_26 = ((/* implicit */_Bool) (+(((arr_14 [i_0] [i_1] [i_2] [2ULL]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92)))))));
                        }
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1] [(short)2])) >= (((/* implicit */int) arr_0 [i_1 + 1] [i_2]))));
                            var_28 -= ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)1)) : (-1180349553))))));
                            arr_23 [i_0] [(_Bool)1] [10U] [i_0] [i_5] [i_8] [i_8] |= ((/* implicit */unsigned long long int) ((unsigned int) arr_17 [8LL] [(unsigned char)11] [i_2] [i_5] [i_5]));
                            var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1526514274)) ? (var_9) : (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))))))) : (var_14)));
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        arr_27 [8U] [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) ((int) var_9))) ? (max((((((/* implicit */_Bool) 7550174740071748743ULL)) ? (4204540583287291250ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), ((~(var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 772222346))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24804)))))))));
                        arr_28 [(short)9] [i_9] [i_2] [i_1] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) arr_14 [1LL] [i_1] [1LL] [8LL]);
                    }
                    var_30 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (unsigned short)34683)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (-2074199921) : (((/* implicit */int) var_17)))))));
                }
                for (int i_10 = 2; i_10 < 10; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */short) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 3757433916U)))))));
                                arr_36 [i_0] [(short)6] [(_Bool)1] [i_10] [i_12] [4] [i_12] &= ((/* implicit */short) var_15);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */short) min((((long long int) (((_Bool)1) ? (1469679010927091022ULL) : (((/* implicit */unsigned long long int) 1720316379))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)32758)))))));
                }
                /* vectorizable */
                for (unsigned char i_13 = 3; i_13 < 10; i_13 += 3) 
                {
                    var_33 ^= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 1520714625)) : (3777113203963152703LL))));
                    arr_40 [i_1] [(short)4] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_13 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_13 + 2]))) : (arr_18 [i_13 + 2] [i_0] [(_Bool)1] [i_1])));
                    var_34 -= ((/* implicit */short) (!(((/* implicit */_Bool) -4823986116882876943LL))));
                    var_35 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (short)-15743))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4933817833021705239LL)) || (((/* implicit */_Bool) var_5))))) : ((~(((/* implicit */int) (signed char)114))))));
                    arr_41 [i_1] [i_1] [2U] = arr_39 [i_0] [i_0] [i_1] [i_1];
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    var_36 ^= ((/* implicit */unsigned char) ((int) var_2));
                    var_37 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60694))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) -15)) : (-5350593232889681291LL)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_15))) : ((+(var_6)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        var_38 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (arr_17 [i_0] [i_1] [4U] [10U] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))))) << ((~(4294967295U)))));
                        var_39 -= ((/* implicit */short) ((0ULL) > (((/* implicit */unsigned long long int) ((3858853606060967978LL) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_14] [i_14]))))))));
                        arr_47 [i_1] = (~(((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(unsigned char)0] [(short)2])) ? (var_2) : (((/* implicit */int) (unsigned char)138)))));
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_0))))));
                            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (-(var_7))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (short i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                    {
                        arr_52 [i_0] [0] [i_1] = max(((-(var_10))), (((/* implicit */int) (signed char)(-127 - 1))));
                        var_42 ^= ((/* implicit */int) min(((!(((/* implicit */_Bool) var_8)))), ((((_Bool)1) && (((/* implicit */_Bool) 0ULL))))));
                        var_43 = ((/* implicit */int) arr_8 [(short)4] [(unsigned char)7] [3] [i_17] [0U]);
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -3543916789281791258LL)))))) : (((((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)20517)))))) ? (((/* implicit */unsigned long long int) arr_35 [i_0] [10LL] [i_0] [3ULL] [i_1] [10LL] [(short)4])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_14)))))));
                        var_45 *= ((/* implicit */unsigned long long int) ((int) 133169152U));
                    }
                    for (short i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
                    {
                        arr_56 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1] [i_18]))) ? ((~(((var_2) ^ (((/* implicit */int) var_17)))))) : ((~(((/* implicit */int) arr_38 [i_0] [i_1] [i_14]))))));
                        var_46 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)24476))) | (0LL))) > (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))))), (((unsigned long long int) ((((/* implicit */_Bool) 2147483634)) ? (((/* implicit */int) (unsigned short)18891)) : (var_10))))));
                    }
                    for (short i_19 = 0; i_19 < 12; i_19 += 4) /* same iter space */
                    {
                        var_47 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_4)))));
                        var_48 = ((/* implicit */short) (+((+((~(((/* implicit */int) (signed char)42))))))));
                        var_49 *= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)38567)) : (((/* implicit */int) arr_51 [i_0] [i_1] [i_14] [(short)4]))))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) ((((var_13) < (((/* implicit */unsigned long long int) 0)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_44 [i_0] [i_1] [2U] [i_19] [i_0])) : (((/* implicit */int) var_11)))) : (max((499706225), (((/* implicit */int) (signed char)116))))))));
                        arr_59 [i_1] [(short)7] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)234))));
                    }
                }
                var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-25405)) | (((((/* implicit */int) (short)-1)) + (((/* implicit */int) (short)32746))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (-1762421382) : (((/* implicit */int) (signed char)-93)))) : ((+(((/* implicit */int) ((unsigned char) (signed char)1))))))))));
            }
        } 
    } 
    var_51 ^= ((/* implicit */signed char) min((var_9), (((/* implicit */unsigned int) var_17))));
    var_52 -= ((/* implicit */long long int) max((((/* implicit */short) max((((var_1) > (((/* implicit */long long int) 969431358)))), (((((/* implicit */_Bool) var_5)) || (var_12)))))), (((short) (+(((/* implicit */int) (unsigned short)58307)))))));
}
