/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134605
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
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */long long int) var_6)) < (-1LL)));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max(((((((~(((/* implicit */int) var_12)))) + (2147483647))) << (((((((((/* implicit */long long int) ((/* implicit */int) var_11))) | (arr_5 [i_0 - 2] [i_0 - 2] [i_0 + 3]))) + (2140427480115791124LL))) - (10LL))))), (((((/* implicit */int) arr_14 [i_0 - 3] [i_0 + 1] [i_3] [i_4])) + (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_4] [i_4])))))))));
                            var_16 = ((/* implicit */unsigned short) (short)-30876);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0 - 4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)63)) | (((/* implicit */int) var_11))))) | (9223372036854775807LL)));
                            arr_20 [i_5] [i_3] [i_0] [i_0] [i_1] [i_0 - 4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 + 3] [i_0 - 4] [i_0 + 1] [i_0 + 3])) ? ((~(((/* implicit */int) (short)16368)))) : (((/* implicit */int) var_5))));
                            var_17 = ((((/* implicit */_Bool) var_1)) ? (arr_12 [i_0 - 4] [i_0 - 2] [i_0 + 2] [i_0 + 3] [i_0 + 1]) : (arr_12 [i_0 + 1] [i_0 + 2] [i_0 + 3] [i_0 - 2] [i_0 + 2]));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) >> (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)11641)))) - (11634)))));
                            arr_24 [i_0 - 1] [i_0 + 2] [i_0] [i_2] [i_3] [i_6 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) 15036669252651231636ULL)) || (((/* implicit */_Bool) (unsigned short)18507)))), ((!(((/* implicit */_Bool) var_8))))));
                            var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((min((((/* implicit */int) (_Bool)1)), (-1016283910))), (((/* implicit */int) arr_21 [i_0 - 3] [i_0 - 3] [i_1] [i_1] [i_2] [i_3] [i_6 + 1]))))), (var_7)));
                            arr_25 [i_0] [i_6 + 1] [i_3] [i_2] [i_1] [i_0 + 3] [i_0] = ((/* implicit */unsigned short) ((((((arr_5 [i_6 + 3] [i_2] [i_0 - 4]) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_23 [i_0 - 1])) % (((/* implicit */int) (unsigned short)65535)))) + (26364))) - (16)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            arr_29 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) 1016283910);
                            var_20 = ((/* implicit */short) ((((/* implicit */int) (short)-11649)) != (((/* implicit */int) arr_28 [i_0 + 2] [i_0] [i_0 - 4] [i_0 + 3] [i_2] [i_2]))));
                        }
                        arr_30 [i_0 - 1] [i_1] [i_0] = min((((/* implicit */long long int) arr_13 [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_0 - 3] [i_0])), (((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1])) ? (min((var_0), (((/* implicit */long long int) -1016283910)))) : (max((-9223372036854775807LL), (((/* implicit */long long int) (signed char)50)))))));
                    }
                } 
            } 
            arr_31 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_0 + 2] [i_0 + 1] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)40715)) ? (212582488U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46097))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
            var_21 ^= var_8;
            arr_32 [i_0 - 3] [i_0] = ((/* implicit */int) (-(var_7)));
        }
        var_22 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [(short)14] [i_0 - 4] [i_0 - 3] [i_0 + 1] [(short)14]))));
        /* LoopSeq 3 */
        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((/* implicit */int) var_4)), (arr_2 [(unsigned short)6] [i_8 + 1] [i_8 - 2]))))));
            arr_36 [i_0] [i_0] = ((/* implicit */signed char) (short)11646);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                arr_40 [i_0] [i_0] = ((/* implicit */_Bool) var_12);
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)9277))));
                            var_25 = ((/* implicit */unsigned char) (short)11632);
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11641))) : (var_6)))) ? (arr_11 [i_11] [i_9] [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_27 -= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) (short)32767);
            }
            arr_45 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) / (((/* implicit */int) max((((/* implicit */signed char) arr_13 [i_0] [i_8 - 1] [i_8 + 1] [i_0 + 3] [i_0])), (arr_14 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_8 + 1]))))))), (max((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)127)), ((short)32767)))), (arr_27 [i_8 - 1] [i_8 - 2] [i_0] [i_8 - 1] [i_8 - 1])))));
        }
        for (short i_12 = 1; i_12 < 16; i_12 += 4) 
        {
            var_29 = ((/* implicit */short) (!(max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) < (18446744073709551615ULL)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                arr_51 [i_0 - 3] [i_12 + 1] [i_12 + 2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-11660)), (arr_16 [i_0 - 4] [i_0 - 1] [i_0 + 2] [i_0 - 3] [i_12 + 2] [i_12 - 1] [i_13])))) && (((((/* implicit */_Bool) 4294967295U)) && ((_Bool)1)))))), ((short)3968)));
                var_30 = ((/* implicit */unsigned short) arr_18 [i_0 + 3] [i_0 - 3] [i_12 - 1] [i_0]);
                var_31 = ((/* implicit */int) arr_33 [i_0] [i_0]);
                var_32 -= ((/* implicit */unsigned char) (~(min(((-(arr_38 [i_0 - 4] [i_12 - 1] [i_13]))), (((/* implicit */unsigned long long int) arr_21 [i_13] [i_12 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0 + 1]))))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) ((max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)-9457)))) * (((/* implicit */int) arr_39 [i_0] [i_12 + 2]))));
                var_34 = ((/* implicit */signed char) (unsigned char)179);
                var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_42 [i_0] [i_12 + 1] [i_14])) + (var_6)));
                var_36 = ((/* implicit */unsigned short) arr_9 [i_0 + 2] [i_14]);
                arr_55 [i_0] [i_12 + 1] = ((/* implicit */signed char) -1016283910);
            }
            arr_56 [i_0 + 2] [i_0] [i_12 - 1] = ((/* implicit */unsigned short) -1016283896);
            arr_57 [i_0 - 4] [i_0] [i_12 + 2] = ((/* implicit */long long int) max(((~(4095U))), (((/* implicit */unsigned int) (_Bool)1))));
        }
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    {
                        arr_65 [i_0 - 3] [i_15] [(signed char)2] [i_16] [i_16] [i_17] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) <= (max((((/* implicit */unsigned int) arr_23 [i_0 + 2])), (4262759740U)))));
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) min(((-((-(((/* implicit */int) (short)11666)))))), (((((/* implicit */_Bool) arr_27 [i_0 + 2] [i_0 - 2] [16ULL] [i_0 + 3] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)41868)) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-120)))))))))));
                        /* LoopSeq 1 */
                        for (short i_18 = 1; i_18 < 15; i_18 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-97)), ((short)(-32767 - 1))));
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) arr_39 [(unsigned short)4] [(unsigned short)4]))));
                        }
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned short) min((min((arr_18 [i_0 + 2] [i_0 - 2] [i_0 + 3] [i_0]), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) max((65535), (((/* implicit */int) (short)15250)))))));
        }
        arr_68 [i_0] = ((/* implicit */int) var_10);
        arr_69 [i_0 + 2] [i_0] = ((/* implicit */signed char) min((min((arr_46 [i_0 + 1]), (((/* implicit */unsigned long long int) var_2)))), (arr_46 [i_0 + 2])));
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_41 = ((/* implicit */unsigned int) var_10);
        /* LoopSeq 1 */
        for (short i_20 = 1; i_20 < 19; i_20 += 4) 
        {
            arr_75 [i_19] [i_19] = ((/* implicit */signed char) (short)32757);
            var_42 *= ((/* implicit */_Bool) var_1);
        }
        arr_76 [i_19] [i_19] = ((/* implicit */unsigned short) (~(2481316638U)));
        /* LoopSeq 1 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_79 [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)11649))));
            arr_80 [i_19] = ((/* implicit */unsigned long long int) (short)-11660);
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                arr_83 [i_19] [i_21] [i_19] = ((/* implicit */unsigned int) -1016283910);
                var_43 += ((/* implicit */signed char) arr_73 [i_22]);
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (4294967295U))))))))));
            }
            var_45 = ((/* implicit */short) arr_77 [i_19]);
        }
        arr_84 [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-65535)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))));
    }
    for (long long int i_23 = 2; i_23 < 19; i_23 += 2) 
    {
        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_11)), (var_6))), (((/* implicit */unsigned int) var_10)))))));
        arr_87 [i_23 + 1] = ((/* implicit */unsigned short) 1459723184U);
        /* LoopSeq 2 */
        for (short i_24 = 0; i_24 < 21; i_24 += 2) 
        {
            var_47 *= ((/* implicit */unsigned char) arr_86 [i_23 + 1] [i_24]);
            arr_90 [i_23 + 2] [i_24] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35471))));
        }
        for (unsigned short i_25 = 4; i_25 < 18; i_25 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_27 = 0; i_27 < 21; i_27 += 4) 
                {
                    var_48 = (!(((/* implicit */_Bool) -1842789108)));
                    arr_97 [i_27] [i_26 + 1] [i_25 + 2] [i_23 - 1] = ((/* implicit */signed char) var_7);
                    var_49 = ((/* implicit */int) 1813650658U);
                }
                var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) arr_89 [i_23 - 1] [i_23 + 1] [i_23 + 1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 1) 
                {
                    arr_101 [i_23] [i_23] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (1459723179U)));
                    var_51 = ((/* implicit */short) min((var_51), ((short)32752)));
                    var_52 = ((/* implicit */unsigned int) -825685267495583640LL);
                    var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) 2113674284843503320ULL))));
                }
                var_54 = ((/* implicit */_Bool) max((var_54), ((!(((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)0)))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_29 = 0; i_29 < 21; i_29 += 1) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    {
                        var_55 = ((/* implicit */unsigned int) (((-(-1842789108))) | ((-(max((((/* implicit */int) (unsigned short)1)), (1596504915)))))));
                        var_56 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_8)), (arr_92 [i_29] [i_25 + 2] [i_23 + 1]))), (-9103225047709438301LL)))) ? (((/* implicit */long long int) 1842789131)) : (((arr_104 [i_29] [i_23 + 2] [i_23 - 2]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (short)-11649)), (var_3))), (((/* implicit */unsigned long long int) arr_104 [i_30] [i_25 - 1] [i_23 - 2])))))));
                        var_58 &= ((/* implicit */int) arr_89 [i_30] [i_29] [i_23 + 2]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_31 = 0; i_31 < 21; i_31 += 4) 
            {
                for (unsigned short i_32 = 2; i_32 < 20; i_32 += 2) 
                {
                    for (short i_33 = 0; i_33 < 21; i_33 += 1) 
                    {
                        {
                            var_59 += ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                            var_60 = ((/* implicit */unsigned short) 1319451225U);
                            var_61 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) arr_104 [i_23 + 1] [i_23 - 1] [i_23 + 1])), (min((((/* implicit */unsigned long long int) 378334792U)), (13390730566479936944ULL)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_34 = 0; i_34 < 21; i_34 += 1) 
            {
                for (signed char i_35 = 0; i_35 < 21; i_35 += 2) 
                {
                    {
                        arr_120 [i_23 - 1] [i_23 + 2] [i_25 - 4] [i_34] [i_34] [i_34] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_99 [i_25 - 2] [i_25 + 3] [i_25 + 2] [i_25 + 2])) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) (_Bool)1))))));
                        var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) (unsigned short)20339))));
                        var_63 = ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_13)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_36 = 0; i_36 < 21; i_36 += 1) 
            {
                arr_123 [i_23 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_113 [i_25 - 4] [i_25 + 1] [i_25 - 2] [i_25 - 2] [i_25 - 2])) ? (((((/* implicit */_Bool) arr_113 [i_23 + 1] [i_23 - 2] [i_25 + 1] [i_25 + 1] [i_36])) ? (((/* implicit */int) var_4)) : (1842789108))) : (((/* implicit */int) arr_122 [i_23 - 1] [i_23 - 1] [i_23 + 1] [i_23 - 2]))));
                var_64 -= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_98 [i_23 - 2] [i_23 - 1] [i_25 - 2] [i_25 - 2] [i_23] [i_36])) ? (-9103225047709438301LL) : (-1770958330376454366LL))));
            }
            for (signed char i_37 = 2; i_37 < 20; i_37 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_38 = 0; i_38 < 21; i_38 += 1) 
                {
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                    {
                        {
                            var_65 += ((/* implicit */signed char) var_12);
                            var_66 = ((/* implicit */signed char) max((var_66), (((/* implicit */signed char) ((max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) arr_124 [i_37 + 1] [i_25 - 3] [i_23 - 2] [i_23 - 2])))) + (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), (arr_98 [i_23 + 2] [i_23 + 2] [i_25 - 1] [i_37 - 2] [i_23] [i_37 - 2]))))))));
                            var_67 -= ((/* implicit */_Bool) max(((-(arr_114 [i_37 - 1] [i_37] [i_37 - 1]))), (max((((/* implicit */unsigned long long int) var_5)), (arr_114 [i_37 - 2] [i_25] [i_37 - 1])))));
                            var_68 -= ((/* implicit */unsigned short) ((max((arr_103 [i_23 - 2] [i_25 - 2] [i_37] [i_38]), (((/* implicit */int) (!(((/* implicit */_Bool) 7232843182850250422ULL))))))) & (min((((/* implicit */int) (short)32767)), (((((/* implicit */int) arr_122 [i_38] [i_37 - 2] [i_25 - 3] [i_23 - 2])) + (((/* implicit */int) arr_110 [i_39] [i_23 + 2]))))))));
                        }
                    } 
                } 
                var_69 += ((/* implicit */unsigned int) min((arr_124 [i_37 - 1] [i_25 - 1] [i_23 + 2] [i_23 + 2]), (arr_88 [i_25 + 1])));
            }
        }
    }
    var_70 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) 1842789108)) ? (11213900890859301194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_11))))))))));
}
