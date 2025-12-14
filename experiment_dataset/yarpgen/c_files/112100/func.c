/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112100
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
    var_15 = ((/* implicit */int) (signed char)65);
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) var_11)), (4294967284U)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((((/* implicit */_Bool) (short)-16439)) && (((/* implicit */_Bool) 4294967284U)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((28U) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            var_19 = 23U;
        }
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (unsigned short)63))));
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) ((var_13) ? (1546798617U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            arr_9 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) var_2)));
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) == (((/* implicit */int) (short)-11523))));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5340794375060364252LL)) ? (((/* implicit */int) (short)11523)) : (308408653)));
                            arr_23 [i_0] [i_0] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) (short)14586))) / (-5340794375060364252LL));
                        }
                    } 
                } 
            } 
            arr_24 [i_0 - 4] [i_3] [i_3] = ((/* implicit */_Bool) -6439760043938781839LL);
            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -5)) ? (-5340794375060364253LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 3789426026269083726ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-23923)))))));
            var_22 = (short)-6042;
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_23 *= 4294967265U;
                            var_24 |= ((/* implicit */short) ((-109549649) + (((/* implicit */int) (unsigned char)248))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (short)11631)) || (((/* implicit */_Bool) (signed char)-77))));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) 5340794375060364249LL)) || (((/* implicit */_Bool) 5340794375060364268LL))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */int) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) : (5340794375060364257LL)));
                            var_28 = var_8;
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-77)) & (((/* implicit */int) (unsigned short)65535))));
                            arr_39 [i_0] [i_0] [i_7] [i_3] [i_0] = ((/* implicit */unsigned short) ((260988749) < (((/* implicit */int) (unsigned short)15674))));
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            arr_44 [i_13] [i_12] = ((/* implicit */int) ((0) < (((/* implicit */int) (unsigned short)15686))));
            var_30 = ((/* implicit */short) min((var_30), (var_9)));
        }
        for (long long int i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
        {
            arr_48 [i_12] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_2)) - (57418)))));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)49861)) && ((_Bool)1)));
            var_32 = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (long long int i_15 = 0; i_15 < 15; i_15 += 2) /* same iter space */
        {
            arr_51 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48014)) ? (1740813731) : (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)11))))));
            /* LoopSeq 4 */
            for (unsigned short i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
                arr_55 [i_12] [i_12] [i_12] [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) 1LL)) ? (((/* implicit */unsigned long long int) -8011542642950764636LL)) : (14329953636512656318ULL))) % (((/* implicit */unsigned long long int) ((-7) & (((/* implicit */int) (unsigned char)81)))))));
                arr_56 [i_12] [i_15] [i_16] [i_16] = ((/* implicit */signed char) ((8011542642950764645LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                arr_59 [i_12] [i_15] [i_17] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)8)) << (((((/* implicit */int) (unsigned char)193)) - (188)))));
                arr_60 [i_12] [i_15] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) (unsigned char)206)) - (201)))));
            }
            for (unsigned char i_18 = 0; i_18 < 15; i_18 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 15; i_19 += 4) 
                {
                    for (short i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        {
                            arr_69 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_20] = ((/* implicit */unsigned int) 1740813723);
                            var_34 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (((((/* implicit */_Bool) -1740813701)) ? (8011542642950764635LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32212)))))));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (unsigned short)33322))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_21 = 0; i_21 < 15; i_21 += 2) 
                {
                    var_36 = ((/* implicit */unsigned int) (unsigned char)90);
                    arr_72 [i_21] [i_15] [i_18] [i_15] = ((/* implicit */short) 1740813717);
                    var_37 = ((/* implicit */int) var_8);
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_38 = 640978244U;
                    var_39 = ((/* implicit */_Bool) 1740813723);
                    var_40 = ((/* implicit */unsigned short) (unsigned char)249);
                }
            }
            for (unsigned char i_23 = 0; i_23 < 15; i_23 += 2) /* same iter space */
            {
                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) 640978244U)) ? ((((_Bool)1) ? (-10LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23735))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))));
                /* LoopSeq 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                {
                    var_42 += ((/* implicit */unsigned short) (_Bool)1);
                    arr_80 [i_12] [i_12] [i_12] [i_24] = ((/* implicit */_Bool) (unsigned short)41800);
                    var_43 = ((/* implicit */unsigned int) (_Bool)1);
                    arr_81 [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (-1740813732));
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (1740813723)));
                    /* LoopSeq 1 */
                    for (unsigned int i_26 = 0; i_26 < 15; i_26 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)5218)) <= (-1740813713)));
                        arr_90 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) (unsigned short)20070);
                    }
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1740813724)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))));
                    arr_91 [i_25] [i_23] [i_15] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-1)) + (7)))));
                }
                var_47 = ((/* implicit */long long int) var_7);
            }
            arr_92 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) == (-822659074)));
            /* LoopSeq 1 */
            for (unsigned long long int i_27 = 0; i_27 < 15; i_27 += 2) 
            {
                arr_95 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)1)) >> (((-41464891) + (41464893)))));
                var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)23735)))))));
            }
        }
        for (long long int i_28 = 0; i_28 < 15; i_28 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_29 = 0; i_29 < 15; i_29 += 2) 
            {
                for (short i_30 = 0; i_30 < 15; i_30 += 1) 
                {
                    {
                        var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) (unsigned short)62374))));
                        /* LoopSeq 2 */
                        for (short i_31 = 3; i_31 < 14; i_31 += 4) 
                        {
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned int) 822659057)) : (755150704U)));
                            arr_108 [i_12] [i_28] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) -1740813728)) : (1557898530U)));
                            arr_109 [i_12] [i_12] [i_29] [i_30] [i_29] = ((/* implicit */int) var_0);
                        }
                        for (signed char i_32 = 0; i_32 < 15; i_32 += 3) 
                        {
                            arr_112 [i_12] [i_28] = (_Bool)1;
                            arr_113 [i_12] [i_28] [i_29] [i_29] [i_28] [i_32] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_4))));
                            var_51 = ((/* implicit */short) var_4);
                            arr_114 [i_12] [i_28] [i_30] [i_30] = ((/* implicit */short) (_Bool)1);
                        }
                        arr_115 [i_12] [i_29] [i_30] [i_30] [i_12] [i_29] |= var_0;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                for (long long int i_34 = 1; i_34 < 13; i_34 += 3) 
                {
                    {
                        arr_120 [i_12] [i_28] [i_28] [i_34 + 1] = ((/* implicit */unsigned int) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8)));
                        var_52 = ((/* implicit */long long int) ((3539816609U) >> (((((/* implicit */int) (short)4951)) - (4939)))));
                        var_53 = ((/* implicit */unsigned int) ((var_6) ? ((((_Bool)1) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16720))))) : (((/* implicit */long long int) var_10))));
                        /* LoopSeq 2 */
                        for (short i_35 = 0; i_35 < 15; i_35 += 2) 
                        {
                            var_54 ^= ((/* implicit */short) var_2);
                            arr_125 [i_28] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3182))) - (3539816591U)));
                            arr_126 [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-32160)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                            arr_127 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) 3105271176U);
                        }
                        for (unsigned char i_36 = 0; i_36 < 15; i_36 += 1) 
                        {
                            var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((-5267941427165211258LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) 822659087))));
                            arr_130 [i_12] = ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) var_4)));
                            var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32147)) || (((/* implicit */_Bool) 1740813724))));
                        }
                        arr_131 [i_12] [i_12] = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
        }
        arr_132 [i_12] = (_Bool)1;
    }
    for (int i_37 = 0; i_37 < 15; i_37 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_38 = 0; i_38 < 15; i_38 += 3) 
        {
            arr_139 [i_37] [i_37] = ((/* implicit */short) min((-1040103570), (((((/* implicit */int) (_Bool)1)) & (1040103585)))));
            var_57 -= ((/* implicit */_Bool) 3686477308U);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_39 = 0; i_39 < 15; i_39 += 1) 
        {
            var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (var_13)));
            arr_142 [i_37] [i_37] [i_37] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))));
        }
        arr_143 [i_37] [i_37] = ((/* implicit */short) min((max((1040103569), (var_10))), (((((/* implicit */int) var_3)) >> (((1189696119U) - (1189696098U)))))));
        arr_144 [i_37] [i_37] = ((/* implicit */long long int) min((max((((/* implicit */unsigned short) (short)30969)), (var_0))), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) < (((/* implicit */int) (unsigned char)183)))))));
        var_59 = ((/* implicit */long long int) max((755150690U), (1189696140U)));
    }
    for (signed char i_40 = 0; i_40 < 21; i_40 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_41 = 0; i_41 < 21; i_41 += 2) 
        {
            for (unsigned int i_42 = 0; i_42 < 21; i_42 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_43 = 1; i_43 < 20; i_43 += 4) 
                    {
                        var_60 = ((/* implicit */int) max((min((-2LL), (((/* implicit */long long int) 755150707U)))), (min((58543652809828842LL), (((/* implicit */long long int) (_Bool)1))))));
                        arr_154 [i_40] [i_40] [i_41] [i_42] [i_43 + 1] = ((/* implicit */int) (((((_Bool)0) ? (3748885597U) : (max((((/* implicit */unsigned int) (unsigned char)150)), (3539816580U))))) << (((((4294967295U) << (((/* implicit */int) (unsigned char)0)))) - (4294967265U)))));
                        var_61 = ((/* implicit */short) ((((((/* implicit */long long int) -1040103575)) & (max((((/* implicit */long long int) var_10)), (-8716963473530034330LL))))) + (((/* implicit */long long int) ((((((/* implicit */int) (short)-11)) | (((/* implicit */int) (short)-21840)))) | (((/* implicit */int) (short)-31828)))))));
                    }
                    for (unsigned char i_44 = 0; i_44 < 21; i_44 += 1) 
                    {
                        arr_159 [i_40] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1040103582)) ? (((((/* implicit */long long int) 1040103578)) - (var_8))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-1040103554)))))), (((/* implicit */long long int) ((var_12) >= (((/* implicit */unsigned long long int) var_8)))))));
                        arr_160 [i_41] [i_41] [i_41] = ((/* implicit */unsigned int) var_12);
                    }
                    arr_161 [i_40] [i_42] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) -1040103567)), (3748885597U)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_45 = 1; i_45 < 20; i_45 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_46 = 0; i_46 < 21; i_46 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_47 = 0; i_47 < 21; i_47 += 1) 
                {
                    for (long long int i_48 = 0; i_48 < 21; i_48 += 2) 
                    {
                        {
                            var_62 = ((/* implicit */_Bool) min(((short)21824), ((short)-30953)));
                            arr_172 [i_40] [i_47] [i_40] [i_40] [i_40] [i_40] = ((/* implicit */_Bool) min((max((1040103569), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) 3686477340U)) && (((/* implicit */_Bool) -112905964014373706LL)))))));
                        }
                    } 
                } 
                arr_173 [i_46] [i_45] [i_40] = ((/* implicit */short) ((((/* implicit */_Bool) max((((-1040103570) + (((/* implicit */int) var_7)))), (((/* implicit */int) (short)-6210))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)52813), (((/* implicit */unsigned short) (short)-30970)))))) : (15323204882683145866ULL)));
            }
            for (int i_49 = 0; i_49 < 21; i_49 += 4) /* same iter space */
            {
                var_63 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (1040103551)));
                arr_177 [i_40] = ((/* implicit */short) ((((/* implicit */long long int) max((-1040103552), (((/* implicit */int) var_2))))) > (min((3689911720570047LL), (((/* implicit */long long int) -1040103570))))));
            }
            /* LoopNest 2 */
            for (short i_50 = 0; i_50 < 21; i_50 += 2) 
            {
                for (long long int i_51 = 0; i_51 < 21; i_51 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_52 = 0; i_52 < 1; i_52 += 1) 
                        {
                            var_64 = ((/* implicit */long long int) var_9);
                            arr_185 [i_40] [i_40] [i_40] = ((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (((-1040103553) + (min((1040103544), (1040103575)))))));
                            var_65 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */int) (short)-30953)) / (((/* implicit */int) (unsigned short)22463))))), (max((((/* implicit */long long int) (short)-27620)), (var_1))))), (((/* implicit */long long int) max((((((/* implicit */int) (short)30985)) ^ (1040103554))), (((/* implicit */int) (unsigned short)43079)))))));
                        }
                        /* vectorizable */
                        for (int i_53 = 2; i_53 < 20; i_53 += 1) 
                        {
                            var_66 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)25606))));
                            var_67 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45259))) < (6489906014552693053LL)))) * (((/* implicit */int) var_7))));
                            var_68 ^= var_10;
                        }
                        var_69 = ((/* implicit */int) min(((_Bool)1), (((1040103551) > (((/* implicit */int) (short)-30953))))));
                        var_70 -= ((/* implicit */unsigned short) (short)30945);
                        var_71 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)47577)) ? (-1040103545) : (((/* implicit */int) (short)-30956)))), (((/* implicit */int) max(((unsigned short)623), (((/* implicit */unsigned short) (signed char)111)))))));
                    }
                } 
            } 
            var_72 = ((/* implicit */long long int) max((var_72), (((/* implicit */long long int) min((max((1040103574), (((/* implicit */int) var_7)))), (((/* implicit */int) (short)-30940)))))));
        }
        var_73 = (unsigned short)43059;
        var_74 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-32598)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)43082)) - (43066)))));
    }
    var_75 = ((/* implicit */long long int) max((549258987U), (((/* implicit */unsigned int) 1040103577))));
}
