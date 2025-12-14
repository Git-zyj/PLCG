/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151914
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                arr_5 [i_0] = ((/* implicit */int) max(((signed char)-101), (((/* implicit */signed char) ((((/* implicit */_Bool) 6259894513767599372ULL)) || (((/* implicit */_Bool) (unsigned char)55)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((unsigned int) (unsigned char)214));
                                var_15 = ((/* implicit */long long int) var_7);
                                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1])) / (((/* implicit */int) (unsigned char)213))))) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (unsigned char)205)))) - (((/* implicit */int) (short)5231))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_10), (max((2901629217526950157LL), (((/* implicit */long long int) min(((unsigned short)53529), ((unsigned short)14546))))))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-91)) * (((/* implicit */int) (unsigned short)12006))));
            arr_18 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (signed char)102))));
        }
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_8 = 1; i_8 < 8; i_8 += 3) 
            {
                arr_23 [1ULL] [(_Bool)1] [i_7] [1ULL] = ((/* implicit */short) arr_10 [(unsigned short)1] [i_8 - 1] [i_8] [i_5]);
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_19 = ((/* implicit */int) var_11);
                        var_20 = (!(((/* implicit */_Bool) (unsigned char)43)));
                    }
                    for (int i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        arr_32 [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) ((long long int) (signed char)66));
                        var_21 = ((/* implicit */unsigned int) arr_29 [i_5] [i_7] [i_8] [i_9] [i_11] [i_7]);
                        var_22 = ((/* implicit */unsigned long long int) arr_28 [i_11 + 1] [i_11 + 1] [(unsigned short)4] [i_11 + 2] [i_11 + 1]);
                    }
                    for (signed char i_12 = 3; i_12 < 10; i_12 += 1) /* same iter space */
                    {
                        arr_35 [i_5] [i_5] [(unsigned short)2] [i_9] [4ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)234)) ? (arr_24 [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73)))));
                        arr_36 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (signed char)-83);
                        arr_37 [i_5] [i_7] [i_7] [i_9] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)73))));
                        var_23 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) -797693425)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (_Bool)1)))));
                    }
                    for (signed char i_13 = 3; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)213)) ? (((((/* implicit */int) (short)23218)) + (797693444))) : (((/* implicit */int) arr_15 [i_13 + 1]))));
                        arr_41 [i_7] [i_7] [i_7] [i_9] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5235)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5247)))));
                        var_25 += ((/* implicit */int) (signed char)-80);
                        arr_42 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8)) ? (17368123665494703196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))));
                    }
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)113)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214)))));
                }
                for (int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        arr_49 [i_15] [i_7] [i_8 + 1] [i_8] [i_7] [i_7] [i_5] = ((/* implicit */unsigned int) arr_28 [i_5] [5U] [i_5] [i_5] [i_5]);
                        arr_50 [i_5] [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) var_0);
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-24501))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        var_28 = (signed char)127;
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5681074309335129593LL)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned short)12008))))) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_16] [i_16] [i_14] [i_14] [i_8] [i_7] [i_5])))));
                        arr_54 [i_8 + 3] [i_8 + 3] [i_8 - 1] [(_Bool)1] [i_16] [i_7] [i_16] = ((((/* implicit */_Bool) arr_10 [i_5] [i_7] [i_8] [i_8 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) 1245321646)));
                        var_30 = ((/* implicit */int) ((((/* implicit */int) (signed char)127)) == (((/* implicit */int) arr_45 [i_7] [i_8 + 1] [i_7]))));
                    }
                    for (short i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        var_31 = ((/* implicit */long long int) arr_17 [6U] [6U] [i_7]);
                        var_32 = ((/* implicit */short) ((signed char) (signed char)-110));
                        var_33 = ((/* implicit */unsigned char) arr_12 [i_5] [i_5] [i_8] [2] [i_14] [i_17] [i_17]);
                        var_34 = ((/* implicit */signed char) arr_33 [i_5] [i_7] [i_8 + 3] [1ULL]);
                    }
                    for (unsigned short i_18 = 1; i_18 < 10; i_18 += 1) 
                    {
                        var_35 -= ((/* implicit */int) ((((/* implicit */_Bool) 85585402U)) ? (19ULL) : (((/* implicit */unsigned long long int) -1436046403))));
                        arr_60 [(unsigned char)6] [i_7] [i_8 + 1] [i_8 + 3] [i_8 + 1] [i_8 + 1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12007))) | (4860444610096638658ULL)));
                    }
                    arr_61 [i_5] [i_7] [i_5] = ((/* implicit */unsigned long long int) var_10);
                    arr_62 [i_5] [i_7] [i_8] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) 10107051302180497916ULL)) ? (4294967286U) : (85585405U)));
                    arr_63 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10107051302180497910ULL)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)7))));
                }
                for (unsigned char i_19 = 1; i_19 < 10; i_19 += 2) 
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_55 [i_19 - 1] [i_8 + 1] [(signed char)1] [i_19] [i_7]))));
                    var_37 = arr_58 [i_19 - 1] [i_19 - 1] [i_8 + 3] [i_7] [i_5];
                }
            }
            /* vectorizable */
            for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                var_38 = ((((/* implicit */int) arr_45 [i_7] [i_7] [i_20])) >> (1U));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    for (long long int i_22 = 2; i_22 < 10; i_22 += 4) 
                    {
                        {
                            var_39 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!((_Bool)1))))));
                            arr_77 [i_7] [i_7] [i_20] [i_21] [i_22] [6] [i_20] = ((/* implicit */unsigned int) (_Bool)1);
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42147)))));
                        }
                    } 
                } 
                arr_78 [i_7] [i_7] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137)))));
            }
            var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)61048)) ? (((/* implicit */int) (unsigned char)220)) : (-1073741824)));
            arr_79 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_15 [5]);
        }
        for (int i_23 = 0; i_23 < 11; i_23 += 2) 
        {
            var_42 = ((/* implicit */unsigned char) arr_27 [i_5] [i_5] [i_5]);
            arr_82 [i_5] [i_5] = 1863900817;
        }
        arr_83 [i_5] [1] = ((/* implicit */long long int) max(((unsigned char)136), ((unsigned char)193)));
    }
    var_43 ^= ((/* implicit */_Bool) var_0);
}
