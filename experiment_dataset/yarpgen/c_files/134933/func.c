/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134933
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)90)) + (18)))) ? (((/* implicit */int) ((arr_2 [i_0] [i_1] [i_1]) == (var_10)))) : (arr_4 [i_0] [i_1]))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) > (arr_2 [i_0] [i_1] [i_2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)-121))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_3 - 1] [i_3 + 3])) / (var_4)));
                            var_15 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [(unsigned char)16] [i_1] [i_0]))));
                        }
                        var_16 = ((/* implicit */int) ((short) -22));
                        var_17 = ((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1]);
                    }
                    var_18 ^= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_4 [i_1] [i_2])))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)85))))) : (var_4)))), (((var_11) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-112)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                arr_19 [i_5] = min((max((-15), ((+(((/* implicit */int) (signed char)-51)))))), (((arr_7 [i_5]) ? (((/* implicit */int) ((signed char) var_1))) : (((((/* implicit */int) (signed char)-116)) | (447933740))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_16 [10]))));
                            var_20 |= ((/* implicit */long long int) -16);
                        }
                    } 
                } 
                arr_28 [i_5] [i_6] = ((/* implicit */int) min((min((var_11), (8814736444981442717LL))), (min((6604951669673027018LL), (((/* implicit */long long int) arr_3 [i_5] [i_5 - 1]))))));
                arr_29 [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)14336)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (signed char)-83)))))) : ((+(4294967290U))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 2])) / (((/* implicit */int) arr_14 [i_5] [(unsigned short)5])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 18; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    {
                        arr_42 [i_9] [i_9] [i_11] [i_12] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_4)), (min((arr_36 [i_10 + 1] [i_10 - 2] [i_10 - 2]), (max((((/* implicit */long long int) (_Bool)1)), (-5LL)))))));
                        var_21 = ((/* implicit */signed char) var_9);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_13 = 2; i_13 < 20; i_13 += 1) 
        {
            for (short i_14 = 2; i_14 < 20; i_14 += 1) 
            {
                {
                    var_22 = min(((((-(arr_34 [8ULL] [i_14]))) << (((((((-2) + (2147483647))) >> (((/* implicit */int) (unsigned short)15)))) - (65535))))), (((int) max((((/* implicit */long long int) arr_43 [i_14 + 1] [i_13])), (var_8)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        arr_50 [i_9] [i_13] [i_9] [i_15] = ((1296917547U) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (min((max((((/* implicit */int) (unsigned short)58199)), (arr_34 [i_13] [i_15]))), (((2147483647) / (-1271254117)))))));
                            var_24 *= ((/* implicit */_Bool) ((unsigned long long int) var_6));
                            arr_53 [i_9] [i_13] [i_9] [i_15] [i_9] [i_9] = ((/* implicit */unsigned short) max((7LL), (((/* implicit */long long int) var_3))));
                            var_25 = ((/* implicit */unsigned short) var_5);
                            var_26 ^= ((/* implicit */unsigned char) ((_Bool) (+(14LL))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        arr_57 [i_9] [i_9] [i_14 - 1] [i_17] = ((/* implicit */signed char) ((long long int) var_3));
                        /* LoopSeq 1 */
                        for (int i_18 = 2; i_18 < 20; i_18 += 1) 
                        {
                            arr_61 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2890360092455858092ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_9])))));
                            arr_62 [i_9] [i_9] [14LL] [i_9] [11LL] [i_9] [i_9] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -8LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2147483642)))));
                            var_27 = ((/* implicit */unsigned short) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            arr_63 [i_18] [i_9] [i_17] [5U] [i_13] [i_9] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) 18446744073709551615ULL)))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((short) 268431360)))));
                        }
                        arr_64 [i_9] = (i_9 % 2 == zero) ? (((/* implicit */signed char) (((~(((/* implicit */int) var_7)))) << (((((/* implicit */int) arr_33 [i_9] [(short)15] [i_17])) - (6940)))))) : (((/* implicit */signed char) (((~(((/* implicit */int) var_7)))) << (((((((/* implicit */int) arr_33 [i_9] [(short)15] [i_17])) - (6940))) - (15457))))));
                        arr_65 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) 1803018336U);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) ((short) (unsigned short)55106));
        var_30 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_59 [i_19] [i_19] [i_19] [i_19] [i_19] [(short)19]), (((/* implicit */unsigned int) var_6))))) == (((((/* implicit */unsigned long long int) arr_59 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) - (((((/* implicit */unsigned long long int) -11)) | (14226412788613781836ULL)))))));
        var_31 = var_8;
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (15556383981253693521ULL) : (3ULL)));
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_1))));
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                        {
                            {
                                var_34 -= ((/* implicit */signed char) arr_71 [i_19] [2] [i_19] [i_23 + 1]);
                                var_35 *= ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [10] [(signed char)14] [(short)12])) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) ? (((/* implicit */unsigned long long int) ((31LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_19])))))) : (((((/* implicit */_Bool) arr_76 [i_23 + 1] [i_23 + 1] [i_23] [i_23 + 1] [i_23])) ? (min((12941045783447867206ULL), (((/* implicit */unsigned long long int) -510704176)))) : (((/* implicit */unsigned long long int) var_10))))));
                                var_36 = ((int) ((var_3) ? (((/* implicit */int) arr_70 [11] [i_20])) : (((/* implicit */int) arr_70 [i_19] [i_20]))));
                                arr_80 [i_19] [i_19] [(short)20] [(unsigned short)9] [5U] [i_20] [i_19] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-1509435575341398676LL)))) * (((0ULL) * (((/* implicit */unsigned long long int) var_9))))));
                                arr_81 [i_19] [i_19] [(short)18] [i_19] [i_19] [i_20] = ((/* implicit */unsigned short) (~(-1996427907)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
    {
        for (signed char i_25 = 2; i_25 < 15; i_25 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_26 = 0; i_26 < 17; i_26 += 1) 
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((((/* implicit */_Bool) arr_32 [i_25 - 1])) ? (2890360092455858097ULL) : (((/* implicit */unsigned long long int) ((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [(unsigned short)11])) - (41819))))))))));
                    arr_90 [i_24] [(short)5] [i_25] [i_26] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)25005)) / (((/* implicit */int) arr_5 [i_26])))))));
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) 1827066840579552394ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [(short)12]))))))));
                }
                for (signed char i_27 = 2; i_27 < 16; i_27 += 1) /* same iter space */
                {
                    arr_93 [i_24 - 1] [(_Bool)1] [(_Bool)1] [9LL] = ((/* implicit */short) arr_70 [i_24 - 1] [i_24]);
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) min((((((/* implicit */int) arr_71 [i_24] [i_25] [i_25] [i_27 - 2])) + (((/* implicit */int) arr_58 [i_25] [14LL] [i_27 - 1] [20LL] [i_25 - 2])))), (((int) arr_58 [i_24] [i_24] [i_24] [2] [i_24 - 1])))))));
                }
                /* vectorizable */
                for (signed char i_28 = 2; i_28 < 16; i_28 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_29 = 2; i_29 < 15; i_29 += 1) 
                    {
                        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                        {
                            {
                                var_40 = (short)-1;
                                var_41 = ((/* implicit */unsigned short) 294831092);
                                arr_103 [i_29 + 1] [(unsigned short)11] [i_28] [i_28] [i_29] = var_6;
                            }
                        } 
                    } 
                    var_42 += ((/* implicit */_Bool) var_6);
                }
                var_43 *= ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) : (7618844802862727504ULL))), (((/* implicit */unsigned long long int) arr_67 [i_24 - 1]))))));
                /* LoopNest 3 */
                for (unsigned short i_31 = 0; i_31 < 17; i_31 += 1) 
                {
                    for (signed char i_32 = 3; i_32 < 14; i_32 += 1) 
                    {
                        for (unsigned short i_33 = 1; i_33 < 15; i_33 += 1) 
                        {
                            {
                                arr_113 [i_24 - 1] [i_32] [i_31] [16U] [i_33] [i_25 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned short)27876))))) ? (((/* implicit */int) (short)32356)) : (((/* implicit */int) min((((/* implicit */short) var_2)), (var_0))))));
                                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_41 [i_24] [i_31] [i_32] [i_33 + 1])))))) ? ((-(((/* implicit */int) ((9U) != (4U)))))) : (((/* implicit */int) var_0)))))));
                                var_45 *= ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) ((int) var_9))), (3U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
