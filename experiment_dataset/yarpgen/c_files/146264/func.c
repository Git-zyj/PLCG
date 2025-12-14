/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146264
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            arr_5 [1LL] |= ((/* implicit */int) ((((var_6) ? (var_3) : (var_7))) != (4227034103104966037ULL)));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((unsigned short) 520187362712728962LL))));
                        arr_11 [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (((_Bool)1) ? (-520187362712728963LL) : (520187362712728948LL)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_18 = (short)28597;
                            arr_15 [i_0] [i_1 + 2] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
                            var_19 = ((arr_1 [i_1 + 1] [i_1 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 + 1]))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)21);
                            var_20 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_13))))));
                            arr_19 [i_3] [i_2] [i_2] [(short)9] [4ULL] [i_2] [4ULL] = ((/* implicit */long long int) ((unsigned char) arr_14 [i_0] [i_3] [i_5 - 1] [i_3] [i_1 - 1]));
                        }
                        var_21 = ((/* implicit */unsigned char) ((short) arr_17 [i_1 + 1] [i_1 + 3] [i_3] [i_1] [i_3] [i_1] [i_1]));
                        var_22 = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_1] [9]);
            arr_20 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1 + 2] [i_0] [i_1 + 2]))));
        }
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_24 ^= ((/* implicit */signed char) max((18446744073709551615ULL), (7753527945799245478ULL)));
            arr_23 [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_0])) ? (((/* implicit */int) arr_21 [i_6] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [7ULL] [i_6]))))) / (max((var_2), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_6] [i_0]))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                arr_28 [i_6] [i_0] [i_7] [i_6] = ((unsigned char) (-(((/* implicit */int) var_6))));
                arr_29 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned int) var_11);
            }
        }
        arr_30 [(short)4] [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [(unsigned char)3]))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)224)), (arr_7 [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))) : (var_3)))));
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) arr_10 [(signed char)8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_26 [i_8] [(short)6] [i_8] [i_8])) : (((/* implicit */int) (short)0)))) != (((/* implicit */int) arr_21 [i_8] [i_8] [i_8])))));
        var_25 = ((/* implicit */unsigned long long int) (~(((long long int) arr_25 [i_8] [i_8] [i_8] [i_8]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            arr_36 [i_9] [i_9] = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8])))), (((arr_10 [i_8] [i_8] [i_9] [i_9]) >= (max((var_10), (((/* implicit */unsigned long long int) (unsigned char)206))))))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)104), (((/* implicit */unsigned char) (_Bool)0))))) && (((/* implicit */_Bool) (~(var_3))))));
            arr_37 [i_9] = ((/* implicit */signed char) arr_24 [i_8] [i_8] [i_8]);
            arr_38 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_31 [i_8] [i_8])))), (((((/* implicit */_Bool) arr_31 [i_9] [(signed char)3])) ? (((/* implicit */int) arr_31 [i_8] [i_9])) : (((/* implicit */int) var_15))))));
        }
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((long long int) 7753527945799245478ULL)))) ? ((~(((/* implicit */int) min((var_15), (arr_2 [(signed char)6] [i_8])))))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_15))))));
            arr_41 [i_10] [i_8] = (unsigned short)28;
        }
        for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 2) /* same iter space */
        {
            arr_45 [i_11] = ((/* implicit */unsigned long long int) ((3913286977U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047)))));
            arr_46 [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) min((((unsigned long long int) arr_13 [i_8] [i_11 - 2] [i_11])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) || (((/* implicit */_Bool) var_0)))))));
        }
        for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_32 [i_12 + 1])), ((short)28592))))) : (max((1457971194U), (((/* implicit */unsigned int) arr_32 [i_12 - 2]))))));
            arr_51 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))) : (17421145941578316537ULL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                arr_54 [i_8] [i_8] = ((/* implicit */short) min(((-(((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [2ULL] [6ULL] [i_13] [i_13]))) : (var_3))))), (min((max((((/* implicit */unsigned long long int) arr_34 [i_13] [i_13] [i_13])), (var_14))), (min((((/* implicit */unsigned long long int) arr_35 [i_13])), (var_2)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    arr_57 [i_14 - 1] = ((/* implicit */unsigned int) arr_0 [i_13] [i_8]);
                    arr_58 [i_8] [i_8] [i_13] [i_14] = ((/* implicit */unsigned char) ((unsigned short) arr_32 [i_14]));
                    arr_59 [i_8] [i_12] [5U] [i_12] = ((/* implicit */int) ((unsigned char) 13122051538049297591ULL));
                }
                arr_60 [i_13] [i_13] [2U] [i_8] = ((/* implicit */short) min((((unsigned short) ((short) var_10))), (((/* implicit */unsigned short) var_1))));
                arr_61 [(signed char)1] [i_12] |= ((/* implicit */unsigned long long int) arr_21 [i_8] [i_8] [i_8]);
                var_29 = var_2;
            }
            arr_62 [i_12] [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)65535));
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_21 [i_8] [i_8] [i_12 + 1])))) | (((/* implicit */int) max((arr_2 [i_8] [i_8]), (var_6))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)16134))))))) : (((((/* implicit */_Bool) arr_34 [i_12 + 1] [i_12] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_12 - 1] [i_8]))) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (2ULL))))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        arr_65 [i_15] = ((/* implicit */unsigned int) ((unsigned char) 8065873413514787832ULL));
        var_31 &= ((/* implicit */unsigned int) ((unsigned long long int) arr_64 [i_15]));
        arr_66 [i_15] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) arr_64 [i_15]))));
    }
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((unsigned char) var_4)))));
}
