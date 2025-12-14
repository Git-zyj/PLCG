/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178009
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41229)) && (((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                var_17 = ((/* implicit */int) max((var_17), (((int) var_9))));
                var_18 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)24307)) : (((/* implicit */int) var_10))))));
                /* LoopSeq 3 */
                for (int i_3 = 2; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) var_5);
                        arr_14 [i_0] [i_2] [i_2 + 1] [i_2] [i_4] = ((/* implicit */short) (((-(((/* implicit */int) var_15)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)62957))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 3; i_5 < 15; i_5 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)7914))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1048715612))))) : (((((/* implicit */_Bool) (unsigned short)61811)) ? (-1363854664) : (((/* implicit */int) var_2))))));
                        var_21 += ((/* implicit */unsigned long long int) var_6);
                        var_22 += ((/* implicit */unsigned short) ((unsigned char) (unsigned short)50039));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)41229)))))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_2] = (!(((/* implicit */_Bool) var_6)));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_23 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))));
                        var_25 = ((/* implicit */unsigned short) (~(((var_11) ^ (((/* implicit */int) (unsigned short)24307))))));
                    }
                    arr_24 [i_3] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) var_9);
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */int) (unsigned char)64)) : ((-(((/* implicit */int) var_7))))));
                    var_27 = var_14;
                }
                for (int i_7 = 2; i_7 < 16; i_7 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) var_3)))))));
                    var_29 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1))))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)32)) + (((((/* implicit */_Bool) (unsigned short)61479)) ? (((/* implicit */int) (unsigned short)62971)) : (((/* implicit */int) var_15))))));
                    arr_28 [i_0] [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))));
                }
                for (int i_8 = 2; i_8 < 16; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        arr_35 [i_2] [i_1] [i_2] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned short)17715)) : (((/* implicit */int) (short)27350))));
                        var_31 = var_4;
                    }
                    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)248))));
                }
            }
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                var_33 = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5)));
                arr_40 [i_10] = ((/* implicit */unsigned char) (unsigned short)41409);
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)27862)))));
            }
            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2720303328536220147ULL))));
            var_36 = var_1;
            var_37 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
        }
        for (int i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))));
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (((+(((/* implicit */int) var_0)))) / ((+(134215680))))))));
            var_40 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                arr_47 [i_0] [(unsigned short)14] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)224))));
                var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */int) var_5)))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))));
            }
        }
        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                for (int i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    {
                        var_42 = ((int) ((unsigned short) (_Bool)1));
                        var_43 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) : (2720303328536220132ULL)))));
                        var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_8)))));
                        var_45 = ((/* implicit */unsigned char) var_8);
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (-((+(((/* implicit */int) var_4)))))))));
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                for (unsigned char i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    for (unsigned char i_18 = 2; i_18 < 16; i_18 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) var_10)) : (var_8)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) var_6))))))));
                            var_48 = ((/* implicit */int) var_0);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 4) 
        {
            var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13)))))));
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 17; i_20 += 2) 
            {
                arr_70 [7ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2720303328536220147ULL)) ? (((/* implicit */int) (unsigned short)27862)) : (((/* implicit */int) (short)-15557))))));
                /* LoopSeq 2 */
                for (unsigned char i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    var_50 |= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) var_4)));
                    arr_74 [i_0] [i_19] [i_0] [i_0] = (!(((/* implicit */_Bool) var_3)));
                    /* LoopSeq 3 */
                    for (unsigned char i_22 = 2; i_22 < 14; i_22 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) var_13))));
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (8855739908834157228ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15556)))));
                        var_53 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) == (var_8)));
                    }
                    for (unsigned short i_23 = 0; i_23 < 17; i_23 += 2) 
                    {
                        var_54 += ((/* implicit */unsigned char) ((_Bool) (-(var_11))));
                        var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1)))))));
                        var_56 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_15))));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 2) 
                    {
                        var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) (unsigned char)66))));
                        var_58 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
                        var_59 = ((/* implicit */unsigned short) max((var_59), (var_10)));
                        var_60 = ((/* implicit */unsigned short) var_15);
                    }
                }
                for (unsigned char i_25 = 4; i_25 < 14; i_25 += 2) 
                {
                    var_61 = ((/* implicit */unsigned long long int) max((var_61), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 0; i_26 < 17; i_26 += 3) 
                    {
                        var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
                        var_63 = ((/* implicit */_Bool) min((var_63), (((/* implicit */_Bool) ((unsigned char) (unsigned short)35736)))));
                        var_64 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (unsigned char)201)))));
                    }
                    var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26159)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
                    /* LoopSeq 2 */
                    for (unsigned short i_27 = 0; i_27 < 17; i_27 += 1) /* same iter space */
                    {
                        var_66 |= ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) var_5)))));
                        arr_89 [i_20] [i_25] [i_27] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_4))))));
                        var_67 = ((/* implicit */short) -757396667);
                        var_68 = ((/* implicit */_Bool) min((var_68), (((/* implicit */_Bool) ((((/* implicit */int) (short)10268)) + (((/* implicit */int) var_13)))))));
                    }
                    for (unsigned short i_28 = 0; i_28 < 17; i_28 += 1) /* same iter space */
                    {
                        arr_92 [i_0] [i_19] [i_20] [16] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4727875311807634739ULL)) ? (((/* implicit */int) (unsigned char)212)) : (var_11))))));
                        var_69 += ((((/* implicit */_Bool) (unsigned short)41229)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)));
                        var_70 &= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172))));
                    }
                    var_71 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                }
                var_72 = ((/* implicit */unsigned char) min((var_72), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65529))))))))));
                arr_93 [i_0] [i_0] [i_19] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            }
            for (int i_29 = 0; i_29 < 17; i_29 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 4) 
                {
                    var_73 += ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)21786))))));
                    arr_99 [(unsigned char)2] [16] [16] [i_30] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)25886))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-2619)) : (((/* implicit */int) var_10)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_31 = 1; i_31 < 14; i_31 += 2) 
                    {
                        var_74 &= ((/* implicit */_Bool) ((int) var_5));
                        var_75 = ((unsigned long long int) var_15);
                        arr_102 [i_0] [i_19] [(unsigned char)12] [i_30] [i_31] = ((/* implicit */short) var_9);
                        var_76 = (short)-7169;
                    }
                    for (unsigned char i_32 = 0; i_32 < 17; i_32 += 4) 
                    {
                        var_77 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)5878))));
                        var_78 = ((/* implicit */int) max((var_78), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_79 = ((/* implicit */_Bool) (unsigned short)29311);
                    }
                }
                arr_106 [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_8) > (((/* implicit */int) (short)10292))))) % ((+(-1)))));
                arr_107 [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)24067)) ? (((/* implicit */int) (unsigned short)55909)) : (((/* implicit */int) (unsigned short)44556))));
                arr_108 [i_0] [i_19] [i_29] = ((/* implicit */unsigned short) ((((int) var_3)) + (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                var_80 = ((/* implicit */unsigned char) (unsigned short)48778);
            }
            var_81 = ((/* implicit */unsigned long long int) var_9);
        }
        arr_109 [i_0] [15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    }
    for (unsigned char i_33 = 0; i_33 < 17; i_33 += 3) 
    {
        var_82 &= ((/* implicit */unsigned long long int) var_15);
        arr_113 [i_33] [i_33] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))))));
    }
    /* vectorizable */
    for (unsigned char i_34 = 0; i_34 < 14; i_34 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_35 = 2; i_35 < 11; i_35 += 4) /* same iter space */
        {
            var_83 *= ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)36224)))));
            arr_118 [i_34] [i_35 + 3] = var_1;
            /* LoopSeq 2 */
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                var_84 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) var_3))));
                var_85 = ((/* implicit */unsigned long long int) min((var_85), (((unsigned long long int) (unsigned short)54373))));
            }
            for (unsigned char i_37 = 0; i_37 < 14; i_37 += 3) 
            {
                var_86 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))));
                /* LoopSeq 2 */
                for (int i_38 = 3; i_38 < 13; i_38 += 2) 
                {
                    var_87 = ((/* implicit */unsigned char) max((var_87), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (13868813466249601918ULL) : ((+(18176485255783103678ULL))))))));
                    arr_128 [i_35 + 2] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                }
                for (unsigned short i_39 = 0; i_39 < 14; i_39 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_40 = 0; i_40 < 14; i_40 += 2) 
                    {
                        arr_133 [i_34] [i_34] [i_34] [i_34] [i_34] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) var_7))));
                        var_88 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_2)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        var_89 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (5091596090285036074ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                        arr_134 [i_34] [i_35] [i_37] [i_39] [i_40] [i_40] [(unsigned char)12] = ((/* implicit */unsigned short) (((_Bool)1) ? (65535) : (((/* implicit */int) var_2))));
                    }
                    var_90 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_1)) * (((/* implicit */int) var_15))))));
                }
            }
        }
        for (unsigned long long int i_41 = 2; i_41 < 11; i_41 += 4) /* same iter space */
        {
            var_91 = ((/* implicit */_Bool) max((var_91), (((/* implicit */_Bool) var_3))));
            var_92 = ((/* implicit */_Bool) max((var_92), (((/* implicit */_Bool) ((var_8) << (((975399036) - (975399036))))))));
        }
        var_93 = ((/* implicit */unsigned short) min((var_93), (((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned char)146)))))))));
        var_94 = ((/* implicit */unsigned char) max((var_94), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_11))) < (((/* implicit */int) (unsigned char)0)))))));
    }
}
