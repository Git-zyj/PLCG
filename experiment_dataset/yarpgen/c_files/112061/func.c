/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112061
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 4] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_2])) : (((/* implicit */int) var_7))))));
                    var_16 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (3367671435462769976LL))) | (((/* implicit */long long int) (~(var_2)))))) + (((/* implicit */long long int) (-((-(((/* implicit */int) arr_0 [i_0])))))))));
                    var_17 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)225)), (2230442406U)))) + ((~(var_11))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 4] [i_1 + 1] [i_2 - 1])) ? (min((((/* implicit */int) (unsigned char)48)), (-13))) : (((/* implicit */int) arr_11 [(unsigned short)21] [i_2] [i_0]))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_4])) ? (((/* implicit */long long int) -1663554192)) : (arr_13 [14] [19LL] [14] [i_3] [i_4] [i_4])))) ? (min((2343753251U), (((/* implicit */unsigned int) arr_9 [i_4] [i_3] [8] [i_0] [i_1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                                var_19 = ((/* implicit */unsigned int) 3367671435462769976LL);
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = (-((-(((int) arr_12 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1])))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [3U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (0U))))) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) ((((/* implicit */_Bool) 1747585995U)) && (((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2] [i_0] [i_1] [i_0])))))));
                }
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (-6956298743767681825LL)));
                    arr_18 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (var_1))) > (((/* implicit */unsigned long long int) var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)10)) < (((/* implicit */int) (unsigned short)10)))))) : (arr_1 [i_1 + 3] [(_Bool)1])));
                    arr_19 [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_0 [i_0])))))) < (((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned char)5])) > ((-(arr_12 [i_1 + 4] [i_1] [i_5] [i_0]))))))));
                }
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                arr_29 [(signed char)16] [i_1] [i_7] [i_1] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_12)) ? ((-(var_1))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))));
                                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((/* implicit */long long int) var_4)) : (min((9223372036854775790LL), (((/* implicit */long long int) (unsigned char)244))))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned char) var_11);
                    arr_30 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) var_1);
                            arr_35 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) var_2)) - (arr_16 [21U] [i_6] [i_9] [i_10])))))) ? (((/* implicit */unsigned long long int) arr_28 [i_6] [i_9])) : (var_1)));
                        }
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_13))));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) max(((~(arr_28 [i_1] [i_11 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) == (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_7))))))))));
                        /* LoopSeq 2 */
                        for (int i_12 = 2; i_12 < 19; i_12 += 3) 
                        {
                            arr_42 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1073676288ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3367671435462769984LL)));
                            arr_43 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_11] [i_12 + 2] = ((/* implicit */signed char) (-((((_Bool)1) ? (-6956298743767681833LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))))));
                            arr_44 [i_0] [i_0] [8] [8] [i_0] = ((/* implicit */unsigned int) arr_25 [i_0] [i_1 - 1] [(unsigned short)20] [i_0]);
                            arr_45 [i_0] [i_0] [9LL] [(signed char)20] [(signed char)20] = ((/* implicit */short) ((int) (+(((/* implicit */int) arr_3 [i_12 + 3] [i_1 + 4])))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            arr_48 [i_0] [i_1 + 3] [i_0] [8] [i_0] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_8 [i_0] [i_0] [i_1 + 2] [i_6] [i_11 + 1] [i_13]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68)))))) < (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (_Bool)1)))))));
                            arr_49 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) (~(var_2))))), (((((/* implicit */_Bool) arr_31 [(unsigned char)13] [i_11 - 2] [i_11 - 2] [i_13])) ? (((/* implicit */int) arr_31 [i_0] [i_11 - 2] [i_13] [i_13])) : (((/* implicit */int) arr_31 [i_0] [i_11 - 2] [6U] [i_11]))))));
                            var_26 = var_11;
                            arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(max((arr_38 [i_0] [i_1 - 1] [i_11 + 1]), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
                            var_27 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((-(18446744072635875323ULL))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_6] [i_0] [i_13])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_25 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_11] [i_1] [i_6] [i_1] [i_1 - 1] [i_0]))) : (((((/* implicit */_Bool) arr_24 [i_1 + 4] [i_0] [i_11 + 2] [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1 + 2] [i_0] [i_11 - 2] [i_11 + 1]))) : (arr_4 [2] [i_11 + 1] [i_11 - 2]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 3; i_14 < 21; i_14 += 2) 
                        {
                            var_28 -= ((/* implicit */signed char) (unsigned char)0);
                            arr_53 [i_0] [i_0] [i_6] [i_1 + 3] [i_14 - 2] [i_11] [i_1 + 3] = ((/* implicit */_Bool) 1663554192);
                        }
                        arr_54 [i_6] [i_11 + 2] = ((/* implicit */long long int) (-((~(var_2)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_6))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(1663554191)))) + (((((/* implicit */_Bool) var_5)) ? (var_4) : (arr_27 [i_6] [i_6] [i_6] [i_15] [i_15])))));
                    }
                    for (unsigned int i_16 = 1; i_16 < 21; i_16 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            arr_62 [i_0] [i_1] [i_17] [i_16 - 1] [i_16 - 1] [i_17] [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                            arr_63 [i_0] [i_16] [i_6] [(unsigned char)14] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(1663554192)))) & (min((max((((/* implicit */unsigned long long int) (unsigned short)65533)), (var_10))), (((/* implicit */unsigned long long int) var_13))))));
                            arr_64 [i_16] [i_16] [i_6] [(unsigned char)14] [i_16] = ((/* implicit */short) (unsigned char)234);
                            arr_65 [i_16] [i_1 + 4] [i_16] = ((/* implicit */unsigned short) var_5);
                        }
                        for (long long int i_18 = 3; i_18 < 21; i_18 += 1) 
                        {
                            var_31 = ((/* implicit */short) var_8);
                            arr_68 [i_0] [i_16] [i_6] [i_18] = ((/* implicit */unsigned long long int) var_0);
                            arr_69 [i_0] [(short)14] [i_0] [i_6] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [(unsigned char)8] [i_1 + 4])) ? (((/* implicit */int) arr_33 [3LL] [i_18])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-5562))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        }
                        for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                        {
                            arr_73 [i_0] [i_16] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_1 [i_16 + 1] [i_1]))))), (((unsigned int) (unsigned char)68))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (~(((var_4) + (((((/* implicit */_Bool) arr_52 [i_0] [i_1 + 3] [i_6] [i_19])) ? (arr_28 [i_19] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
                        }
                        var_33 += ((/* implicit */long long int) max((arr_34 [(unsigned short)10] [i_0] [i_1] [i_1] [i_6] [i_16 + 1] [i_16 - 1]), (max((((/* implicit */unsigned int) var_7)), ((-(var_4)))))));
                    }
                }
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (~(4245459129515560879ULL))))));
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_1 + 2])))) : ((-(var_9)))));
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    for (unsigned int i_21 = 4; i_21 < 20; i_21 += 2) 
                    {
                        {
                            arr_79 [i_0] [5] [1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [(unsigned short)1] [i_1 + 2] [i_20] [i_21 - 1]))))) : (max((arr_5 [(unsigned char)8] [i_21] [i_21] [i_0]), (var_11))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_72 [i_0] [i_1 + 3] [i_20] [i_21]))))));
                            arr_80 [12U] [i_1] [i_1] [i_1 + 2] [i_1] [1U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_74 [i_21 + 1] [i_21 - 2] [i_21 - 4] [i_21 - 2]))))) ? (((/* implicit */int) arr_74 [i_21 - 1] [i_21 - 4] [i_21 - 4] [i_21 - 1])) : (((((/* implicit */int) arr_74 [i_21 + 1] [i_21 - 3] [i_21 - 3] [i_21 + 1])) + (((/* implicit */int) arr_74 [i_21 - 1] [i_21 - 3] [i_21 - 1] [i_21 - 2]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) /* same iter space */
                {
                    arr_83 [i_0] [i_1] [i_22] [i_22] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_22] [i_0] [(short)2] [i_0])))))), (((4294967272U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned short)5))))))))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? ((~(arr_13 [i_0] [10U] [i_1 + 1] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) var_5)))))))));
                    var_37 = ((/* implicit */unsigned int) -98396112);
                    arr_84 [i_22] [i_1 + 1] [i_1 + 1] [5LL] = ((/* implicit */unsigned int) (~(max((8601934667848063148LL), (((/* implicit */long long int) (_Bool)1))))));
                    var_38 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) : (min((var_11), (arr_77 [i_0] [(unsigned short)1] [(unsigned short)1] [16LL])))))));
                }
                for (unsigned short i_23 = 0; i_23 < 22; i_23 += 3) /* same iter space */
                {
                    arr_87 [i_23] = ((/* implicit */unsigned int) ((((unsigned int) (((_Bool)1) ? (1073676289ULL) : (((/* implicit */unsigned long long int) var_9))))) > (var_5)));
                    var_39 = ((/* implicit */unsigned char) ((var_8) + ((~((~(var_5)))))));
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (short)29380))));
                    arr_88 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52842)) - (((/* implicit */int) (unsigned short)65529))))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1 + 2] [i_0] [i_1]), (var_11))))));
                }
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned short)0))))))));
    var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2106084765)))) ? (((unsigned int) var_7)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)))))) ? (((long long int) ((short) var_7))) : (min((((/* implicit */long long int) var_12)), (var_13))))))));
}
