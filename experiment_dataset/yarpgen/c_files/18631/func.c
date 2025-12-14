/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18631
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (2251490983088979301ULL))) ? ((~(-3396512451676809324LL))) : (((long long int) (short)32761))))) : (var_2)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(5089389264301176812ULL)));
        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3202930388789237018ULL))));
        arr_3 [i_0] = (+(((/* implicit */int) (_Bool)1)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_12 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (824395235)));
            var_13 = ((/* implicit */_Bool) arr_8 [i_1]);
            var_14 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)29))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_15 = ((/* implicit */unsigned char) var_9);
                arr_19 [i_1] [i_3] [i_4] [i_4] = ((long long int) var_7);
                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_3]))));
                arr_20 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_7);
                var_17 = ((/* implicit */signed char) (unsigned short)39484);
            }
            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_18 = ((/* implicit */signed char) ((9249025677008728811ULL) % (((/* implicit */unsigned long long int) arr_25 [i_6] [i_3] [i_5] [i_3] [i_3] [i_1]))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_12 [i_1] [i_6]) : (arr_12 [i_1] [i_3]))))));
                }
                for (int i_7 = 3; i_7 < 8; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 3; i_8 < 6; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) arr_29 [i_8 + 1] [i_3] [i_5] [i_7] [4] [i_7 - 1] [i_3]);
                        arr_32 [(_Bool)1] [i_3] [i_5] [i_3] [i_1] = ((long long int) arr_29 [i_8] [i_8 + 4] [i_3] [i_3] [i_3] [i_1] [i_1]);
                    }
                    for (int i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        var_21 -= ((/* implicit */unsigned short) ((short) ((unsigned char) arr_33 [i_1] [i_1] [i_3] [i_5] [i_1] [i_7 - 3] [i_5])));
                        var_22 = ((/* implicit */int) arr_25 [i_1] [i_3] [i_5] [i_7] [7] [i_9]);
                        arr_36 [i_1] [i_1] [i_3] [i_1] [i_1] [i_3] = ((/* implicit */short) ((unsigned short) (_Bool)1));
                    }
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) var_6);
                        arr_39 [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((long long int) arr_7 [i_1])));
                    }
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */int) ((long long int) var_4));
                        var_25 += ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (_Bool)1))) << (((var_2) - (16554518605824163518ULL)))));
                        var_26 -= (+(((/* implicit */int) (unsigned char)255)));
                    }
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((short) 3202930388789237036ULL)))));
                }
                for (int i_12 = 3; i_12 < 8; i_12 += 2) /* same iter space */
                {
                    arr_46 [i_1] [i_3] [i_3] = ((int) (unsigned short)20373);
                    arr_47 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_12] [i_3] [i_12 + 2] [i_12 + 1])) + (((/* implicit */int) arr_6 [i_12 + 2] [i_12 - 1]))));
                }
                for (int i_13 = 3; i_13 < 8; i_13 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(17179852800ULL)))) ? (((/* implicit */unsigned int) 824395255)) : (4157539242U)));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (1073741824U)));
                    var_30 = ((unsigned int) ((-824395217) != (((/* implicit */int) (_Bool)1))));
                    var_31 = ((/* implicit */int) ((unsigned short) -419525562));
                }
                var_32 -= ((((/* implicit */_Bool) 321712943U)) ? (1406133513U) : (3235968445U));
            }
            var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (unsigned int i_14 = 2; i_14 < 7; i_14 += 2) 
            {
                arr_52 [i_14] [i_3] [i_1] = ((/* implicit */unsigned char) ((arr_50 [i_1] [i_14]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5126249336597685648LL)) || (((/* implicit */_Bool) 0U))))))));
                arr_53 [i_3] = ((/* implicit */short) ((var_8) != (((/* implicit */unsigned long long int) ((long long int) var_7)))));
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    var_34 = ((/* implicit */unsigned long long int) 439542771);
                    var_35 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22177))) < (8384549975688790388LL)));
                }
                arr_58 [i_1] [i_3] [i_3] = ((/* implicit */int) var_9);
            }
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((_Bool) arr_33 [i_3] [i_3] [i_3] [i_3] [i_16] [6LL] [i_3])))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) -7483584086878136440LL))));
                            arr_68 [i_1] [i_3] [i_3] [i_17] [i_18] = ((/* implicit */short) ((int) arr_37 [i_3] [i_17] [i_3]));
                        }
                    } 
                } 
            }
            var_38 ^= ((/* implicit */unsigned char) arr_10 [i_1] [i_1]);
        }
        var_39 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32732)) != (0)));
        arr_69 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) 536870848U)) ? (-2001037705306592569LL) : (((/* implicit */long long int) 536870848U))))));
        var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (arr_12 [i_1] [i_1]) : (arr_12 [i_1] [i_1])));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 1) 
    {
        var_41 = arr_71 [i_19];
        var_42 = min((((/* implicit */unsigned int) (unsigned short)37809)), (2147483647U));
        arr_72 [i_19] = ((/* implicit */int) ((long long int) arr_70 [i_19]));
    }
    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
    {
        var_43 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((max((5089389264301176812ULL), (((/* implicit */unsigned long long int) 1240635980)))) + (((/* implicit */unsigned long long int) -171149476490850655LL))))));
        var_44 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)24916)), (6469993567422092362LL)))));
        arr_76 [12LL] [12LL] |= ((/* implicit */unsigned char) arr_74 [i_20] [13LL]);
    }
    /* vectorizable */
    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) 
    {
        var_45 = ((((/* implicit */unsigned int) arr_77 [i_21] [i_21])) < (2190942650U));
        /* LoopSeq 2 */
        for (unsigned short i_22 = 2; i_22 < 23; i_22 += 1) 
        {
            var_46 = ((/* implicit */int) var_3);
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 24; i_24 += 2) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_87 [i_21] [(unsigned short)4] [i_21] [(unsigned short)4] [i_25] = ((/* implicit */short) var_2);
                            arr_88 [i_23] [i_23] &= ((/* implicit */_Bool) ((int) (~(4294967295U))));
                            arr_89 [i_21] [i_24] [i_23] [i_21] [i_25] [i_23] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)153)) != (((/* implicit */int) (short)32751))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_26 = 0; i_26 < 24; i_26 += 3) 
                {
                    arr_93 [i_21] [i_22] [i_21] [i_21] = ((/* implicit */long long int) arr_83 [i_21] [i_23] [i_21]);
                    arr_94 [i_21] [i_22] [i_21] [i_21] [i_21] = ((/* implicit */long long int) -1);
                }
            }
        }
        for (short i_27 = 0; i_27 < 24; i_27 += 3) 
        {
            var_47 = ((/* implicit */unsigned short) ((int) var_6));
            arr_97 [i_21] [i_27] [i_21] = ((/* implicit */int) ((-1LL) & (((/* implicit */long long int) 9))));
            arr_98 [i_21] [i_21] = 536870850U;
            var_48 = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned char)128)))) ? (((/* implicit */int) ((signed char) arr_81 [13] [i_21] [i_21]))) : (((/* implicit */int) (_Bool)1))));
        }
    }
    for (long long int i_28 = 0; i_28 < 19; i_28 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_29 = 4; i_29 < 18; i_29 += 2) 
        {
            for (long long int i_30 = 0; i_30 < 19; i_30 += 2) 
            {
                {
                    arr_107 [i_28] [i_29] [i_29] = ((/* implicit */long long int) var_8);
                    var_49 = ((/* implicit */unsigned char) var_7);
                    arr_108 [i_28] = ((/* implicit */unsigned long long int) max((3792497485U), (((/* implicit */unsigned int) -284085318))));
                    arr_109 [i_28] [10LL] [10LL] = ((/* implicit */long long int) (!((_Bool)1)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_31 = 0; i_31 < 19; i_31 += 2) 
        {
            arr_112 [i_28] [2ULL] [i_31] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_85 [i_31] [i_31] [i_31] [i_28] [i_28] [i_28] [i_28])) ? (((/* implicit */int) var_6)) : (var_7)))))) != (-515163240821782059LL)));
            /* LoopSeq 2 */
            for (unsigned int i_32 = 0; i_32 < 19; i_32 += 2) 
            {
                var_50 = ((/* implicit */unsigned char) min((((long long int) max((17033042278151580866ULL), (((/* implicit */unsigned long long int) var_1))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min(((short)7428), ((short)-32749)))), (min((((/* implicit */unsigned int) (_Bool)1)), (411018783U))))))));
                arr_116 [i_32] = ((/* implicit */long long int) min((((/* implicit */short) (signed char)90)), ((short)-18627)));
                var_51 = ((/* implicit */long long int) var_5);
                /* LoopSeq 4 */
                for (unsigned char i_33 = 4; i_33 < 15; i_33 += 2) 
                {
                    arr_120 [i_28] [i_31] [i_31] [i_33] = ((/* implicit */unsigned int) (unsigned short)34000);
                    var_52 = ((/* implicit */short) ((((/* implicit */_Bool) ((((-2750356178188090458LL) + (9223372036854775807LL))) >> (((var_7) - (917309951)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_119 [i_28] [i_28] [i_28] [(_Bool)1]))))) : (((((((/* implicit */_Bool) 843386733915976639ULL)) ? (var_7) : (((/* implicit */int) (unsigned char)112)))) / (((/* implicit */int) (signed char)-93))))));
                    var_53 += ((/* implicit */unsigned long long int) (~(var_0)));
                }
                for (unsigned short i_34 = 2; i_34 < 17; i_34 += 1) 
                {
                    arr_123 [i_28] [i_31] [i_34] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_119 [i_34 - 2] [i_34 - 2] [i_34 + 2] [i_34 - 2])), (var_5)));
                    var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_86 [i_28] [i_31] [i_31] [i_28] [i_28]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) ((3758096447U) != (((/* implicit */unsigned int) arr_113 [i_32] [i_28] [i_31] [i_28])))))));
                    arr_124 [i_28] [i_31] [i_32] [i_34] = ((/* implicit */unsigned int) 4737315780173552518LL);
                }
                /* vectorizable */
                for (unsigned int i_35 = 0; i_35 < 19; i_35 += 2) 
                {
                    var_55 = ((/* implicit */signed char) ((var_8) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)157)))))));
                    var_56 = ((signed char) 194468156U);
                    var_57 = ((/* implicit */long long int) (_Bool)1);
                    var_58 = 536870839U;
                }
                for (short i_36 = 2; i_36 < 17; i_36 += 1) 
                {
                    var_59 = ((/* implicit */long long int) ((6559782070869876907ULL) + (((/* implicit */unsigned long long int) 0))));
                    arr_129 [i_36] [i_36] [i_36] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) (unsigned char)127))), (((long long int) 1467850071U))))) ? (((/* implicit */int) (signed char)112)) : (max((((/* implicit */int) var_9)), (arr_122 [i_28] [i_36 + 2] [11U] [i_36])))));
                    var_60 = ((/* implicit */long long int) min((var_60), (((/* implicit */long long int) max((145837259U), (arr_111 [i_32]))))));
                    arr_130 [i_28] [i_36] [i_32] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)93));
                }
            }
            for (unsigned long long int i_37 = 2; i_37 < 18; i_37 += 3) 
            {
                arr_134 [i_31] [i_37] = ((/* implicit */unsigned int) var_8);
                var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) var_5))));
                var_62 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_105 [i_28] [i_28] [i_37 + 1])) != (((/* implicit */int) arr_105 [i_28] [i_37 - 2] [i_37 - 2])))))));
                arr_135 [i_28] [i_31] [i_28] = ((/* implicit */short) ((var_1) > (((long long int) var_5))));
            }
        }
        for (short i_38 = 0; i_38 < 19; i_38 += 1) /* same iter space */
        {
            var_63 = ((/* implicit */int) (!((_Bool)1)));
            var_64 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */unsigned long long int) -4007221094619898632LL)) % (11560560406863654319ULL))) - (2878962572225998665ULL)))))) ? (((/* implicit */int) ((unsigned short) arr_100 [i_38]))) : (((/* implicit */int) ((signed char) (signed char)56)))));
        }
        for (short i_39 = 0; i_39 < 19; i_39 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_40 = 3; i_40 < 18; i_40 += 1) /* same iter space */
            {
                var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) min((17189218041580783775ULL), (arr_121 [i_28] [i_28] [i_28] [i_28] [i_28]))))));
                arr_145 [(short)8] [i_28] [(short)8] [i_40] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_92 [i_28] [i_28] [22U] [i_39] [i_39] [i_28])) ? (min((-2), (arr_77 [i_28] [i_28]))) : (((/* implicit */int) (short)28482)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
            }
            /* vectorizable */
            for (signed char i_41 = 3; i_41 < 18; i_41 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_42 = 0; i_42 < 19; i_42 += 3) /* same iter space */
                {
                    var_66 = ((/* implicit */unsigned long long int) min((var_66), (((/* implicit */unsigned long long int) ((unsigned int) var_3)))));
                    var_67 += ((/* implicit */int) var_4);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_43 = 0; i_43 < 19; i_43 += 1) 
                    {
                        var_68 = ((/* implicit */unsigned short) var_0);
                        var_69 = (~(((/* implicit */int) arr_125 [i_41] [i_41] [i_41 - 1])));
                        var_70 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_83 [i_28] [i_41 + 1] [i_39]) + (1415962270)))));
                        arr_152 [i_41] [i_39] [i_41] [i_42] [i_43] = (i_41 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_90 [i_41] [i_41] [i_41] [i_41 - 2]) << (((((/* implicit */int) arr_84 [i_41 + 1] [i_41] [i_41] [i_41 - 1])) + (96)))))) : (((/* implicit */unsigned int) ((arr_90 [i_41] [i_41] [i_41] [i_41 - 2]) << (((((((/* implicit */int) arr_84 [i_41 + 1] [i_41] [i_41] [i_41 - 1])) + (96))) - (137))))));
                        var_71 -= ((/* implicit */unsigned int) ((_Bool) -1896899691497111281LL));
                    }
                }
                for (unsigned int i_44 = 0; i_44 < 19; i_44 += 3) /* same iter space */
                {
                    var_72 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)-9897)) || (((/* implicit */_Bool) (unsigned char)163)))));
                    var_73 = ((/* implicit */long long int) arr_132 [i_28] [i_28] [i_28]);
                    /* LoopSeq 3 */
                    for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
                    {
                        var_74 = ((/* implicit */unsigned short) var_6);
                        var_75 = (((~(((/* implicit */int) (unsigned char)144)))) >= (((/* implicit */int) ((11560560406863654330ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        var_76 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)-56))));
                    }
                    for (long long int i_46 = 0; i_46 < 19; i_46 += 1) 
                    {
                        var_77 = ((/* implicit */unsigned int) (signed char)120);
                        var_78 = ((/* implicit */int) ((unsigned int) var_9));
                        arr_164 [i_28] [i_28] [i_28] [i_41] [i_28] = ((((/* implicit */_Bool) arr_138 [i_41] [i_41 - 2])) ? (arr_138 [i_41] [i_41 + 1]) : (var_8));
                    }
                    for (long long int i_47 = 1; i_47 < 18; i_47 += 2) 
                    {
                        arr_168 [i_41] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                        var_79 = ((/* implicit */long long int) arr_137 [i_39] [i_47 + 1] [i_28]);
                        var_80 = ((/* implicit */_Bool) ((signed char) (signed char)-57));
                    }
                }
                var_81 = ((/* implicit */unsigned long long int) ((signed char) 7069160481165272376ULL));
            }
            var_82 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) 654089870)), (((long long int) (unsigned short)7502)))) / (((/* implicit */long long int) -654089853))));
        }
    }
}
