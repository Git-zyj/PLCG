/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173034
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) arr_0 [i_0]))), (((long long int) (!(((/* implicit */_Bool) (signed char)-1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) 3652584282836223818LL)))));
        var_13 = ((/* implicit */long long int) ((unsigned short) arr_0 [i_0]));
        var_14 = ((((arr_0 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_1)))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (short)-3349))))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((var_0) ^ (var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_17 = ((((/* implicit */_Bool) -3652584282836223819LL)) ? (((/* implicit */long long int) ((unsigned int) arr_7 [i_2] [i_2]))) : (((((/* implicit */_Bool) (unsigned short)38538)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_0))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_5 [(short)1])) < (((/* implicit */int) (unsigned char)164))))) % (((/* implicit */int) arr_1 [i_1 - 2]))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_3])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_5])))))) : (4611686018427387904ULL)));
                            arr_17 [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1]))));
                            arr_18 [i_1 + 1] [i_4] [(unsigned char)3] [(unsigned char)10] [i_1 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_1 - 2] [i_1] [1] [i_1]))));
                        }
                        for (unsigned char i_6 = 3; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_1] [i_4] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_20 [i_1] [i_1] [2ULL] [i_3] [i_4] [i_4] [i_6])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [i_4])))));
                            arr_23 [i_4] [i_4] [i_3] [8] [i_2] [i_4] = ((/* implicit */_Bool) (short)-32202);
                            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 - 1] [i_6 + 1]))));
                        }
                        for (signed char i_7 = 4; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) - (((/* implicit */int) arr_14 [i_7 - 4] [i_2] [i_3] [i_4] [i_7] [i_4])));
                            arr_27 [i_1] [i_4] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) var_7);
                        }
                        for (signed char i_8 = 4; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26998))) : (arr_25 [i_8] [i_4] [i_3] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_6 [i_8 + 1] [i_1 - 2]))));
                            arr_30 [i_1] [7LL] [i_2] [i_3] [4] [i_4] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_11 [i_1 + 1] [i_2] [i_3] [i_2])))));
                            arr_31 [i_4] [i_1] [i_2] [i_1] [i_3] [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_8] [i_8] [i_8 - 1] [i_8 + 2] [i_8] [i_8 - 4] [i_8 - 1])) && (((/* implicit */_Bool) (short)-32172))));
                        }
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) -3652584282836223818LL)) ? (((/* implicit */int) (unsigned short)20407)) : (((/* implicit */int) (unsigned short)27015))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32217))) <= (4294967295U)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            arr_37 [i_1 - 2] [i_2] [i_1 - 2] [i_1] [i_10] [i_1 - 2] = ((/* implicit */unsigned char) ((unsigned long long int) arr_33 [i_1] [i_9] [i_1 - 1] [i_9] [i_10] [i_3]));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_29 [i_10] [i_10])) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_3] [i_3] [i_9] [i_9] [i_10]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_34 [i_10] [i_9] [i_2] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_3] [i_1 + 1] [i_1 + 1])))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (((((/* implicit */_Bool) arr_33 [3ULL] [i_2] [i_3] [i_3] [(unsigned char)8] [i_10])) ? (var_7) : (((/* implicit */unsigned int) arr_35 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 2])))));
                            arr_38 [i_10] [i_9] [i_9] [i_9] [i_3] [i_2] [i_1] = arr_26 [i_1 - 1] [i_2] [i_3] [i_9] [i_1 - 1];
                        }
                        var_27 = ((/* implicit */signed char) arr_34 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                    }
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_3]))) : (arr_25 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])));
                }
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                {
                    arr_41 [8LL] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2024082732147385736LL)) ? (((((/* implicit */_Bool) arr_16 [i_11] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [(_Bool)1] [i_1 - 1])) ? (((/* implicit */int) arr_16 [i_2] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_16 [i_2] [i_1] [i_1] [(short)0] [i_1] [i_1] [i_1 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11] [i_2] [i_1 + 1] [i_1 + 1] [i_1])))))));
                    var_29 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61480)))))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)24836)) : (((/* implicit */int) arr_32 [i_1 + 1] [i_2] [i_11] [i_11] [i_11]))))))), (((long long int) arr_21 [i_1 + 1] [i_1] [i_1 - 2] [(unsigned short)5] [i_1] [i_1]))));
                }
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 4; i_13 < 10; i_13 += 1) 
                    {
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            {
                                arr_49 [i_14] [i_13] [i_13] [i_12] [i_13] [i_1 - 1] = ((/* implicit */unsigned char) ((arr_19 [i_13] [i_13]) & (arr_15 [i_1] [i_1] [i_2] [i_12] [i_13] [i_13] [i_14])));
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_13] [i_12])) | (((/* implicit */int) arr_29 [i_13] [i_1 + 1]))));
                                var_31 = ((/* implicit */unsigned long long int) ((_Bool) var_7));
                            }
                        } 
                    } 
                    arr_50 [i_1] [i_1] [i_2] [i_1] = arr_32 [i_12] [i_12] [i_2] [0ULL] [i_1];
                }
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */int) arr_29 [i_16] [i_2]);
                                var_33 = ((/* implicit */long long int) arr_39 [i_1 + 1] [i_1 - 1]);
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */_Bool) arr_1 [i_1 - 2]);
                }
            }
        } 
    } 
}
