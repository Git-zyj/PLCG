/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135885
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) + (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))))) : ((~(var_4)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3 + 1] [i_3] &= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0]);
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1] [i_3])) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_8)) : (arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0]))) : (((/* implicit */int) min((arr_0 [i_2] [i_3]), (((/* implicit */unsigned short) arr_1 [i_1] [i_3])))))))) ? (((/* implicit */int) arr_9 [(unsigned short)10] [19ULL] [i_2] [i_1] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_2] [i_1] [i_0])), (arr_8 [i_3 + 2] [i_3 + 1] [i_3 - 1])))))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        var_15 *= ((unsigned short) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))));
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 3] [i_2]));
                    }
                    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1848303609)) ? (((((/* implicit */_Bool) arr_15 [i_1] [i_5 + 4] [i_5 - 2] [i_5])) ? (arr_15 [i_1] [i_5 - 1] [i_5 + 1] [i_5 - 1]) : (arr_15 [i_1] [i_5 + 3] [i_5 + 2] [i_5 + 2]))) : (((/* implicit */int) (signed char)-55))));
                        var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                    }
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_21 [i_0] [i_0] [i_1] [i_0] [i_0])))));
                            arr_26 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_7] [i_1] [i_1] [i_1] [i_0])) - (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_0] [i_0]))));
                            arr_27 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_6] [(_Bool)1])))))) ? (((((/* implicit */int) arr_18 [(unsigned char)12] [i_1] [i_1] [(unsigned char)12])) + (arr_3 [i_0] [i_1]))) : (((/* implicit */int) var_5))));
                        }
                        for (int i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_12 [i_8] [i_2] [i_1] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_0] [i_8] [i_0])) > (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_2] [i_6] [20ULL] [13] [i_8]))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_5))))))))));
                            arr_30 [i_0] [10LL] [i_1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_6] [i_8])) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)1])) ? (arr_10 [i_0] [i_0] [(_Bool)1] [i_2] [i_6] [i_1]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)152)), (arr_8 [i_0] [i_0] [(unsigned char)19])))) == (((/* implicit */int) ((arr_3 [i_8] [i_0]) > (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) arr_14 [(signed char)14] [(short)11] [(short)11] [i_8])), (arr_18 [2ULL] [i_2] [i_1] [3U])))) ? (min((((/* implicit */unsigned int) var_9)), (arr_12 [i_8 - 1] [i_2] [i_1] [(signed char)19]))) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_3 [i_1] [i_2]))))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 20; i_9 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
                            arr_33 [i_0] [i_1] [i_6] &= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_9 + 1] [(signed char)14] [i_2] [i_0])) - (((/* implicit */int) ((arr_32 [(_Bool)1] [(signed char)9] [i_2] [i_6] [i_9]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(signed char)11] [(signed char)11] [i_2] [i_6]))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(min((((/* implicit */int) ((short) arr_14 [i_0] [18LL] [i_2] [i_6]))), (var_9))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_10 [i_0] [(unsigned char)7] [i_0] [i_0] [i_0] [i_1])) | (((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (arr_32 [i_10] [i_6] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) / (((/* implicit */unsigned int) arr_17 [i_0]))))));
                        }
                        arr_36 [i_1] [i_1] = ((/* implicit */long long int) arr_23 [i_6] [i_6] [i_6] [i_6] [i_6]);
                    }
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_2] [i_1] [i_1] [i_2]), (((/* implicit */unsigned int) arr_2 [i_1] [i_0]))))) ? (min((arr_13 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */unsigned int) arr_2 [i_0] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6))))));
                }
            } 
        } 
    } 
    var_23 = ((int) ((unsigned int) var_12));
    /* LoopNest 2 */
    for (unsigned char i_11 = 2; i_11 < 10; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                var_24 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(short)8] [i_12])) && (arr_20 [i_11] [8] [i_11] [i_11] [i_11] [i_11 - 1]))))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_2))))) / (arr_39 [i_11] [i_12])));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    arr_46 [i_11 - 1] [i_11 - 1] [i_11] [i_11] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_12] [i_11] [i_11])) && (((/* implicit */_Bool) arr_29 [i_11 - 1] [i_11 + 1] [13U] [i_11] [i_11] [i_11] [i_11]))))), (((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)0)))))));
                    /* LoopSeq 1 */
                    for (short i_14 = 1; i_14 < 10; i_14 += 2) 
                    {
                        arr_49 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_11 - 2] [i_11 - 1] [i_11 - 2])) >= (((/* implicit */int) arr_6 [i_11 - 2] [i_11 - 1] [i_11])))))) >= (max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_14] [i_13] [i_13] [i_12] [i_11])) ? (((/* implicit */int) arr_41 [(unsigned short)0] [i_12] [i_12])) : (((/* implicit */int) arr_42 [i_11] [i_11] [i_11]))))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_15 = 3; i_15 < 9; i_15 += 3) 
                        {
                            arr_54 [i_14] [i_14] [i_13] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((11U), (((/* implicit */unsigned int) arr_41 [i_14] [i_14] [i_13])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_11 - 1] [i_13] [i_11] [i_11 - 2] [i_11 - 1])) ? (((/* implicit */int) arr_29 [i_11 + 1] [i_12] [i_12] [i_13] [i_12] [i_14] [i_15])) : (((/* implicit */int) (_Bool)1)))))))) ? (arr_10 [i_11] [i_11] [i_13] [i_14] [i_14] [i_13]) : (((/* implicit */int) arr_21 [i_11] [i_11] [i_13] [i_11] [i_15]))));
                            arr_55 [i_15] [i_15] [i_15 - 1] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)104), (((/* implicit */unsigned char) arr_7 [i_11] [i_11] [i_11] [i_11])))))))) | (((int) ((((/* implicit */_Bool) arr_48 [i_11] [i_12] [i_14] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)13] [(signed char)13] [i_13] [i_13]))) : (18446744073709551599ULL))))));
                        }
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)7] [(unsigned char)7])) ? (min((((/* implicit */unsigned int) var_11)), (arr_13 [i_11] [i_11] [i_13] [i_11]))) : (((/* implicit */unsigned int) arr_3 [i_11 + 1] [i_11 + 1]))))) ? (((((/* implicit */int) arr_0 [i_14 + 1] [i_14 - 1])) * (((/* implicit */int) arr_53 [i_14 - 1] [i_14 - 1] [i_14 - 1])))) : (((/* implicit */int) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_1 [i_13] [i_16])))) == (((/* implicit */long long int) ((/* implicit */int) min((arr_28 [i_13] [i_16] [i_16] [i_16] [i_16]), ((unsigned char)14))))))))));
                            var_26 |= ((/* implicit */unsigned int) ((arr_45 [i_11] [i_12] [i_12] [i_14]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_3 [18ULL] [i_12]) + (2147483647))) >> (((arr_52 [i_16] [6U] [(_Bool)1] [i_11 - 1]) - (2839593666U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))) : (((long long int) (unsigned char)4))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)4)) : (arr_43 [i_13] [i_12])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11 + 1] [i_11] [i_11] [5LL] [i_11 + 1]))) - (arr_50 [(unsigned short)10] [i_14] [(signed char)9] [i_12] [(signed char)9] [i_11])))))));
                            var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_13] [i_13])) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */_Bool) arr_56 [i_11] [i_11 + 1] [i_11 + 1] [7] [i_11])) ? (var_2) : (((/* implicit */unsigned int) arr_17 [i_12]))))))));
                        }
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            var_28 -= ((/* implicit */int) (+(((var_3) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                            var_29 = ((/* implicit */long long int) ((int) var_7));
                            var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_11 + 1] [i_14 - 1] [i_17])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_29 [i_11 - 1] [i_12] [i_13] [i_13] [i_14] [i_17] [i_14])) : (arr_17 [i_11 - 2])))) : (arr_32 [i_17] [i_14 + 1] [i_13] [i_12] [i_11])));
                        }
                        for (unsigned int i_18 = 2; i_18 < 8; i_18 += 4) 
                        {
                            var_31 -= ((/* implicit */unsigned int) (((~(min((((/* implicit */unsigned int) arr_22 [i_13] [i_12] [i_13] [i_13] [i_18 - 1])), (4185378244U))))) > (4294967285U)));
                            arr_63 [i_11] [i_11 - 1] [i_11 - 1] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_62 [i_11 - 2])) ? (arr_10 [(_Bool)1] [i_18] [i_18] [i_18] [i_18] [i_18]) : (arr_3 [i_11] [i_14 + 1]))), (((/* implicit */int) var_10))))) >= (min((((/* implicit */unsigned int) arr_4 [i_14] [i_13])), (((((/* implicit */_Bool) arr_10 [i_18] [i_18 + 1] [i_18] [20ULL] [8ULL] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2)))))));
                            arr_64 [i_11] [i_11] [i_11] [i_11] [i_11 - 2] = ((/* implicit */unsigned char) arr_61 [i_11] [i_12] [(unsigned char)7]);
                        }
                    }
                }
                for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    var_32 &= ((/* implicit */_Bool) min((((/* implicit */int) ((arr_23 [i_11] [i_11] [i_11] [i_11] [i_19]) || (((/* implicit */_Bool) arr_66 [i_11 - 2] [i_11 - 1] [i_11 - 2]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [(_Bool)1] [i_12] [i_11]))))) ? (arr_3 [i_12] [i_11]) : (((/* implicit */int) arr_48 [i_11] [i_11] [(unsigned char)0] [i_19]))))));
                    arr_67 [i_11] [i_11 + 1] [10ULL] [i_19] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_59 [i_12] [i_12])) ? (((/* implicit */int) arr_60 [i_11] [i_12] [(signed char)3] [i_19] [i_19])) : (((/* implicit */int) (unsigned char)7)))) : (min((((/* implicit */int) (unsigned char)152)), (arr_43 [i_19] [i_11])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11] [7U])) ? (((/* implicit */int) arr_45 [(signed char)7] [i_12] [(unsigned char)4] [i_12])) : (((/* implicit */int) (unsigned char)22))))) ? (arr_13 [i_11] [i_11] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))))));
                }
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned int i_21 = 2; i_21 < 9; i_21 += 1) 
                    {
                        {
                            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_21] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(signed char)8])) ? (((/* implicit */int) arr_45 [i_11] [i_12] [i_20] [i_21])) : (((/* implicit */int) ((unsigned short) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_11] [i_11] [8U] [i_11 - 2] [i_21 + 2])), (((unsigned short) arr_52 [i_20] [i_20] [i_20] [i_20])))))) : (var_4));
                            var_34 = ((/* implicit */long long int) var_6);
                            arr_72 [i_11] &= ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_21 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_11] [i_12]))) : (arr_37 [i_21]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_56 [i_11] [i_12] [i_20] [i_20] [i_21]))))))), (((/* implicit */long long int) var_8))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_22 = 0; i_22 < 11; i_22 += 4) /* same iter space */
                            {
                                var_35 += ((/* implicit */unsigned char) (short)-14349);
                                arr_77 [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 2] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_11 + 1] [i_11 + 1] [i_22] [i_21 + 1] [i_21 - 2]))));
                                arr_78 [(signed char)9] [i_21 - 2] [(_Bool)0] [i_21 + 1] [i_21] &= ((/* implicit */signed char) ((short) arr_34 [i_21 - 1] [i_21] [i_22] [i_22] [i_22]));
                            }
                            for (short i_23 = 0; i_23 < 11; i_23 += 4) /* same iter space */
                            {
                                arr_81 [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)13)) % (arr_57 [i_11] [i_11] [i_11 - 1] [i_21 + 2] [i_21] [i_21 + 1] [i_23])))) ? (((var_4) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_20 [(short)6] [i_23] [i_21] [i_20] [i_23] [i_11]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_65 [i_11 + 1] [i_11 - 2])), (var_1)))))));
                                var_36 = ((/* implicit */unsigned int) arr_75 [i_12]);
                            }
                            for (long long int i_24 = 0; i_24 < 11; i_24 += 2) 
                            {
                                var_37 = ((/* implicit */unsigned char) arr_58 [i_11] [7U] [i_20] [7U]);
                                var_38 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (9223372036854775807LL)))))), ((+(((unsigned long long int) (unsigned char)4))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
