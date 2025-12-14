/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155653
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
    var_16 = ((/* implicit */signed char) max((min((1805107449U), (1176641096U))), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (arr_0 [i_0])));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_16 [i_3] [i_3] [18ULL] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3] [i_2] [i_1]))) : (1805107470U)));
                            var_18 *= ((/* implicit */signed char) ((arr_5 [i_0]) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_5 [i_1]))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) >> (((arr_8 [i_0] [i_1] [i_1]) - (879900735U)))))) ? (((/* implicit */int) (unsigned short)19087)) : (((/* implicit */int) (unsigned short)44647))));
                arr_17 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)56535))))) : ((~(2756557131U)))));
            }
            arr_18 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_9 [i_0] [i_1] [i_1])) - (13776)))));
            var_21 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)46275));
        }
        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_22 = (unsigned short)51069;
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_6] [i_6] [(unsigned short)12])))))));
                    var_24 *= ((/* implicit */signed char) (-(arr_0 [i_7])));
                    var_25 = ((/* implicit */unsigned int) (+(arr_4 [i_0])));
                }
                for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_26 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22898)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))));
                    var_27 = arr_26 [i_8] [i_6] [21U] [i_0];
                }
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        {
                            arr_34 [i_0] [i_5] [i_6] [(unsigned short)12] [i_10] = ((/* implicit */unsigned short) arr_0 [i_6]);
                            var_28 += ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_9 [i_9] [0ULL] [i_0])))));
                        }
                    } 
                } 
                arr_35 [i_0] [i_0] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_5])) ? (((/* implicit */int) arr_1 [i_5] [i_0])) : (((/* implicit */int) arr_1 [i_5] [i_6]))));
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    arr_39 [i_0] [i_0] [i_6] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_5] [i_5] [i_5]))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_38 [i_6]))));
                    arr_40 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)19480))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_29 *= ((/* implicit */signed char) arr_4 [i_0]);
                    var_30 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) / (arr_10 [i_0] [i_0] [i_0] [i_0])));
                }
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~(((/* implicit */int) var_15)))))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((unsigned int) (~(var_14)))))));
                    }
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
                    {
                        arr_51 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_7)))) || (arr_46 [i_6] [i_13] [i_6] [i_5])));
                        arr_52 [i_15] = ((/* implicit */unsigned short) (+(15422104450540873113ULL)));
                        arr_53 [i_15] [i_15] [i_15] [(unsigned char)16] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) % (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                    {
                        arr_56 [i_0] [i_0] [i_5] [i_13] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_6] [i_13] [i_13])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))));
                        var_33 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_36 [(unsigned char)17] [i_6] [i_13] [i_6] [i_5] [i_0]))));
                    }
                    arr_57 [13U] [i_0] [(_Bool)1] [(unsigned char)3] [i_13] = (!(((/* implicit */_Bool) arr_24 [i_0] [i_5] [i_6] [i_13])));
                    arr_58 [7U] [7U] [i_6] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (+((-(18446744073642442752ULL)))));
                }
            }
            for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_18])))))));
                            var_35 = ((/* implicit */unsigned short) ((((unsigned int) arr_29 [i_19] [i_19] [i_19] [i_19])) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
                            arr_68 [(unsigned short)12] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [(unsigned short)0] = ((((/* implicit */_Bool) (unsigned short)17787)) ? (1036391064U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0]))));
                            var_36 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)147)) ? (arr_25 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_18] [i_5])))));
                        }
                    } 
                } 
                arr_69 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_17] [i_5] [i_5] [i_0])) ? (((/* implicit */int) arr_67 [i_17] [i_5] [i_0] [i_17])) : (((/* implicit */int) arr_67 [i_0] [i_5] [(unsigned short)8] [i_0]))));
            }
            var_37 = ((/* implicit */signed char) ((unsigned long long int) var_9));
            arr_70 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)127))) ? (((/* implicit */unsigned long long int) arr_30 [i_0] [i_5] [i_0] [i_5])) : (1117103813820416ULL)));
        }
        for (signed char i_20 = 0; i_20 < 22; i_20 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) ((unsigned int) (unsigned short)46275));
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_21] [(unsigned short)4] [i_20] [(unsigned short)4])) ? (((/* implicit */int) arr_67 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_67 [i_0] [i_20] [i_0] [i_0]))));
                var_40 += ((/* implicit */signed char) (((~(var_12))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [19U])))));
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_45 [i_21] [i_21] [(_Bool)1] [i_0] [i_20] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_0] [i_0]))))))));
                var_42 = ((/* implicit */unsigned short) 4294967295U);
            }
            for (unsigned short i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                var_43 += ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_38 [i_20])))) < ((+(((/* implicit */int) arr_64 [i_22] [i_22] [i_22] [i_22] [i_22]))))));
                /* LoopNest 2 */
                for (unsigned short i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_83 [20U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [i_22])) ? (arr_62 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525)))));
                            arr_84 [i_0] [i_20] [i_0] [i_0] [i_0] [20U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19857))) : (4294967295U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24721)))));
                            arr_85 [i_24] [i_23] [i_22] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (~(836893140U)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_25 = 0; i_25 < 22; i_25 += 1) 
                {
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_25] [i_0] [i_20] [i_0])) ? (((/* implicit */int) arr_11 [i_22] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_66 [i_0] [i_0] [i_20] [i_0] [(signed char)0] [10U])))))));
                    arr_89 [i_25] [i_25] [i_20] [i_20] [i_25] [i_0] = ((/* implicit */signed char) (_Bool)0);
                    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16822)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53899))) : (var_12)));
                    arr_90 [7U] [7U] [(signed char)11] [i_25] [i_25] [i_25] = var_5;
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 22; i_26 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_25] [i_0] [i_22])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_82 [i_20] [(signed char)5] [i_20] [(unsigned short)17] [i_20] [i_20]))));
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_25] [i_22] [(unsigned short)20] [i_0])) >= (((/* implicit */int) arr_37 [i_26] [i_26] [(_Bool)1] [i_25]))));
                        var_48 = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_0] [i_20] [i_0])) / (((/* implicit */int) var_3))));
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_75 [i_0] [(signed char)19])) : (((/* implicit */int) arr_82 [i_0] [i_0] [i_22] [i_0] [i_25] [i_26]))));
                    }
                }
            }
        }
    }
    for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 2) /* same iter space */
    {
        var_50 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(arr_97 [i_27])))) ? (3967188646U) : ((~(arr_97 [i_27])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_28 = 0; i_28 < 23; i_28 += 3) 
        {
            for (unsigned int i_29 = 0; i_29 < 23; i_29 += 3) 
            {
                for (signed char i_30 = 0; i_30 < 23; i_30 += 3) 
                {
                    {
                        arr_105 [i_27] [i_29] [(_Bool)1] [i_27] [i_27] &= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_98 [i_27] [i_29] [i_29]))))));
                        var_51 = ((/* implicit */unsigned short) max((max((2836482507U), (((/* implicit */unsigned int) ((signed char) (signed char)127))))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)102)), (((((/* implicit */int) arr_99 [(unsigned short)22] [i_29])) << (((((((/* implicit */int) arr_100 [i_30])) + (83))) - (25))))))))));
                        arr_106 [i_27] [18U] [i_27] [18U] [i_28] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_100 [i_30])) : (((/* implicit */int) (signed char)12)))), (((/* implicit */int) max((arr_100 [i_27]), (arr_100 [i_29]))))));
                    }
                } 
            } 
        } 
        arr_107 [i_27] = ((/* implicit */_Bool) arr_100 [i_27]);
    }
    /* vectorizable */
    for (unsigned long long int i_31 = 0; i_31 < 23; i_31 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_32 = 0; i_32 < 23; i_32 += 3) 
        {
            for (unsigned int i_33 = 0; i_33 < 23; i_33 += 1) 
            {
                for (unsigned short i_34 = 0; i_34 < 23; i_34 += 4) 
                {
                    {
                        arr_118 [i_31] [i_31] [i_31] [i_34] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_95 [(unsigned char)6]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)80)) && ((_Bool)1)))) : (((/* implicit */int) arr_104 [i_31] [i_31] [i_32] [i_31] [i_33] [i_34]))));
                        arr_119 [i_31] [i_31] [18ULL] [i_32] [i_33] [(signed char)14] &= ((/* implicit */unsigned char) ((unsigned long long int) arr_116 [i_34] [i_31] [i_31]));
                        var_52 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)224)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_97 [13U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_97 [i_34])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))));
                        var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
        } 
        var_54 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)69))));
    }
    var_55 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 3 */
    for (unsigned long long int i_35 = 0; i_35 < 23; i_35 += 4) /* same iter space */
    {
        var_56 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) max(((unsigned char)245), (arr_95 [i_35])))))), ((((!(((/* implicit */_Bool) arr_104 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35])))) ? (((((/* implicit */_Bool) arr_112 [i_35] [i_35] [i_35])) ? (((/* implicit */int) arr_96 [i_35])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_111 [(unsigned char)9] [i_35]))))))));
        arr_123 [i_35] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)1)), (arr_97 [i_35])));
    }
    /* vectorizable */
    for (unsigned long long int i_36 = 0; i_36 < 23; i_36 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_37 = 0; i_37 < 23; i_37 += 1) 
        {
            for (signed char i_38 = 0; i_38 < 23; i_38 += 1) 
            {
                {
                    arr_133 [i_36] [i_36] [i_36] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1036391072U)) ? (var_14) : (((/* implicit */unsigned long long int) 1064542342U))));
                    arr_134 [i_36] [(signed char)4] [(signed char)5] [(unsigned short)18] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_116 [i_36] [i_36] [i_36]))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_110 [i_36] [i_37] [i_36]))) ^ (133955584U))));
                    var_57 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_116 [i_36] [(signed char)9] [i_36]))));
                }
            } 
        } 
        arr_135 [(signed char)18] = ((/* implicit */unsigned short) arr_112 [i_36] [i_36] [i_36]);
    }
    for (unsigned long long int i_39 = 0; i_39 < 23; i_39 += 4) /* same iter space */
    {
        var_58 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_10)) >> (((var_12) - (13248987615853424778ULL))))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)33960)) : (((/* implicit */int) (unsigned short)56384)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 411297638U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) == (var_7))))) : (((((/* implicit */_Bool) ((17032315748376503839ULL) | (((/* implicit */unsigned long long int) 2341771898U))))) ? (((18446744073709551603ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_117 [i_39]))) & (var_6)))))));
        arr_138 [i_39] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_97 [i_39]) : (arr_97 [i_39]))))));
        arr_139 [i_39] [(signed char)19] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_131 [i_39] [i_39] [i_39])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24388))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_95 [i_39]))) : (3692501282U))))), ((-(((((/* implicit */_Bool) (unsigned short)31576)) ? (133955584U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19848)))))))));
        var_59 += ((/* implicit */signed char) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_112 [i_39] [i_39] [i_39])) ? (((/* implicit */int) (unsigned short)14309)) : (((/* implicit */int) arr_112 [i_39] [i_39] [i_39]))))));
    }
    var_60 = (unsigned short)56511;
}
