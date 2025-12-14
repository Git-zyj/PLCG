/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150973
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
    for (short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1 - 1] [7] = var_5;
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3] [i_2]))));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_3] = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */_Bool) -6)) && (((/* implicit */_Bool) 562270247))))), (max((((/* implicit */short) var_11)), ((short)-10529)))))), (max((((arr_0 [i_1]) ? (arr_2 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)960))))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) (unsigned short)64576)))))))));
                    arr_12 [i_0] [i_1] [(_Bool)1] = ((/* implicit */int) (~(((((((/* implicit */int) (signed char)56)) == (((/* implicit */int) (unsigned short)960)))) ? (((/* implicit */unsigned long long int) (-(var_8)))) : (((unsigned long long int) arr_9 [(short)10] [0ULL] [i_3]))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (-(max(((~(((/* implicit */int) (unsigned char)195)))), (((/* implicit */int) max((var_11), ((unsigned char)65))))))));
                                arr_22 [i_0] [2LL] [2] [(short)8] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [10] [i_1] [i_0]))) > (arr_1 [i_0] [(short)3]))))) ? (max((arr_20 [i_0] [i_6] [i_0]), (((/* implicit */long long int) (unsigned char)30)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0 - 2] [i_1] [i_0])) && (((/* implicit */_Bool) arr_20 [i_0 - 2] [i_4] [i_0]))))))));
                                arr_23 [i_0] [i_1] [i_0] [i_5] [i_6] = min((((((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)2] [0] [i_5])) ? (min((var_1), (((/* implicit */unsigned long long int) 211890468)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0 - 2] [3LL]))))), (((/* implicit */unsigned long long int) arr_19 [i_0])));
                                var_14 += ((((/* implicit */unsigned long long int) max((-19), (((/* implicit */int) var_12))))) + (((arr_17 [i_0 - 2]) / (((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [i_1 - 2] [(_Bool)1])))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((_Bool) ((((/* implicit */unsigned long long int) var_8)) == (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -1867369591))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))) : (max((arr_18 [i_0] [i_0 - 2] [i_0] [i_0 + 1]), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))))))))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */short) ((long long int) ((((((/* implicit */int) (unsigned char)64)) < (((/* implicit */int) (unsigned char)30)))) ? (((/* implicit */int) (unsigned short)960)) : (((/* implicit */int) ((unsigned short) (unsigned short)972))))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)255))))))))))));
                    arr_24 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)24)) > (((/* implicit */int) (short)-29980))))) : (((/* implicit */int) ((_Bool) arr_2 [i_0 + 1] [i_0] [i_0])))));
                    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((int) (signed char)4))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)3)), ((unsigned char)61)))) : (((/* implicit */int) (signed char)97)))), (((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0 - 2]) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_11))))) ? (((-360798215) / (arr_15 [i_0] [i_0 + 2] [i_0] [i_0]))) : (max((arr_3 [i_0] [i_0]), (((/* implicit */int) var_12))))))));
                }
                arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_1 - 1])) == (((/* implicit */int) arr_19 [i_1 - 3]))))) >= (((/* implicit */int) ((_Bool) arr_19 [i_1 - 4])))));
                arr_26 [2] &= arr_16 [(signed char)8] [i_1] [2] [(_Bool)1];
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11))))) ? (arr_17 [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 712269272)), (arr_20 [(signed char)4] [i_1] [(signed char)0])))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1729382256910270464LL)))) ? (((long long int) arr_1 [i_0 + 2] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1 - 4] [i_0 - 1])))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) ((short) (unsigned char)45))), (((((/* implicit */_Bool) 1858589607)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        arr_30 [i_7] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 266338304ULL)) ? (((/* implicit */int) (unsigned short)64596)) : (arr_27 [(_Bool)1]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) ? ((((((_Bool)1) ? (((/* implicit */int) arr_28 [i_7])) : (-954956074))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_28 [i_7])) : (((/* implicit */int) arr_29 [i_7] [i_7])))))) : (((/* implicit */int) ((205173481) <= ((~(((/* implicit */int) arr_29 [21ULL] [21LL])))))))));
        var_21 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_28 [i_7])), (var_0)));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (short)29979))));
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 4; i_8 < 21; i_8 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_35 [i_7] [(signed char)11] [i_9] = ((/* implicit */short) ((int) var_0));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    for (unsigned char i_11 = 3; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_0))));
                            arr_43 [i_11] [i_10] [i_10] [(signed char)19] [i_10] [i_7] = ((/* implicit */long long int) ((int) (unsigned short)65534));
                            arr_44 [i_11] [i_10] [i_10] [i_8] = ((/* implicit */_Bool) ((signed char) arr_31 [i_11 + 1]));
                            arr_45 [i_7] [i_10] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_11))) ? ((-(((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) arr_37 [i_10] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]))));
                        }
                    } 
                } 
            }
            arr_46 [i_7] [i_7] [i_7] = ((/* implicit */int) 1899270446680754123LL);
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)64589)), (((int) 0ULL))))) ? (((/* implicit */unsigned long long int) (+(((arr_33 [i_7] [i_8] [i_8] [(short)20]) & (((/* implicit */int) arr_34 [i_7]))))))) : (((((((/* implicit */_Bool) arr_42 [i_8 - 1] [i_8 + 1] [1ULL] [(signed char)12] [(signed char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) - (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            arr_47 [(signed char)18] = ((/* implicit */long long int) (~(((((/* implicit */int) min(((short)32759), (((/* implicit */short) var_2))))) * (((/* implicit */int) ((signed char) var_4)))))));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_50 [i_12] [16LL] [i_7] = ((/* implicit */long long int) ((int) var_0));
            var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (15728640ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_7] [i_7] [i_7] [i_12] [i_12] [10LL])) ? (((/* implicit */int) arr_29 [16LL] [i_12])) : (((/* implicit */int) arr_41 [0LL] [i_12] [i_12] [i_7] [11LL] [i_12])))))));
            arr_51 [(short)14] [i_12] = ((/* implicit */short) (+(((/* implicit */int) arr_32 [i_7]))));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    {
                        arr_57 [i_7] [i_7] [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */signed char) ((unsigned long long int) var_10));
                        arr_58 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (266338296ULL))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) / (var_0)))));
                        arr_59 [i_14] [i_12] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_7])) ? (14951708231165287772ULL) : (((/* implicit */unsigned long long int) arr_54 [i_7] [i_12] [i_13] [i_14]))));
                        var_26 = ((((/* implicit */_Bool) arr_52 [i_7] [i_12] [(short)19])) ? (arr_52 [i_7] [i_7] [(signed char)0]) : (arr_52 [15] [(short)4] [i_14]));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 8))));
        }
        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (int i_16 = 3; i_16 < 21; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    {
                        arr_68 [i_7] [i_16] [i_16] [i_17] = ((/* implicit */signed char) 7554427406762719428ULL);
                        var_28 = (-(((((/* implicit */_Bool) ((short) (signed char)0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                        var_29 = ((/* implicit */short) ((_Bool) max((((((/* implicit */_Bool) 18446744073443213311ULL)) ? (var_5) : (((/* implicit */int) var_9)))), (((/* implicit */int) (_Bool)1)))));
                        arr_69 [i_7] [i_15] [i_16] [i_16] = ((((/* implicit */int) max((arr_37 [i_16] [i_16] [i_16] [i_16 - 3] [i_16 - 1]), (((/* implicit */signed char) (_Bool)1))))) <= (((int) arr_37 [i_16] [i_16] [i_16 - 1] [i_16 - 3] [i_16 - 1])));
                        var_30 = ((/* implicit */unsigned long long int) 2044);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_19 = 2; i_19 < 21; i_19 += 1) 
                {
                    for (int i_20 = 2; i_20 < 21; i_20 += 4) 
                    {
                        {
                            arr_76 [i_20] [i_19] [4] [i_18] [i_15] [i_7] &= ((/* implicit */unsigned long long int) 1023LL);
                            arr_77 [i_18] = ((/* implicit */short) arr_65 [i_7] [i_7] [i_20] [i_7] [i_7] [6ULL]);
                            arr_78 [i_7] [i_15] [i_15] [i_18] [i_19] [i_20] [i_20] = ((/* implicit */_Bool) var_2);
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_63 [i_7] [i_7] [i_18]))));
                arr_79 [i_18] [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_75 [i_7])), (((((/* implicit */_Bool) arr_39 [i_7] [i_15] [17LL] [(unsigned short)2] [i_18] [i_15] [i_15])) ? (arr_39 [(signed char)17] [i_18] [i_18] [(_Bool)1] [i_7] [i_7] [i_7]) : (var_0)))));
            }
        }
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        arr_82 [(unsigned short)5] [i_21] = (signed char)3;
        /* LoopNest 2 */
        for (signed char i_22 = 3; i_22 < 19; i_22 += 1) 
        {
            for (int i_23 = 0; i_23 < 20; i_23 += 2) 
            {
                {
                    var_32 *= ((/* implicit */short) 2147483647LL);
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        for (int i_25 = 0; i_25 < 20; i_25 += 1) 
                        {
                            {
                                arr_94 [i_22] [i_22] [11LL] [i_22] = (i_22 % 2 == zero) ? (((/* implicit */short) ((int) ((((((/* implicit */int) arr_41 [i_22 - 3] [20] [(_Bool)1] [i_22] [i_22] [17LL])) + (2147483647))) << (((((/* implicit */int) arr_67 [i_22 - 1] [i_22] [i_22] [i_22] [i_22] [i_22 - 2])) - (26973))))))) : (((/* implicit */short) ((int) ((((((/* implicit */int) arr_41 [i_22 - 3] [20] [(_Bool)1] [i_22] [i_22] [17LL])) + (2147483647))) << (((((((((/* implicit */int) arr_67 [i_22 - 1] [i_22] [i_22] [i_22] [i_22] [i_22 - 2])) - (26973))) + (34236))) - (7)))))));
                                arr_95 [i_22] [i_22] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_60 [(unsigned char)4] [i_22 - 2] [i_22 - 3])) && (((/* implicit */_Bool) arr_60 [i_22] [i_22 + 1] [i_22 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_73 [i_22 - 1] [i_22] [i_22 + 1] [i_22 + 1])) ? (((/* implicit */int) arr_73 [i_22 + 1] [(short)12] [i_22 - 1] [i_22 + 1])) : (((/* implicit */int) arr_73 [i_22 + 1] [i_22] [i_22 - 1] [i_22 + 1]))))) : (((arr_63 [16LL] [i_22] [i_22 + 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_22 - 1] [i_22] [i_22 + 1] [i_22 + 1])))))));
                                var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_63 [i_21] [i_22] [i_21]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32752)))))) ? (((/* implicit */int) (_Bool)1)) : (arr_55 [i_21] [i_22 + 1] [(short)16] [i_22 - 1] [i_21]))) / (((/* implicit */int) (unsigned short)32749))));
                                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) (short)15515)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_21] [i_22] [i_23] [(_Bool)1] [4ULL])) && (((/* implicit */_Bool) arr_53 [i_21] [i_22] [i_23] [i_24])))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))));
                                var_35 += ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))));
                            }
                        } 
                    } 
                    arr_96 [i_22] [i_22] [i_23] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_89 [i_21] [i_22] [i_22 - 1]), (arr_89 [i_21] [i_22] [i_22 - 3])))) != (((/* implicit */int) arr_56 [i_21] [i_21] [i_21] [i_21]))));
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 1; i_26 < 18; i_26 += 3) 
                    {
                        for (int i_27 = 1; i_27 < 19; i_27 += 4) 
                        {
                            {
                                var_36 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-2048))))) ? (arr_49 [4]) : (((long long int) var_5)))));
                                var_37 -= ((/* implicit */short) ((int) max((((/* implicit */short) (unsigned char)0)), (arr_67 [i_27] [i_23] [(unsigned short)20] [i_22] [i_23] [i_22]))));
                                arr_102 [i_21] [i_21] [i_22] [16ULL] [i_27] = ((/* implicit */_Bool) arr_92 [(short)9] [(short)9] [i_23] [i_23] [i_23] [i_23] [(unsigned char)3]);
                                arr_103 [i_22] [(signed char)1] [i_23] [(short)0] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_38 [i_27] [i_27] [i_27] [i_27] [i_27 - 1] [i_26 + 1])), (var_1)))) ? (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) (+(arr_52 [i_21] [i_21] [(signed char)10])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                                var_38 = ((var_7) % (((/* implicit */unsigned long long int) ((long long int) arr_67 [i_21] [i_22] [(unsigned short)10] [i_26 + 1] [i_26] [i_27]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) min((((/* implicit */int) arr_88 [i_21] [i_21] [i_21] [i_21])), (var_5)))))));
    }
    var_40 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) == (((/* implicit */int) max(((unsigned short)40239), (((/* implicit */unsigned short) var_11))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_9))))) >= (-1178448601)))) : (((/* implicit */int) ((unsigned char) ((unsigned long long int) var_2))))));
}
