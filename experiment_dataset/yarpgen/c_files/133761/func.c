/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133761
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            arr_16 [2ULL] [i_0] [(short)10] [i_2] [i_3 - 1] [8ULL] [11LL] = max((((arr_12 [i_4 - 3] [i_3 + 1] [i_1 + 1] [i_0]) ^ (arr_12 [i_4 - 3] [i_3 - 1] [i_1 + 1] [i_1]))), (((/* implicit */unsigned int) max((arr_3 [(_Bool)1] [i_4 - 3] [i_4 - 4]), (arr_3 [i_4] [i_4] [i_4 - 1])))));
                            var_19 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_13 [(short)0] [i_1 + 1] [i_3] [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (var_13)))))))), (-6914568545711470499LL)));
                            var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)34)), (712957781U)));
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_2] [10LL] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((short)-31441), (((/* implicit */short) ((unsigned char) arr_0 [i_2] [i_3 + 2])))))) * ((-(((/* implicit */int) (_Bool)1))))));
                            var_21 *= ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1 + 1]);
                        }
                        for (short i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [3U] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)14016)), (-2099006154)));
                            var_22 ^= ((/* implicit */unsigned char) ((min((((var_0) < (var_5))), (((var_18) == (((/* implicit */int) (unsigned char)50)))))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(_Bool)1] [i_3] [i_6]))))) ? (arr_8 [i_1 + 1]) : (((((/* implicit */_Bool) 3582009513U)) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [(unsigned char)6] [i_0] [i_2] [16U] [i_6 + 1])))))))));
                            arr_23 [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-2091347428200210530LL), (-7925699813809530916LL)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(unsigned char)2] [i_1] [i_1] [i_1] [(unsigned char)2] [i_1] [i_6]))) : (18446744073709551606ULL)))))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) var_10);
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                var_24 *= (+(((/* implicit */int) arr_25 [i_0] [i_7])));
                arr_29 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)13] [i_7] [i_7] [(short)11]))));
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(18446744073709551606ULL))))));
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)19364)) ? (var_18) : (((/* implicit */int) (signed char)103))));
                    var_27 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) arr_15 [(signed char)14] [i_9])) : (((/* implicit */int) (unsigned short)8029)))) <= (((/* implicit */int) (short)(-32767 - 1)))));
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0] [4ULL] [(signed char)10] [i_9])) ^ (((/* implicit */int) (signed char)40))))) ? (arr_5 [i_0] [(unsigned char)14] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_8] [i_8] [i_8])))));
                }
                for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    var_29 ^= ((/* implicit */long long int) (+(((/* implicit */int) (short)-25727))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 3) 
                    {
                        var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 5868080774153597213LL)) ? (-3186639796009519664LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        arr_38 [i_0] [8U] [i_8] [i_10] [i_0] = ((/* implicit */short) 18446744073709551606ULL);
                        var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_0] [14LL] [16LL] [(unsigned short)6])))))));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_43 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10ULL)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)22705)) : (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) var_12))));
                        arr_44 [(short)12] [i_7] [(_Bool)0] [i_10] [(short)12] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_37 [(unsigned short)0] [(unsigned short)0] [i_7] [i_8] [i_7] [i_10] [i_12]))) ? (arr_41 [i_0] [i_12 - 1] [i_7] [i_10] [(short)1]) : (var_5)));
                        var_32 += ((/* implicit */int) arr_30 [i_0] [i_8] [i_10] [i_10]);
                        var_33 = ((/* implicit */long long int) arr_17 [i_12] [i_12] [i_0] [i_12] [i_0] [i_12 - 1] [(_Bool)1]);
                    }
                    var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1023697748U)) ? (((/* implicit */unsigned long long int) 895162656)) : (9982562836316188847ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [(unsigned char)16] [i_8] [(unsigned short)5]))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))) : (12326970113795056991ULL)))));
                }
                for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_35 ^= ((/* implicit */unsigned char) ((long long int) 18446744073709551586ULL));
                    var_36 ^= ((/* implicit */_Bool) arr_33 [i_0] [(signed char)15] [i_8] [16U]);
                    var_37 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)5] [i_7] [i_8] [i_8] [i_7] [i_0]))) : (var_15)));
                    var_38 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) arr_21 [16LL] [(_Bool)1] [16LL] [(unsigned short)8] [(_Bool)1])) : (((((/* implicit */int) (unsigned char)96)) % (((/* implicit */int) var_8))))));
                }
            }
            arr_48 [i_0] = ((/* implicit */unsigned long long int) arr_40 [12ULL] [i_0] [i_0] [i_0] [i_7]);
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 3) 
                {
                    {
                        arr_54 [(unsigned short)12] [i_0] [i_0] = max((((((((/* implicit */_Bool) (unsigned char)149)) ? (18446744073709551586ULL) : (((/* implicit */unsigned long long int) 845393666)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))), ((!(((/* implicit */_Bool) arr_32 [i_0] [16] [i_0] [i_15])))));
                        var_39 *= ((/* implicit */short) ((unsigned short) min(((signed char)60), (((/* implicit */signed char) (_Bool)1)))));
                        var_40 = ((/* implicit */long long int) var_14);
                        var_41 *= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_20 [i_0] [(_Bool)1] [(_Bool)1] [i_15 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : (8147109628537246512LL)))));
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)171)) && (((/* implicit */_Bool) 8147109628537246512LL)))))));
        }
        for (int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
        {
            var_43 ^= ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-113)))) * (((((/* implicit */int) (unsigned char)0)) >> (((arr_41 [i_0] [i_0] [10LL] [i_0] [i_0]) - (13881974890384823904ULL)))))));
            var_44 = max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (short)-16744)))), (((((((((/* implicit */_Bool) 973734523099819571LL)) ? (((/* implicit */int) (signed char)-26)) : (998004188))) + (2147483647))) << (((arr_50 [5U] [i_16]) - (7852353554642799300ULL))))));
        }
        for (int i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0] [i_17] [(unsigned short)11] [i_17])) ? (arr_42 [i_0] [10ULL] [(short)2] [i_17] [i_17]) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)31)), (var_4)))) : (((/* implicit */int) var_3))))));
            arr_61 [i_0] [10ULL] [16] &= arr_46 [16] [i_17];
            /* LoopSeq 2 */
            for (long long int i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
            {
                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((658404576U) - (658404551U))))))));
                arr_64 [i_0] [i_0] = ((/* implicit */short) arr_25 [i_0] [i_17]);
            }
            for (long long int i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 3) 
                {
                    arr_70 [4ULL] [i_0] [i_19] [i_20] [i_19] [i_19] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 7031448832842288510LL)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) 
                    {
                        arr_73 [i_17] [(unsigned short)14] [i_19] [i_20] [i_21] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [(_Bool)1] [i_17] [i_19] [i_20])) ? (((/* implicit */int) arr_66 [i_0] [i_17] [i_19] [i_21])) : (((/* implicit */int) arr_31 [i_0] [i_17] [i_20]))));
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))));
                        var_48 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [6LL] [i_17] [i_19] [6LL]))));
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((5214551703959679583LL) - (5214551703959679569LL)))));
                    }
                    for (unsigned short i_22 = 1; i_22 < 16; i_22 += 3) 
                    {
                        var_50 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)1024))))) ? (var_6) : (((/* implicit */int) var_12))));
                        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) ^ (var_7)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1394621406U)))) : ((~(((((/* implicit */_Bool) 6513071233639294751ULL)) ? (8147109628537246512LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))))))))));
                        arr_77 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (var_6)));
                        var_52 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_22 + 1] [12U] [i_0])) ? (((/* implicit */int) arr_21 [8ULL] [i_20] [i_22 + 1] [(unsigned short)6] [i_22 - 1])) : (((/* implicit */int) arr_21 [i_0] [i_17] [i_22 - 1] [8LL] [i_22])))) >> (((((/* implicit */int) arr_21 [10ULL] [i_17] [i_22 + 1] [6ULL] [i_22 + 1])) - (33620)))));
                        arr_78 [i_0] [i_17] [16] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) 3028723636U)) ? (((((/* implicit */_Bool) (~(6435818269943670055ULL)))) ? (((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16)))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        arr_82 [i_0] [i_17] [i_0] [i_20] [i_23] = ((/* implicit */unsigned short) arr_25 [11LL] [(signed char)15]);
                        arr_83 [i_0] [i_19] [i_19] [i_17] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 3582009514U)), (2984458830028073289ULL)));
                    }
                }
                /* vectorizable */
                for (short i_24 = 3; i_24 < 16; i_24 += 3) 
                {
                    var_53 = 895162656;
                    arr_88 [i_0] [i_17] [i_0] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 3566825969U)) / (5059772193432171724LL)));
                    arr_89 [i_24] [5ULL] [i_24 - 1] [i_0] = (+(((/* implicit */int) arr_72 [14ULL] [12ULL])));
                }
                var_54 = ((/* implicit */short) var_18);
                arr_90 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)19)) + (((/* implicit */int) (_Bool)1))));
                var_55 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 712957781U)) ? (2984458830028073289ULL) : (((/* implicit */unsigned long long int) 184033810))));
                arr_91 [(unsigned short)6] [i_17] [8ULL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) (unsigned short)52443))))) ? (((((/* implicit */_Bool) -8663150985077115138LL)) ? (-8147109628537246513LL) : (7042204831299751836LL))) : (((/* implicit */long long int) arr_34 [i_0] [i_0] [(unsigned char)14] [i_17] [4U] [i_0]))))) ? (((((/* implicit */_Bool) (short)28155)) ? (3696033817138853525ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))))) : (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
            }
        }
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            var_56 -= ((((/* implicit */_Bool) arr_79 [i_0] [12ULL] [i_0] [(unsigned char)15] [i_0] [i_25] [i_25])) ? (((/* implicit */unsigned long long int) ((arr_86 [i_0] [i_25] [11ULL] [i_25 - 1] [i_25 - 1]) << (((((((/* implicit */int) (unsigned short)65528)) - (var_6))) + (1129045498)))))) : (max((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_93 [2U] [8]))))))));
            arr_94 [i_0] = ((/* implicit */signed char) var_10);
            arr_95 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)0)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_25 - 1] [(short)12] [1] [6LL] [i_25 - 1] [i_25] [i_25])))))));
        }
        var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) ((max((18446744073709551601ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) ^ (((/* implicit */unsigned long long int) arr_8 [i_0])))))));
    }
    for (int i_26 = 0; i_26 < 19; i_26 += 3) 
    {
        arr_99 [i_26] = ((/* implicit */_Bool) (signed char)-67);
        var_58 ^= ((/* implicit */unsigned char) max((var_16), (arr_96 [i_26])));
        arr_100 [i_26] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) (unsigned short)34422)) : (((/* implicit */int) arr_97 [i_26]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) ((var_9) >> (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_97 [i_26])))) : ((-9223372036854775807LL - 1LL)))));
    }
    var_59 = ((/* implicit */signed char) ((unsigned long long int) var_3));
}
