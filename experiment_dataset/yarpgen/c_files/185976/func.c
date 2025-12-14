/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185976
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
    var_12 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) var_2)))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) + (((/* implicit */long long int) (~(((var_11) ^ (((/* implicit */int) (short)8940)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (short)11130))) ? (arr_1 [i_0] [i_2]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((-9223372036854775788LL) % (((/* implicit */long long int) ((/* implicit */int) (short)11130))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_13 [8U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15664241772509345607ULL)) ? (((/* implicit */int) (short)11143)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [2LL]))))) ? (arr_9 [i_0] [i_0] [(short)22]) : (((/* implicit */long long int) ((/* implicit */int) (short)-11125)))));
                        arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) / (var_7)));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned char)12])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)23))) : (arr_9 [i_0] [i_3] [(unsigned short)2])));
                            arr_17 [2ULL] [i_1] [i_1] [16ULL] &= ((/* implicit */unsigned long long int) var_6);
                        }
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_20 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_3] [i_5])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_0] [i_0]))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_7))));
                            arr_21 [i_5] [i_1] [i_5] [1ULL] [i_5] [i_5] [14U] = (((~(-9223372036854775768LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)32767))));
                        }
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-88)) ^ (((/* implicit */int) (signed char)-88))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8941))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50064)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_1] [i_1] [i_2] [i_2] [i_2] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)1334)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))))) : (2501622481017386350LL)));
                        var_17 = (~(((((/* implicit */_Bool) (short)-12387)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_5 [i_0] [i_2]))));
                        arr_25 [i_6] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-20563))));
                        arr_26 [0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_3))))) ^ (2501622481017386357LL)));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) || (((/* implicit */_Bool) (unsigned char)3))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    arr_31 [i_0] [i_1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_1])) && (((/* implicit */_Bool) arr_12 [i_1] [i_7 - 1] [22ULL] [i_1]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(short)5] [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */int) arr_27 [i_7] [i_7] [i_7 - 2])) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (long long int i_8 = 3; i_8 < 23; i_8 += 1) 
                    {
                        arr_36 [i_0] [i_0] [(short)14] [20LL] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                        arr_37 [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_8 - 1] [i_8 - 2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_33 [i_0] [11U] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_19 [i_0] [(unsigned short)21] [(unsigned short)21] [i_7 - 1] [i_8]))))));
                        arr_38 [i_1] = ((/* implicit */signed char) ((arr_32 [i_8] [i_8] [i_8 + 1] [i_8 - 1] [(short)7]) & (arr_32 [17ULL] [6] [i_8 - 1] [i_8] [i_8 - 3])));
                    }
                    for (int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]);
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_0] [i_0] [(short)2] [i_0])) : (((/* implicit */int) (signed char)-80))))) < (((var_7) / (((/* implicit */long long int) -2095780292)))))))));
                        arr_41 [i_1] [i_1] [4U] [i_9] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (signed char)45)) && ((_Bool)1)))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            arr_44 [i_0] [i_1] [i_1] [i_9] [14ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_10] [i_10] [(unsigned char)16] [(signed char)5] [i_10] [i_10 + 1]))) : (13854287746821064605ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [(unsigned short)5]))))) : (8946736184004114784ULL)));
                            arr_45 [i_1] = ((/* implicit */long long int) arr_29 [i_0] [i_0] [(unsigned short)0]);
                        }
                    }
                    for (int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) -2095780286))));
                        var_23 = (~(((/* implicit */int) arr_43 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2])));
                    }
                    for (int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)20] [i_1]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13067)))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_7 - 2] [i_12]);
                    }
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [(short)20]) != (((/* implicit */long long int) var_1)))))));
                    var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_0] [i_7 - 1] [20U] [i_7 + 1])) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) arr_39 [i_7] [i_7 - 1] [(short)12] [i_7]))));
                }
                arr_51 [(_Bool)1] |= ((/* implicit */int) ((long long int) arr_42 [i_0] [i_1] [(signed char)20]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_13 = 3; i_13 < 18; i_13 += 1) 
    {
        for (short i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 3; i_16 < 18; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 19; i_17 += 1) 
                        {
                            {
                                var_28 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (2056222025)))) : (var_10))))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [0U] [i_14] [i_14] [i_15] [i_16 - 2] [(short)5])) + (((/* implicit */int) arr_16 [i_13] [i_13] [i_13] [13] [i_13] [i_13]))))) ? (arr_63 [i_17] [i_17] [i_17 + 1] [i_17] [i_17]) : (((/* implicit */unsigned int) -2095780286))))) ? (((((/* implicit */_Bool) (~(var_11)))) ? (max((arr_58 [i_13] [i_16 - 3]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) arr_1 [i_13] [i_13])))) : (((/* implicit */unsigned long long int) min(((-(9223372036854775798LL))), (max((var_8), (((/* implicit */long long int) var_2)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13] [10] [i_13 + 2])) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_57 [i_13] [i_13] [9U] [i_13 - 3])))))));
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_13] [i_13] [i_13] [(short)16] [i_13] [i_13] [i_13 - 3])) && (((/* implicit */_Bool) var_5))));
                }
                for (unsigned long long int i_19 = 1; i_19 < 19; i_19 += 1) 
                {
                    var_32 = ((/* implicit */short) max((var_32), (((short) (signed char)-107))));
                    var_33 = ((/* implicit */short) ((((arr_67 [i_13 - 2] [i_13 - 2] [i_13 + 1] [i_13]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_67 [i_13 - 1] [i_13 + 2] [i_13 - 3] [i_13 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)19)))) - (2337)))));
                    arr_68 [i_13] [(_Bool)1] [i_13] [i_13 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_13 - 1] [i_19 - 1] [i_19 - 1] [i_19 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_50 [i_13 - 3] [i_19 - 1]))))) ? (((((/* implicit */_Bool) arr_53 [i_13 - 3] [i_19 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_13 - 2] [i_19 + 1]))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    var_34 = ((long long int) arr_2 [i_13 + 1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) arr_61 [i_13] [i_14] [i_14] [i_20] [7LL] [7LL]);
                                arr_76 [i_13] [i_14] [i_14] [i_14] [i_14] = arr_62 [i_13] [(signed char)4] [i_14] [i_14] [i_20] [i_21] [i_22];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        for (long long int i_24 = 0; i_24 < 20; i_24 += 1) 
                        {
                            {
                                arr_83 [(signed char)4] [i_20] [i_23] [i_24] |= ((/* implicit */short) (-(arr_5 [i_13 - 2] [i_13 - 3])));
                                arr_84 [i_13] = ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_1));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_25 = 0; i_25 < 20; i_25 += 3) 
                    {
                        for (short i_26 = 2; i_26 < 18; i_26 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */short) ((((arr_67 [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2]) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)82)) - (81)))));
                                var_37 -= (short)(-32767 - 1);
                                arr_90 [i_13 + 1] [i_13] [i_13 + 1] [(signed char)7] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_71 [i_14] [(short)7])) : (-9223372036854775788LL))))));
                            }
                        } 
                    } 
                }
                arr_91 [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_89 [i_13] [i_13 - 2] [0] [i_13] [13] [i_13 + 2]), (arr_0 [i_13 - 2])))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [19U] [i_13] [(short)11])), (-2722990306513461085LL)))) ? ((-(((/* implicit */int) (unsigned short)21512)))) : (((((/* implicit */_Bool) arr_12 [i_13] [i_13] [i_14] [i_13])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) (unsigned short)8190))));
                var_38 = ((/* implicit */long long int) ((-2604913302040621917LL) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3))))));
                arr_92 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_13 + 1] [i_13] [(unsigned char)8] [i_13] [i_13])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_87 [i_13])) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_87 [i_13]))));
            }
        } 
    } 
}
