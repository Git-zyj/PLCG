/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161850
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
    var_13 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (-(4550907685994849171LL)));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [17LL] [i_1] [i_1] [i_1] [i_1]))) : (arr_5 [14ULL]))))))) : (((/* implicit */int) var_2))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [(unsigned short)18] [i_2])))))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [(short)11])) ? (((/* implicit */int) arr_7 [21] [i_2])) : (((/* implicit */int) arr_7 [(short)22] [i_3]))))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [18LL])))))) : ((~(((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_6] [(unsigned short)14])) ? (((((/* implicit */_Bool) arr_4 [20U] [20U])) ? (((/* implicit */int) arr_4 [i_5] [(short)16])) : (((/* implicit */int) arr_4 [i_5] [(short)14])))) : (min((((/* implicit */int) arr_4 [i_5] [(_Bool)1])), (var_11))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 0)) % (3471305770744555956ULL)));
                    var_21 = ((/* implicit */short) max((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 4095)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)71)))))), (arr_11 [i_5] [i_6] [i_7] [i_7])));
                    var_22 &= arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [14ULL];
                }
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_8] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_5] [i_6]), (((/* implicit */unsigned short) var_7)))))) : (((((/* implicit */_Bool) (short)2016)) ? (((/* implicit */long long int) arr_25 [i_5] [20LL] [i_8])) : (var_6)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_6] [i_8])))))) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) var_12)))))) > (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_9 [i_5] [i_8])))))))));
                    arr_26 [i_5] [(short)11] [i_8] [i_5] = ((/* implicit */short) (~((~(((/* implicit */int) var_0))))));
                }
                for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    arr_31 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5])))));
                    var_24 &= ((/* implicit */unsigned char) ((signed char) (signed char)74));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 20; i_10 += 3) 
                    {
                        var_25 |= ((/* implicit */signed char) (-(arr_8 [i_6] [0LL] [0LL] [i_10 - 2])));
                        var_26 = ((unsigned short) var_1);
                    }
                }
                for (long long int i_11 = 3; i_11 < 20; i_11 += 1) 
                {
                    arr_38 [i_5] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (-(31)))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_5] [i_5])) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : (((/* implicit */int) arr_35 [i_5] [i_6] [i_11] [i_11]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_11 + 1] [i_11 - 3] [(signed char)23] [i_11]))))) : (((/* implicit */int) arr_28 [i_11] [i_11] [6LL]))));
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_37 [(unsigned short)19] [8U] [i_5] [i_11 - 3]))))) ? (((((/* implicit */_Bool) -2238594970710701022LL)) ? (288212783965667328LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61971))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_11)))))))));
                }
                /* LoopSeq 1 */
                for (signed char i_12 = 4; i_12 < 20; i_12 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_29 ^= ((/* implicit */long long int) var_5);
                                var_30 = ((/* implicit */short) (~((~((-(-1499866370)))))));
                                arr_47 [i_5] [12LL] [i_12] |= ((/* implicit */_Bool) ((short) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (31) : (((/* implicit */int) (unsigned char)184)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (+(((long long int) (unsigned short)48301)))))));
                        arr_50 [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_12 - 1]))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_16 = 4; i_16 < 20; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 4; i_17 < 19; i_17 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))), (arr_9 [13ULL] [i_5])));
                                var_33 = ((/* implicit */int) min((var_6), (((/* implicit */long long int) arr_9 [i_5] [i_5]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 4; i_18 < 20; i_18 += 1) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)48404)))))));
                                var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_49 [i_19] [i_5] [i_5] [i_6])) / (((((/* implicit */unsigned int) arr_36 [i_12 + 1] [i_18 + 1] [i_5])) + (1859455300U)))));
                                var_36 = ((/* implicit */unsigned short) (((-(((arr_23 [(unsigned short)6] [i_5]) | (((/* implicit */int) arr_22 [i_5])))))) <= (((/* implicit */int) max((arr_34 [i_5]), (arr_13 [i_12] [i_12 - 1] [i_12] [i_12 + 1] [i_5]))))));
                                var_37 = ((/* implicit */unsigned short) (~(var_6)));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) var_11))));
                                arr_70 [i_5] [i_5] [i_6] [(signed char)4] [i_21] [i_22] [i_21] = ((/* implicit */short) arr_3 [i_21]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    for (unsigned int i_24 = 4; i_24 < 21; i_24 += 1) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */signed char) (!((!(arr_59 [i_24 - 2] [i_24 + 1] [i_24 - 3] [i_24] [i_24] [i_24] [i_6])))));
                                var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3624289434U)) ? (((/* implicit */unsigned int) 2147483634)) : (1U)))) ? (((/* implicit */int) ((short) var_0))) : (((int) arr_6 [i_25] [16] [16] [(short)20])))))));
                                arr_82 [i_6] [i_5] [i_24] [i_25] = ((/* implicit */signed char) (~(((/* implicit */int) max((var_8), (var_8))))));
                                arr_83 [i_5] [i_5] [i_23] [i_24] [1LL] [i_5] = ((/* implicit */unsigned int) (-(max(((~(((/* implicit */int) (unsigned char)4)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (arr_33 [i_25] [i_5] [i_5] [i_5])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_26 = 0; i_26 < 22; i_26 += 1) 
                {
                    for (unsigned char i_27 = 0; i_27 < 22; i_27 += 1) 
                    {
                        {
                            arr_91 [i_5] [i_5] [i_5] [6U] = ((_Bool) 0ULL);
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) arr_5 [i_6]))));
                            arr_92 [i_5] [i_6] [11] [i_27] = (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_5]))))) || ((!(((/* implicit */_Bool) arr_68 [i_5] [i_5] [i_5] [i_5] [15ULL]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 14; i_28 += 2) 
    {
        for (int i_29 = 0; i_29 < 14; i_29 += 4) 
        {
            {
                var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_29] [i_29] [i_29] [i_29]))));
                var_43 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_59 [i_28] [(signed char)11] [i_28] [18LL] [9] [i_29] [(_Bool)1])) & (((/* implicit */int) var_7)))) - (((/* implicit */int) (!(((/* implicit */_Bool) -1116344472)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_30 = 0; i_30 < 14; i_30 += 4) /* same iter space */
                {
                    var_44 ^= var_7;
                    arr_100 [i_28] [i_28] [i_28] = ((/* implicit */signed char) ((unsigned short) arr_34 [i_30]));
                }
                for (int i_31 = 0; i_31 < 14; i_31 += 4) /* same iter space */
                {
                    var_45 = ((/* implicit */long long int) arr_104 [i_28] [i_29] [12]);
                    /* LoopSeq 2 */
                    for (unsigned short i_32 = 0; i_32 < 14; i_32 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) arr_60 [i_28] [i_29] [i_31] [i_32]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_33 = 0; i_33 < 14; i_33 += 1) 
                        {
                            arr_110 [13U] [i_33] [i_31] [i_32] [2U] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 439206048))))));
                            var_48 = ((/* implicit */unsigned char) min(((-(arr_69 [i_31] [i_33] [i_33] [i_32] [i_33]))), (((/* implicit */unsigned int) var_0))));
                            var_49 &= ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_68 [i_33] [i_32] [i_31] [i_29] [i_28]))))))));
                        }
                        for (signed char i_34 = 0; i_34 < 14; i_34 += 3) 
                        {
                            var_50 = ((long long int) arr_6 [i_28] [i_34] [i_31] [i_31]);
                            var_51 = ((/* implicit */unsigned short) arr_59 [i_29] [i_32] [i_31] [i_32] [17LL] [(unsigned char)0] [i_34]);
                            var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)184))));
                        }
                    }
                    for (int i_35 = 1; i_35 < 13; i_35 += 3) 
                    {
                        var_53 = ((/* implicit */unsigned short) (!(arr_105 [i_28] [(unsigned short)4] [4] [i_29])));
                        arr_116 [i_28] [i_28] [i_28] [i_28] &= ((/* implicit */unsigned short) arr_40 [(_Bool)1] [i_31] [i_35]);
                        var_54 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)11038)), (1859455301U))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1062897245U))))))));
                        arr_117 [(unsigned char)6] [i_29] [(_Bool)1] = ((/* implicit */int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (max((((((/* implicit */_Bool) var_7)) ? (arr_43 [i_28] [i_29] [i_31] [i_35]) : (arr_54 [i_28] [i_29] [i_29]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_111 [10] [i_31] [i_31] [i_29] [i_28] [i_28])))))))));
                        arr_118 [i_31] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                    }
                }
                for (long long int i_36 = 1; i_36 < 13; i_36 += 4) 
                {
                    var_55 += ((/* implicit */unsigned long long int) var_0);
                    arr_121 [i_36] [i_29] [1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_103 [i_29] [(unsigned short)1] [i_36 + 1] [i_28]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_28] [i_28] [i_28] [i_28] [i_28]))) : (arr_46 [i_28] [i_36] [i_29] [i_29] [i_29] [i_36] [i_36]))))));
                    var_56 = ((/* implicit */unsigned int) max((var_56), (((arr_55 [i_28] [i_36 - 1] [i_28] [i_36 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_73 [i_36] [i_29] [i_36] [i_36 + 1]))))))));
                    var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)38321)))))));
                }
                /* vectorizable */
                for (unsigned short i_37 = 2; i_37 < 13; i_37 += 3) 
                {
                    var_58 = ((/* implicit */unsigned int) (signed char)117);
                    /* LoopNest 2 */
                    for (unsigned short i_38 = 0; i_38 < 14; i_38 += 1) 
                    {
                        for (signed char i_39 = 0; i_39 < 14; i_39 += 4) 
                        {
                            {
                                var_59 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_29] [i_29]))))) ? (arr_41 [i_28] [i_37] [i_38] [4]) : (((((/* implicit */_Bool) arr_2 [4U])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [(unsigned char)19] [(signed char)7]))))));
                                var_60 = ((/* implicit */signed char) ((((/* implicit */int) arr_77 [i_39])) << (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_40 = 0; i_40 < 14; i_40 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_41 = 1; i_41 < 11; i_41 += 1) 
                        {
                            arr_134 [9LL] [9LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_7)))));
                            var_61 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_28] [i_37 - 2] [i_37 + 1] [i_28] [i_28]))));
                        }
                        var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) (-(((((/* implicit */_Bool) var_4)) ? (arr_43 [i_28] [19U] [i_37] [i_40]) : (((/* implicit */long long int) ((/* implicit */int) arr_107 [i_28] [11ULL] [8U] [8U] [(unsigned char)10] [7U]))))))))));
                    }
                }
                arr_135 [i_28] [2ULL] [i_29] = ((/* implicit */signed char) (((-(((/* implicit */int) ((unsigned short) var_9))))) & (((/* implicit */int) ((15374291034990092060ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45368))))))));
            }
        } 
    } 
}
