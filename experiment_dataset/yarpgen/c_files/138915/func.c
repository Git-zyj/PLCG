/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138915
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
    var_11 = ((var_1) != (((/* implicit */unsigned int) ((-1) / (((/* implicit */int) (short)-1))))));
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -121298426550456827LL)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) var_0))))) : ((~(var_3)))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-14254))));
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55733)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14245))) : (arr_10 [i_0] [i_2] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14253)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6))) : (var_5)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned char) arr_10 [i_3 + 2] [i_3 - 3] [i_3 - 3])))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)103))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */long long int) 3117951073U)) / (var_6)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_20 [i_0] [i_2] [i_0] [i_4] [i_0] [i_4] [7] = ((/* implicit */unsigned long long int) (unsigned short)38553);
                        arr_21 [i_2] = arr_15 [i_0] [i_0] [i_0] [i_4] [i_0];
                    }
                }
                arr_22 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (((_Bool)1) || (arr_18 [i_0] [i_0] [i_3])));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) (short)-3);
                    var_19 = ((/* implicit */unsigned int) 9007061815787520ULL);
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 20; i_8 += 4) 
                    {
                        arr_28 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */int) var_9);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_7] [i_8 + 1]))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_0])) || (arr_1 [i_3]))))));
                    }
                    arr_29 [i_0] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_17 [i_2] [i_2] [(short)0]))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_3)) <= (4220280979058783264LL)))) : (4)));
                }
                for (signed char i_9 = 3; i_9 < 19; i_9 += 1) 
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) (short)14269))) - (((arr_1 [i_0]) ? (9232139268970637084ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                    var_22 = var_3;
                    var_23 ^= ((/* implicit */unsigned int) (_Bool)1);
                }
                arr_34 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [16] [i_2] [i_2] [i_0])) && (((/* implicit */_Bool) ((long long int) arr_10 [i_0] [i_2] [i_3])))));
                /* LoopSeq 3 */
                for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)14251)) * (((/* implicit */int) (short)-12))))) ? (((/* implicit */int) (unsigned short)52481)) : (((/* implicit */int) (short)5))));
                    var_25 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_3] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23092))) : (12930358849125315273ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_33 [i_3] [i_3] [i_2] [i_0])))))));
                    arr_39 [i_3 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((-1520740296) + (2147483647))) << ((((((((-2147483647 - 1)) - (-2147483622))) + (53))) - (26))))))));
                    var_26 = ((/* implicit */signed char) (!(arr_31 [i_3 + 1] [i_3 - 2] [(unsigned short)0] [i_3 + 1])));
                }
                for (unsigned char i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    var_27 -= ((/* implicit */long long int) ((_Bool) (~(-3350438311921486495LL))));
                    arr_42 [i_0] [i_2] [i_3] [i_0] [i_11 - 1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_5 [i_0] [13ULL] [i_11 - 1]))))));
                }
                for (short i_12 = 1; i_12 < 20; i_12 += 1) 
                {
                    arr_47 [i_12] [i_12] [i_3 - 1] [10LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [20LL] [12] [i_3] [i_12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (unsigned short)53487)) ? (arr_15 [i_12] [i_3 + 1] [i_2] [(unsigned char)6] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    arr_48 [4U] [i_12 - 1] [i_12] [i_12] = ((/* implicit */int) arr_26 [i_3 - 2] [i_3 - 2] [i_12]);
                }
            }
            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_0] [i_2] [i_0])) / (((((/* implicit */_Bool) var_6)) ? (2147483622) : (((/* implicit */int) var_2))))));
            /* LoopSeq 2 */
            for (int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                arr_52 [i_13] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_16 [i_0] [i_0] [i_0] [i_2] [i_13]));
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9232139268970637093ULL)) ? (arr_40 [i_0] [i_2] [i_13] [i_13]) : (arr_40 [i_0] [i_14] [i_13] [i_2])));
                    var_30 &= ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_5 [i_13] [i_2] [i_13]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        arr_61 [i_16] [i_16] = ((arr_25 [i_0]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (short)-11111))))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_16] [i_2] [i_16])) > (((/* implicit */int) (unsigned short)25113))));
                    }
                    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1645730509)) ? (((/* implicit */int) arr_54 [i_2] [i_2] [i_13] [i_2] [i_13] [i_2])) : (((/* implicit */int) var_2)))))));
                }
                /* LoopSeq 2 */
                for (long long int i_17 = 4; i_17 < 20; i_17 += 2) 
                {
                    arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)21))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))) % (18446744073709551585ULL)))));
                    var_34 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_50 [i_13] [i_13] [i_13] [i_13])))));
                }
                for (long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    arr_70 [5LL] [5LL] [(unsigned short)2] [5LL] = ((9214604804738914508ULL) >> (((arr_58 [i_0] [i_2] [i_13] [i_13] [(unsigned short)18]) - (1308349610))));
                    var_35 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_26 [i_0] [i_2] [i_18])) : (((/* implicit */int) arr_26 [i_0] [i_2] [i_0]))));
                    var_36 = ((/* implicit */signed char) ((unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0]));
                    arr_71 [i_13] [i_13] [i_2] [i_0] = ((/* implicit */unsigned long long int) (short)14273);
                }
            }
            for (signed char i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                arr_74 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)17))));
                arr_75 [i_0] [i_0] [16LL] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9214604804738914544ULL) == (((/* implicit */unsigned long long int) 23)))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1277))) : (var_9)))));
                arr_76 [i_0] [i_0] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : ((+(((/* implicit */int) arr_63 [i_0] [i_2] [(unsigned short)16] [(_Bool)1]))))));
                var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775786LL)) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_67 [i_2] [(unsigned short)20] [i_2] [i_0]))))));
                /* LoopSeq 3 */
                for (unsigned short i_20 = 1; i_20 < 18; i_20 += 1) 
                {
                    arr_79 [(unsigned char)12] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) -9223372036854775782LL)))));
                    var_38 = ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_19] [i_19] [i_0] [i_2] [i_0] [i_19]))))));
                    var_39 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)234))))));
                }
                for (long long int i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    var_40 = ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 3 */
                    for (long long int i_22 = 0; i_22 < 21; i_22 += 2) 
                    {
                        arr_86 [i_21] [i_2] [(unsigned char)12] [i_19] [i_21] [(unsigned char)2] [i_22] = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))));
                        var_41 = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                        arr_87 [i_21] = ((/* implicit */unsigned short) ((arr_60 [i_21] [i_2] [i_19] [i_21] [i_22] [i_22]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_82 [i_0] [i_2] [i_19])) != (((/* implicit */int) (_Bool)1))))))));
                        var_42 = ((/* implicit */_Bool) ((int) 3276067716469351757ULL));
                    }
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        arr_91 [i_0] [(_Bool)1] [(unsigned short)5] [(_Bool)1] [i_21] = ((/* implicit */long long int) 1073741568U);
                        arr_92 [i_23] [i_21] [i_21] [i_21] [i_2] [i_0] = (((!(((/* implicit */_Bool) 5465922615335384880LL)))) ? (((/* implicit */unsigned long long int) (~(14)))) : (((((/* implicit */_Bool) arr_13 [0U] [i_2] [0U] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_23]))) : (arr_88 [i_21] [i_2]))));
                    }
                    for (int i_24 = 0; i_24 < 21; i_24 += 1) 
                    {
                        arr_95 [i_21] [i_2] [i_2] = ((/* implicit */int) arr_90 [i_21]);
                        var_43 = ((/* implicit */unsigned short) 1);
                        var_44 -= ((/* implicit */long long int) (~(arr_55 [i_0] [i_0] [i_0] [i_0])));
                        arr_96 [i_0] &= ((/* implicit */long long int) arr_13 [(_Bool)1] [i_2] [i_19] [i_21]);
                        arr_97 [i_0] [i_2] [i_19] [i_21] [i_24] |= ((/* implicit */long long int) ((signed char) ((unsigned short) 23)));
                    }
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    arr_102 [i_0] [i_0] [i_25] [i_0] [i_25] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_0] [i_19] [i_0] [i_0])) ? (((/* implicit */int) arr_69 [i_0] [i_2] [i_19] [i_25])) : (((/* implicit */int) arr_27 [i_0] [i_2] [i_19] [i_25]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned char)22))))) : (((((/* implicit */_Bool) 18365029729645081502ULL)) ? (((/* implicit */int) (unsigned char)18)) : (131064)))));
                    var_45 = ((/* implicit */unsigned char) arr_33 [i_0] [i_0] [i_19] [i_25]);
                    arr_103 [i_25] [i_25] [i_19] [i_25] = ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                }
            }
            var_46 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 70670827))));
        }
        for (unsigned long long int i_26 = 2; i_26 < 17; i_26 += 2) 
        {
            var_47 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64349)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_24 [i_0] [i_26 + 2] [i_26] [(_Bool)1]))));
            var_48 = ((/* implicit */unsigned short) (short)-11121);
            /* LoopNest 3 */
            for (unsigned long long int i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                for (unsigned int i_28 = 1; i_28 < 20; i_28 += 3) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 21; i_29 += 1) 
                    {
                        {
                            arr_114 [i_0] [i_26] [i_26] [i_28] [i_29] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-14) : (((/* implicit */int) (unsigned short)64364))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_0] [i_0] [15ULL]))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_26 + 3] [i_26 + 3] [i_26 + 2] [i_26 - 1] [i_26 + 4])))));
                            arr_115 [i_0] [(_Bool)1] [i_26 + 1] [(unsigned char)14] [i_26 + 1] [(_Bool)1] [i_26 + 1] = ((/* implicit */unsigned long long int) arr_113 [i_0]);
                            arr_116 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            } 
        }
        arr_117 [i_0] [i_0] = ((/* implicit */int) var_2);
    }
    for (unsigned int i_30 = 1; i_30 < 13; i_30 += 3) 
    {
        arr_121 [i_30] [i_30] = ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 14))))), ((short)31032)));
        arr_122 [6U] [6U] |= ((/* implicit */int) (((((+(((/* implicit */int) (_Bool)1)))) >= (8388606))) || (((/* implicit */_Bool) ((((unsigned long long int) arr_7 [i_30 + 3] [i_30 + 3] [i_30] [i_30 + 1])) / (((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */int) var_8))))))))));
    }
    for (long long int i_31 = 0; i_31 < 22; i_31 += 3) 
    {
        var_49 = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)11120)) >= (((/* implicit */int) (unsigned short)51041))))), (((((/* implicit */unsigned int) -22)) + (1573679946U))))));
        arr_125 [i_31] = ((/* implicit */unsigned int) (unsigned char)228);
        var_50 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) 3962741230642614507LL))))))), (43)));
    }
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0) + (((((/* implicit */_Bool) -1894436996)) ? (((/* implicit */int) var_8)) : (503316480)))))) ? (max((var_6), (((/* implicit */long long int) (!((_Bool)1)))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
}
