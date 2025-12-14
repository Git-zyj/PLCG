/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103061
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((int) ((((var_4) || (var_4))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_6 [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) | (arr_3 [i_1] [i_0])));
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((-1) & (1))))));
            }
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
            {
                var_13 = arr_0 [i_0];
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_1] [i_0])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3]))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) > (arr_4 [i_3] [i_0] [i_1] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_15 = arr_2 [i_1];
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned int) ((unsigned short) (signed char)-71))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
            {
                var_17 += ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_0] [i_6]))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) ((262143U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))));
                    var_19 += ((/* implicit */unsigned int) ((_Bool) arr_8 [1U] [i_0] [i_6] [i_7]));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_7 [i_6] [i_1] [3U]))) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_6])) : (arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_6] [i_7])));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_7] [i_1] [i_0])) || (((/* implicit */_Bool) arr_7 [13ULL] [i_1] [14U])))))) != (((((/* implicit */_Bool) arr_4 [i_7] [i_6] [i_1] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_6])))))))));
                }
                for (signed char i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((17ULL) == (18446744073709551615ULL)))) + (((/* implicit */int) (signed char)71))));
                    arr_21 [i_0] [i_0] [2U] [i_0] [i_6] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_6] [i_8]))) >= (arr_12 [i_0] [i_1] [i_6] [(signed char)21] [20LL] [i_8] [20LL]))) ? (((/* implicit */int) ((short) arr_9 [i_8] [i_6] [i_1] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(signed char)17] [(short)14] [i_6] [i_8])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [12LL] [(signed char)6])))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        arr_24 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (((((~(arr_2 [i_8]))) + (9223372036854775807LL))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [(short)13] [12LL] [i_8] [i_9]))) / (arr_4 [4U] [i_6] [i_0] [i_0])))));
                        var_22 = ((/* implicit */unsigned short) arr_3 [(unsigned short)13] [(signed char)2]);
                        var_23 = ((/* implicit */int) ((unsigned long long int) arr_3 [i_8 - 1] [i_9]));
                        var_24 = ((/* implicit */unsigned char) ((unsigned int) (signed char)-72));
                        var_25 += ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) (short)5609)))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_6] [i_8] [i_10])))))));
                        var_27 *= ((13518400268679137008ULL) << (((((int) (signed char)-71)) + (75))));
                    }
                }
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_0] [i_0]))) + (arr_15 [i_0] [i_0])))))));
            }
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [(unsigned short)0] [i_0] [(unsigned short)0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_7 [16ULL] [i_0] [i_0]))))) << (((arr_10 [i_0] [i_0] [(signed char)18] [16]) - (1049893440)))));
            var_30 = ((/* implicit */_Bool) ((8406711200374848244ULL) & (((/* implicit */unsigned long long int) 4294967295U))));
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)60)))) + (arr_18 [i_0] [i_1] [i_11] [i_11])));
                        var_32 = ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_11 + 1] [i_11] [i_12])) || (((/* implicit */_Bool) arr_23 [(unsigned short)16] [i_1] [i_11 - 1] [i_12] [i_1])));
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_0] [i_1] [i_13] [i_12] [12U])) | (((/* implicit */int) arr_5 [i_11] [(unsigned char)19]))))) >= (arr_3 [i_0] [i_13]))))));
                            var_34 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_25 [i_13] [i_12] [i_11] [i_1] [i_0])))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            arr_36 [i_1] [i_1] [i_11] [i_12] [(signed char)3] [i_1] = ((/* implicit */signed char) arr_7 [i_11] [i_12] [i_14]);
                            var_35 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) / (2258010433U)));
                        }
                        arr_37 [(short)6] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_11 + 1] [i_11] [i_11 - 1]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 3; i_15 < 21; i_15 += 1) 
            {
                for (unsigned int i_16 = 2; i_16 < 18; i_16 += 2) 
                {
                    for (short i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [5LL] [i_17]))) - (arr_3 [i_15] [14U]))));
                            var_37 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_15] [i_15] [i_15] [i_16 - 2] [(unsigned char)0])) ? (arr_12 [i_0] [i_1] [(signed char)2] [i_16] [i_17] [i_16 + 1] [i_15 - 3]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [5ULL] [(_Bool)1])) >> (((arr_12 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) - (4120240555U))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            var_38 += ((/* implicit */short) ((arr_38 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967293U))))));
            var_39 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_43 [i_18] [i_18] [i_18] [i_0])) | (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) != (((/* implicit */int) arr_32 [i_0] [i_18] [(short)11] [(short)11] [i_18])))))));
            arr_50 [i_18] = ((/* implicit */unsigned int) arr_11 [i_0] [i_18]);
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_40 *= ((/* implicit */_Bool) ((short) (~(1076597516842775903LL))));
                arr_54 [i_0] [i_18] [6U] = ((/* implicit */unsigned long long int) (+(arr_12 [i_0] [i_0] [i_18] [i_18] [i_19] [i_19] [i_19])));
                var_41 = ((2147483647) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_18] [i_0]))) != (-3147858095109791434LL)))));
                var_42 = ((/* implicit */long long int) ((short) arr_9 [i_19] [i_19] [(_Bool)1] [i_0]));
                var_43 &= ((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [(_Bool)0] [21] [i_0]);
            }
        }
        arr_55 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-70)) + (2147483647))) << (((((/* implicit */int) (unsigned char)175)) - (175)))));
    }
}
