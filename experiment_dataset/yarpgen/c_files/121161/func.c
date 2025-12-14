/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121161
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_1] [i_2] [(signed char)0] = ((/* implicit */long long int) ((var_14) << (((3328479031U) - (3328479013U)))));
                                arr_13 [(unsigned char)2] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) var_4)), (min((var_12), (var_12)))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_7 [13LL] [13LL])), (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        arr_19 [i_1] = ((/* implicit */short) 9223372036854775807LL);
                        var_16 = ((/* implicit */long long int) arr_5 [i_0] [i_1]);
                    }
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_0]))))))));
                    var_18 &= ((/* implicit */unsigned short) arr_18 [i_0] [(unsigned short)10] [i_5 - 2] [i_5] [10]);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1 + 1])))) & (((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (arr_14 [i_0] [i_1 - 1] [i_5 - 1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_7)))))));
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    arr_24 [i_1] [(signed char)21] [i_1] = ((/* implicit */int) (!(max((var_5), (arr_1 [i_0] [i_1 - 1])))));
                    arr_25 [i_1] = ((/* implicit */unsigned int) ((_Bool) max((var_12), (9223372036854775807LL))));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 3; i_8 < 22; i_8 += 1) 
                    {
                        arr_29 [i_0] [11] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_27 [i_1 - 1] [i_1 + 1] [i_1 + 1]) < (arr_27 [i_1 + 1] [i_1 - 1] [i_1 + 1]))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [i_1 + 1] [i_1 + 1])), (max((((/* implicit */unsigned short) arr_15 [i_0] [(unsigned short)11] [i_7] [i_1])), (var_8)))))) : (((/* implicit */int) arr_0 [i_0]))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) : (((((/* implicit */_Bool) arr_15 [i_8 - 3] [i_8 - 1] [i_8 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7))))))));
                        arr_30 [i_0] [i_0] [i_7] [i_1] [i_0] = ((/* implicit */_Bool) var_3);
                    }
                    for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_21 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_14 [i_0] [i_1] [i_7])))) ? (arr_17 [i_0] [i_1] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13))))))), (((unsigned long long int) var_12))));
                        arr_33 [(short)8] [i_1] [i_1] [i_9] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                        arr_34 [i_9] [3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_9])) ? ((-(arr_31 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) : (576460717943685120ULL)))))));
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 22; i_10 += 1) 
                    {
                        arr_38 [i_0] [(_Bool)1] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) arr_1 [11U] [i_1])), (((((/* implicit */int) arr_1 [14LL] [i_1])) ^ (((/* implicit */int) var_6))))));
                        arr_39 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((556076257U), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) arr_20 [i_1] [(short)5] [i_1]))))) ? (max((((/* implicit */unsigned long long int) arr_20 [i_1 + 1] [i_1 + 1] [i_1 + 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (17870283355765866489ULL))))) : (min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)2] [(unsigned char)7]))) : (var_14)))))));
                        arr_40 [20] [20] [20] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_7] [i_10 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (min((arr_37 [i_1 + 1] [i_7]), (((/* implicit */unsigned long long int) (short)31798))))));
                        /* LoopSeq 3 */
                        for (int i_11 = 2; i_11 < 21; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_42 [i_1] [i_10 - 4] [i_11 + 2] [i_11] [i_11])))), (((/* implicit */int) var_2))));
                            arr_43 [i_11 + 1] [i_10 - 4] [i_1] [i_1] [i_1] [(unsigned short)4] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_9 [i_0] [i_11 + 1] [i_11 + 1] [(_Bool)1] [i_11] [i_10])))));
                            arr_44 [(unsigned char)7] [i_1] [i_7] [15LL] [(signed char)13] [i_1] = ((/* implicit */signed char) var_13);
                        }
                        for (short i_12 = 1; i_12 < 21; i_12 += 4) 
                        {
                            arr_47 [i_1] [i_10] [i_7] [i_1] [i_0] [(short)0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_8))))), (var_9)))) : (max((((/* implicit */int) arr_0 [i_10 - 3])), (((((/* implicit */_Bool) 1402500928)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_10 + 1])) : (((/* implicit */int) var_9))))))));
                            arr_48 [i_0] [i_0] [i_1] [21U] [i_0] [(unsigned short)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_1 [i_1 - 1] [i_10 - 3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_12 + 2] [i_1 - 1]))))) : ((+(((/* implicit */int) arr_1 [i_1 - 1] [i_10 + 1]))))));
                        }
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                        {
                            arr_51 [i_1] [(unsigned short)21] [(unsigned char)9] [(_Bool)1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
                            arr_52 [i_0] [(signed char)11] [i_1] [i_10 - 2] [14LL] [i_13] = ((/* implicit */int) arr_17 [i_7] [i_7] [i_10 - 1] [i_1 + 1]);
                            arr_53 [i_0] [i_1] [i_10] [i_1] [i_1] [i_0] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_1 - 1] [i_10 - 3]))));
                            arr_54 [i_0] [i_0] [(short)14] [i_0] [i_0] [i_0] [(unsigned char)0] &= ((/* implicit */short) ((((/* implicit */int) var_1)) << (((((((/* implicit */int) var_11)) * (((/* implicit */int) var_4)))) + (5844)))));
                        }
                        arr_55 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((var_2), (var_2))), (min((arr_32 [(_Bool)1] [i_1 + 1] [i_7] [i_10] [i_7] [(unsigned short)5]), (((/* implicit */short) (unsigned char)210)))))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    var_23 = ((/* implicit */short) ((arr_49 [i_0] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_49 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_49 [i_0] [i_1 + 1] [i_0] [i_1] [i_1 - 1] [i_1 - 1]))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_3))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 2) 
                    {
                        for (short i_16 = 4; i_16 < 21; i_16 += 2) 
                        {
                            {
                                arr_64 [i_0] [i_1 - 1] [16LL] [i_1] [i_16 - 3] [i_1] [i_14] = ((/* implicit */signed char) var_13);
                                var_25 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_50 [(unsigned char)22] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) arr_50 [(signed char)0] [(signed char)9] [i_1] [i_1 - 1] [i_1 + 1]))));
                                arr_65 [i_16] [(signed char)7] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) arr_14 [i_0] [i_1 + 1] [i_16 - 4]));
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_46 [13U] [(signed char)15] [(signed char)15] [10ULL] [(_Bool)1])))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_28 [i_1] [i_0] [i_1 + 1] [i_1 - 1] [i_1])) > (var_14))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1 - 1] [i_1 - 1]))) ^ ((-(var_12)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)57288)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) : (max((var_14), (((/* implicit */unsigned long long int) var_10)))))));
    var_28 = min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) var_11))))))), (var_14));
}
