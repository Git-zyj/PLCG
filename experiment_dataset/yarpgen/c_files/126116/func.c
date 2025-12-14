/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126116
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-58)) + (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2 - 1])) ? (arr_5 [i_1 + 1] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37)))))) ? (((long long int) var_10)) : (((((/* implicit */long long int) arr_5 [i_1 + 2] [i_2 - 2])) & (-843113486359501575LL)))));
                            var_14 = (~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1]))) + (var_2))));
                            var_15 ^= ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) > (((((var_5) + (2147483647))) >> (((((/* implicit */int) (unsigned char)218)) - (199)))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) min((((var_4) % (((/* implicit */unsigned int) ((int) arr_2 [i_0] [i_0] [i_0]))))), (var_4)));
                    var_17 = (unsigned char)19;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned long long int) (+(((unsigned int) max((var_3), (((/* implicit */int) (signed char)-49)))))));
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)24576)), (arr_5 [i_4 - 1] [i_6 - 1]))))));
                                arr_16 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] = max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_5))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)37)) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (unsigned char)233)))));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    arr_20 [i_0] [i_7] [i_7] = -757202713;
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                arr_25 [i_9] [i_7] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_8] [i_9]))));
                                var_20 ^= ((/* implicit */int) ((var_10) != (-757202731)));
                                arr_26 [i_0] [i_1] [i_0] [i_7] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (arr_15 [i_8])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 1) 
                    {
                        for (signed char i_12 = 1; i_12 < 13; i_12 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((int) arr_23 [i_0] [i_0] [i_12 + 2] [i_11] [i_11]));
                                arr_34 [i_10] [i_1] [i_10] [i_11] [i_10] &= ((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((945615099) != (-945615111)));
                    arr_35 [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) 17131919323885156829ULL));
                }
                for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    arr_40 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) (((+(max((-945615106), (((/* implicit */int) (unsigned char)25)))))) + (min(((+(((/* implicit */int) (unsigned char)26)))), (((var_10) & (((/* implicit */int) (unsigned char)218))))))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (unsigned char)9))));
                        arr_45 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)218)), ((short)-11501))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_13] [i_1] [i_0])) / (var_5)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 14; i_15 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) (+(var_10)));
                            arr_49 [i_0] [i_0] [i_15] [i_14] = ((/* implicit */short) ((signed char) var_6));
                        }
                        for (short i_16 = 0; i_16 < 15; i_16 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) / (2147483647))) > (min((-1804375123), (352240925))))))));
                            var_26 = ((/* implicit */int) ((unsigned long long int) (+(var_9))));
                        }
                        var_27 = ((/* implicit */long long int) ((-362646691) | (((/* implicit */int) max((((/* implicit */unsigned char) arr_38 [i_14] [i_13] [i_1] [i_0])), ((unsigned char)218))))));
                        var_28 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_32 [i_14] [i_14] [i_14] [i_14] [i_14] [i_1 + 2] [i_1]) : (arr_32 [i_14] [i_14] [i_14] [i_1] [i_14] [i_1 + 2] [i_1]))));
                    }
                    var_29 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((min((var_10), (((/* implicit */int) (unsigned char)235)))) > (((((/* implicit */int) (short)11499)) + (1283209220)))))), (2157143546U)));
                }
                var_30 = ((/* implicit */int) ((((-1LL) + (9223372036854775807LL))) >> (((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_4)))) - (1367818069LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            {
                arr_57 [i_17] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_56 [i_17 - 1] [i_18] [i_17])) != (((/* implicit */int) arr_56 [i_18] [i_18] [i_17]))))), (352240925)));
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 20; i_19 += 4) 
                {
                    for (int i_20 = 2; i_20 < 21; i_20 += 1) 
                    {
                        {
                            var_31 |= ((/* implicit */int) max((min((arr_60 [i_18] [i_18] [i_19 + 2] [i_20] [i_20 - 2]), (-4953718114885694092LL))), (((/* implicit */long long int) max((var_5), (-1347141766))))));
                            /* LoopSeq 3 */
                            for (int i_21 = 0; i_21 < 23; i_21 += 1) /* same iter space */
                            {
                                var_32 |= max((min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)127)) && (((/* implicit */_Bool) var_1))))))), (var_9));
                                arr_65 [i_17] [i_18] [i_20 + 2] [i_17] [i_21] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_17])) << (((var_2) - (5735782456220572570LL))))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (arr_61 [i_17] [i_18] [i_19])))) ? (arr_59 [i_17] [i_18] [i_17]) : (((/* implicit */long long int) min((arr_53 [i_17]), (var_8))))))));
                            }
                            for (int i_22 = 0; i_22 < 23; i_22 += 1) /* same iter space */
                            {
                                var_33 += (~(((/* implicit */int) ((((/* implicit */long long int) var_0)) > (((((/* implicit */long long int) -326935915)) | (-1LL)))))));
                                var_34 = ((/* implicit */long long int) min((var_9), (max((-1347141766), (((/* implicit */int) var_1))))));
                                arr_68 [i_17] [i_18] [i_18] [i_19] [i_20] [i_17] = ((/* implicit */int) min((max(((-(0LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_7))))))), (((/* implicit */long long int) (-(arr_62 [i_17] [i_18] [i_18] [i_20] [i_22]))))));
                            }
                            for (int i_23 = 0; i_23 < 23; i_23 += 1) /* same iter space */
                            {
                                var_35 = var_5;
                                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) + (1507323310)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (min((arr_60 [i_17] [i_20 - 1] [i_20 - 1] [i_20] [i_17 - 1]), (((/* implicit */long long int) (signed char)-46))))));
                                var_37 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) -1539202801043786612LL)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (unsigned char)16))))))));
                                var_38 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)118))));
                                arr_72 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) var_0);
                            }
                            var_39 = ((/* implicit */long long int) 352240925);
                            var_40 = ((/* implicit */short) ((2424938935825702826LL) / (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_20] [i_20] [i_17] [i_18] [i_17] [i_18] [i_17]))))) + ((~(var_5))))))));
                        }
                    } 
                } 
                var_41 &= ((/* implicit */long long int) ((((/* implicit */long long int) var_10)) == (min((((((/* implicit */_Bool) -1)) ? (2LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))), (17592186044415LL)))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_24 = 0; i_24 < 10; i_24 += 1) 
    {
        arr_76 [i_24] [i_24] = (+(-352240902));
        var_42 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_31 [i_24] [i_24] [i_24] [i_24])) + (2147483647))) << (((arr_5 [i_24] [i_24]) - (1721014561U))))) / (((/* implicit */int) max((arr_31 [i_24] [i_24] [i_24] [i_24]), (arr_31 [i_24] [i_24] [i_24] [i_24]))))));
        var_43 ^= ((/* implicit */short) (signed char)-93);
    }
    /* vectorizable */
    for (long long int i_25 = 0; i_25 < 16; i_25 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_26 = 0; i_26 < 16; i_26 += 3) 
        {
            for (long long int i_27 = 0; i_27 < 16; i_27 += 3) 
            {
                {
                    arr_84 [i_25] [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -352240922)))))) : (var_0)));
                    arr_85 [i_25] [i_26] [i_27] = ((/* implicit */long long int) (~(11098177383423051586ULL)));
                    /* LoopSeq 1 */
                    for (long long int i_28 = 0; i_28 < 16; i_28 += 3) 
                    {
                        arr_90 [i_25] [i_26] [i_27] [i_27] [i_27] [i_25] = ((/* implicit */unsigned long long int) ((int) 650261259U));
                        arr_91 [i_28] [i_26] [i_25] [i_26] = 352240925;
                        var_44 *= ((((/* implicit */_Bool) arr_55 [i_25] [i_25] [i_28])) || (((/* implicit */_Bool) var_1)));
                    }
                    var_45 ^= ((/* implicit */_Bool) arr_80 [i_25] [i_25]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_29 = 0; i_29 < 16; i_29 += 4) 
        {
            for (signed char i_30 = 4; i_30 < 15; i_30 += 2) 
            {
                for (unsigned char i_31 = 0; i_31 < 16; i_31 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_32 = 1; i_32 < 14; i_32 += 3) 
                        {
                            arr_100 [i_25] [i_29] [i_30] = ((/* implicit */int) (_Bool)1);
                            arr_101 [i_25] [i_29] [i_29] [i_30] [i_31] [i_31] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_31] [i_29] [i_31] [i_31] [i_32 + 2])) ? (-352240926) : (((/* implicit */int) var_11))));
                            var_46 = (signed char)-73;
                            var_47 = ((/* implicit */unsigned char) -917714397845921214LL);
                            var_48 &= ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_77 [i_25])))));
                        }
                        var_49 = (-(11098177383423051592ULL));
                        var_50 = (+(-3513005663511616998LL));
                        arr_102 [i_25] [i_25] [i_29] [i_29] [i_30] [i_31] = var_5;
                        var_51 = ((signed char) arr_96 [i_30 - 2] [i_29] [i_30]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_33 = 0; i_33 < 16; i_33 += 1) /* same iter space */
    {
        var_52 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (short)32760))) & (-8200005519425037152LL)))))));
        arr_106 [10LL] &= ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (((signed char) (short)19935))));
        var_53 = ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_69 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33]) << (((((/* implicit */int) (short)2847)) - (2812)))))) || (((/* implicit */_Bool) arr_63 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33] [i_33])))), (((_Bool) var_2))));
        /* LoopNest 3 */
        for (signed char i_34 = 0; i_34 < 16; i_34 += 3) 
        {
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                for (unsigned int i_36 = 1; i_36 < 12; i_36 += 4) 
                {
                    {
                        var_54 = ((/* implicit */long long int) min((min((-352240904), (((/* implicit */int) arr_56 [i_34] [i_34] [i_33])))), (((/* implicit */int) arr_56 [i_33] [i_34] [i_33]))));
                        var_55 = ((/* implicit */int) var_4);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_37 = 4; i_37 < 14; i_37 += 3) 
        {
            var_56 = ((/* implicit */short) ((((/* implicit */long long int) ((arr_82 [i_37 - 2] [i_37 - 2] [i_37 - 2] [i_37 - 2]) | (((/* implicit */int) arr_96 [i_37 - 1] [i_37 + 2] [i_37 + 2]))))) + ((+(var_2)))));
            /* LoopNest 2 */
            for (long long int i_38 = 0; i_38 < 16; i_38 += 4) 
            {
                for (short i_39 = 2; i_39 < 12; i_39 += 4) 
                {
                    {
                        arr_121 [i_33] [i_33] [i_38] [i_33] [i_33] = ((/* implicit */short) arr_56 [i_33] [i_38] [i_33]);
                        var_57 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_113 [i_39 + 4] [i_38] [i_38] [i_37]))))) > (-858234286)));
                    }
                } 
            } 
        }
    }
    for (long long int i_40 = 0; i_40 < 16; i_40 += 1) /* same iter space */
    {
        arr_126 [i_40] [i_40] = ((/* implicit */signed char) ((_Bool) var_6));
        arr_127 [i_40] = 2006752029494767729LL;
        /* LoopSeq 1 */
        for (unsigned long long int i_41 = 2; i_41 < 15; i_41 += 3) 
        {
            var_58 ^= ((/* implicit */long long int) ((int) (+(var_8))));
            arr_131 [i_40] [i_41] [i_40] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) -1338462474)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 17592186044405LL)) && (((/* implicit */_Bool) var_8))))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)14))) >= (-17592186044406LL)))))))));
        }
        arr_132 [i_40] = ((/* implicit */long long int) ((unsigned long long int) var_11));
        arr_133 [i_40] [i_40] = ((/* implicit */unsigned int) var_11);
    }
    /* LoopNest 3 */
    for (signed char i_42 = 0; i_42 < 25; i_42 += 3) 
    {
        for (signed char i_43 = 0; i_43 < 25; i_43 += 1) 
        {
            for (unsigned long long int i_44 = 0; i_44 < 25; i_44 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_45 = 0; i_45 < 25; i_45 += 1) 
                    {
                        for (unsigned int i_46 = 0; i_46 < 25; i_46 += 1) 
                        {
                            {
                                var_59 = ((/* implicit */unsigned long long int) (-(-169502859)));
                                var_60 = ((/* implicit */unsigned long long int) (((+(var_3))) + (((((/* implicit */int) arr_141 [i_44] [i_45] [i_45])) >> (((/* implicit */int) arr_141 [i_44] [i_45] [i_46]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_47 = 0; i_47 < 25; i_47 += 2) 
                    {
                        var_61 *= ((/* implicit */unsigned char) max((((/* implicit */int) var_6)), ((-(((/* implicit */int) arr_143 [i_42] [i_42] [i_42] [i_47] [i_43] [i_43]))))));
                        arr_148 [i_44] [i_43] [i_44] [i_47] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((2006752029494767742LL) != (17592186044415LL))))))) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_9))))));
                        arr_149 [i_47] [i_47] [i_47] [i_42] &= ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_143 [i_42] [i_42] [i_42] [i_42] [i_42] [i_42])) != (24576)))), (((((/* implicit */long long int) var_3)) ^ (17592186044405LL))))) << (((((min((((/* implicit */int) (signed char)-118)), (352240901))) + (157))) - (35)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_48 = 0; i_48 < 25; i_48 += 3) 
                    {
                        arr_152 [i_42] [i_43] [i_44] [i_44] = ((/* implicit */long long int) var_1);
                        var_62 = max((4194240), (21));
                        arr_153 [i_44] [i_43] [i_44] = 16383;
                        arr_154 [i_44] [i_44] [i_43] [i_44] [i_48] = ((((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) max((((/* implicit */int) (signed char)-30)), (1338462473))))))) != (((/* implicit */int) (!(((4194224) <= (var_3)))))));
                        var_63 = var_5;
                    }
                }
            } 
        } 
    } 
}
