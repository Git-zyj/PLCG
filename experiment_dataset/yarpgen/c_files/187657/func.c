/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187657
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    var_21 -= var_12;
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]);
        arr_2 [i_0] = ((/* implicit */int) var_10);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_23 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)14222))) != (-1LL)));
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_24 -= min(((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0] [14] [i_0] [i_4] [i_0])), (var_14)))))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))));
                            var_25 = ((/* implicit */signed char) (-(var_12)));
                            arr_13 [i_0 - 1] [i_4] [(signed char)8] &= ((/* implicit */short) min((((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_2] [i_1]))))), (((/* implicit */unsigned char) ((max((-1002762081), (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [8ULL] [i_2] [i_2] [i_4])))) >= (((/* implicit */int) var_6)))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13326989962845103662ULL)) ? (9205357638345293824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))));
                        }
                    } 
                } 
                arr_14 [i_2] [i_2] [i_2] [i_0 - 1] = ((/* implicit */short) arr_0 [i_0 - 1] [(short)14]);
            }
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((int) var_3))))) >> (((((((/* implicit */_Bool) (short)32763)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))) - (4294967287U)))));
                    var_28 *= ((/* implicit */unsigned long long int) max((((long long int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])), (((/* implicit */long long int) ((unsigned short) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                }
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)8176)) ? (((/* implicit */int) (_Bool)1)) : (52017958)));
                    var_30 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (var_17)))) ? (((/* implicit */int) arr_15 [i_0] [4LL] [i_0 - 1] [(signed char)20])) : (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_10))))))) * (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_5] [i_7] [(unsigned char)22])) : (((/* implicit */int) arr_18 [i_0 - 1] [i_5] [i_0 - 1] [i_7] [i_0 - 1])))));
                }
                arr_23 [i_0] [i_1] [(signed char)12] [(_Bool)1] = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) % (7187662761599238565ULL)));
                arr_24 [i_5] [i_1] [i_0] |= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_5] [(short)6])) / (((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (16480000536112196813ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))))))), (((/* implicit */unsigned long long int) var_18))));
            }
            for (int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) | (((((/* implicit */int) var_9)) - (((/* implicit */int) arr_1 [i_9 + 1] [i_9 - 1]))))));
                    arr_32 [i_0] [i_1] [i_8] [0ULL] [i_9] = ((/* implicit */_Bool) var_17);
                    arr_33 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_8] [i_8] [i_9 + 1] = ((/* implicit */short) var_14);
                    arr_34 [i_0] [i_0] [10] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_3 [i_0 - 1])))) ? (((((/* implicit */_Bool) (unsigned short)50432)) ? (((/* implicit */int) (short)-11191)) : (((/* implicit */int) (signed char)16)))) : (((/* implicit */int) ((arr_3 [i_0 - 1]) > (arr_3 [i_0 - 1]))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) ((var_4) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_4 [i_10]) : (((/* implicit */int) arr_15 [i_10] [i_8] [(unsigned char)12] [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [(short)14]))) : (arr_21 [i_0 - 1] [i_0 - 1]))))));
                    arr_37 [i_8] [i_10] = min((((((/* implicit */_Bool) arr_16 [i_10] [i_8] [i_1])) ? (((((((/* implicit */int) (short)-10109)) + (2147483647))) >> (((((/* implicit */int) (signed char)-2)) + (15))))) : (((/* implicit */int) ((unsigned short) arr_26 [i_0] [i_0] [(_Bool)1] [i_0]))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_10] [i_10] [i_10] [i_0 - 1] [i_0 - 1] [i_0])) && (((/* implicit */_Bool) arr_19 [i_8] [(_Bool)1] [i_8] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) var_2);
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7246))) + (3516616447599993279LL))))));
                    }
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_29 [i_0]))));
                    var_35 *= ((/* implicit */long long int) ((_Bool) arr_42 [i_8]));
                }
                arr_43 [i_0] [i_0] [(unsigned char)5] = ((/* implicit */long long int) ((-2056443991) - (((/* implicit */int) (_Bool)1))));
                arr_44 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_27 [i_0] [i_1] [i_8] [i_0]) ^ (((/* implicit */int) arr_39 [i_0 - 1] [i_8] [i_1] [i_1] [i_0 - 1])))) ^ (((/* implicit */int) arr_28 [i_0] [(unsigned short)22] [i_0]))))) ? (((/* implicit */long long int) max((((((/* implicit */int) var_6)) | (((/* implicit */int) var_10)))), (var_13)))) : (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_13)) : (arr_29 [i_0]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_19)), (arr_18 [i_8] [(signed char)9] [i_8] [i_0] [i_0]))))))));
            }
            for (int i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
            {
                var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_39 [i_0] [i_0] [i_0 - 1] [(signed char)18] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 2; i_15 < 19; i_15 += 3) 
                    {
                        {
                            arr_53 [3] [i_1] [3] [i_15] [i_15] = ((((/* implicit */_Bool) (signed char)1)) ? (-3681135525986952690LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))));
                            arr_54 [(signed char)10] [(signed char)10] [14] [i_13] [(signed char)10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_0 - 1] [(signed char)13] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) * ((((_Bool)1) ? (((/* implicit */int) arr_50 [i_13])) : (((/* implicit */int) (unsigned char)92))))))) && ((!(((/* implicit */_Bool) (unsigned char)199))))));
                            arr_55 [i_0] [i_15] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [(signed char)11] [i_15] [5ULL] [i_14 - 1] [5ULL])) ? (((/* implicit */int) ((unsigned char) (short)31))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36575))))));
                            arr_56 [i_0] [i_1] [i_0 - 1] [i_14] [i_15] [i_13] [i_14 - 1] = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)0)), (-8730432117067846810LL)));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (var_7) : (((/* implicit */unsigned long long int) arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
        }
    }
    for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
    {
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 16; i_17 += 4) 
        {
            for (unsigned short i_18 = 2; i_18 < 17; i_18 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_19 = 0; i_19 < 18; i_19 += 3) 
                    {
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_1))));
                        var_39 += ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_22 [i_18 - 1] [i_18 - 1] [i_18 - 2] [i_18 - 1])))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 2) 
                        {
                            var_40 = ((/* implicit */short) var_11);
                            arr_76 [i_16] [i_16] |= ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */unsigned long long int) var_17)) - (var_16)))));
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) arr_71 [7LL] [i_16] [(_Bool)1] [7LL]))));
                        }
                        for (unsigned char i_21 = 1; i_21 < 16; i_21 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_17), (((/* implicit */int) var_19))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_21] [i_16] [i_16] [i_16]))) : (max((((/* implicit */long long int) -1290380711)), (-7594981006878099912LL))))))));
                            var_43 = ((/* implicit */long long int) min((var_43), (max((((long long int) var_14)), (((/* implicit */long long int) var_11))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_22 = 1; i_22 < 16; i_22 += 3) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483636)) || (((/* implicit */_Bool) arr_40 [i_18 - 2] [i_22]))));
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [(short)19] [i_17 - 2] [i_18 - 1] [i_22])) ? (arr_35 [i_16] [i_17 - 1] [i_18 - 2] [i_22]) : (arr_35 [i_16] [i_17 - 1] [i_18 - 2] [i_22])));
                            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)122)))))));
                        }
                        for (unsigned char i_23 = 1; i_23 < 16; i_23 += 3) /* same iter space */
                        {
                            var_47 -= ((/* implicit */_Bool) arr_27 [i_17 + 2] [i_18 + 1] [i_19] [i_23 - 1]);
                            arr_83 [i_16] [i_17] [i_17] [i_16] [i_23] [i_19] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (9223372036854775807LL)));
                            arr_84 [7] [i_17] [i_17] [i_17] [i_17] [16] = ((((/* implicit */int) ((short) (signed char)89))) != (((/* implicit */int) ((((/* implicit */int) ((signed char) var_0))) >= (((/* implicit */int) arr_50 [i_16]))))));
                        }
                    }
                    for (long long int i_24 = 0; i_24 < 18; i_24 += 3) 
                    {
                        var_48 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (_Bool)1))));
                        arr_88 [i_24] [i_24] [i_18] [(_Bool)1] [i_24] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned char)186))))) % (max((arr_79 [i_16] [i_16] [i_24]), (((/* implicit */long long int) var_15)))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1950488038)) == (5061194788905042127LL)))))));
                        arr_89 [i_16] [i_24] [i_16] [i_18] [i_18 + 1] [i_24] = ((/* implicit */long long int) (-(((/* implicit */int) max((min((arr_47 [i_17 - 2] [i_17] [(unsigned short)19] [i_18] [i_17] [(unsigned char)12]), (arr_64 [i_16] [i_16]))), (((unsigned char) var_19)))))));
                        /* LoopSeq 3 */
                        for (signed char i_25 = 2; i_25 < 17; i_25 += 1) 
                        {
                            arr_93 [i_16] [i_17] [i_18 - 1] [(unsigned short)12] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_62 [i_16] [i_17])))) - (arr_26 [i_16] [i_16] [i_18 - 2] [(signed char)18])))) ? ((~(max((-1978789988), (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) (signed char)16)) / (((/* implicit */int) (short)7012))))));
                            arr_94 [i_16] [i_16] [8LL] [i_16] [i_16] &= ((/* implicit */short) ((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) (_Bool)1)))));
                            arr_95 [i_24] = ((((/* implicit */int) (((+(arr_35 [i_16] [i_16] [i_24] [i_24]))) >= (((/* implicit */int) var_1))))) + (((/* implicit */int) var_19)));
                        }
                        for (int i_26 = 0; i_26 < 18; i_26 += 3) 
                        {
                            arr_99 [i_16] [i_24] [i_16] [i_24] [i_24] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)18884)) : (((/* implicit */int) (signed char)-43))))) ? (arr_52 [i_16] [i_17 - 1] [i_18 - 2]) : (arr_52 [i_16] [i_17 - 2] [i_18 - 1]));
                            var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) max((((1446099155) - (2147483647))), (((((/* implicit */_Bool) arr_73 [i_16] [i_17] [i_16] [i_18 + 1] [i_18 + 1])) ? (arr_73 [i_26] [i_26] [i_18 + 1] [i_18 - 2] [i_26]) : (((/* implicit */int) arr_39 [i_17 - 3] [i_17] [i_17 + 2] [(signed char)1] [i_26])))))))));
                        }
                        /* vectorizable */
                        for (short i_27 = 3; i_27 < 17; i_27 += 3) 
                        {
                            arr_103 [i_16] [i_16] [i_18] [i_24] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) arr_77 [i_17] [i_17] [i_17] [i_17 + 1] [i_17 - 1] [i_18])) ? (((/* implicit */long long int) 1023)) : (-6267413247215604244LL)));
                            var_50 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (arr_3 [i_18 - 2])));
                            var_51 = ((/* implicit */short) ((arr_7 [(_Bool)0] [i_17 - 1] [i_17 - 2] [i_17]) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)39497)) ? (((/* implicit */int) (_Bool)1)) : (var_12))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_28 = 0; i_28 < 18; i_28 += 2) 
                    {
                        var_52 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_51 [(_Bool)1] [(_Bool)1] [i_17 - 1] [i_17 - 2] [i_17 - 1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) % (arr_57 [i_18])))));
                        arr_106 [i_16] [(unsigned short)2] [i_17 - 3] [(unsigned short)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_16] [(short)19] [4] [(signed char)6] [i_18 - 1] [i_28]) : (((/* implicit */int) arr_87 [i_16] [i_28] [(_Bool)0] [i_16])))))));
                    }
                    var_53 = ((/* implicit */long long int) ((((arr_73 [(unsigned short)6] [i_17 - 1] [i_18 + 1] [(unsigned short)6] [i_18 + 1]) == (arr_73 [i_16] [(signed char)15] [i_18 + 1] [i_18 + 1] [i_17]))) ? (var_4) : (((((arr_40 [i_16] [i_16]) > (var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [(unsigned short)16] [(unsigned short)16] [(unsigned short)11] [i_16]))) : (max((14685175507047862445ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    arr_107 [i_16] [i_16] [15ULL] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_16] [i_17 - 2] [i_16] [i_18] [i_18] [i_18 - 1])) ? (((/* implicit */long long int) arr_17 [i_18])) : (arr_105 [i_18] [i_18] [i_18 - 2] [i_18 - 2] [(unsigned short)8] [(unsigned short)9]))) > ((~(arr_58 [i_16])))))) >= (((/* implicit */int) arr_19 [i_16] [i_17 + 2] [i_18 - 2] [i_18] [i_17 + 2] [i_18]))));
                    var_54 |= ((/* implicit */short) var_15);
                }
            } 
        } 
        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_51 [i_16] [i_16] [i_16] [i_16] [i_16]))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)19596)))) : (((/* implicit */int) ((_Bool) (unsigned short)0))))))));
        var_56 = ((/* implicit */int) max((var_56), ((~(((/* implicit */int) ((signed char) ((int) arr_15 [i_16] [i_16] [i_16] [i_16]))))))));
    }
    var_57 = ((/* implicit */unsigned char) min((var_57), (((unsigned char) max((((/* implicit */int) (unsigned char)35)), (((((/* implicit */int) var_15)) + (((/* implicit */int) (_Bool)1)))))))));
}
