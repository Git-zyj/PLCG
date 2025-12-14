/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106447
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) (~(var_9))))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = max((((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0] [i_0 + 2]) : (arr_0 [i_0] [i_0 + 3]))), (((((/* implicit */_Bool) (signed char)-2)) ? (5) : (((/* implicit */int) (signed char)75)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_19 = max((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0] [i_3])), (var_11))), (((/* implicit */unsigned long long int) -1514167880)));
                            arr_14 [i_0] [i_3] [i_0] = ((/* implicit */signed char) var_5);
                            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12919816983943846846ULL)) ? (((/* implicit */unsigned int) max((((/* implicit */int) min((var_2), ((signed char)7)))), ((+(((/* implicit */int) arr_4 [i_1] [i_4]))))))) : (max(((+(0U))), (var_5)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_21 ^= ((/* implicit */signed char) ((805306368) << (((((((-1514167880) + (2147483647))) << (((((((((/* implicit */int) var_15)) + (2147483647))) >> (((((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_5])) + (42))))) - (33554430))))) - (633315766)))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */int) var_1);
                        var_22 = 3588545089U;
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)54)))))));
                    }
                    for (signed char i_7 = 4; i_7 < 18; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (616217671U))) >> (((arr_19 [i_2] [i_7] [i_2] [i_7] [i_5] [i_2] [i_1]) - (2157455657U))))))));
                        arr_23 [i_7] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_5 [8U]);
                        var_25 = ((/* implicit */signed char) 3451592140080248982ULL);
                    }
                    arr_24 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_5])) ? (((((/* implicit */_Bool) arr_4 [i_0 - 4] [i_0 - 4])) ? (arr_8 [i_0] [i_0] [i_2] [i_5]) : (var_17))) : ((-(arr_8 [i_0 + 3] [i_0 + 3] [i_1] [i_5])))))));
                }
                var_26 = ((/* implicit */signed char) max((var_26), (max((var_2), (var_7)))));
            }
            for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max(((signed char)60), (arr_13 [i_0] [i_0] [i_0 + 1] [i_8] [i_8] [i_8]))))));
                arr_27 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */unsigned long long int) var_4);
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 3) 
            {
                var_28 = ((/* implicit */unsigned int) min((var_28), (var_17)));
                /* LoopSeq 2 */
                for (signed char i_10 = 3; i_10 < 17; i_10 += 4) 
                {
                    arr_32 [i_0] [i_1] [i_1] [i_10 - 1] [i_1] |= var_7;
                    arr_33 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((var_12) << (((((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 2] [i_0])) + (75)))))) : (((/* implicit */unsigned int) ((var_12) << (((((((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 2] [i_0])) + (75))) - (117))))));
                    arr_34 [i_0] [i_9] [i_1] [i_0] = ((/* implicit */signed char) var_1);
                }
                for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    arr_38 [i_0] [i_1] [i_9 - 1] [i_11] [i_0] = arr_18 [i_9 - 1] [i_9] [i_9 - 1] [i_0] [i_9 - 1] [i_0] [i_11];
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_9 - 1] [i_9 + 1] [i_9] [i_9 + 1])) ? (arr_30 [i_0] [i_1] [i_9 + 1] [i_9 + 1] [i_9] [i_9 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11]))))))));
                }
            }
            arr_39 [i_0] = max((var_12), (((/* implicit */unsigned long long int) ((int) 3678749609U))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_12 = 2; i_12 < 18; i_12 += 2) 
            {
                arr_42 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 9922407488824710282ULL)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                arr_43 [i_0 + 1] [i_0 - 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) ? (arr_6 [i_0 + 1]) : (var_11)));
            }
            for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) max((((/* implicit */int) arr_40 [i_0 - 4] [i_0] [i_13 - 1] [i_13 + 3])), (arr_12 [i_13 + 2] [i_13] [i_13] [i_13 - 1] [i_13 - 1])));
                            arr_54 [i_0] [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned int) 1514167858)) : (1073610752U))), (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (var_10)))))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) -1514167880)) : (2163587545U)))), (7562972298774919413ULL))) - (7562972298774919387ULL)))));
                            var_31 = arr_22 [i_0] [i_0] [i_0];
                            var_32 = var_3;
                        }
                    } 
                } 
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_7 [i_0]))));
                arr_55 [i_0] [i_1] [i_1] |= ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) (signed char)-23);
                    arr_59 [i_0] [18ULL] [i_13] [i_16] = ((/* implicit */int) 297715336U);
                }
                for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 4) 
                {
                    var_35 = ((/* implicit */int) (-((-(17592186044415ULL)))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (var_14)));
                    /* LoopSeq 2 */
                    for (signed char i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_63 [i_0 + 3] [i_0 + 2])) && (((/* implicit */_Bool) (signed char)-44)))));
                        arr_65 [i_1] [i_13] [i_0] = (i_0 % 2 == 0) ? (min((((max((((/* implicit */unsigned long long int) 4294967295U)), (21ULL))) >> (((((arr_35 [i_0 - 1] [i_0] [i_13 + 1] [i_18]) << (((/* implicit */int) (signed char)44)))) - (8816904578298544126ULL))))), (((/* implicit */unsigned long long int) var_2)))) : (min((((max((((/* implicit */unsigned long long int) 4294967295U)), (21ULL))) >> (((((((arr_35 [i_0 - 1] [i_0] [i_13 + 1] [i_18]) << (((/* implicit */int) (signed char)44)))) - (8816904578298544126ULL))) - (16187907385606537203ULL))))), (((/* implicit */unsigned long long int) var_2))));
                        arr_66 [i_18] [i_0] [i_0] [i_13] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) 0)), (arr_8 [i_0 - 1] [i_13 + 2] [i_13 + 1] [i_13 + 1]))) >> (((((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_13] [i_17] [i_17] [i_0] [i_18]))))) ? (((((/* implicit */_Bool) arr_60 [i_0] [i_1] [i_13] [i_17] [i_0])) ? (var_12) : (arr_6 [7]))) : (((((/* implicit */_Bool) arr_17 [i_0])) ? (arr_31 [i_0] [i_0 - 3] [i_1] [i_13] [i_17] [i_18]) : (9922407488824710282ULL))))) - (10196539271948160831ULL)))));
                    }
                    for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        arr_69 [i_1] [i_13 + 2] [i_0] = ((/* implicit */int) (+((-(((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                        arr_70 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_31 [i_0] [i_19] [i_13] [i_17] [i_19] [i_19])))) ? (arr_6 [i_13]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8524336584884841307ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))))));
                    }
                }
            }
            arr_71 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_16))))))), (min((arr_6 [i_0 - 2]), (((((/* implicit */_Bool) var_16)) ? (arr_22 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
        }
    }
    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 2) 
    {
        arr_74 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8524336584884841307ULL)) ? (max((((var_14) << (((((/* implicit */int) arr_72 [i_20])) - (98))))), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_20]))))))));
        var_38 = ((/* implicit */signed char) var_0);
    }
    for (signed char i_21 = 0; i_21 < 12; i_21 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_22 = 0; i_22 < 12; i_22 += 1) 
        {
            var_39 = ((/* implicit */int) var_8);
            var_40 = ((/* implicit */unsigned int) arr_2 [i_21]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_23 = 4; i_23 < 11; i_23 += 3) 
            {
                var_41 = ((/* implicit */unsigned int) arr_29 [i_22] [i_22]);
                var_42 = ((/* implicit */signed char) 1073610752U);
            }
        }
        for (int i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            arr_84 [i_24] [i_21] = ((/* implicit */unsigned int) ((var_12) << (((min((min((var_13), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_15)))) - (3644255625ULL)))));
            arr_85 [i_21] [i_24] = arr_6 [i_21];
        }
        /* vectorizable */
        for (unsigned int i_25 = 0; i_25 < 12; i_25 += 3) 
        {
            arr_88 [i_25] [i_25] [i_25] = ((/* implicit */int) var_12);
            var_43 += ((/* implicit */unsigned int) arr_17 [12ULL]);
            var_44 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_53 [i_21] [i_25] [i_21] [i_25] [i_21]))));
            arr_89 [i_25] [i_21] [i_25] = ((/* implicit */signed char) var_17);
        }
        var_45 = ((/* implicit */unsigned int) max((var_45), (max((((/* implicit */unsigned int) (((+(((/* implicit */int) var_2)))) >> (((((/* implicit */int) var_15)) + (128)))))), (min((((/* implicit */unsigned int) (signed char)51)), (max((((/* implicit */unsigned int) (signed char)32)), (var_14)))))))));
        /* LoopSeq 2 */
        for (signed char i_26 = 0; i_26 < 12; i_26 += 3) 
        {
            var_46 = ((/* implicit */signed char) max((var_46), (((signed char) 757270728))));
            var_47 -= ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) min((((var_0) >> (((((/* implicit */int) arr_79 [i_21] [i_26])) + (98))))), ((+(((/* implicit */int) arr_4 [i_26] [i_21]))))))) : (max((2892996832U), (((/* implicit */unsigned int) arr_77 [i_26])))));
            arr_93 [i_26] [i_26] = var_12;
        }
        for (signed char i_27 = 2; i_27 < 11; i_27 += 4) 
        {
            arr_98 [i_21] [i_21] [i_27] = var_3;
            var_48 = arr_44 [i_27];
        }
        /* LoopNest 3 */
        for (int i_28 = 0; i_28 < 12; i_28 += 2) 
        {
            for (signed char i_29 = 1; i_29 < 11; i_29 += 4) 
            {
                for (unsigned int i_30 = 0; i_30 < 12; i_30 += 1) 
                {
                    {
                        arr_108 [i_21] [(signed char)8] [i_21] [i_21] [i_29 + 1] [i_28] = ((/* implicit */int) 281474976677888ULL);
                        arr_109 [i_21] [i_28] [i_28] [i_29 - 1] [i_30] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_28] [i_29 + 1] [i_29 + 1] [i_29])) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_28] [i_30]))))))))), (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) arr_100 [7] [i_28]))))) ? ((+(arr_31 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
                        var_49 = ((max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (141))) - (31)))))), (arr_103 [i_30] [i_28] [0U] [i_29 - 1]))) << (((arr_76 [i_21]) - (17215800539886350304ULL))));
                        arr_110 [i_30] [i_21] [i_28] [i_21] = (+(18446744073709551603ULL));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 4) 
        {
            var_50 = ((/* implicit */unsigned long long int) (signed char)0);
            /* LoopNest 3 */
            for (signed char i_32 = 0; i_32 < 12; i_32 += 4) 
            {
                for (int i_33 = 3; i_33 < 10; i_33 += 1) 
                {
                    for (signed char i_34 = 0; i_34 < 12; i_34 += 3) 
                    {
                        {
                            var_51 -= ((/* implicit */int) arr_40 [i_21] [i_32] [i_21] [i_33]);
                            var_52 = (+(1514167879));
                            var_53 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            } 
            arr_123 [i_21] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) : (arr_103 [i_21] [i_31] [i_31] [i_31])))));
            arr_124 [i_21] [i_21] = ((/* implicit */unsigned int) arr_10 [i_21] [i_21] [i_31] [i_31]);
            arr_125 [8ULL] [8ULL] [8ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_91 [i_31] [i_31])) ? (1514167879) : (2147483637)));
        }
        /* vectorizable */
        for (signed char i_35 = 0; i_35 < 12; i_35 += 4) 
        {
            var_54 = ((/* implicit */int) max((var_54), ((+(arr_0 [i_35] [i_35])))));
            var_55 = ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (var_10)))) ? (var_12) : (((/* implicit */unsigned long long int) arr_12 [i_35] [i_35] [i_35] [i_35] [i_35])));
            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_30 [i_35] [i_35] [i_35] [i_35] [i_21] [i_35])) : (arr_6 [i_21])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (((18446744073709551614ULL) >> (((arr_127 [11U] [i_35]) - (17321733487846996021ULL)))))));
            /* LoopNest 2 */
            for (unsigned int i_36 = 0; i_36 < 12; i_36 += 3) 
            {
                for (unsigned int i_37 = 0; i_37 < 12; i_37 += 4) 
                {
                    {
                        arr_133 [i_21] [i_35] [i_36] [i_21] [i_21] [i_37] = ((/* implicit */signed char) -4);
                        /* LoopSeq 1 */
                        for (signed char i_38 = 2; i_38 < 11; i_38 += 1) 
                        {
                            arr_137 [i_21] [i_21] [i_36] [i_37] [i_21] = 1514167862;
                            var_57 += ((/* implicit */signed char) var_5);
                            arr_138 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) (signed char)-2);
                            var_58 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)7)) >> (((3221356530U) - (3221356504U)))));
                            var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) 1122932416U))));
                        }
                    }
                } 
            } 
            arr_139 [i_21] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) >> (((((-2147483637) - (-2147483636))) + (7)))));
        }
        /* vectorizable */
        for (signed char i_39 = 0; i_39 < 12; i_39 += 1) 
        {
            arr_143 [i_39] [i_39] = ((/* implicit */signed char) arr_126 [i_21] [i_39] [(signed char)7]);
            /* LoopSeq 1 */
            for (signed char i_40 = 0; i_40 < 12; i_40 += 4) 
            {
                arr_146 [i_40] [8U] [i_39] [i_40] = (i_39 % 2 == 0) ? (((((/* implicit */_Bool) ((((((/* implicit */int) arr_10 [i_21] [i_39] [i_39] [i_39])) + (2147483647))) >> (((1514167858) - (1514167840)))))) ? (arr_91 [i_39] [i_39]) : (((/* implicit */unsigned long long int) arr_73 [i_39])))) : (((((/* implicit */_Bool) ((((((((/* implicit */int) arr_10 [i_21] [i_39] [i_39] [i_39])) - (2147483647))) + (2147483647))) >> (((1514167858) - (1514167840)))))) ? (arr_91 [i_39] [i_39]) : (((/* implicit */unsigned long long int) arr_73 [i_39]))));
                var_60 *= ((/* implicit */unsigned int) var_9);
                /* LoopNest 2 */
                for (unsigned int i_41 = 1; i_41 < 11; i_41 += 3) 
                {
                    for (int i_42 = 0; i_42 < 12; i_42 += 1) 
                    {
                        {
                            arr_152 [i_21] [i_39] [i_39] = ((/* implicit */signed char) ((2147483637) << (((17166441044318168892ULL) - (17166441044318168892ULL)))));
                            arr_153 [i_39] [(signed char)8] = arr_134 [i_21] [i_39] [i_40] [i_21] [i_42] [i_41 + 1];
                            var_61 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_132 [i_41 - 1] [i_41] [i_41 + 1] [i_41 - 1] [i_41]))));
                            arr_154 [i_40] |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) >> (((arr_30 [i_21] [i_40] [i_21] [i_21] [i_21] [i_21]) - (376987550U)))));
                        }
                    } 
                } 
            }
        }
    }
    var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) 2147483647))));
}
