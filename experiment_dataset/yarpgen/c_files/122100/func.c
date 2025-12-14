/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122100
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
    var_12 -= ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_4 [i_1] [i_1]) & (((arr_1 [i_0]) & (arr_2 [(unsigned short)11] [i_1])))))) / (arr_0 [i_1 + 1])));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_8 [i_4] [i_1] [i_2] [(unsigned char)2] [i_0]);
                                var_16 = ((/* implicit */unsigned short) arr_2 [8LL] [(unsigned char)10]);
                            }
                        } 
                    } 
                }
                for (short i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    arr_14 [0LL] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0])) % (((/* implicit */int) arr_10 [i_0] [(unsigned short)4] [i_0] [i_0])))) % (((arr_2 [i_1 + 2] [i_1 - 3]) - (((arr_2 [i_0] [i_5]) - (arr_1 [i_5])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 3046539169U))))) <= (((arr_1 [i_7]) / (arr_11 [i_0] [i_0] [11] [i_0] [i_0] [i_0] [0ULL])))));
                                arr_20 [i_1] = (i_1 % 2 == 0) ? (((((arr_15 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_5 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [0LL] [(unsigned short)6] [i_1 - 1]))))) << (((arr_15 [10] [i_0] [i_1] [i_1 - 3] [i_5 + 1] [i_5 + 1]) - (8858461760501955562LL))))) : (((((((arr_15 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_5 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [0LL] [(unsigned short)6] [i_1 - 1]))))) + (9223372036854775807LL))) << (((((arr_15 [10] [i_0] [i_1] [i_1 - 3] [i_5 + 1] [i_5 + 1]) + (8858461760501955562LL))) - (7413349645085021972LL)))));
                                var_18 -= ((/* implicit */long long int) arr_4 [i_7] [i_5 - 1]);
                                var_19 = ((/* implicit */signed char) arr_19 [i_0] [i_1 + 2] [11LL] [i_5] [i_5] [i_7] [i_1]);
                                var_20 -= ((/* implicit */long long int) arr_9 [i_5] [i_1] [i_5] [i_6]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) arr_11 [(signed char)2] [i_0] [i_0] [(unsigned char)1] [i_1] [4LL] [i_5]);
                }
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_28 [i_0] [i_0] [(unsigned char)5] [i_0] [i_0])) - (arr_15 [i_10] [i_8] [i_1] [i_1] [i_1] [i_0])))) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))))) | (((((/* implicit */int) arr_10 [i_1 + 3] [i_1 - 3] [(_Bool)1] [i_8])) << (((arr_0 [i_1 - 1]) - (3409851718467911655LL)))))));
                                var_23 = ((/* implicit */long long int) arr_25 [i_1 - 3] [i_1 + 2] [i_1 - 2] [i_1] [i_1 - 3] [i_0]);
                                var_24 = arr_16 [i_1];
                                var_25 = ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_10] [i_9] [i_8] [i_1 - 2] [i_0] [i_0])) & (arr_2 [i_10] [i_9])))) & (((((/* implicit */long long int) -1)) | (3362672298818836990LL))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned short i_11 = 3; i_11 < 11; i_11 += 2) 
                            {
                                var_26 -= ((/* implicit */long long int) arr_21 [i_9]);
                                var_27 = ((/* implicit */int) ((((((arr_11 [i_11] [i_9] [(unsigned short)10] [i_8] [i_1] [9] [i_0]) | (((/* implicit */int) arr_29 [i_0] [i_0] [i_1] [i_0] [i_0])))) | (((/* implicit */int) arr_26 [i_1])))) < (arr_28 [i_9] [i_9] [i_9] [i_9] [i_9])));
                            }
                            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                            {
                                var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0])) | (((/* implicit */int) arr_16 [i_9]))))) % (((((9223372036854775807LL) + (((/* implicit */long long int) -1485046101)))) - (((/* implicit */long long int) ((/* implicit */int) (short)-18608)))))));
                                var_29 -= arr_9 [i_0] [(signed char)4] [2] [i_9];
                                var_30 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_1 [i_1 - 1])) + (arr_15 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1 + 3]))) << (((arr_15 [i_0] [7U] [i_1] [i_9] [7U] [i_8]) - (8858461760501955562LL)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */long long int) arr_1 [i_1 - 1])) + (arr_15 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1 + 3]))) + (9223372036854775807LL))) << (((((arr_15 [i_0] [7U] [i_1] [i_9] [7U] [i_8]) + (8858461760501955562LL))) - (7413349645085021972LL))))));
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [(unsigned short)1] [i_1])) ^ (((/* implicit */int) arr_10 [i_0] [i_1 - 3] [i_8] [i_12]))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 2) 
                            {
                                var_32 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_36 [i_13 - 1] [i_9] [i_8] [i_8] [(unsigned char)8] [i_0] [i_0]))))) * (((/* implicit */int) ((((((/* implicit */int) arr_19 [i_0] [i_13 + 1] [i_8] [i_9] [i_13] [i_8] [i_0])) | (((/* implicit */int) arr_13 [i_0] [i_8] [i_9] [i_0])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [4] [i_0] [1LL])) || (((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_8] [i_9] [i_9] [(short)5]))))))))));
                                var_33 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [10LL] [(unsigned char)9] [(unsigned char)1] [i_9] [i_1])) / (((/* implicit */int) arr_8 [(short)7] [i_1 + 3] [i_0] [i_9] [i_1])))) >= (((/* implicit */int) ((((/* implicit */int) arr_19 [(unsigned char)3] [i_1] [i_9] [i_9] [i_13 - 1] [i_1 + 3] [i_1])) != (((/* implicit */int) arr_19 [i_8] [i_1] [i_8] [(unsigned short)9] [i_13 + 1] [i_1 - 2] [i_1])))))));
                                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_8] [i_9] [i_13 + 1])) - (((/* implicit */int) ((((/* implicit */int) arr_36 [i_0] [i_1] [9ULL] [i_8] [i_9] [i_13 + 1] [i_13])) >= (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))))));
                                arr_38 [i_0] [i_1] [i_8] [i_9] [i_13] = arr_16 [i_1];
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        {
                            arr_46 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_19 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_1]);
                            /* LoopSeq 2 */
                            for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                            {
                                arr_50 [i_1] [i_15] [i_15] [i_14] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_0] [i_1 + 2] [i_1 - 1] [i_1])) / (((/* implicit */int) arr_16 [i_1])))) * (((/* implicit */int) arr_27 [i_0] [i_1]))));
                                arr_51 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_27 [2LL] [i_1])) != (((/* implicit */int) arr_39 [i_1 + 1] [i_1] [i_1])))))) | (((arr_6 [i_14]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)8] [i_0] [(unsigned short)8] [i_14] [i_15] [i_16])))))))) || (((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1]))));
                                var_35 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_16] [i_15] [7] [(unsigned char)11] [i_0])) <= (((((/* implicit */int) ((arr_41 [0U] [9U] [9U] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_16])))))) << (((((/* implicit */int) arr_30 [i_15] [i_1 + 2] [i_1 - 3] [i_1 - 2] [i_1] [i_15])) + (27189)))))));
                                var_36 = ((((arr_33 [i_1 - 3] [i_1 + 1] [i_1 + 2]) / (arr_33 [i_1 + 1] [i_1 - 1] [i_1 - 3]))) * (arr_33 [i_1 + 1] [i_1 - 3] [i_1 + 3]));
                            }
                            for (unsigned short i_17 = 4; i_17 < 11; i_17 += 2) 
                            {
                                var_37 = ((/* implicit */unsigned int) arr_8 [i_14] [(signed char)2] [i_14] [i_15] [i_1]);
                                arr_54 [i_1] [i_15] [i_14] [(unsigned short)8] [i_1] = arr_19 [i_1] [i_17 - 3] [i_15] [8U] [i_1 + 2] [i_1 + 2] [i_1];
                                var_38 *= ((/* implicit */_Bool) ((((((arr_33 [i_1 + 1] [i_15] [i_17 - 2]) + (((/* implicit */int) (short)30633)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)225)) - (225)))));
                            }
                            var_39 *= ((/* implicit */signed char) arr_35 [(unsigned short)4] [2] [i_0] [i_0] [i_0] [(unsigned char)10]);
                        }
                    } 
                } 
                var_40 -= ((/* implicit */unsigned long long int) arr_0 [i_1 + 2]);
            }
        } 
    } 
}
