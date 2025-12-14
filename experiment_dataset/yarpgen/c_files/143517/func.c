/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143517
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) ((max((arr_6 [i_3] [9U] [i_3] [i_3] [i_3 - 1] [i_3]), (((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_5))))))) == (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */long long int) (unsigned short)18)), (9223372036854775807LL))))))));
                        var_17 = ((/* implicit */signed char) (unsigned short)32512);
                        var_18 ^= ((/* implicit */unsigned char) 2147483647);
                    }
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((short) ((unsigned char) arr_3 [i_2] [i_1] [i_2])));
                    var_19 = ((/* implicit */unsigned short) var_12);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) (((~(var_4))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_7)));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_13 [i_1] [i_1] [(unsigned char)2] [i_5] = ((/* implicit */unsigned long long int) arr_10 [i_4] [i_0] [i_0]);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_9 [i_0] [i_1] [i_0]))));
                            var_23 = ((/* implicit */unsigned long long int) ((long long int) max((var_8), (((/* implicit */int) var_2)))));
                            var_24 = ((/* implicit */unsigned char) arr_2 [i_0] [1]);
                            arr_14 [i_0] [i_1] [i_1] [3U] [i_4] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_10 [i_2 + 1] [(short)0] [i_2])) << (((((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_2])) - (12112))))), (((/* implicit */int) arr_12 [(unsigned short)6] [i_1] [i_1] [i_0]))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) var_13);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            arr_17 [i_1] [i_6] [i_4] [i_2] [1U] [i_1] = ((/* implicit */unsigned int) ((signed char) var_15));
                            arr_18 [(signed char)4] [(unsigned short)2] [i_0] [(signed char)4] [i_1] [5ULL] = ((/* implicit */unsigned short) (signed char)63);
                            arr_19 [i_1] [i_4] [4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_4] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) var_15)))), (((/* implicit */int) max((((/* implicit */short) var_5)), (arr_1 [i_2 + 1]))))));
                    }
                }
                for (short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_21 [(unsigned short)5] [i_1] [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [(signed char)0] [i_9] [i_9])) ? (((/* implicit */int) arr_10 [i_0] [(short)2] [i_8])) : (var_8))) / (((/* implicit */int) min((arr_28 [4LL] [4LL] [i_7] [4LL] [2ULL] [i_9]), (((/* implicit */unsigned short) arr_3 [2ULL] [i_0] [(unsigned char)0])))))))) ? (((/* implicit */long long int) arr_22 [i_7] [i_9])) : (min((((/* implicit */long long int) var_9)), (arr_9 [(short)3] [i_1] [i_8 + 2]))))))));
                                arr_29 [0U] [i_1] [(unsigned char)6] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((int) var_2)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 1; i_11 < 8; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) ((unsigned char) arr_2 [i_11] [i_11 + 1]));
                            arr_39 [i_0] [i_0] [2] [i_1] [i_0] = ((/* implicit */unsigned int) ((var_10) / (((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        }
                        for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_11 + 1])) / (((/* implicit */int) arr_15 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 2]))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_11 + 2] [i_11 + 1] [i_11 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_11 + 2] [i_11 + 1] [i_11 - 1])) : (((/* implicit */int) arr_5 [i_10] [i_11 - 1] [i_11 + 1] [i_11 - 1]))));
                        }
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) arr_40 [i_11 + 1] [7ULL] [i_11 + 2] [(unsigned char)7] [i_11 + 2] [6LL] [i_11])) : (arr_2 [i_11 - 1] [i_11 - 1])));
                        var_32 *= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-63))))) == (((((/* implicit */int) var_1)) - (((/* implicit */int) var_5))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_14 = 1; i_14 < 8; i_14 += 3) 
                    {
                        for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            {
                                arr_47 [i_0] [i_0] [5] [i_1] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned char)8] [i_1] [5LL] [i_15]))))) == (((/* implicit */int) var_2))));
                                arr_48 [i_1] [i_1] = ((/* implicit */short) arr_12 [i_0] [i_1] [5LL] [i_0]);
                                var_33 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_15] [i_14 - 1] [i_10])) ? (var_8) : (((/* implicit */int) arr_44 [i_0] [i_10] [i_14] [i_15])))));
                                arr_49 [1ULL] [1ULL] [i_10] [8U] [i_14] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_1 [3U]))))) < ((+(((/* implicit */int) arr_32 [i_0] [i_1] [8ULL]))))));
                            }
                        } 
                    } 
                    var_34 = ((arr_24 [i_1] [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 3; i_16 < 9; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) ((arr_25 [i_1] [i_1] [i_10] [i_1]) < (arr_25 [i_16] [i_16 - 2] [i_16 - 1] [i_1])));
                                arr_54 [(short)2] [i_1] [i_1] [6ULL] [(signed char)4] [8] [(unsigned short)2] = ((/* implicit */int) ((((((/* implicit */int) arr_43 [i_1])) << (((((/* implicit */int) var_2)) - (18365))))) < (((((/* implicit */int) var_3)) / ((-2147483647 - 1))))));
                                var_36 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_12))))));
                            }
                        } 
                    } 
                }
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (+((-(var_7))))))));
            }
        } 
    } 
    var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_13))))) : (var_11)));
    var_39 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
    {
        for (unsigned short i_19 = 2; i_19 < 15; i_19 += 3) 
        {
            {
                arr_60 [i_19] [i_19] = ((/* implicit */short) max((((/* implicit */int) var_3)), (((((/* implicit */int) max((var_2), (var_15)))) / (((/* implicit */int) arr_56 [i_19 + 2] [i_19 - 2]))))));
                arr_61 [i_19] [i_19] [i_19] = ((/* implicit */short) arr_59 [i_18] [i_19] [i_18]);
            }
        } 
    } 
}
