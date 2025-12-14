/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117722
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((var_8) ? ((~(arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) % (arr_0 [i_0 - 1] [i_0]))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (((((/* implicit */_Bool) 5751678630932943629LL)) ? (12776484194941451044ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((arr_0 [i_4] [i_0]) % (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | ((((_Bool)1) ? (arr_7 [i_0 + 2] [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                                arr_16 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((-5844788954297172221LL), (((/* implicit */long long int) 3594238130U)))), (4310423819736730629LL)))) ? (min(((-(arr_3 [i_0]))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_1])))) : (((/* implicit */unsigned long long int) var_4))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((34359738367LL), (((/* implicit */long long int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (((((/* implicit */_Bool) ((-34359738367LL) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0])))))) ? (max((-3097010725918807406LL), (((/* implicit */long long int) 2147483647)))) : (min((var_10), (((/* implicit */long long int) arr_9 [(unsigned char)11] [i_3] [i_2] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_19 = ((/* implicit */short) var_8);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_5] [i_5] [i_5])) : (arr_13 [i_0] [i_1] [i_5] [i_6] [i_7 - 1])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_13 [i_6] [i_6] [i_5] [i_6] [i_7])) : (var_4))))) | (((((unsigned int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [10U] [i_5] [10U] [i_5] [i_7 + 2])))))));
                                arr_24 [i_0] [i_0] [i_0] [7U] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) arr_11 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? ((-(((/* implicit */int) ((short) var_2))))) : (((/* implicit */int) var_1))));
                                var_21 = ((/* implicit */int) min((var_21), (((int) (unsigned char)161))));
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_22 += ((short) arr_0 [i_0] [(short)0]);
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0])) ? (2030807249U) : (((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_0] [i_9] [i_10] [i_9])) ? (2318738481U) : (2030807249U)))));
                            var_23 &= ((/* implicit */unsigned long long int) (-(2030807243U)));
                        }
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_11] [i_1]) % (arr_8 [i_8] [i_1] [i_9] [i_0] [i_0])))) ? ((+(arr_0 [i_0 + 2] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_11])))));
                            var_24 ^= arr_21 [i_0] [2LL];
                        }
                        for (int i_12 = 4; i_12 < 13; i_12 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) var_9);
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)));
                            arr_41 [i_9] [i_9] [i_9] [i_0] [i_9] = ((/* implicit */long long int) arr_15 [i_12] [11LL] [i_1] [i_9] [i_12]);
                            var_27 = ((/* implicit */long long int) arr_3 [i_0]);
                            var_28 = ((/* implicit */long long int) ((var_3) ? (((/* implicit */int) arr_19 [i_12 - 2] [i_12 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_19 [i_12 + 1] [i_12 - 3] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            arr_46 [4U] |= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                            arr_47 [i_0] [i_0] [i_9] [i_8] [i_13] [i_1] = ((/* implicit */unsigned long long int) arr_32 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0]);
                            var_29 = ((/* implicit */long long int) var_14);
                            arr_48 [i_0] = ((/* implicit */int) (((_Bool)0) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0 - 1])))));
                            arr_49 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_32 [i_0] [i_13] [i_9] [i_0 + 2] [i_9] [i_0]);
                        }
                        arr_50 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_9])) ? (((/* implicit */unsigned int) arr_45 [i_0 + 2])) : (arr_18 [i_0]))));
                    }
                    for (signed char i_14 = 2; i_14 < 12; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_2))));
                        var_31 &= ((/* implicit */unsigned int) arr_20 [2LL] [2LL] [i_8] [i_1] [i_8]);
                        arr_55 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) var_3)), (max((arr_5 [i_0] [i_0]), (max((((/* implicit */long long int) var_3)), (arr_52 [i_0] [i_0 + 1] [i_0] [i_0])))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (var_9)));
                    }
                    arr_56 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */long long int) ((2950243891U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94)))))) % (((long long int) arr_4 [i_0] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((((/* implicit */long long int) ((2950243891U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94)))))) * (((long long int) arr_4 [i_0] [i_0 + 2])))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((_Bool) arr_26 [i_0])) ? (18014398509481983LL) : (max((((-5844788954297172221LL) % (-5445443539082918125LL))), (5445443539082918120LL)))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 1; i_17 < 13; i_17 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1] [i_0] [(short)6]);
                                var_35 = ((/* implicit */long long int) arr_42 [i_0] [i_1] [i_15] [i_16] [(signed char)6]);
                                var_36 = ((/* implicit */unsigned char) arr_43 [i_17 - 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((arr_20 [i_0] [i_1] [i_0] [(_Bool)1] [(_Bool)1]) * (((/* implicit */int) (_Bool)0))))) / (max((1976228815U), (2264160029U)))));
                        var_38 = arr_5 [i_18] [i_15];
                    }
                    arr_68 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) var_12))))), (max((arr_18 [i_0]), (((/* implicit */unsigned int) (unsigned char)254))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_60 [i_0] [i_1] [i_1] [i_0] [0U] [i_0])) ? (((/* implicit */int) arr_60 [i_15] [i_1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0])))) | (((((/* implicit */int) var_7)) * (((/* implicit */int) var_8))))))) : (min((((((/* implicit */_Bool) (unsigned short)31767)) ? (((/* implicit */long long int) 1356457828U)) : (-8671146582342501620LL))), (arr_29 [i_0] [i_1] [i_0] [i_0 - 1]))));
                }
                arr_69 [i_0] [i_0] [11] = ((/* implicit */_Bool) ((((_Bool) ((unsigned short) 2097002781024437460LL))) ? (max(((~(var_5))), (((/* implicit */unsigned int) arr_58 [i_0] [i_1] [(_Bool)1] [i_0 - 1])))) : ((~(3981971377U)))));
                /* LoopNest 3 */
                for (long long int i_19 = 3; i_19 < 12; i_19 += 1) 
                {
                    for (long long int i_20 = 0; i_20 < 14; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 1; i_21 < 12; i_21 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (-(3531359999U))))));
                                var_40 += ((/* implicit */unsigned char) ((_Bool) ((arr_7 [i_19 - 2] [4LL] [i_0 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_21 + 2] [i_21 + 2] [i_21 + 2] [i_21 - 1] [i_21 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)14))))))) ? (min((min((((/* implicit */long long int) var_13)), (9223372036854775807LL))), (((/* implicit */long long int) ((int) (short)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_42 = ((/* implicit */int) var_2);
    var_43 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_14))));
}
