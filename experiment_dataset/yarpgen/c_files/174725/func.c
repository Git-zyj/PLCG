/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174725
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) var_7)) < (var_2))))));
                        var_12 = ((/* implicit */short) (unsigned char)125);
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_13 += ((/* implicit */signed char) var_10);
                        var_14 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_15 = (~(((/* implicit */int) arr_5 [(unsigned short)11] [i_2 - 1] [i_2 - 1])));
                        var_16 = ((/* implicit */unsigned int) -1081190794);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0] [(_Bool)1])))))));
                    }
                    arr_20 [i_2] [i_1] [i_2] [(short)9] = ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(_Bool)1]))) / (arr_4 [i_2])));
                    var_18 *= ((/* implicit */short) (-(((/* implicit */int) ((-465861756) == (((/* implicit */int) var_8)))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_19 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [12] [i_1] [i_1 - 1] [i_0] [i_0] [12]))))))))));
                    var_20 = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [12U])) : (arr_7 [(unsigned char)16] [i_6])))))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_21 += ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) >= (arr_24 [i_0] [12] [(_Bool)1] [(_Bool)1])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 4; i_8 < 16; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_1 - 1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1008027740)));
                        arr_29 [i_7] [i_7] [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)131)));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        arr_32 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3968176760U)) ? (((/* implicit */int) (short)1984)) : (((/* implicit */int) (_Bool)1))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_4 [i_0]))));
                    }
                }
                var_23 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)122))))) << (((((((/* implicit */_Bool) 3311058957126367234LL)) ? (var_6) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [2LL] [i_0] [i_0] [i_1]))))))) - (115119677U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                arr_38 [i_11] [(short)4] = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) arr_6 [i_10])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)0)))))) | (((/* implicit */int) max(((_Bool)1), (((((/* implicit */long long int) arr_7 [i_10] [i_11])) < (var_4))))))));
                arr_39 [i_11] [i_11] = ((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10]);
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                {
                    arr_42 [i_10] [i_11] [i_11] [6] = ((/* implicit */unsigned long long int) arr_37 [8] [i_11] [4]);
                    var_24 -= ((/* implicit */int) (_Bool)1);
                    arr_43 [i_11] [i_11] = ((/* implicit */short) ((arr_18 [i_10] [5LL] [i_11] [5LL] [i_12]) / (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_12])))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_10])))))))) != (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)9689))))) ^ (arr_3 [i_10] [i_11])))));
                }
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                {
                    var_26 ^= ((/* implicit */signed char) var_2);
                    var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_10] [i_10] [i_13] [i_13]))));
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8641)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_15 [2ULL] [i_11] [16U] [(short)4])) < (arr_37 [(unsigned short)0] [i_11] [(unsigned short)0]))))) : (arr_37 [i_10] [i_11] [i_13]))))));
                }
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        arr_53 [i_11] [5ULL] [3LL] [5ULL] = ((((/* implicit */unsigned long long int) arr_48 [i_10] [i_11] [i_14] [i_11])) / (((arr_41 [i_10]) * (((/* implicit */unsigned long long int) arr_2 [i_10] [(signed char)11])))));
                        var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_51 [i_10] [i_11] [(short)8]) : (arr_51 [(short)2] [i_10] [(unsigned short)6])));
                    }
                    for (unsigned long long int i_16 = 3; i_16 < 9; i_16 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), ((+(arr_49 [i_16 - 3] [i_16 + 1] [i_16 + 1] [i_16 + 1]))))))));
                        var_31 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((arr_45 [i_10] [i_11] [i_11] [i_10]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) (unsigned short)48884)) : (((/* implicit */int) (unsigned short)0))))));
                        var_32 = ((/* implicit */short) max((8638524649019533629LL), (((/* implicit */long long int) (unsigned short)1))));
                        arr_56 [i_10] [i_10] [i_11] [i_11] [i_14] [i_16 + 1] = ((/* implicit */_Bool) -4805462029074819093LL);
                    }
                    for (unsigned long long int i_17 = 3; i_17 < 9; i_17 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_10] [i_17] [i_14] [i_14] [2U])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_22 [i_14])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) : (((arr_31 [16LL] [i_11] [i_11]) ? (-255003052) : (((/* implicit */int) arr_12 [i_10] [12ULL] [i_14] [i_10])))))) : (((/* implicit */int) ((min((arr_37 [i_10] [i_11] [i_11]), (var_4))) < (var_2))))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) : (11501617377718238055ULL)));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) (-(110593177)))) * (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_1 [i_10])))))))))));
                    }
                    for (unsigned long long int i_18 = 3; i_18 < 9; i_18 += 1) /* same iter space */
                    {
                        arr_61 [i_10] [i_11] [i_14] [i_18 + 1] = ((/* implicit */long long int) arr_9 [i_10] [11LL] [i_11]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_19 = 0; i_19 < 10; i_19 += 2) 
                        {
                            arr_64 [i_11] = ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214)))))));
                            var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_41 [i_11]) : ((-(var_5)))));
                            var_37 ^= ((/* implicit */unsigned int) (((+(arr_47 [i_10] [i_14]))) < (((/* implicit */long long int) ((var_6) * (((/* implicit */unsigned int) arr_7 [i_14] [i_19])))))));
                            var_38 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [(_Bool)1] [5LL] [i_14] [i_18 + 1])) ? (((/* implicit */int) arr_12 [i_19] [i_18 + 1] [i_14] [i_10])) : (((/* implicit */int) (short)16374))))) ? (((((/* implicit */int) arr_35 [i_19])) | (((/* implicit */int) arr_50 [i_11] [i_19] [(signed char)8] [i_19])))) : (((/* implicit */int) ((signed char) arr_47 [8ULL] [i_11]))));
                        }
                        arr_65 [i_18] [i_11] [i_18 - 1] [i_18 - 3] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_27 [i_18 - 2] [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18 - 2] [i_18]), (arr_27 [i_18 - 2] [(short)11] [(unsigned short)0] [i_18] [i_18] [i_18]))))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 465861756)) : (arr_54 [i_10] [i_18 + 1] [i_11] [i_18 - 3] [i_10])))));
                        arr_66 [(unsigned char)8] [0LL] &= ((/* implicit */unsigned short) ((unsigned char) ((arr_45 [i_10] [(short)0] [(_Bool)0] [(signed char)8]) & (arr_45 [i_14] [i_11] [4LL] [i_18]))));
                        arr_67 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_16 [(_Bool)1] [(signed char)5]))))) != ((+((~(((/* implicit */int) (unsigned char)62))))))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */short) var_3);
                            arr_73 [i_11] = ((/* implicit */int) var_3);
                        }
                        for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) /* same iter space */
                        {
                            var_40 = (signed char)39;
                            arr_77 [0ULL] [i_10] [i_11] [i_20] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_60 [i_11] [i_11] [i_14] [(signed char)0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [1LL] [i_20] [i_14] [i_11])))))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 10; i_23 += 2) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) var_7);
                            arr_80 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((~(arr_45 [i_11] [i_14] [i_11] [(short)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_11] [i_14] [i_20] [i_23])) != (((/* implicit */int) arr_17 [i_11]))))))));
                        }
                        var_42 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_25 [(unsigned short)16] [(signed char)12] [i_20] [16U]))));
                        arr_81 [i_11] [i_11] [6U] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_10] [i_10] [8ULL] [7] [9LL]))));
                    }
                    for (long long int i_24 = 1; i_24 < 8; i_24 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_25 = 3; i_25 < 8; i_25 += 2) /* same iter space */
                        {
                            arr_86 [i_10] [i_11] [(unsigned short)7] [i_24 + 1] [i_25] = ((/* implicit */short) (signed char)-34);
                            arr_87 [(_Bool)1] [1] [0] [i_11] [i_25 - 3] = ((/* implicit */short) (~(arr_36 [i_24] [1ULL])));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_26 = 3; i_26 < 8; i_26 += 2) /* same iter space */
                        {
                            var_43 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                            var_44 = ((/* implicit */signed char) var_10);
                            var_45 = ((/* implicit */signed char) arr_36 [7U] [i_11]);
                            var_46 += ((/* implicit */_Bool) arr_2 [i_10] [0ULL]);
                            var_47 = (-(((/* implicit */int) arr_33 [i_10])));
                        }
                        var_48 &= max((((/* implicit */int) (unsigned short)18293)), (679706115));
                        var_49 = ((/* implicit */unsigned int) arr_54 [0LL] [0LL] [i_11] [i_11] [(short)2]);
                        arr_90 [i_24] [i_11] [i_11] [i_10] = ((/* implicit */signed char) (+((-(363710270)))));
                    }
                    for (unsigned int i_27 = 1; i_27 < 9; i_27 += 1) 
                    {
                        var_50 = ((/* implicit */signed char) var_8);
                        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)15491)) & (-465861750)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)127), (((/* implicit */unsigned char) (_Bool)1)))))) : (((var_6) << (((max((((/* implicit */unsigned long long int) var_8)), (18446744073709551615ULL))) - (18446744073709551584ULL)))))));
                    }
                    for (short i_28 = 4; i_28 < 8; i_28 += 1) 
                    {
                        var_52 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_10] [i_11]))));
                        var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)8469)) - (((/* implicit */int) var_9)))), (((/* implicit */int) var_1))))) ? ((~(-7092446531321846839LL))) : (((/* implicit */long long int) 800380868U))));
                        var_54 = ((/* implicit */_Bool) ((min((arr_72 [i_10] [i_11] [i_10] [i_28 - 4] [i_11]), (((/* implicit */long long int) var_10)))) - (((/* implicit */long long int) ((1244515298) >> (((((/* implicit */int) (signed char)-115)) + (126))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 2) 
                        {
                            var_55 = ((/* implicit */unsigned char) arr_58 [i_10] [i_10] [i_11] [i_28 - 3] [i_10] [i_10]);
                            arr_98 [(signed char)0] [(short)9] [(short)9] [i_28] [i_11] [i_10] [7U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_48 [1U] [i_14] [i_28] [i_29]))));
                        }
                    }
                    var_56 -= ((/* implicit */long long int) (+(max((((/* implicit */int) arr_8 [i_14] [(signed char)10] [i_14])), ((+(((/* implicit */int) arr_79 [5LL] [(unsigned char)6] [i_10] [(short)2] [i_14] [i_14]))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_30 = 1; i_30 < 7; i_30 += 2) 
                {
                    arr_101 [i_11] [i_11] [i_11] [i_30] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_102 [i_30] [i_11] [9ULL] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((((/* implicit */_Bool) 800380868U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10] [i_11] [i_30 + 3]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)47264)))))));
                }
            }
        } 
    } 
}
