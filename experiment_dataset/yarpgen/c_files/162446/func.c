/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162446
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
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (5562357338182904547LL) : (-5562357338182904548LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) var_3);
                    var_17 = ((/* implicit */unsigned long long int) ((var_7) ? (min((((((/* implicit */int) var_10)) << (((/* implicit */int) var_7)))), (((/* implicit */int) arr_0 [i_0] [i_2])))) : (((/* implicit */int) arr_6 [(signed char)8] [i_1]))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_18 ^= ((/* implicit */unsigned int) arr_10 [i_1] [i_1 - 1] [i_1] [i_2] [i_3 - 2]);
                        var_19 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(unsigned char)13] [i_2] [i_3 - 2]))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) arr_4 [i_0 + 4] [i_1 + 1] [i_1 + 1]);
                            var_21 -= ((/* implicit */short) max((((arr_2 [i_0 + 4]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1]))), (((((/* implicit */_Bool) 5562357338182904547LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))) : (arr_4 [5ULL] [(short)2] [i_4])))));
                            arr_13 [i_4] [i_3] [i_2] [i_1] = ((((arr_8 [i_1 + 1] [i_1 - 1]) ? (var_6) : (var_11))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25994))));
                        }
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                            var_23 ^= arr_5 [i_2] [i_1] [(signed char)5];
                            var_24 = ((/* implicit */signed char) max((var_24), (arr_10 [i_0] [2U] [i_0 + 3] [i_3 - 2] [(signed char)12])));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 4] [i_1 + 1]))) : (arr_15 [i_2] [i_3 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 4] [i_5] [i_2]))) : ((-(arr_14 [i_0] [i_0 - 2] [i_0 + 4] [i_0 - 2] [i_0 + 4] [i_0] [13ULL])))));
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [10LL] [i_2] [i_2] [(signed char)9] &= ((/* implicit */unsigned long long int) ((unsigned short) (+(arr_1 [i_0 - 2]))));
                        var_26 = ((/* implicit */long long int) ((9966416478638204001ULL) * (((/* implicit */unsigned long long int) -1616453192))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                    {
                        var_27 *= ((/* implicit */signed char) (short)21);
                        /* LoopSeq 4 */
                        for (int i_8 = 4; i_8 < 12; i_8 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1616453192) : (((/* implicit */int) arr_24 [i_0] [i_0] [11U] [i_8]))))) ? (((((/* implicit */int) (short)-8347)) & (((/* implicit */int) (signed char)95)))) : (((/* implicit */int) var_8)))))));
                            var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) -5562357338182904548LL)) ? (((/* implicit */int) arr_20 [i_0] [i_1 + 1] [i_0 + 4] [i_7])) : (((/* implicit */int) var_7))))));
                            arr_25 [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */int) var_11);
                            var_30 = ((/* implicit */_Bool) arr_20 [(short)8] [i_1] [i_2] [i_7]);
                        }
                        for (int i_9 = 4; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            var_31 |= ((/* implicit */unsigned char) ((arr_2 [i_0 + 3]) ? (((/* implicit */int) arr_27 [i_0 + 3] [(signed char)13] [i_9 + 2] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)58563))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_14 [10ULL] [i_1] [i_1] [i_2] [i_7] [i_9 + 1] [i_9]))));
                            arr_28 [i_7] [i_7] [i_2] [i_1] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_9 - 4] [i_9] [9U] [i_9 + 2] [i_9]))));
                            var_33 ^= ((/* implicit */long long int) arr_11 [i_0 + 2] [i_1] [i_2] [12ULL] [i_0]);
                            var_34 = ((/* implicit */signed char) var_7);
                        }
                        for (int i_10 = 4; i_10 < 12; i_10 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_7] [i_10] [i_10 + 2])) == (((/* implicit */int) arr_10 [i_1 - 1] [i_10 + 2] [i_10 - 1] [i_10] [i_10 - 3]))));
                            var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                            var_37 = ((/* implicit */signed char) (((_Bool)1) ? (-5562357338182904547LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                        }
                        for (int i_11 = 4; i_11 < 12; i_11 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_7] [i_7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 1] [i_1] [(short)13] [i_1]))));
                            arr_34 [i_7] [i_2] [i_7] [i_11] = ((/* implicit */unsigned short) ((-2026573876) & (((/* implicit */int) (unsigned short)39523))));
                        }
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_12]))) : ((-(arr_9 [i_0] [i_1] [i_2])))))) ? (((((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_12])) + (2147483647))) << (((((/* implicit */int) arr_21 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0 + 1])) - (25485))))) : (((((/* implicit */_Bool) -2026573895)) ? (1732760855) : (-2026573875)))));
                        var_39 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) 1732760868))), (((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_2] [i_12] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_1]))) : (arr_31 [i_1 - 1] [i_0 - 1])))));
                        var_40 = ((((/* implicit */_Bool) arr_23 [i_1])) ? (arr_15 [7U] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58563))));
                        arr_38 [i_0] [i_12] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) : (var_0)))) ? (((((((/* implicit */_Bool) (signed char)-98)) ? (1504629469200914261ULL) : (((/* implicit */unsigned long long int) -1616453192)))) - (((/* implicit */unsigned long long int) arr_36 [i_0 + 4] [i_0 + 4] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) var_1))));
                    }
                }
            } 
        } 
    } 
}
