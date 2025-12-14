/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141022
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
    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((var_9), (((/* implicit */signed char) var_6)))), (((/* implicit */signed char) var_15))))) && (((/* implicit */_Bool) ((unsigned short) var_11)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_3 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) % (max((((/* implicit */int) var_4)), (var_12)))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (arr_9 [i_3])));
                                var_19 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] &= ((/* implicit */unsigned long long int) var_7);
                    arr_12 [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) ((unsigned int) arr_3 [i_2] [i_1]))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_4 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */long long int) var_5)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) >> (((/* implicit */int) var_6))))), (arr_3 [16LL] [i_5])));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_3 [i_6] [i_1]))));
                            arr_18 [i_0] [i_6] [i_2] [i_1] [i_0] = arr_7 [i_6] [i_5] [i_0] [i_0] [i_0] [i_0];
                            arr_19 [i_0] [i_1] [i_2] [(unsigned char)2] [i_6] = ((/* implicit */_Bool) var_13);
                        }
                        for (signed char i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            arr_24 [i_7 - 2] [i_5] [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_2] [i_2] [i_5])), (((14780500845106432018ULL) / (14780500845106432018ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7])))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((int) ((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_20 [i_7 + 2] [i_5] [(unsigned char)6] [i_1] [(unsigned char)6])) : (((/* implicit */int) arr_20 [i_0] [(signed char)9] [i_2] [i_5] [i_7]))))))));
                            arr_25 [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_15 [i_7] [i_5] [(unsigned char)17] [i_1] [i_0] [(unsigned char)17])))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_3 [i_1] [i_5]) : (4294967295U)))), ((~(12ULL)))))));
                        }
                        var_22 *= ((/* implicit */short) 0U);
                        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) var_0))));
                    }
                    arr_26 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((arr_20 [17U] [i_2] [i_2] [i_0] [17U]) || (((/* implicit */_Bool) (((-(((/* implicit */int) var_10)))) + (((/* implicit */int) (unsigned char)34)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((var_1) / (-7672264349514913474LL))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)52)) || (var_6))))));
                                arr_33 [i_8] = ((/* implicit */signed char) arr_13 [i_8] [(_Bool)1] [i_8] [i_8] [(signed char)4] [(signed char)4]);
                                var_26 -= ((/* implicit */unsigned char) 16016820928696654351ULL);
                                arr_34 [i_8] = ((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9]);
                                arr_35 [i_0] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) arr_32 [i_10] [i_8] [i_8] [i_8] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) ((8ULL) >> (((14780500845106432024ULL) - (14780500845106431983ULL)))));
                    var_28 = ((/* implicit */signed char) var_1);
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 17; i_12 += 2) 
                    {
                        var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_12 + 4] [3]))) != (((long long int) 9U))));
                        var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_11] [i_12 + 3] [i_11] [i_1] [i_1])) ? (arr_29 [i_0] [i_1] [i_1] [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1] [(unsigned char)15] [i_12 + 4] [i_1])))));
                        arr_40 [i_0] [i_0] [i_0] [i_12] [i_0] |= ((/* implicit */int) (unsigned char)198);
                    }
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 3; i_14 < 18; i_14 += 1) /* same iter space */
                        {
                            arr_48 [i_0] [(unsigned char)0] [i_14] [i_13] [(short)18] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                            arr_49 [i_14] [i_1] [i_1] [12U] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) <= (var_14))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_11] [i_11] [i_13] [i_14]))));
                            arr_50 [i_0] [i_14] [10LL] [i_13] [i_14 - 1] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned char)14] [i_1] [6LL] [i_1])) >= (((/* implicit */int) (unsigned short)65531)))) ? (((/* implicit */int) arr_9 [i_14])) : (((((/* implicit */int) arr_16 [i_14] [i_13])) >> (((((/* implicit */int) (signed char)43)) - (17)))))));
                            var_31 *= ((/* implicit */short) var_12);
                            var_32 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_14 + 1] [17] [i_14] [i_14 + 2] [15LL] [i_1]))));
                        }
                        for (unsigned char i_15 = 3; i_15 < 18; i_15 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_45 [i_13] [i_13]);
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((_Bool) arr_23 [i_15 - 3] [i_15 - 3] [i_11] [i_13] [i_15 - 1])))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (_Bool)1))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_42 [i_0]))));
                        }
                        arr_54 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(var_12)));
                        arr_55 [i_0] [i_1] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) & (0U)));
                        var_36 &= ((/* implicit */unsigned short) ((arr_51 [i_11] [i_0] [i_0] [i_1] [i_13] [i_0]) || (((/* implicit */_Bool) (signed char)106))));
                    }
                    arr_56 [(signed char)3] [i_1] [i_11] [i_1] &= ((/* implicit */long long int) (-(arr_29 [i_11] [i_0] [i_0] [i_0])));
                }
                arr_57 [(unsigned char)2] [i_1] [i_1] = ((/* implicit */signed char) var_14);
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned char) var_5);
}
