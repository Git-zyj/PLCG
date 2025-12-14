/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185914
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
    var_12 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (((unsigned int) (signed char)114)))), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_13 &= ((/* implicit */signed char) ((min((min((((/* implicit */unsigned long long int) var_11)), (var_10))), (((13447795051477349594ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61988))))))) ^ ((~(max((((/* implicit */unsigned long long int) var_5)), (13447795051477349593ULL)))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)18])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))))))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_2] [i_1])))) + (111)))));
                }
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (+((+(13447795051477349594ULL)))));
                        arr_15 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17036)) ? (arr_10 [i_0] [i_0] [i_3] [i_0]) : (((/* implicit */int) (unsigned char)49)))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3] [i_5]))))) == (((/* implicit */int) (unsigned char)250))));
                        arr_19 [i_5] [i_3] [i_0] [i_1] [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_1] [i_0])) + (107)))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [(signed char)10] [i_1] [i_3] [i_1] &= ((/* implicit */unsigned long long int) ((((arr_21 [i_0] [i_1]) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_6] [i_6])))) != (((/* implicit */int) arr_6 [i_6] [i_6 - 1] [i_6] [i_6 - 1]))));
                        var_15 *= ((/* implicit */unsigned int) ((arr_23 [i_6 - 1] [i_6] [i_6] [i_6]) == (arr_23 [i_6] [i_6 - 1] [i_6] [i_6 - 1])));
                        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1] [i_6 - 1] [i_1])) ? (((/* implicit */int) arr_22 [i_1] [i_1] [i_3] [i_6] [i_3])) : (((/* implicit */int) (unsigned char)237))))));
                        var_17 ^= ((/* implicit */unsigned char) ((unsigned short) (unsigned char)68));
                    }
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_18 *= min((((((/* implicit */_Bool) (unsigned short)17048)) ? (18312552317586128943ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24))))), (((/* implicit */unsigned long long int) ((((var_3) / (((/* implicit */int) arr_25 [i_1] [i_0] [i_1] [i_0])))) * (((((/* implicit */int) (signed char)-6)) / (((/* implicit */int) var_4))))))));
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-45))));
                        arr_28 [i_0] [i_1] [i_0] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_25 [i_7] [i_3] [i_1] [i_0])))) | ((~(arr_10 [i_0] [i_1] [i_3] [i_3])))))) ? (arr_20 [i_3]) : (((/* implicit */unsigned long long int) min((1149348256U), (((/* implicit */unsigned int) ((short) 1753460331917824288ULL))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        arr_32 [i_3] [i_8] [i_3] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) min((var_3), (((/* implicit */int) (signed char)127)))));
                        arr_33 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)37984)))) | (((4998949022232202024ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))))) >= (((/* implicit */unsigned long long int) var_3))));
                        arr_34 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)-1);
                    }
                }
                var_20 &= ((/* implicit */int) (unsigned short)45965);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned short)2733)))) != (((((/* implicit */int) arr_22 [i_1] [i_1] [i_0] [i_1] [i_1])) + (((/* implicit */int) var_11))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_5)) | (((/* implicit */int) (short)-32767))))));
                        arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [(unsigned char)1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_37 [i_10] [i_1] [i_10])))) == (((/* implicit */int) var_11))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_0] [i_0])) ? (arr_36 [i_0] [i_1]) : (arr_36 [i_1] [i_9])));
                        arr_40 [i_10] [i_1] [(unsigned char)7] [2ULL] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                        var_24 *= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)43926)) || (((/* implicit */_Bool) (unsigned short)32768)))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 3; i_12 < 19; i_12 += 4) 
                        {
                            arr_46 [i_0] [i_0] [i_0] [i_11] [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)48500)) && (((/* implicit */_Bool) var_8))));
                        }
                        arr_47 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_48 [i_11] [i_11] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (short)-15027);
                        var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_42 [i_11] [i_9] [i_1] [i_0]))));
                    }
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21610)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((unsigned short)17053), (((/* implicit */unsigned short) var_7))))) : (((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) (signed char)127)) - (124)))))))));
}
