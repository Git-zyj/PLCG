/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141638
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    var_11 &= ((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) ((_Bool) (signed char)127)))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */unsigned int) 1678389946)) : (var_9)))))) ? (max((max((((/* implicit */int) var_6)), (var_8))), (((int) var_9)))) : ((~(((/* implicit */int) (signed char)126))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((arr_8 [i_1] [i_3 + 1]), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) arr_4 [i_1])), (arr_12 [i_0] [i_1] [i_1] [i_1])))))));
                                var_14 = ((/* implicit */short) min(((-(((/* implicit */int) arr_3 [i_1 + 3] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) || (((/* implicit */_Bool) min((var_9), (arr_1 [8LL] [8LL])))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) arr_10 [i_0] [i_1] [i_1 + 2] [i_1 + 4] [i_2 + 2] [i_2]))), (((unsigned int) ((((/* implicit */int) arr_11 [i_0] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9])) * (((/* implicit */int) (signed char)-127)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_16 = arr_5 [i_0] [i_0] [i_1] [2U];
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) arr_4 [i_1]))));
                    var_18 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_1))))));
                }
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_24 [i_0] [i_1 + 4] [i_6] [i_0] [i_8] [i_1] = ((/* implicit */unsigned int) (signed char)-106);
                            arr_25 [i_0] [i_1] [(signed char)13] [5LL] = ((/* implicit */unsigned char) ((((arr_4 [i_1]) || (((/* implicit */_Bool) max((((/* implicit */signed char) arr_4 [i_1])), (arr_0 [i_8])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10862)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((0) == (arr_17 [i_1] [i_1]))))))) : (((arr_2 [i_1]) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)171)))))))));
                        }
                        var_19 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(min((66977792U), (((/* implicit */unsigned int) arr_9 [3ULL] [i_1] [i_1] [(signed char)14] [i_6] [i_7]))))))), (((((/* implicit */_Bool) (unsigned char)231)) ? (-5LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))));
                    }
                    arr_26 [i_1] [i_0] &= ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0))))), (var_4))))));
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_20 = ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) min((var_4), (((/* implicit */unsigned short) (signed char)0))))), (((((/* implicit */_Bool) (signed char)127)) ? (arr_16 [i_0] [i_0] [i_9] [i_9]) : (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_9] [i_9])))))) : (((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-5)))) ^ (((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) (unsigned char)116))))))));
                    var_21 = ((/* implicit */short) (-(var_5)));
                }
                /* LoopSeq 1 */
                for (short i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    arr_31 [i_1] = ((/* implicit */signed char) ((unsigned short) var_0));
                    arr_32 [i_1] [i_1] [(unsigned char)4] = ((/* implicit */_Bool) min((max((arr_22 [12ULL] [i_10] [i_10 + 2] [i_10 - 1] [i_10]), (arr_22 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10]))), (max(((short)-23010), (((/* implicit */short) arr_30 [i_0] [i_1] [i_1 + 2] [i_10]))))));
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1209812645U))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_23 ^= ((/* implicit */signed char) (~((~(((/* implicit */int) arr_5 [(unsigned char)14] [i_10 + 1] [(unsigned char)11] [i_0]))))));
                        arr_36 [i_1] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [4ULL] [i_0] [(unsigned short)13]);
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1])) >> (((((/* implicit */int) arr_7 [i_0])) - (27)))))) ? (((/* implicit */int) ((_Bool) (signed char)14))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_5 [10U] [10U] [i_10] [10U])) : (((/* implicit */int) arr_6 [i_0] [4LL])))))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (unsigned short)34240)))) : (arr_21 [i_1] [i_1] [i_10 + 2] [i_10 - 1]))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 1; i_12 < 7; i_12 += 4) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (unsigned char)24))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 3; i_14 < 10; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) var_3);
                            /* LoopSeq 4 */
                            for (signed char i_16 = 1; i_16 < 9; i_16 += 4) 
                            {
                                var_28 -= arr_38 [i_14];
                                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_10))));
                                var_30 = ((/* implicit */unsigned int) min(((signed char)107), (arr_0 [i_15])));
                                var_31 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) & (611191156U)));
                                var_32 = ((/* implicit */unsigned char) arr_8 [i_16] [(signed char)7]);
                            }
                            for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
                            {
                                arr_53 [i_17] [i_17] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), ((-(((((/* implicit */int) var_0)) * (((/* implicit */int) arr_43 [i_12] [i_13] [i_15] [i_17]))))))));
                                var_33 &= ((/* implicit */short) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) : (max((arr_33 [i_13] [i_17]), (((/* implicit */long long int) arr_29 [i_12] [i_13] [i_15])))))))));
                            }
                            for (signed char i_18 = 2; i_18 < 9; i_18 += 3) 
                            {
                                arr_57 [i_18] [i_13] [0U] [2U] [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (arr_33 [i_12] [i_18]) : (((/* implicit */long long int) var_5))));
                                var_34 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(arr_17 [(_Bool)1] [i_13])))) ? (((((/* implicit */int) (signed char)-25)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_11 [i_15] [i_12] [0U] [i_12])))) & (((/* implicit */int) arr_29 [i_12] [12U] [i_12 + 3]))));
                            }
                            for (signed char i_19 = 2; i_19 < 10; i_19 += 3) 
                            {
                                var_35 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_19 - 2] [(_Bool)1] [i_14 - 1] [i_19 - 2]))) >= (961075326U))) ? (((((/* implicit */_Bool) arr_19 [i_12 + 4] [(_Bool)1] [i_14 - 1] [i_19 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)4536)))) : (((/* implicit */int) min((arr_19 [i_12] [(unsigned short)4] [i_14 - 1] [i_19 - 2]), (arr_19 [i_12] [(signed char)8] [i_14 - 1] [i_19 - 2])))));
                                arr_60 [i_15] [i_12] [i_13] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned char)231)), (16775168U))), (961075326U)))) ? (min((-1LL), (((/* implicit */long long int) min((((/* implicit */int) (short)16647)), (arr_14 [i_12])))))) : (((/* implicit */long long int) arr_15 [i_14] [i_15]))));
                            }
                            var_36 ^= ((/* implicit */unsigned short) max((min((4294967295U), (((/* implicit */unsigned int) (signed char)3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (-15) : (-1632086478))))));
                        }
                    } 
                } 
                arr_61 [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_12 + 1] [i_12] [i_12] [i_13] [i_12] [i_12])) ? (((/* implicit */long long int) -1622612044)) : (9223372036854775786LL)))) ? (((((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_12] [i_12] [i_13])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4536))) / (arr_58 [(unsigned char)6] [(unsigned char)6] [i_13] [(unsigned char)6] [i_13]))) : (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_59 [i_12]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)5), (((/* implicit */unsigned short) (short)16647)))))));
                arr_62 [i_12 + 3] = ((((/* implicit */_Bool) arr_18 [i_12] [(short)8])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_13] [(unsigned short)0] [(unsigned short)0] [i_12])) ^ (((/* implicit */int) (unsigned char)6))))) ? (arr_23 [i_12 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_12] [i_12 - 1] [i_12 + 4] [i_12] [i_12 + 4] [i_12] [(signed char)0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_12 + 1] [(unsigned short)0] [i_13] [i_13] [i_13])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 20; i_20 += 4) 
    {
        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_22 = 0; i_22 < 20; i_22 += 4) 
                {
                    arr_70 [i_20] [i_20] [i_20] [i_22] = ((/* implicit */int) arr_65 [i_20] [i_20] [i_21]);
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                        arr_73 [i_20] [i_21] [i_20] [i_22] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1440792093)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) : (68719476735ULL)));
                        var_38 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)25970)) >> (((((/* implicit */int) arr_72 [i_20] [i_21] [i_22] [i_23])) + (13739)))))));
                        arr_74 [i_20] [3LL] [i_22] [3LL] = max(((unsigned char)55), (((/* implicit */unsigned char) (signed char)79)));
                        var_39 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_69 [i_21])) ? (((unsigned int) arr_71 [i_20] [i_21] [i_23] [i_23])) : (((/* implicit */unsigned int) min((arr_66 [i_21]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_20]))))))))));
                    }
                }
                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_20] [i_21])) ? (((/* implicit */long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-5) : (8)))))) : (((min((((/* implicit */long long int) (short)-4532)), (arr_71 [i_20] [1LL] [i_20] [i_20]))) / (((/* implicit */long long int) ((((-1622612044) + (2147483647))) << (((2755104297862442758LL) - (2755104297862442758LL))))))))));
            }
        } 
    } 
}
