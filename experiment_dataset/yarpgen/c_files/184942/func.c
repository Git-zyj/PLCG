/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184942
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)250)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5ULL) >> (((((/* implicit */int) (short)127)) - (88)))))) ? ((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)60786)))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_2 - 1] [i_1] [i_0])))))) * (arr_0 [i_3] [(unsigned short)4])));
                            arr_11 [i_1] [0LL] [i_1] [i_1] |= ((/* implicit */unsigned char) (+(min(((+(261730752))), (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_14 [i_4] [i_1] [i_0] = ((/* implicit */short) 588731042732677164ULL);
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((signed char) -159375405)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((11214543315973960361ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_9))))));
                                arr_21 [i_0] [i_0] [i_0] [i_6] [i_6 + 3] = ((/* implicit */_Bool) 4819303792071627103LL);
                                arr_22 [i_0] [(signed char)5] [i_4] [i_6] [i_5 + 2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) >= (((((/* implicit */_Bool) arr_19 [i_0] [i_6] [i_4] [i_0] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_10)))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_20 [i_1] [i_1]))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_4] [12] |= ((/* implicit */long long int) (((+(((/* implicit */int) arr_5 [(signed char)6])))) / (arr_18 [(signed char)4] [(signed char)4] [i_1] [i_1] [i_0] [(signed char)4])));
                    arr_24 [i_0] [i_1] [i_1] [(signed char)1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)45390))));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_27 [i_0] [(unsigned char)12] [i_0] |= ((/* implicit */signed char) (+(arr_8 [i_0] [i_7] [i_7] [8U])));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_17 *= var_4;
                        var_18 = ((/* implicit */short) arr_8 [i_1] [7] [i_1] [i_0]);
                        arr_31 [i_0] [14LL] [i_7] [i_8] = arr_7 [i_0] [(signed char)9] [i_8];
                        var_19 = ((var_11) < (((/* implicit */long long int) ((/* implicit */int) var_1))));
                        /* LoopSeq 3 */
                        for (int i_9 = 1; i_9 < 15; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (var_3)));
                            arr_35 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_19 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 + 1]))));
                        }
                        for (unsigned long long int i_10 = 4; i_10 < 12; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((683196233U) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) 3384615995U))));
                            arr_39 [i_0] [i_0] [i_7] [i_8] [i_10] [i_0] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_7] [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) (signed char)-25))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */long long int) ((unsigned int) var_11))) : (arr_15 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11])));
                            arr_44 [i_0] [i_0] [3LL] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((var_11) | (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_8])) | (((/* implicit */int) (signed char)11)))))));
                            var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) arr_38 [i_11 - 1] [i_8] [i_7] [i_1] [i_0])) & (arr_7 [i_0] [i_8] [i_11 - 1])))));
                        }
                    }
                }
                for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_28 [i_1]))));
                        arr_50 [i_12] [i_1] [i_12] [i_0] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 451777750)) % (4837773987154894065ULL)));
                    }
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        var_26 &= ((/* implicit */_Bool) (signed char)-66);
                        var_27 = ((((/* implicit */int) (signed char)6)) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28430)))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 3; i_16 < 13; i_16 += 3) 
                        {
                            {
                                var_28 -= ((((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) || ((_Bool)1)))) & (((((/* implicit */int) (signed char)3)) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-8)) != (((/* implicit */int) var_2))))))));
                                arr_59 [i_16] [i_15] = ((/* implicit */_Bool) arr_16 [i_1] [i_12] [i_15] [i_16 + 3]);
                            }
                        } 
                    } 
                }
                arr_60 [13] [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-85)) - (((/* implicit */int) (_Bool)1))));
                arr_61 [i_0] = ((/* implicit */short) (signed char)-79);
            }
        } 
    } 
    var_29 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-22330)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1863962215))))))), (var_6)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) 
        {
            arr_66 [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) var_1);
            arr_67 [i_17] [i_17] = ((((/* implicit */_Bool) arr_65 [i_17])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))));
            var_30 = (!(((/* implicit */_Bool) arr_63 [i_17])));
        }
        /* LoopSeq 2 */
        for (short i_19 = 1; i_19 < 19; i_19 += 3) 
        {
            arr_71 [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1446222445125211561LL)) | (0ULL)));
            var_31 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4282904621U)));
            arr_72 [i_17] = ((/* implicit */long long int) ((unsigned char) ((unsigned int) (_Bool)0)));
        }
        for (signed char i_20 = 1; i_20 < 20; i_20 += 1) 
        {
            var_32 = ((/* implicit */_Bool) var_8);
            var_33 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        arr_76 [(signed char)10] &= ((/* implicit */unsigned long long int) var_3);
        var_34 *= ((/* implicit */_Bool) ((unsigned long long int) ((var_0) ? (((/* implicit */unsigned long long int) arr_69 [14ULL] [i_17])) : (0ULL))));
        /* LoopSeq 1 */
        for (unsigned short i_21 = 4; i_21 < 20; i_21 += 1) 
        {
            var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1688248866U)) & (((4379944879480605306ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_17] [(unsigned short)6] [i_17])))))));
            arr_80 [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (5602386247823496971ULL)));
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((((-8398607028234691173LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_73 [i_17] [i_21])) + (68))) - (18))))) - (3299060034480338523LL))))))));
            var_37 += ((/* implicit */signed char) (unsigned short)32);
            arr_81 [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46976))) : (var_5)))) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_17] [i_21] [i_21])) || (((/* implicit */_Bool) arr_74 [i_17])))))));
        }
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 19; i_22 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_23 = 0; i_23 < 19; i_23 += 1) 
        {
            for (signed char i_24 = 0; i_24 < 19; i_24 += 4) 
            {
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    {
                        arr_91 [i_23] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32766)) % (((/* implicit */int) (unsigned short)628)))))));
                        arr_92 [i_22] [i_22] [i_22] |= ((/* implicit */long long int) ((var_0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1))));
                        arr_93 [i_22] [i_22] [i_23] [i_25 + 1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9003043315675347680ULL)))) && (((/* implicit */_Bool) var_11))));
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */unsigned int) arr_74 [i_22])) ^ (((4294967295U) + (((/* implicit */unsigned int) arr_64 [i_22] [i_24] [i_25])))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_26 = 0; i_26 < 19; i_26 += 4) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_78 [i_22] [i_22])) : (((/* implicit */int) ((var_6) == (-1323225524))))));
            arr_97 [i_26] &= ((/* implicit */unsigned short) ((long long int) arr_70 [i_22] [i_22] [i_26]));
            /* LoopSeq 3 */
            for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_28 = 0; i_28 < 19; i_28 += 1) 
                {
                    for (long long int i_29 = 2; i_29 < 15; i_29 += 3) 
                    {
                        {
                            arr_104 [i_26] [i_26] [i_27] [i_28] [i_29] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) (signed char)-123)) + (132))))))));
                            var_40 = ((/* implicit */unsigned int) arr_102 [i_22] [i_26] [i_26] [4U] [i_29 - 1]);
                            var_41 ^= ((/* implicit */unsigned int) arr_63 [i_26]);
                            arr_105 [1ULL] [1ULL] [i_28] = ((/* implicit */signed char) ((arr_84 [i_26]) != (((((/* implicit */int) (short)15)) >> (((arr_95 [i_22]) + (2059031102)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_30 = 1; i_30 < 18; i_30 += 2) 
                {
                    for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                    {
                        {
                            arr_110 [i_31 - 1] [i_30] [i_27 - 1] [i_26] [i_26] [i_30] [i_22] = ((/* implicit */_Bool) ((unsigned short) var_8));
                            arr_111 [i_30] [i_27] = ((/* implicit */int) ((arr_78 [i_30 - 1] [i_27]) && ((!(((/* implicit */_Bool) arr_84 [i_31]))))));
                        }
                    } 
                } 
            }
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                arr_114 [i_26] [i_32] = ((/* implicit */int) 131072U);
                /* LoopSeq 1 */
                for (signed char i_33 = 1; i_33 < 17; i_33 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_34 = 0; i_34 < 19; i_34 += 2) 
                    {
                        arr_120 [i_22] [i_22] [(signed char)14] [i_22] [(signed char)14] [i_22] = ((/* implicit */signed char) ((arr_63 [i_22]) >= (arr_63 [i_22])));
                        var_42 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) var_1)));
                        arr_121 [i_22] [i_26] [i_26] [i_26] [i_33] [i_26] [i_34] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (arr_85 [i_22])));
                    }
                    var_44 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)63))))) & (((3U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    arr_122 [i_33 - 1] [i_33 - 1] [i_32] [i_26] [i_22] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_84 [i_32])) < (((unsigned long long int) (_Bool)1))));
                }
            }
            for (unsigned char i_35 = 0; i_35 < 19; i_35 += 4) 
            {
                var_45 = ((((/* implicit */_Bool) 555624518)) ? (arr_109 [i_22] [i_35] [i_35] [i_26] [i_26] [i_22] [i_22]) : (arr_109 [i_22] [i_26] [i_35] [i_22] [14ULL] [i_26] [i_26]));
                var_46 |= ((/* implicit */_Bool) (((~(-3929526999222074800LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_94 [i_26]))) <= (arr_106 [i_22] [i_26] [i_35] [i_35] [i_35] [i_35])))))));
                /* LoopSeq 1 */
                for (long long int i_36 = 0; i_36 < 19; i_36 += 3) 
                {
                    var_47 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)197)) << (0ULL))));
                    arr_129 [i_36] [i_35] [i_26] [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned long long int) -7705001547419483486LL)) : (0ULL)));
                }
            }
            var_48 = ((/* implicit */long long int) ((8389579010004661905ULL) * (((/* implicit */unsigned long long int) arr_100 [i_26] [(signed char)8] [i_22] [i_22]))));
            arr_130 [0ULL] [i_26] = ((/* implicit */_Bool) var_7);
        }
    }
    /* vectorizable */
    for (short i_37 = 0; i_37 < 19; i_37 += 2) /* same iter space */
    {
        arr_133 [i_37] [i_37] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_113 [i_37] [i_37])) || (((/* implicit */_Bool) -9223372036854775799LL)))))) * ((~(arr_127 [i_37] [i_37] [i_37])))));
        /* LoopNest 2 */
        for (unsigned int i_38 = 0; i_38 < 19; i_38 += 2) 
        {
            for (signed char i_39 = 2; i_39 < 18; i_39 += 4) 
            {
                {
                    arr_138 [i_39] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_73 [i_37] [i_37]))))) / (((((/* implicit */_Bool) arr_94 [i_37])) ? (2885040177673362535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))))));
                    arr_139 [i_37] [i_37] [i_38] [i_39 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (824664692U))) << (((/* implicit */int) (!(((/* implicit */_Bool) -3882408842623987092LL)))))));
                    var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) (~(((/* implicit */int) arr_113 [i_39 - 1] [i_39 + 1])))))));
                }
            } 
        } 
        var_50 -= ((/* implicit */short) (signed char)-76);
        var_51 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_37] [i_37] [i_37])) ? (2064548492U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    }
    for (short i_40 = 0; i_40 < 19; i_40 += 2) /* same iter space */
    {
        arr_142 [i_40] = ((signed char) (short)-31560);
        arr_143 [i_40] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_123 [i_40] [i_40]) ^ (((/* implicit */long long int) 4285270336U)))) | (((long long int) var_11))))) ? (((((((/* implicit */_Bool) 1174367181)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_40] [i_40]))) : (var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-6), (var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_52 = ((/* implicit */unsigned long long int) max((var_52), (min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)181)))))))), (((((unsigned long long int) var_10)) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_124 [i_40])))))))));
    }
}
