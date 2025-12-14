/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156769
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) && (var_3)));
            var_19 = var_6;
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) != (arr_1 [i_1 - 2] [i_1 - 1])));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -4)) ? (((/* implicit */int) (_Bool)1)) : (22))))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_22 = ((/* implicit */_Bool) var_16);
            /* LoopNest 2 */
            for (long long int i_3 = 4; i_3 < 19; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (var_16)))) >= (((/* implicit */int) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 5474029224309588772ULL)) && ((_Bool)1)))) : (((/* implicit */int) arr_10 [i_2 - 1]))));
                        arr_14 [i_2] [i_2] [i_3] [10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)47595)) / (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) var_8))))))) == (var_0)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((arr_0 [i_0]) ^ (((/* implicit */int) ((unsigned char) arr_12 [i_2] [i_2] [i_2] [3LL] [i_2 - 1])))));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((((long long int) 22)) | (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_25 = ((/* implicit */_Bool) (unsigned char)249);
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_8 [0ULL] [i_5] [0ULL] [(short)2]))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1])) * (((/* implicit */int) var_6))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_17)) ^ (arr_6 [i_0] [i_7 - 1])));
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                arr_28 [i_0] [i_6] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) (signed char)-2))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) var_12)))));
                        var_30 = ((/* implicit */int) (short)-21372);
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((_Bool) arr_5 [i_0] [i_0])))));
                        arr_35 [i_6] [i_6] [i_8] [i_8] [i_6] = ((/* implicit */_Bool) (((~(var_13))) % (((/* implicit */int) arr_27 [i_8] [i_6] [i_0]))));
                        arr_36 [i_0] [(unsigned char)18] [i_0] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */int) ((long long int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (short)-21359))))));
                    }
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */signed char) ((arr_1 [i_8] [11LL]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        var_33 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (((unsigned long long int) var_14))));
                    }
                    var_34 = ((/* implicit */_Bool) ((((long long int) var_7)) * (((/* implicit */long long int) arr_30 [i_0] [i_6] [i_0] [i_0]))));
                    arr_41 [i_6] [i_6] [19U] [i_9] = (-(1533440216));
                }
            }
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2608959650U)) | (arr_37 [i_0] [i_6] [i_6] [i_6] [i_6] [i_0] [i_6])));
        }
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_20 [i_0] [i_0]))) - (((/* implicit */int) (_Bool)0))));
        arr_42 [i_0] |= ((/* implicit */long long int) var_15);
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            for (unsigned char i_13 = 4; i_13 < 18; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_52 [i_15] [i_14] [i_12] [i_13] [i_12] [i_12] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) == (((((/* implicit */unsigned long long int) 16)) + (5474029224309588772ULL)))));
                                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0])) <= (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((-489606683) + (489606709)))))) ? (((/* implicit */int) ((7207029599387278790LL) != (4205708349794864978LL)))) : (((int) var_17)))))))));
                                arr_53 [i_14] [(_Bool)1] [i_12] [i_14] [i_15] = ((/* implicit */short) arr_43 [i_0] [i_12]);
                                var_38 = arr_23 [14U] [14U] [14U];
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned short) ((_Bool) min((((((/* implicit */int) var_15)) & (((/* implicit */int) (signed char)-75)))), (((/* implicit */int) var_4)))));
                    var_40 -= ((/* implicit */unsigned int) var_14);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_16 = 2; i_16 < 21; i_16 += 4) 
                    {
                        var_41 = ((((/* implicit */_Bool) ((1673523677) >> (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (1900844917)))));
                        arr_56 [i_13] [i_16] [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_54 [i_16 + 1])) - (((/* implicit */int) var_14))));
                        arr_57 [(unsigned char)15] [i_12] [i_13] [i_16] = ((/* implicit */signed char) var_13);
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
                        {
                            arr_60 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) var_0)))));
                            var_42 = ((((/* implicit */int) (short)0)) != (-1067508724));
                        }
                    }
                }
            } 
        } 
    }
    for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                arr_68 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) max((((unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_19])) ? (((/* implicit */int) arr_25 [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((unsigned short) ((int) (_Bool)0))))));
                arr_69 [i_18] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_15)))) & (arr_0 [i_20]))) >> (((((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_1))))) ^ (((/* implicit */int) arr_54 [i_18])))) - (4029)))));
                arr_70 [i_18] [i_20] = ((/* implicit */unsigned char) (_Bool)1);
            }
            /* vectorizable */
            for (unsigned char i_21 = 0; i_21 < 14; i_21 += 3) 
            {
                arr_73 [i_18] [i_18] [i_18] [i_21] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_18] [i_18] [i_19] [i_19] [i_19] [i_21] [i_19]))) / (var_0))) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                var_43 += ((/* implicit */unsigned short) (signed char)0);
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_22 = 4; i_22 < 10; i_22 += 3) 
            {
                var_44 |= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) % (2091433709))) % (((/* implicit */int) var_1))));
                var_45 = ((/* implicit */long long int) var_3);
                var_46 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * ((-(((/* implicit */int) (signed char)-13))))));
                arr_78 [i_18] [i_18] [(unsigned char)9] [i_22 - 2] = ((/* implicit */unsigned short) (-2147483647 - 1));
                /* LoopSeq 1 */
                for (unsigned int i_23 = 0; i_23 < 14; i_23 += 3) 
                {
                    var_47 = ((/* implicit */unsigned char) ((arr_29 [i_22] [i_22 + 2] [i_18]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 1; i_24 < 11; i_24 += 4) 
                    {
                        arr_85 [i_18] [i_18] [i_18] [i_18] = ((((/* implicit */_Bool) arr_59 [i_24] [i_23] [i_22] [i_19] [i_19] [i_18])) ? (arr_83 [i_24 + 1] [i_24] [i_24]) : (arr_7 [i_24 + 3] [i_24 - 1]));
                        arr_86 [i_24] [i_24] [i_18] [i_22] [i_18] [i_19] [i_18] = ((/* implicit */unsigned short) (-(1466707090)));
                    }
                    for (unsigned int i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        arr_90 [(_Bool)1] [(_Bool)1] [i_19] [i_22] [i_18] [i_25] [i_25] = ((/* implicit */int) ((unsigned short) var_8));
                        var_48 -= ((/* implicit */long long int) ((arr_77 [i_25] [i_23] [i_25] [i_25]) && ((_Bool)0)));
                        var_49 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (_Bool)1))));
                        var_50 = ((/* implicit */long long int) (((-2147483647 - 1)) <= (((/* implicit */int) (unsigned char)0))));
                        arr_91 [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) var_1)))));
                    }
                    arr_92 [i_23] [i_19] [i_22 - 2] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)54941)) != (((/* implicit */int) (unsigned char)239))))) | (((/* implicit */int) var_6))));
                }
            }
            for (signed char i_26 = 0; i_26 < 14; i_26 += 3) 
            {
                var_51 = ((/* implicit */int) var_16);
                var_52 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 5937911219390131509LL)) || (((/* implicit */_Bool) (unsigned short)33746))))) ^ ((((_Bool)1) ? (324119683) : (((/* implicit */int) arr_27 [i_18] [i_19] [i_26]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_27 = 0; i_27 < 14; i_27 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_28 = 0; i_28 < 14; i_28 += 4) 
                    {
                        arr_101 [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_75 [i_18] [i_26] [i_18]))) / (((/* implicit */int) ((signed char) arr_63 [i_18])))));
                        arr_102 [i_28] [i_19] [i_26] [i_27] &= ((((/* implicit */_Bool) arr_12 [i_18] [i_19] [i_26] [(_Bool)1] [i_28])) ? (((/* implicit */int) arr_27 [i_18] [i_26] [i_28])) : (((/* implicit */int) arr_12 [i_18] [i_18] [i_26] [i_27] [i_28])));
                    }
                    var_53 = ((/* implicit */signed char) (_Bool)0);
                }
            }
            for (signed char i_29 = 1; i_29 < 13; i_29 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_30 = 0; i_30 < 14; i_30 += 2) 
                {
                    for (long long int i_31 = 0; i_31 < 14; i_31 += 3) 
                    {
                        {
                            var_54 += ((/* implicit */unsigned int) var_12);
                            var_55 -= ((/* implicit */unsigned char) max((1125899873288192LL), (((/* implicit */long long int) (unsigned char)255))));
                        }
                    } 
                } 
                arr_112 [i_18] [i_19] [i_18] [i_18] = ((/* implicit */int) ((signed char) (_Bool)1));
                var_56 += ((/* implicit */unsigned int) var_4);
                arr_113 [i_18] [i_18] [i_29 + 1] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_54 [i_19])) - (61474)))))))), (((max((((/* implicit */unsigned long long int) var_17)), (var_9))) < (((/* implicit */unsigned long long int) arr_8 [i_18] [i_18] [(_Bool)1] [21LL]))))));
            }
            arr_114 [i_18] [i_18] = ((/* implicit */long long int) var_1);
            var_57 -= ((/* implicit */unsigned long long int) var_4);
        }
        for (unsigned char i_32 = 0; i_32 < 14; i_32 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                {
                    {
                        arr_125 [i_18] [i_18] [i_34] [i_34] [i_32] [i_32] = ((/* implicit */unsigned long long int) arr_16 [i_18] [i_33]);
                        arr_126 [i_18] [i_18] [i_34] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_121 [i_18] [i_18] [i_18] [i_18] [i_32] [i_34 - 1]))))) * (min((((/* implicit */unsigned long long int) -1740305056)), (18381603675223426640ULL)))));
                        var_58 = ((/* implicit */short) ((unsigned short) ((((arr_33 [i_18] [i_32] [i_33] [i_34]) % (((/* implicit */unsigned long long int) arr_89 [i_34] [i_32])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_8))))))));
                    }
                } 
            } 
            arr_127 [i_32] [i_18] = ((/* implicit */unsigned long long int) var_14);
            /* LoopSeq 1 */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                var_59 = ((/* implicit */unsigned long long int) var_5);
                arr_130 [3U] [i_32] [i_18] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_24 [i_18]))))));
                var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) min((arr_80 [0LL] [(unsigned char)8]), (((/* implicit */short) (_Bool)0)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_36 = 4; i_36 < 13; i_36 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_37 = 0; i_37 < 14; i_37 += 3) 
                    {
                        arr_136 [i_18] [i_18] [i_18] [i_18] [i_18] = ((((/* implicit */int) var_11)) == (((/* implicit */int) var_6)));
                        var_61 = ((/* implicit */unsigned long long int) min((var_61), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                    for (int i_38 = 0; i_38 < 14; i_38 += 3) 
                    {
                        var_62 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) <= (arr_138 [(_Bool)1] [i_36 + 1] [i_38] [(_Bool)1] [(_Bool)1] [i_36 + 1] [i_38])));
                        arr_140 [i_18] [(signed char)4] [(unsigned char)8] [i_36] [i_38] |= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_39 = 0; i_39 < 14; i_39 += 4) 
                    {
                        var_63 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) (_Bool)1)))));
                        arr_143 [i_18] [i_32] [i_18] [i_36] [i_39] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_61 [i_18])) ? (((long long int) arr_21 [i_35])) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    }
                    var_64 = ((/* implicit */int) min((var_64), (((/* implicit */int) arr_119 [i_18] [i_18] [i_18]))));
                    var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_88 [i_18] [i_35] [i_32] [i_32] [i_32] [i_18] [i_18]))));
                    arr_144 [i_18] [i_32] [i_32] [i_18] [(unsigned char)10] [i_36 - 2] = ((/* implicit */long long int) (~(var_13)));
                }
                /* LoopNest 2 */
                for (long long int i_40 = 0; i_40 < 14; i_40 += 4) 
                {
                    for (long long int i_41 = 2; i_41 < 12; i_41 += 4) 
                    {
                        {
                            arr_151 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (signed char)-3)) + (((/* implicit */int) (_Bool)1)))));
                            arr_152 [i_18] [i_41 - 1] = ((/* implicit */unsigned int) min((var_9), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (18446744073709551615ULL)))));
                            arr_153 [i_18] [i_32] [i_35] [i_40] [i_40] [i_35] [i_41] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17991))) >= (13937124428568777473ULL)))) == (((((((var_13) | (((/* implicit */int) var_8)))) + (2147483647))) >> (((arr_138 [i_18] [i_32] [i_35] [i_35] [i_40] [i_41] [i_41]) - (8145369486004437268LL)))))));
                        }
                    } 
                } 
            }
        }
        var_66 ^= ((/* implicit */unsigned char) arr_124 [i_18] [i_18]);
        /* LoopNest 2 */
        for (unsigned long long int i_42 = 0; i_42 < 14; i_42 += 4) 
        {
            for (unsigned long long int i_43 = 0; i_43 < 14; i_43 += 3) 
            {
                {
                    var_67 = ((/* implicit */_Bool) arr_110 [i_43] [i_42] [i_42] [i_18] [i_18]);
                    arr_159 [i_18] [i_42] [i_42] [0ULL] = ((/* implicit */unsigned char) arr_134 [i_18] [i_42] [i_43] [(signed char)3] [i_42] [i_18] [i_18]);
                }
            } 
        } 
    }
    for (unsigned long long int i_44 = 0; i_44 < 10; i_44 += 2) 
    {
        var_68 ^= ((((/* implicit */int) ((var_3) && (((/* implicit */_Bool) arr_148 [i_44] [i_44] [i_44] [i_44] [i_44] [i_44] [i_44]))))) + (((/* implicit */int) ((((/* implicit */_Bool) -555116990)) && (var_5)))));
        var_69 = ((/* implicit */int) max((var_69), (((/* implicit */int) var_0))));
    }
    var_70 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 1 */
    for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
    {
        arr_165 [i_45] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)0)) % (((-1038756909) | (2147483644))))) + (((/* implicit */int) max((arr_44 [i_45] [i_45]), (arr_44 [i_45] [i_45]))))));
        var_71 = ((/* implicit */int) min((var_71), ((+((+(((/* implicit */int) var_8))))))));
    }
}
