/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166471
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_17 ^= ((/* implicit */short) ((4013215748U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181)))));
                        arr_10 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [(_Bool)0] [i_3] [i_0] [i_0 + 1] [i_3] [i_0 + 1])) ? (arr_9 [i_0 - 1] [i_0] [(unsigned short)2] [i_0] [(unsigned short)8] [i_0 - 2]) : (arr_9 [(unsigned short)16] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1])));
                        arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (1962835399) : (1962835402)));
                    }
                } 
            } 
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned long long int) arr_0 [i_1] [i_0 - 2])))));
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_19 *= ((/* implicit */unsigned short) ((((_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 - 2] [i_0]))) : (2662423967U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            arr_15 [i_4] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1] [i_4])) != (((/* implicit */int) (unsigned short)2707)))));
            arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((unsigned short) 710770435))), (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28590))) : (var_3))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0 + 1] [i_4])))))));
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_5] [i_0] [i_0] = (((+(var_3))) != (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) arr_20 [i_5] [(_Bool)1] [i_0])) : (arr_5 [(unsigned short)15] [17LL] [(unsigned short)15] [(unsigned short)15])))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [19] [19] [i_0])))))));
            var_20 = ((/* implicit */unsigned short) max((arr_13 [i_0] [(_Bool)1]), (max((((/* implicit */unsigned int) arr_19 [i_5 - 1] [i_5 - 1])), (max((((/* implicit */unsigned int) 743712514)), (var_1)))))));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 3; i_6 < 21; i_6 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) var_4);
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_22 = ((((((/* implicit */_Bool) 7222920027634974240ULL)) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((long long int) var_15))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 4211132299U)) != (7222920027634974240ULL))))))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((unsigned long long int) 1962835402)))));
                        var_24 += ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)36947)), (min((max((((/* implicit */unsigned int) (unsigned char)78)), (arr_13 [i_0] [i_5]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
                        arr_31 [i_6] [(unsigned short)23] [i_6] [i_5] [i_0] = ((unsigned long long int) 33292288LL);
                    }
                    for (int i_9 = 4; i_9 < 20; i_9 += 1) 
                    {
                        var_25 += (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6 - 3] [i_7] [i_6 - 3]))) - (var_3)))));
                        var_26 += ((/* implicit */_Bool) (+(min((arr_24 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [(short)18]), (((/* implicit */int) (signed char)-105))))));
                        var_27 += ((/* implicit */unsigned char) 2147475456);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned long long int) var_2);
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_10))));
                        arr_38 [18ULL] [i_7] [i_7] [14ULL] [i_5] [14ULL] [14ULL] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])) != (var_9))));
                    }
                    arr_39 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [13ULL] [i_5])) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) arr_6 [i_5] [i_5] [i_7]))))))) ? (((((/* implicit */_Bool) 33554432U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) ((((/* implicit */int) arr_33 [(_Bool)1] [21] [i_5] [i_5] [i_5])) > (((/* implicit */int) arr_26 [i_0] [i_7] [(unsigned char)20] [(unsigned char)20])))))))));
                    arr_40 [i_0] [(unsigned char)18] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((((/* implicit */int) arr_27 [19U] [19U] [i_5] [6ULL] [19U])) + (arr_20 [i_0] [i_0] [i_0]))) : (arr_24 [i_7] [21U] [i_5 - 1] [i_0 - 2] [i_0 - 2])))));
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                {
                    var_30 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) - (var_11)));
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        arr_47 [i_5] [i_6] [i_6] [i_5] [i_0 - 1] = ((1203452187643349522LL) != (((/* implicit */long long int) arr_1 [i_6])));
                        var_31 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7222920027634974235ULL)));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_51 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_11] [i_13] = ((/* implicit */unsigned char) (-((+(arr_45 [16U] [16U] [i_5] [0] [i_5] [i_13] [i_13])))));
                        arr_52 [14U] [i_5] [14U] [i_5] [16] = ((/* implicit */unsigned short) ((_Bool) arr_28 [i_0] [i_0 - 2] [i_0 - 2] [i_6] [i_11 + 1] [i_11] [i_13]));
                        arr_53 [i_0] [i_6 + 2] [i_6 + 2] [i_13] = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
                    }
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (((+(var_6))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_50 [i_14] [i_11] [i_11] [1U] [i_5] [i_0] [(unsigned char)13]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56984))))))))))));
                        arr_57 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53295))) != (arr_14 [i_0 - 1] [i_6 - 3] [i_0 - 1])));
                        arr_58 [i_0] [i_11] [13] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11910)) != (arr_0 [i_0 - 1] [i_6 + 3])));
                    }
                    arr_59 [i_0] [i_5 - 1] [i_6] [i_11 + 1] |= ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0 - 2] [i_0] [i_0]))) > (6716256025184139405ULL)))) != ((((_Bool)1) ? (-1962835400) : (((/* implicit */int) arr_22 [i_0])))));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_0 + 1] [i_5] [i_0 + 1])))))));
                }
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                {
                    arr_62 [(_Bool)1] [i_6] [i_0] [23ULL] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (+(arr_19 [i_5 - 1] [i_6]))));
                    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_6 + 3])) * (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_6])), (15302738544806001610ULL)))))) ? (532575944704ULL) : (((/* implicit */unsigned long long int) min((1962835402), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) != (arr_13 [i_0] [i_0]))))))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        {
                            var_35 ^= min(((-(((((/* implicit */int) var_14)) / (((/* implicit */int) arr_25 [i_6 - 3] [i_16] [1U])))))), (((((/* implicit */_Bool) (+(1962835380)))) ? (((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_6 - 3])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_5 - 1] [i_6 + 1])))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_6 [(signed char)8] [i_5] [i_5]))));
                        }
                    } 
                } 
                arr_68 [(short)6] [i_5] [0] [i_0] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((arr_55 [18ULL] [22ULL] [i_5] [9U] [i_5 - 1] [i_6] [22ULL]) != (((/* implicit */int) arr_46 [(signed char)3] [i_0] [i_5] [i_5] [i_5 - 1] [i_5] [i_5]))))), (max((((/* implicit */unsigned int) (unsigned short)49842)), (0U)))));
                arr_69 [i_6] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2453297142U)))) ? (arr_9 [i_5] [i_0] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-105)) * (((/* implicit */int) (short)27172))))))));
            }
            /* vectorizable */
            for (short i_18 = 3; i_18 < 21; i_18 += 1) 
            {
                arr_74 [i_18] [(unsigned short)10] = ((/* implicit */int) arr_17 [(unsigned char)4] [i_5] [i_18]);
                arr_75 [i_0] [i_18] [i_5 - 1] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_18] [i_5 - 1] [i_5 - 1] [i_18 - 2] [i_5 - 1] [i_0 - 2])) ? ((+(164198204U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
        }
        var_37 *= ((/* implicit */unsigned int) min((((/* implicit */int) (((+(((/* implicit */int) (unsigned char)50)))) > (((/* implicit */int) ((signed char) var_15)))))), (var_7)));
        /* LoopSeq 2 */
        for (unsigned int i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
        {
            var_38 += ((/* implicit */short) arr_20 [i_0] [i_0] [i_0]);
            /* LoopNest 3 */
            for (signed char i_20 = 4; i_20 < 22; i_20 += 1) 
            {
                for (unsigned short i_21 = 3; i_21 < 21; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 24; i_22 += 2) 
                    {
                        {
                            arr_87 [i_22] [i_22] [i_22] [i_20] [20] [11U] = ((unsigned char) 1841670155U);
                            arr_88 [i_0] [(unsigned char)7] [i_20] [i_20] [3ULL] = min((((unsigned long long int) ((((/* implicit */_Bool) 164198204U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))) != (max((11223824046074577375ULL), (((/* implicit */unsigned long long int) (unsigned short)34206))))))));
                            arr_89 [i_0] [i_20] [(_Bool)1] [i_21 - 3] [i_22] [i_19] [i_21 + 1] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_26 [i_0 + 1] [i_19] [i_21] [i_21])))), (((_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_0 + 1] [i_0 + 1] [i_20 - 3] [i_20 - 3] [i_21 - 1] [20ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_35 [i_0 - 1] [(_Bool)0]))))) ? (((((/* implicit */_Bool) 11223824046074577375ULL)) ? (2251799813685216ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7795))))) : (((/* implicit */unsigned long long int) max((1841670149U), (((/* implicit */unsigned int) arr_49 [i_0 + 1] [i_19] [i_20 - 2] [(short)3] [i_21 - 3] [i_21]))))))))));
                        }
                    } 
                } 
            } 
            arr_90 [i_0] [(signed char)13] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)135)), ((+(((/* implicit */int) arr_37 [i_0] [i_0 + 1] [i_0 + 1] [i_19] [(unsigned short)1]))))));
            /* LoopNest 2 */
            for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                for (long long int i_24 = 4; i_24 < 22; i_24 += 1) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) 1841670148U);
                        arr_96 [i_0] [i_0] [i_0] [i_23] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) arr_67 [i_24])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((max((arr_36 [i_0] [i_0] [i_19] [i_23] [i_24 + 1]), (((/* implicit */unsigned char) arr_18 [i_19] [i_19] [i_19])))), (((/* implicit */unsigned char) ((arr_28 [i_0] [i_19] [i_19] [i_19] [13U] [i_23] [i_24]) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))) : (var_2)));
                    }
                } 
            } 
        }
        for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned int) ((short) min((arr_95 [i_25] [i_25] [i_0] [i_0 - 1] [i_0 - 2] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))));
            /* LoopNest 2 */
            for (unsigned char i_26 = 0; i_26 < 24; i_26 += 1) 
            {
                for (unsigned short i_27 = 0; i_27 < 24; i_27 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_28 = 0; i_28 < 24; i_28 += 2) 
                        {
                            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((unsigned long long int) min((arr_33 [i_0] [i_0 + 1] [i_0 - 1] [(signed char)1] [i_28]), (arr_42 [i_28] [i_26] [i_0])))))));
                            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) 31)), (((((/* implicit */_Bool) var_0)) ? (568134451136509680ULL) : (((/* implicit */unsigned long long int) 808586271U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [21U] [i_0])) ? (arr_34 [i_0] [i_25] [i_26] [i_0] [19U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_0] [i_25] [i_25] [i_26] [i_26] [i_28])))))) ? (((((/* implicit */int) arr_64 [i_0] [i_26] [i_0] [i_0])) * ((-2147483647 - 1)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)189)), ((short)-28100))))))))))));
                        }
                        arr_109 [i_27] [i_26] [i_26] [i_25] [i_26] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((short) (signed char)11))), ((unsigned short)43832)));
                        arr_110 [i_0] [i_26] [i_0] [(signed char)14] [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_63 [i_0] [i_26]) / (((/* implicit */unsigned int) 939524096))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_27] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_26] [i_0 - 2] [i_0 - 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (991185870646572096ULL)))))))));
                        var_44 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_111 [i_26] [19] [i_26] [(unsigned char)22] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_49 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 2])), (min((1681950552U), (1842687604U))))), ((+(1292940033U)))));
                    }
                } 
            } 
        }
    }
    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) > (max((((/* implicit */unsigned int) (+((-2147483647 - 1))))), (var_2))))))));
    var_46 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (max((2251799813685230ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3749408409U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (max((min((var_9), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((signed char) (-9223372036854775807LL - 1LL))))))));
    var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(var_7)))) > (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (((((/* implicit */_Bool) (unsigned short)31)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
    /* LoopNest 3 */
    for (unsigned char i_29 = 0; i_29 < 17; i_29 += 1) 
    {
        for (short i_30 = 0; i_30 < 17; i_30 += 1) 
        {
            for (short i_31 = 0; i_31 < 17; i_31 += 4) 
            {
                {
                    var_48 = ((/* implicit */int) min((var_48), ((-(((/* implicit */int) (unsigned short)15360))))));
                    var_49 ^= ((/* implicit */unsigned short) ((signed char) ((arr_66 [i_31] [i_31] [i_29] [i_29] [i_31]) != (((/* implicit */long long int) ((unsigned int) 18444492273895866400ULL))))));
                }
            } 
        } 
    } 
}
