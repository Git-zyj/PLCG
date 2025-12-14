/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114716
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 131071U)) ? (1751447134U) : (4294836224U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((131071U), (((/* implicit */unsigned int) (_Bool)1)))))))))));
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (-1890524521) : (((/* implicit */int) (short)7))))), (((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) 131071U)) : ((~(arr_6 [(unsigned char)20] [i_2])))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((arr_3 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)0]))))) ^ (((/* implicit */long long int) min((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) != (arr_3 [i_0])))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        arr_19 [i_3] [i_5] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (signed char)30)) != (((/* implicit */int) (_Bool)1))))), (((((/* implicit */int) var_3)) << (((arr_12 [i_0] [0U] [i_5]) + (2170066917847907798LL)))))));
                        arr_20 [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3573346488565783409ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((5126602707508015607ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))))) != (((/* implicit */unsigned long long int) max((131071U), (((/* implicit */unsigned int) (short)16128))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_23 [i_3] [i_5] [i_0] [i_5] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0] [i_3] [i_4]))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_5])) || (((/* implicit */_Bool) arr_3 [i_5]))));
                            var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_4] [i_3] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_7 [i_0] [i_3] [i_4] [13]))));
                            var_18 = ((/* implicit */unsigned short) arr_21 [(unsigned char)1] [(unsigned char)1] [(signed char)16]);
                        }
                        var_19 = ((/* implicit */int) var_4);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            {
                                arr_34 [i_7] [i_0] [i_8] [i_9] [i_8] [i_9] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-13)))))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_8] [i_8])) ? (arr_27 [i_7] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39629)) ? (-1890524491) : (((/* implicit */int) (unsigned char)0)))))))));
                                arr_35 [i_0] [i_0] [i_7] [(unsigned short)10] [i_8] [(short)8] [(unsigned short)9] = ((/* implicit */_Bool) arr_8 [i_0]);
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_0] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))), (min((3634174561U), (((/* implicit */unsigned int) (short)5656))))));
                            }
                        } 
                    } 
                    arr_36 [i_8] [i_7] [21] [20ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2017989826U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) != (((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) arr_5 [i_7])) : (((/* implicit */int) var_10))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (signed char)-30))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((min((3840U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)33402))))));
                        arr_40 [i_0] [i_7] [i_8] [15LL] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), (max(((signed char)-125), (((/* implicit */signed char) var_8))))))) & (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) var_3);
                            var_24 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_30 [i_0] [i_0] [i_0])))) && (var_4))));
                            arr_43 [i_0] [i_7] [i_8] [i_8] [i_11] [i_8] [(_Bool)1] = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (var_5))), (max((arr_11 [i_0] [i_7] [i_8]), (((/* implicit */unsigned long long int) var_7)))))) != (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_8] [i_7] [i_8] [i_13])) : (((((/* implicit */_Bool) (short)-13019)) ? (((/* implicit */int) (short)13019)) : (((/* implicit */int) var_10))))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_49 [i_0] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_21 [16U] [(signed char)23] [i_14]);
                            arr_50 [i_0] [i_0] [i_8] [i_8] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) 0ULL);
                            arr_51 [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_14] [i_8] [i_8])) ? (arr_8 [i_14]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_13] [i_13])))))));
                            var_26 = ((/* implicit */short) (-(arr_11 [i_8] [i_13] [i_8])));
                            arr_52 [i_8] [i_7] [(unsigned short)3] [i_13] [i_8] = ((/* implicit */unsigned short) ((arr_3 [i_0]) >> (((((/* implicit */int) (short)-6)) + (57)))));
                        }
                        arr_53 [i_8] [i_8] [i_7] [(_Bool)1] [i_8] = ((/* implicit */long long int) (_Bool)1);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_13)) - (29730)))));
                    }
                }
            } 
        } 
        arr_54 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)224)))))));
        arr_57 [i_15] = ((/* implicit */_Bool) arr_26 [i_15] [i_15]);
    }
    var_29 = ((/* implicit */unsigned int) var_9);
    var_30 = max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_4))))))), (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
    {
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            for (long long int i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                {
                    var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_10)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        arr_70 [(unsigned short)14] [i_16] [i_17] [i_17] [i_18] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-92)) | (((/* implicit */int) (unsigned short)40272))));
                        var_32 = ((/* implicit */unsigned char) arr_64 [i_16] [i_18]);
                    }
                    for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) (~(1071416186757135870ULL)));
                        /* LoopSeq 3 */
                        for (int i_21 = 0; i_21 < 20; i_21 += 3) 
                        {
                            var_34 = ((/* implicit */short) max((var_34), (max((((/* implicit */short) (unsigned char)202)), ((short)-24393)))));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) ^ (262143U)))) && (((/* implicit */_Bool) arr_68 [i_16] [i_17] [i_18] [i_20])))))))));
                            var_36 &= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */int) arr_2 [i_16])) : (((/* implicit */int) (signed char)-13))))));
                            arr_77 [i_18] [i_18] [i_18] [4LL] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (+(4294705152U)))) : ((~(-5434982862272227731LL)))));
                            arr_78 [(short)10] [i_18] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (signed char)-98))))), ((~(-831609259231970845LL)))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_72 [i_16] [i_16] [i_16]))) ? (((((/* implicit */_Bool) (short)13019)) ? (((/* implicit */int) (short)-13022)) : (((/* implicit */int) (signed char)118)))) : (arr_44 [(_Bool)1] [(_Bool)1] [(unsigned char)10] [i_20] [(unsigned char)6] [(short)21]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294836224U)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_24 [i_17]))))) ? (((/* implicit */int) arr_24 [21])) : (((/* implicit */int) max((arr_22 [i_16]), ((short)32767))))))));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_81 [i_22] [i_20] [(unsigned char)11] [i_17] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_9) + (2147483647))) << (((((min((-1130446334224285201LL), (((/* implicit */long long int) var_0)))) + (1130446334224285204LL))) - (3LL)))))) ? ((~(((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_13)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_18])))))));
                            arr_82 [(short)12] [i_17] [i_18] [(unsigned short)17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_13 [i_17] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (max((((/* implicit */unsigned int) var_10)), (arr_13 [i_22] [i_20] [(unsigned char)16]))) : (max((arr_17 [i_22] [i_18] [i_18] [i_18] [i_16]), (((/* implicit */unsigned int) var_12))))));
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 2) 
                        {
                            var_37 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), (max((min((131071U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_75 [i_16] [i_16] [(unsigned short)4])))))))));
                            arr_85 [i_16] [i_17] [i_18] [i_20] [(signed char)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_16] [i_16] [i_18])) ? (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (short)13016))))) : (((((/* implicit */_Bool) arr_79 [i_16] [i_17] [i_17] [i_20] [i_23])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_29 [i_16] [i_23] [(_Bool)1])))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)114))))))));
                            arr_86 [(unsigned short)0] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)127));
                            var_38 = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */long long int) var_0)), (arr_84 [i_16] [i_17] [i_23]))));
                        }
                    }
                    arr_87 [i_17] = ((/* implicit */unsigned char) max(((unsigned short)8128), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_64 [i_17] [i_17])))))));
                }
            } 
        } 
    } 
}
