/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158223
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
    var_10 = ((/* implicit */_Bool) (signed char)-120);
    var_11 += ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3032443972U)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)23033)) ? (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) : (2504284934U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (min((-1986990768818037646LL), (((/* implicit */long long int) ((-1986990768818037666LL) == (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                                var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 470532575U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)1747)) && (((/* implicit */_Bool) 19U)))))))));
                                var_14 |= ((/* implicit */unsigned long long int) ((_Bool) var_8));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [(short)10] [i_2]))) != (arr_13 [i_0 + 3] [i_0] [i_0 + 2] [8LL] [i_0 + 2] [1LL]))));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */int) var_1);
    }
    for (short i_5 = 1; i_5 < 8; i_5 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)18743))))) & (var_5)));
        arr_18 [0] &= ((/* implicit */long long int) arr_8 [i_5] [i_5 + 3] [i_5] [i_5] [i_5] [i_5]);
        var_17 = ((/* implicit */long long int) min((((arr_6 [i_5] [i_5 + 2] [i_5]) <= (arr_6 [i_5] [i_5] [i_5]))), (((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)32748))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (unsigned short)18758)) : (((/* implicit */int) var_3)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)124)) ? (2636065858U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_19 = ((/* implicit */int) (_Bool)0);
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                var_20 -= ((/* implicit */long long int) ((unsigned int) (-((-(1740462993))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (unsigned short)46792))));
            }
            for (unsigned int i_9 = 2; i_9 < 10; i_9 += 3) 
            {
                arr_29 [i_5] [i_7] [i_7] [i_5] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)14503))) ? (((((/* implicit */long long int) var_1)) ^ (arr_6 [i_5] [i_7] [i_5]))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)17522))))))));
                arr_30 [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)128)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) arr_7 [i_9 - 2] [i_9 - 1])) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) (signed char)27)))) : (((((/* implicit */_Bool) 7583068895053086994ULL)) ? (2015071552) : (((/* implicit */int) (unsigned char)4))))));
                var_22 = ((short) min((2015071552), (((/* implicit */int) (unsigned short)18758))));
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3303096354U)))) ? (((((/* implicit */int) (_Bool)1)) | (626974029))) : (((/* implicit */int) (signed char)97))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)5043))) : ((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) ^ (-9223372036854775787LL)))))));
                    var_24 &= ((/* implicit */unsigned long long int) -2147483644);
                    var_25 &= ((_Bool) ((((int) (short)16128)) < (((/* implicit */int) var_4))));
                }
                for (short i_11 = 2; i_11 < 10; i_11 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -3907264883075848110LL)) ? (((/* implicit */int) arr_33 [i_11 - 2] [i_11] [i_11 - 2] [10U])) : (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)22076))))))));
                    var_27 = ((/* implicit */long long int) arr_32 [i_5] [i_9] [i_9] [i_7] [i_5]);
                    var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)16131)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1))))), ((-(502215129243437190LL)))));
                    var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)144))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5 + 2] [i_5 + 3] [i_9 - 1] [i_11] [0]))) : (min((((/* implicit */long long int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) (signed char)20)) ? (var_5) : (arr_7 [i_7] [i_9])))))));
                }
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    arr_42 [i_5] [i_7] [i_9] [i_5] = ((/* implicit */int) ((7691157308970578460ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)16142))))))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-15140)))))));
                    var_31 = ((/* implicit */unsigned int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_12] [i_7] [i_5 - 1])))));
                }
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)17522))));
                            arr_53 [i_5] [i_5] [i_5] [i_13] [i_5] [i_5] [10LL] = ((/* implicit */unsigned short) arr_37 [i_5 + 1] [i_15] [i_5 + 1]);
                        }
                    } 
                } 
                var_33 = (~(((var_1) + (((/* implicit */unsigned int) -1776883749)))));
                var_34 = ((/* implicit */short) (-(4110524406U)));
                var_35 = ((/* implicit */unsigned int) var_8);
            }
            var_36 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_5] [i_7] [i_5] [i_5]))))) : ((~(9875245401029165240ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)31737)) : (((/* implicit */int) arr_50 [i_5] [i_5 + 3] [i_7] [i_7] [i_5 + 3] [5LL]))))))))));
            arr_54 [i_5] = ((/* implicit */signed char) min((min((((1525013508) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_27 [i_5 + 1] [(signed char)9] [i_7])))), ((-(((/* implicit */int) ((short) var_3)))))));
            /* LoopSeq 3 */
            for (int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                arr_57 [i_5] = ((/* implicit */long long int) (-(arr_36 [i_5] [i_5] [i_7] [i_7])));
                arr_58 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (-3844317039048675928LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17521))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16460)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))) : (var_5)));
                var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_43 [6U] [i_5 + 2] [i_5 - 1]))) ? ((+(2445460294U))) : (((/* implicit */unsigned int) (+(1767995734)))))))));
                var_38 += ((/* implicit */signed char) (~(((((/* implicit */int) (short)10282)) & (((/* implicit */int) (short)-17963))))));
                var_39 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) | (((unsigned long long int) (short)-1)))));
            }
            for (unsigned int i_17 = 2; i_17 < 10; i_17 += 3) /* same iter space */
            {
                arr_63 [i_5] [4LL] [i_17] [(unsigned char)0] = ((/* implicit */unsigned short) (-((-(9223372036854775807LL)))));
                var_40 = ((/* implicit */int) 509425764U);
            }
            /* vectorizable */
            for (unsigned int i_18 = 2; i_18 < 10; i_18 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    var_41 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_5] [i_5 + 1]))));
                    arr_70 [i_5] [i_5] [i_5] [1LL] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5 + 3])) ? (arr_6 [i_5] [i_5] [i_5 - 1]) : (arr_6 [i_5] [i_5] [i_5 + 1])));
                    arr_71 [(unsigned char)6] [8U] [i_7] [i_18] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) var_1)) | (var_9)));
                    arr_72 [i_5] [i_7] [i_18 - 2] = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) arr_52 [i_5] [i_7] [i_7] [i_18 - 2] [i_18 - 2] [i_5])))));
                }
                for (unsigned char i_20 = 3; i_20 < 8; i_20 += 3) 
                {
                    arr_75 [i_5 + 3] [i_7] [i_18] [i_5] = ((/* implicit */long long int) (((-(1883247361U))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
                    var_42 = ((/* implicit */int) var_2);
                }
                var_43 = var_9;
                arr_76 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_5] [i_18 - 2] [i_18])) <= (((/* implicit */int) arr_43 [i_5] [i_18 - 2] [i_18]))));
                var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (unsigned char)126)))));
            }
            /* LoopNest 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 1; i_22 < 9; i_22 += 3) 
                {
                    {
                        var_45 = ((((/* implicit */_Bool) ((long long int) var_6))) ? ((~(((/* implicit */int) (short)-17504)))) : (((/* implicit */int) ((unsigned char) arr_16 [i_5 + 1] [i_21]))));
                        var_46 = ((/* implicit */long long int) (unsigned char)235);
                        /* LoopSeq 4 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                        {
                            var_47 ^= ((/* implicit */unsigned int) arr_31 [i_5 + 2] [i_21] [i_21]);
                            var_48 = ((arr_74 [i_5 + 2] [i_5 - 1] [(unsigned char)0] [i_5 - 1] [(unsigned char)0]) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9462))))));
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                        {
                            arr_87 [i_24] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) arr_43 [i_5] [i_22] [i_5]))));
                            var_49 = ((/* implicit */int) ((unsigned short) ((var_3) || (((/* implicit */_Bool) 8325878648407987182ULL)))));
                            arr_88 [i_7] [i_5] [i_5] [i_24] [i_24] [i_21] [i_5 + 1] = ((/* implicit */unsigned long long int) var_0);
                            var_50 = ((/* implicit */signed char) min(((+(((/* implicit */int) (_Bool)1)))), (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((-1986990768818037638LL) == (4808171131474510804LL))))))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                        {
                            var_51 = ((/* implicit */signed char) 12LL);
                            arr_91 [i_5] [i_7] [i_5] [i_25] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                        }
                        for (short i_26 = 3; i_26 < 10; i_26 += 3) 
                        {
                            var_52 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (arr_36 [i_7] [i_7] [i_22 + 2] [5ULL]) : (((/* implicit */int) (signed char)108))))))), (5830498910487902131ULL)));
                            var_53 = ((/* implicit */_Bool) ((unsigned short) ((var_9) / (((/* implicit */long long int) var_1)))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_27 = 0; i_27 < 11; i_27 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_28 = 0; i_28 < 11; i_28 += 2) 
            {
                for (int i_29 = 3; i_29 < 9; i_29 += 3) 
                {
                    {
                        var_54 = ((/* implicit */unsigned char) ((long long int) (~(arr_99 [i_5] [i_5]))));
                        var_55 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_5])) ? (-1886225774) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((short) var_5)))));
                        arr_106 [i_5] [i_28] [i_27] [i_5 + 3] [i_5] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_95 [i_5] [i_27] [i_27] [(_Bool)1] [i_27] [i_27] [i_27]))))));
                        var_56 = ((/* implicit */_Bool) ((((unsigned long long int) (unsigned char)224)) | (((/* implicit */unsigned long long int) arr_48 [0LL] [i_27] [i_5 + 2] [i_5] [i_5]))));
                    }
                } 
            } 
            var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_84 [i_5] [i_5 + 1] [i_5 + 2] [i_5 + 3] [i_5]))) : (var_5)));
            var_58 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)14081)))))));
        }
        for (unsigned short i_30 = 0; i_30 < 11; i_30 += 3) /* same iter space */
        {
            var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) min((var_7), (var_7)))) : ((~(min((arr_36 [i_5] [i_5 + 2] [i_30] [i_30]), (((/* implicit */int) var_8))))))));
            arr_109 [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)165))))), (((long long int) ((((/* implicit */_Bool) 6001864295695645628LL)) ? (((/* implicit */int) (unsigned short)16384)) : (arr_46 [i_30] [i_5]))))));
        }
        var_60 ^= var_9;
    }
    var_61 -= ((/* implicit */short) 12616245163221649488ULL);
}
