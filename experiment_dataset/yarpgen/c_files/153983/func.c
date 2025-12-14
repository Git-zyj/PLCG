/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153983
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
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2134447179)) ? (max((var_7), (((/* implicit */unsigned int) ((-2134447179) - (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    var_17 = ((/* implicit */signed char) arr_0 [1ULL]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 6; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) (((!((_Bool)1))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                                arr_16 [i_4] [i_0] [i_0] [i_1 + 1] [6ULL] &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))));
                                arr_17 [i_4] [4] [i_0] [i_0] [4] [i_0] |= ((/* implicit */unsigned int) ((((unsigned int) (_Bool)1)) == (min((((((/* implicit */_Bool) 4040687563U)) ? (4040687581U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27934))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_3] [i_4 + 3])))))))));
                                var_18 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_4 - 1] [(unsigned char)4] [i_4] [i_3 + 2] [i_1] [i_1] [i_0])), (-1213533283417330617LL)))) ? (var_9) : (((/* implicit */unsigned long long int) ((int) var_2)))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_1])) / (arr_0 [(short)0]))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_2] = (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-65)) < (((/* implicit */int) arr_11 [i_0] [i_1] [i_1 + 2] [i_2] [1ULL])))))) ^ ((-(arr_12 [i_0] [i_1]))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */int) var_0)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_20 [(_Bool)0] [i_0] [i_0])))) ? (((((/* implicit */int) arr_13 [i_1] [i_2] [(unsigned short)9] [i_5])) / (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_5])))) : (((/* implicit */int) arr_8 [i_2] [i_0 + 1] [i_0]))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27915))))) ? (((((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (934199227397140179ULL))) / (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_0] [i_1] [i_1] [i_0]))) - (arr_12 [2ULL] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                    }
                    for (int i_6 = 1; i_6 < 7; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_12) / (((/* implicit */int) (signed char)-65)))));
                            arr_26 [i_2] = ((/* implicit */unsigned long long int) arr_14 [i_0 + 2] [0LL] [0LL] [i_6] [i_0] [i_1] [i_0]);
                        }
                        arr_27 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_0] [i_0] [i_2]);
                    }
                    for (int i_8 = 1; i_8 < 7; i_8 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_2] [i_8])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_8 + 1])) || (((/* implicit */_Bool) arr_14 [i_8 + 2] [i_8] [i_8] [i_2 + 1] [i_1] [i_0 - 1] [1LL])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_35 [i_2] [i_2] [i_2 + 3] [1ULL] [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) max((var_6), (var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))) : (((((/* implicit */_Bool) max((var_12), (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_29 [i_0] [5ULL] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_9] [i_2 - 1] [i_0] [i_0]))))))))));
                            arr_36 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (+((-(1600823543)))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 7; i_10 += 4) 
                        {
                            var_24 += arr_29 [i_10] [i_8] [i_1] [i_0 + 2];
                            arr_39 [i_2] = ((/* implicit */unsigned char) ((signed char) ((((arr_5 [i_8] [i_1]) / (((/* implicit */int) var_0)))) / (((/* implicit */int) arr_3 [i_10] [i_8])))));
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_44 [i_2] = ((/* implicit */int) (_Bool)1);
                        arr_45 [i_2] = ((short) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-39)), ((short)13691))))));
                        arr_46 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((min((arr_14 [(_Bool)1] [(unsigned short)1] [i_2 - 1] [(unsigned short)1] [(signed char)6] [i_2 - 1] [(_Bool)1]), (((/* implicit */int) var_13)))) / ((-(((/* implicit */int) arr_24 [i_0] [i_0] [i_2 + 2] [i_0] [i_2]))))));
                        var_25 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-26686)) : (((/* implicit */int) (_Bool)1)))))), ((~(((var_9) >> (((var_9) - (15503601380655733748ULL)))))))));
                    }
                }
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 3; i_13 < 8; i_13 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_14 = 2; i_14 < 7; i_14 += 4) 
                        {
                            var_26 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1225245166794052321ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [7] [7] [i_0 + 1] [i_0 - 2] [7] [i_0] [i_0 + 1]))))));
                            arr_55 [i_12] [i_12] [i_12 + 1] [i_1] [i_12] [i_0] = ((/* implicit */unsigned char) arr_7 [(_Bool)0] [i_12]);
                            arr_56 [i_14] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_38 [i_14] [(unsigned short)6] [(_Bool)1] [i_12] [i_12] [i_1] [i_0]) : (((/* implicit */unsigned int) var_12))))) : ((-(((arr_9 [i_14] [i_13] [i_12 + 1] [i_1] [7U]) ? (((/* implicit */unsigned long long int) arr_5 [i_14] [(short)4])) : (var_9)))))));
                        }
                        var_27 ^= ((unsigned long long int) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_13] [(short)0] [(signed char)2] [(signed char)2] [i_0])))))) ? (((((/* implicit */_Bool) arr_47 [(unsigned char)6] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (arr_5 [i_13] [i_12]))) : (((/* implicit */int) var_15))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 2; i_15 < 8; i_15 += 1) 
                        {
                            var_28 ^= ((/* implicit */short) (-(((arr_54 [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_12]) * (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                            var_29 = ((/* implicit */long long int) var_1);
                            var_30 ^= ((/* implicit */_Bool) min((max((17512544846312411421ULL), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_15))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)117)) ? (1378357597U) : (arr_29 [i_0 - 1] [i_1] [i_12 + 1] [i_13]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_15] [i_0] [i_12] [i_0] [i_0]))))))));
                        }
                    }
                    for (unsigned short i_16 = 1; i_16 < 8; i_16 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            arr_65 [i_12] [i_1] = ((/* implicit */long long int) (+(arr_6 [i_12] [i_17 - 1] [(unsigned char)4] [i_16 + 1])));
                            arr_66 [i_1 - 1] [i_1 - 1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_7))) ? ((~(((/* implicit */int) (_Bool)1)))) : (var_5)));
                            arr_67 [i_0] [i_12] [i_0] [(signed char)5] [i_0 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_12] [i_0]))))))));
                            var_31 &= ((((/* implicit */int) (unsigned char)93)) + (((var_10) ? (((/* implicit */int) arr_40 [i_17] [i_0] [i_17 - 1])) : (((/* implicit */int) var_14)))));
                            var_32 ^= ((/* implicit */unsigned char) arr_2 [i_1 - 1] [i_17 - 1]);
                        }
                        for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 4) 
                        {
                            var_33 += (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (signed char)-15))))), (max((var_6), (arr_19 [i_0] [i_0] [i_0 - 1] [2ULL] [i_0 - 1])))))) : (((/* implicit */int) (!(((_Bool) 9223372036854775807LL))))));
                            arr_70 [i_12] [i_0] [i_12] [i_12] [i_12] [i_18 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [1ULL] [i_16])) || (((/* implicit */_Bool) (-2147483647 - 1)))))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) max((((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)65)) >> (((795648497U) - (795648469U)))))))), (var_7))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_0] [i_12])) || (((/* implicit */_Bool) (short)-1))));
                            arr_75 [i_0] [i_1] [i_12] [i_16 - 1] [i_16 - 1] [i_19] = ((/* implicit */short) arr_38 [i_0] [i_0] [i_0] [i_12] [i_0] [(unsigned char)9] [(unsigned short)9]);
                            arr_76 [i_19] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)33)), (var_5)))) : (max((8722139867763468328ULL), (((/* implicit */unsigned long long int) var_15))))));
                            arr_77 [6LL] [7ULL] [i_12] [i_1] [i_0] = ((/* implicit */_Bool) var_8);
                        }
                    }
                    for (int i_20 = 1; i_20 < 7; i_20 += 1) 
                    {
                        arr_82 [i_12] [i_0] [i_1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_20] [i_12 + 1] [i_0])) ? (((/* implicit */int) (short)10)) : (((/* implicit */int) min((arr_23 [i_0] [i_12] [i_12 + 1] [i_12 + 1]), ((short)-9227))))));
                        arr_83 [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_12] [(unsigned short)6] [(signed char)2]);
                        arr_84 [i_12] = ((/* implicit */long long int) var_11);
                        arr_85 [i_20] [i_12] [i_12] [i_0] = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) var_8)), (arr_42 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_12]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_0] [i_0] [i_0] [i_12] [(_Bool)1] [i_20] [i_20])))))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_12] [i_1 + 2] [i_1 + 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_20] [i_12] [i_12 + 1] [(signed char)3] [i_12] [i_0])))))) * (max((var_9), (((/* implicit */unsigned long long int) arr_43 [i_12]))))))));
                    }
                    arr_86 [i_12] = ((/* implicit */unsigned int) ((((max((9223372036854775807LL), (((/* implicit */long long int) var_13)))) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-12878))))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_7)), (var_9))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_60 [i_0] [i_1] [i_1])))))))) : (((/* implicit */int) var_10))));
                    arr_87 [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) ((int) ((int) arr_2 [i_0 + 1] [i_0 + 1])));
                    /* LoopSeq 2 */
                    for (int i_21 = 2; i_21 < 6; i_21 += 4) 
                    {
                        var_36 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0] [i_12 + 1] [i_0 + 1]))));
                        var_37 &= ((/* implicit */signed char) min(((((((~(1484308396))) + (2147483647))) << (((((/* implicit */int) (short)-27934)) + (27935))))), (var_5)));
                        arr_91 [i_12] [i_1 + 1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)141)))) * (((/* implicit */int) arr_78 [i_1 - 1] [i_1] [i_12] [i_21 + 2]))))) ? (arr_62 [i_21 + 2] [i_12] [i_12] [3U] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_38 [(unsigned char)4] [(_Bool)0] [i_12] [i_12] [i_21] [(_Bool)0] [i_21 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_12] [(unsigned short)6]))))))))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) arr_60 [i_1] [i_12 + 1] [6U]))));
                        /* LoopSeq 2 */
                        for (signed char i_22 = 2; i_22 < 9; i_22 += 1) 
                        {
                            var_39 += ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_22 [i_0] [i_12 + 1]))) ? (((long long int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            var_40 = ((/* implicit */unsigned char) var_10);
                            arr_96 [(short)7] [i_12] [i_12 + 1] [i_21] [i_22] [i_1] [i_1] = ((/* implicit */short) min((4040687581U), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        for (unsigned long long int i_23 = 1; i_23 < 9; i_23 += 4) 
                        {
                            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) arr_61 [i_0] [i_21] [i_12] [8ULL] [i_0]))));
                            arr_100 [i_12] [i_12 + 1] [i_1] [i_12] = ((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
                        }
                    }
                    for (signed char i_24 = 4; i_24 < 6; i_24 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_25 = 2; i_25 < 9; i_25 += 4) /* same iter space */
                        {
                            var_42 |= ((/* implicit */short) ((unsigned int) min((arr_47 [i_12] [i_12] [i_12]), (((/* implicit */long long int) 1302008575U)))));
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3671464744U)) ? (4040687566U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (int i_26 = 2; i_26 < 9; i_26 += 4) /* same iter space */
                        {
                            var_44 ^= ((/* implicit */unsigned long long int) arr_69 [i_0] [i_1] [i_1] [i_12 + 1] [i_24] [i_26]);
                            arr_108 [i_12] [(unsigned char)3] [i_12] = ((/* implicit */long long int) var_1);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_27 = 3; i_27 < 9; i_27 += 2) 
                        {
                            arr_111 [i_12] [i_27] [i_1] [i_24] [i_12] [2ULL] = (((+(3860468084U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > (var_5))))));
                            var_45 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0 - 1] [i_0] [i_1] [i_27 - 2] [i_27 - 3])) ? (((unsigned long long int) arr_3 [6U] [6U])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_12] [i_24] [i_27 + 1])) ? (((/* implicit */int) (short)-13)) : (((/* implicit */int) var_3)))))))));
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_51 [i_12])) : ((~(((/* implicit */int) arr_72 [i_0] [i_1] [i_1] [i_0 - 1] [i_1 + 1] [i_24] [i_24]))))));
                        }
                        for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                        {
                            arr_115 [i_12] [i_1] [i_12] = (((~(((/* implicit */int) (short)-9220)))) & (((/* implicit */int) var_6)));
                            arr_116 [i_12] [i_1] [(signed char)7] [i_24] [i_24 + 4] [i_28] = ((/* implicit */short) max(((~(arr_113 [i_0] [i_0] [i_0] [i_12 + 1] [i_24 - 2] [i_28]))), (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (unsigned short)5312)) : (((/* implicit */int) (signed char)-1))))));
                            var_47 ^= ((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_1] [i_24] [i_24] [(short)0] [i_28 + 1]);
                            arr_117 [i_0] &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)215)), ((short)-14)))))) && ((!(((/* implicit */_Bool) (unsigned char)58))))));
                            var_48 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_12] [i_24 + 3] [i_28 + 1])) : (((/* implicit */int) var_3))))), ((+(var_9)))));
                        }
                    }
                    var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
                }
                arr_118 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32751))));
                var_50 = ((/* implicit */unsigned int) ((long long int) var_6));
            }
        } 
    } 
}
