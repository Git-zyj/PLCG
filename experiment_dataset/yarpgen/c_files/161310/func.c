/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161310
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
    var_18 = ((/* implicit */long long int) min((var_16), ((signed char)8)));
    var_19 = ((/* implicit */long long int) min((((((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_16)))))) < (max((var_10), (((/* implicit */long long int) var_4)))))), ((!(((/* implicit */_Bool) 824633720832LL))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) -824633720833LL);
        var_21 += min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-1)));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_1 + 1] = ((/* implicit */long long int) (signed char)-124);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                /* LoopSeq 4 */
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) (unsigned short)31184);
                        var_24 = ((long long int) var_14);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_25 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_5] [i_1 + 2]))));
                        var_26 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (-6860399298161970132LL) : (arr_11 [i_0] [i_0] [i_0] [i_2] [i_3 + 3] [i_5]));
                    }
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) (-(min(((~(((/* implicit */int) (unsigned short)12288)))), (((/* implicit */int) var_14))))));
                        var_28 |= arr_17 [i_0] [i_1] [14LL] [i_3] [6LL];
                    }
                    var_29 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_1 + 3] [i_1] [i_1 + 1] [i_1 + 2] [i_1 - 1]) < (arr_17 [i_1 + 2] [i_1 + 2] [(signed char)9] [i_1 - 1] [i_1 + 1]))))) < (min((-8545752752488469308LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)39616)))))))));
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 14; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_30 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 - 1]))) : (var_5)))));
                        arr_26 [(unsigned short)9] [i_1] [i_1] [i_1 + 4] [i_2] [(signed char)3] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)59593)) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)5942)) : (((/* implicit */int) (signed char)44))))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_1))));
                    }
                    var_32 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)29452))));
                }
                /* vectorizable */
                for (long long int i_9 = 1; i_9 < 14; i_9 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */signed char) (((-(1343780494009797321LL))) == (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    var_34 ^= ((/* implicit */signed char) var_9);
                }
                for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    var_35 += ((/* implicit */signed char) min((max((arr_28 [i_0] [0LL] [i_0]), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
                    var_36 = ((/* implicit */long long int) (~(((/* implicit */int) max((max((((/* implicit */unsigned short) var_14)), (var_15))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1644012786614758754LL))))))))));
                    var_37 = ((/* implicit */long long int) var_6);
                    /* LoopSeq 2 */
                    for (long long int i_11 = 2; i_11 < 14; i_11 += 3) /* same iter space */
                    {
                        var_38 = var_9;
                        var_39 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1008)) || (((/* implicit */_Bool) 4162587356204674646LL))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8082)) ? (((/* implicit */int) (unsigned short)57454)) : (((/* implicit */int) (unsigned short)57454))));
                        var_41 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)1))));
                        var_42 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) -2281116964874502176LL)))), (((arr_20 [i_10] [i_2] [(signed char)10]) == (arr_9 [i_1 + 4] [i_2])))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 2; i_12 < 14; i_12 += 3) /* same iter space */
                    {
                        var_43 += ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)24))));
                        var_44 = ((/* implicit */long long int) min((var_44), (((long long int) var_15))));
                        var_45 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_12 [6LL] [i_1 - 1] [i_2] [i_10]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))))))) < ((-9223372036854775807LL - 1LL))));
                    }
                }
            }
            /* LoopSeq 1 */
            for (long long int i_13 = 1; i_13 < 13; i_13 += 3) 
            {
                var_46 = max((((unsigned short) 22LL)), (((/* implicit */unsigned short) ((signed char) min((var_15), (((/* implicit */unsigned short) var_11)))))));
                /* LoopSeq 3 */
                for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    arr_43 [i_0] [6LL] [10LL] [i_13] [2LL] [i_14] = var_10;
                    arr_44 [6LL] [i_0] [6LL] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_4)), ((unsigned short)36083))), (((/* implicit */unsigned short) ((signed char) var_1)))))) || (((((/* implicit */_Bool) (unsigned short)36083)) && (((/* implicit */_Bool) (signed char)0))))));
                    var_47 = ((((long long int) arr_19 [i_0] [(unsigned short)2] [(signed char)4] [i_14] [i_13 + 1] [i_14])) ^ (((/* implicit */long long int) max((((/* implicit */int) var_17)), (((((/* implicit */int) var_11)) | (((/* implicit */int) var_6))))))));
                    var_48 = ((/* implicit */unsigned short) 1425978185608936305LL);
                }
                for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    var_49 = (+(((long long int) var_1)));
                    var_50 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_1 + 3] [8LL] [i_1 + 2] [i_13] [i_15]))) >= (min((((/* implicit */long long int) var_13)), (max((288230376151711743LL), (((/* implicit */long long int) arr_4 [11LL]))))))));
                }
                for (unsigned short i_16 = 2; i_16 < 14; i_16 += 1) 
                {
                    var_51 = ((/* implicit */signed char) ((min(((+(((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_31 [i_0] [4LL] [i_0] [i_0] [i_0] [(signed char)9]))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) 8725798241792450120LL)))))));
                    var_52 = (~((+(((((/* implicit */_Bool) (unsigned short)124)) ? (-1343780494009797321LL) : (-1173144725012100992LL))))));
                    var_53 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-7))));
                    var_54 = ((/* implicit */signed char) -8702033307072213371LL);
                    var_55 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46199))) < (-6484078519472660372LL)));
                }
            }
        }
        for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_18 = 1; i_18 < 13; i_18 += 3) /* same iter space */
            {
                var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(1343780494009797321LL))), (arr_25 [1LL] [(signed char)0] [i_18] [i_18 + 2])))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
                /* LoopSeq 3 */
                for (long long int i_19 = 0; i_19 < 15; i_19 += 4) /* same iter space */
                {
                    arr_59 [i_0] [i_17] [i_18] [i_19] = max((var_7), (min((min((((/* implicit */long long int) var_17)), (arr_9 [10LL] [i_19]))), (((var_9) & (-7879373439375868955LL))))));
                    var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) max((max(((unsigned short)57461), ((unsigned short)25654))), (((/* implicit */unsigned short) (signed char)-1)))))));
                }
                for (long long int i_20 = 0; i_20 < 15; i_20 += 4) /* same iter space */
                {
                    arr_62 [i_18] [(unsigned short)12] = ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)-77), ((signed char)-21))))) % (-1425978185608936289LL));
                    var_58 = max((-1343780494009797321LL), (((/* implicit */long long int) (unsigned short)44628)));
                    var_59 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 1])))))));
                }
                /* vectorizable */
                for (long long int i_21 = 0; i_21 < 15; i_21 += 4) /* same iter space */
                {
                    arr_67 [3LL] [i_18 - 1] [i_17] [(signed char)14] [i_17] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_55 [i_18 + 1] [(unsigned short)3] [(unsigned short)3] [i_18 + 1]))));
                    var_60 ^= ((long long int) ((-3492263758803583591LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44032)))));
                    var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [8LL] [(signed char)11] [8LL] [(unsigned short)6] [i_17] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -8436781360683843827LL))))) : (((/* implicit */int) ((signed char) var_1)))));
                }
                arr_68 [(unsigned short)11] [i_17] = ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_11))))) - ((~(arr_46 [i_0])))))) ? (max((((((/* implicit */_Bool) var_5)) ? (-72057594037927936LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_20 [i_18] [6LL] [(unsigned short)3])) ? (-2735746647937676258LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */long long int) (+((~(((/* implicit */int) var_14))))))));
            }
            /* vectorizable */
            for (unsigned short i_22 = 1; i_22 < 13; i_22 += 3) /* same iter space */
            {
                arr_71 [i_22] = (+(-7879373439375868955LL));
                /* LoopSeq 1 */
                for (long long int i_23 = 0; i_23 < 15; i_23 += 3) 
                {
                    var_62 = ((/* implicit */long long int) min((var_62), (((var_7) - (-2735746647937676258LL)))));
                    var_63 += ((/* implicit */signed char) ((((/* implicit */_Bool) 8944085468888831462LL)) ? (arr_25 [i_0] [i_17] [(unsigned short)14] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))));
                }
            }
            for (unsigned short i_24 = 0; i_24 < 15; i_24 += 3) 
            {
                var_64 = ((/* implicit */long long int) min((var_64), (max((((/* implicit */long long int) arr_70 [i_17])), (((((/* implicit */_Bool) 2677657083464492070LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                /* LoopSeq 1 */
                for (long long int i_25 = 0; i_25 < 15; i_25 += 4) 
                {
                    var_65 = ((/* implicit */unsigned short) ((long long int) -4997082250712485390LL));
                    var_66 ^= ((/* implicit */long long int) (signed char)-124);
                    var_67 &= arr_42 [i_17];
                    /* LoopSeq 1 */
                    for (long long int i_26 = 3; i_26 < 13; i_26 += 4) 
                    {
                        var_68 = ((/* implicit */signed char) max((var_68), (((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_14))))), ((unsigned short)65472)))))))));
                        var_69 ^= (+(min((max((0LL), (arr_79 [i_0] [i_25] [i_26 + 1]))), (var_3))));
                        arr_82 [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                    }
                }
            }
            arr_83 [(signed char)4] [(signed char)4] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) min((arr_30 [i_0] [i_0] [2LL] [i_17] [10LL] [i_0]), (arr_30 [i_0] [i_17] [i_0] [(unsigned short)5] [i_17] [i_0])))), ((+(((/* implicit */int) (unsigned short)65534))))));
        }
        var_70 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-64)) >= (((/* implicit */int) (signed char)-98)))))));
    }
    for (unsigned short i_27 = 0; i_27 < 17; i_27 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_28 = 0; i_28 < 17; i_28 += 1) /* same iter space */
        {
            var_71 = ((/* implicit */long long int) ((((/* implicit */int) arr_84 [i_27] [6LL])) >= ((+(((/* implicit */int) arr_90 [i_27] [16LL] [i_28]))))));
            var_72 = ((/* implicit */long long int) arr_85 [(unsigned short)4]);
        }
        /* vectorizable */
        for (long long int i_29 = 0; i_29 < 17; i_29 += 1) /* same iter space */
        {
            var_73 = (-(1644012786614758753LL));
            /* LoopNest 3 */
            for (long long int i_30 = 4; i_30 < 13; i_30 += 2) 
            {
                for (long long int i_31 = 0; i_31 < 17; i_31 += 4) 
                {
                    for (long long int i_32 = 1; i_32 < 16; i_32 += 4) 
                    {
                        {
                            var_74 ^= ((/* implicit */signed char) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-88)))));
                            var_75 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44012)) && (((/* implicit */_Bool) arr_86 [i_30 - 2] [i_32 + 1]))));
                            var_76 = ((/* implicit */long long int) min((var_76), (((/* implicit */long long int) var_11))));
                        }
                    } 
                } 
            } 
        }
        var_77 = ((/* implicit */long long int) var_1);
    }
    /* vectorizable */
    for (long long int i_33 = 0; i_33 < 17; i_33 += 3) 
    {
        var_78 ^= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) -7586161618320531596LL))) <= (((/* implicit */int) ((((/* implicit */_Bool) 2251799813685247LL)) && (((/* implicit */_Bool) (signed char)-88)))))));
        /* LoopSeq 1 */
        for (long long int i_34 = 0; i_34 < 17; i_34 += 4) 
        {
            var_79 = ((/* implicit */long long int) (!(((var_3) <= (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
            var_80 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_93 [i_34]) < (((/* implicit */long long int) ((/* implicit */int) var_13)))))) >= ((-(((/* implicit */int) arr_85 [i_33]))))));
        }
        var_81 = ((/* implicit */signed char) (-(arr_93 [(signed char)9])));
        arr_108 [(signed char)6] [i_33] |= ((/* implicit */long long int) (+(((/* implicit */int) arr_101 [i_33] [i_33] [(signed char)0]))));
    }
    /* vectorizable */
    for (long long int i_35 = 0; i_35 < 12; i_35 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_36 = 2; i_36 < 10; i_36 += 1) 
        {
            for (long long int i_37 = 0; i_37 < 12; i_37 += 4) 
            {
                for (long long int i_38 = 0; i_38 < 12; i_38 += 2) 
                {
                    {
                        var_82 = ((/* implicit */signed char) arr_31 [i_36 - 2] [i_36] [i_36] [i_36 + 1] [i_36 - 1] [i_38]);
                        var_83 |= ((((/* implicit */_Bool) 7879373439375868954LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (var_9))))) : (arr_56 [i_36 + 2] [i_37] [i_38] [i_38]));
                        var_84 = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
                        /* LoopSeq 3 */
                        for (long long int i_39 = 0; i_39 < 12; i_39 += 3) 
                        {
                            arr_120 [i_35] [i_36] [i_36] [1LL] [i_37] [2LL] [(unsigned short)10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7531))) % (2735746647937676258LL)));
                            var_85 = ((/* implicit */signed char) max((var_85), (((/* implicit */signed char) (!(((/* implicit */_Bool) 25LL)))))));
                            var_86 = 1644012786614758753LL;
                        }
                        for (long long int i_40 = 2; i_40 < 10; i_40 += 4) 
                        {
                            var_87 = ((long long int) 6278105176025526376LL);
                            arr_123 [i_40] [i_38] [i_37] [i_36] [i_35] = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) >= (2251799813685247LL)));
                            arr_124 [(unsigned short)2] [i_36] [8LL] [8LL] [(signed char)5] = ((((/* implicit */long long int) ((/* implicit */int) arr_115 [i_40 - 2] [(unsigned short)8] [i_40 + 1] [i_36 - 1]))) - (-4134788395051554385LL));
                            var_88 = ((/* implicit */unsigned short) ((long long int) (+(var_8))));
                        }
                        for (long long int i_41 = 0; i_41 < 12; i_41 += 3) 
                        {
                            var_89 |= ((/* implicit */long long int) var_13);
                            var_90 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -6999743566808200347LL)) && (((/* implicit */_Bool) (signed char)-109))))) % (((/* implicit */int) arr_8 [i_36 - 1] [i_37] [i_36 + 1] [i_36 + 2]))));
                            arr_129 [i_35] [i_35] [i_35] [i_35] [i_35] [(signed char)5] = ((/* implicit */unsigned short) var_11);
                            var_91 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21503))) == (((var_8) & (((/* implicit */long long int) ((/* implicit */int) arr_122 [i_35] [(unsigned short)1] [i_37])))))));
                        }
                    }
                } 
            } 
        } 
        arr_130 [i_35] = var_0;
        /* LoopNest 2 */
        for (long long int i_42 = 0; i_42 < 12; i_42 += 4) 
        {
            for (long long int i_43 = 0; i_43 < 12; i_43 += 2) 
            {
                {
                    var_92 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                    arr_137 [i_35] [i_42] [1LL] [i_43] = ((/* implicit */unsigned short) ((-1644012786614758754LL) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))))))));
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (long long int i_44 = 0; i_44 < 11; i_44 += 4) 
    {
        arr_142 [i_44] &= max((min((arr_77 [i_44]), (((/* implicit */long long int) arr_58 [i_44] [i_44] [7LL] [i_44] [i_44] [i_44])))), (max((arr_77 [i_44]), (var_5))));
        var_93 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (-2550912586444791607LL) : (1644012786614758754LL)));
        var_94 = ((/* implicit */long long int) var_13);
        arr_143 [5LL] [i_44] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(144115188075855872LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_44] [10LL] [i_44] [i_44])) || (((/* implicit */_Bool) arr_51 [10LL]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) == (var_0))))))));
    }
    for (long long int i_45 = 1; i_45 < 13; i_45 += 1) 
    {
        arr_147 [i_45 + 1] [i_45] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4368845475713680607LL)) ? (((/* implicit */int) (unsigned short)23777)) : (((/* implicit */int) (signed char)-109))))), ((~(-6957997939004074779LL)))));
        var_95 -= ((/* implicit */signed char) (-(-1644012786614758778LL)));
    }
    /* vectorizable */
    for (signed char i_46 = 0; i_46 < 16; i_46 += 4) /* same iter space */
    {
        arr_151 [(unsigned short)11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
        arr_152 [i_46] [i_46] = var_8;
        var_96 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 5251674005107108512LL))) | (((/* implicit */int) arr_88 [i_46]))));
        var_97 = ((((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_16))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32536))) > (var_10))))));
    }
    for (signed char i_47 = 0; i_47 < 16; i_47 += 4) /* same iter space */
    {
        var_98 = (-(min((8261122049124256431LL), (-3492263758803583591LL))));
        var_99 |= ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_107 [i_47] [i_47] [14LL]) : (var_9));
    }
}
