/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109296
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
    var_19 &= ((/* implicit */unsigned int) (signed char)60);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
            {
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_14) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) -1470044802))))) ? (((((/* implicit */_Bool) var_6)) ? (144115188075855864ULL) : (((/* implicit */unsigned long long int) arr_2 [i_2] [1U] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))));
                arr_7 [i_0 - 1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 2; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((unsigned short) var_15));
                        arr_17 [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_5 - 2] [i_0] [(unsigned short)14] [i_0]);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [1LL])) ? (((int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)71))))))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1470044802)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) : (arr_6 [i_4 + 1] [i_4 - 1]))))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (_Bool)1))));
                    }
                    for (short i_6 = 2; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_0 - 1] [i_1] [i_3] [i_4] [i_6 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) - (((/* implicit */int) (!(var_17))))));
                        var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_2 [i_1] [i_1] [i_1]));
                    }
                    var_26 += ((/* implicit */unsigned long long int) (((+(2097151U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23)))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1] [i_7] [i_7]) != (arr_2 [i_0 - 1] [i_0] [i_0 - 1]))))));
                    arr_25 [i_0] [i_7] [i_0] = ((/* implicit */_Bool) 2097140U);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [18])) ? (((/* implicit */long long int) 1554928367U)) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_2)))))));
                    var_29 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1470044802)) ? (452486453U) : (1230985850U))) >> (((var_5) - (4132467873U)))));
                    var_30 = ((/* implicit */long long int) arr_29 [i_0 - 1] [i_1] [i_3] [15LL]);
                }
                var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [0U] [i_3] [i_3]))) : (((((/* implicit */_Bool) var_12)) ? (2097140U) : (4294967295U)))));
            }
            var_32 = ((/* implicit */long long int) ((arr_18 [i_1] [i_0] [i_0 - 1] [i_0 - 1] [i_1]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_18 [i_1] [i_0] [i_0 - 1] [i_0 - 1] [i_1]))));
        }
        arr_30 [i_0] [i_0] = ((/* implicit */int) ((((unsigned int) 4294967295U)) >> (((arr_29 [8] [i_0 - 1] [i_0] [8]) - (14181450129380646789ULL)))));
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        var_33 = ((/* implicit */unsigned char) (unsigned short)46232);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)71))));
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_9] [i_10 + 1] [i_11] [13] [i_9])) ? (((/* implicit */int) arr_14 [i_9] [i_10 - 1] [i_11] [(unsigned short)21] [(_Bool)1])) : (((/* implicit */int) arr_26 [i_10] [i_10 + 1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_45 [i_10] [i_11] [i_12] = ((/* implicit */int) ((arr_29 [i_10] [i_10 - 1] [i_10] [i_10 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10 - 1])))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-77)) ? (arr_29 [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 1]) : (((/* implicit */unsigned long long int) 1865038285))));
                    }
                }
                for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 2) 
                {
                    arr_48 [i_14] [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_11])) ? (arr_29 [11U] [i_10] [(short)0] [i_14 + 1]) : (((/* implicit */unsigned long long int) arr_3 [i_11] [i_11])))));
                    var_37 -= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)32753))))));
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2097140U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_10 + 1] [i_10 + 1] [i_14]))) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (arr_19 [8ULL] [i_11])))));
                }
                var_39 ^= ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
            }
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                arr_53 [i_9] [(unsigned short)2] [i_9] [i_15] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1470044802)));
                arr_54 [i_9] [i_10 - 1] [5U] [i_9] |= ((/* implicit */long long int) var_10);
                var_40 ^= ((/* implicit */long long int) (_Bool)0);
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) && (((/* implicit */_Bool) -1470044802))));
            }
            for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                arr_58 [i_9] [i_16] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_8 [i_9] [i_9] [i_16] [i_10 + 1])) : (arr_37 [i_10] [i_10] [i_9]))) > (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10 - 1] [(_Bool)1] [i_10 - 1])))));
                var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1] [3LL])) | (((/* implicit */int) (unsigned char)0))));
            }
            var_43 = ((/* implicit */int) max((var_43), (((((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_10] [i_10 + 1])) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_9] [i_10 - 1] [i_10 - 1])) : (((/* implicit */int) (signed char)-71))))))));
        }
    }
}
