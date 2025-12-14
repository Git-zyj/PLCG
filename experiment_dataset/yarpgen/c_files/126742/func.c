/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126742
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = var_2;
        var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)16))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_8))))) : (((long long int) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2383505721467745624LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) (signed char)-43)), (8257536U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (max((((((/* implicit */_Bool) (short)-29731)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55367))) : (19U))), (arr_10 [i_4 + 1] [i_4 + 2])))));
                            var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((short) var_5))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7973))) & (((((/* implicit */_Bool) -2383505721467745621LL)) ? (((/* implicit */long long int) 2147483647)) : (var_4)))))));
                            var_16 |= ((/* implicit */unsigned long long int) var_1);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_0]))))) == (max((arr_2 [i_4 - 1]), (((/* implicit */int) ((signed char) var_2)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)58134));
                arr_16 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */int) min((((/* implicit */short) (unsigned char)252)), ((short)-2145)));
                var_19 = ((/* implicit */unsigned short) min(((signed char)60), (((signed char) 1276409722U))));
            }
            for (short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)32513))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_6]))));
                    arr_22 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) var_2);
                }
                var_22 = ((/* implicit */unsigned short) arr_2 [10]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((4171759775832468706ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))))));
                            var_24 ^= ((/* implicit */signed char) (unsigned char)60);
                            arr_31 [i_0] [i_0] [i_5] [i_1] [i_0] [i_0] [i_7] = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */signed char) var_6);
            arr_32 [i_0] = ((/* implicit */unsigned char) min((((((_Bool) arr_20 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((var_9) - (6341284905140101151ULL)))))) : (min((((/* implicit */long long int) 1834740936U)), (arr_7 [i_0] [(unsigned short)13] [(unsigned short)13] [i_0]))))), (((/* implicit */long long int) (signed char)-49))));
            arr_33 [i_0] = ((/* implicit */long long int) min((arr_30 [i_0] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)145))));
        }
    }
    var_26 = min(((+(((/* implicit */int) (signed char)49)))), (((/* implicit */int) var_10)));
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        for (unsigned char i_10 = 4; i_10 < 20; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) arr_40 [i_9]))) == (((((/* implicit */int) var_2)) & (var_3))))) ? (((((/* implicit */int) arr_40 [i_10 - 2])) << (((((/* implicit */int) arr_40 [i_10 - 3])) - (97))))) : (arr_41 [i_9] [i_9] [i_9] [i_9])));
                            var_28 &= ((/* implicit */int) min((((((((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_9] [i_9])) ? (arr_38 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) << (((((/* implicit */int) ((unsigned short) (signed char)91))) - (62))))), ((+(arr_38 [i_10 - 2])))));
                        }
                    } 
                } 
                var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) 18U)) < (-2383505721467745620LL)));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 4; i_13 < 18; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        arr_48 [i_9] [i_10] [i_13] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)32513)) ? (2383505721467745641LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))))), (((/* implicit */long long int) arr_45 [i_9] [i_10] [i_10] [i_14] [i_10] [i_10 - 2]))));
                        var_30 |= ((/* implicit */unsigned short) ((unsigned long long int) arr_36 [i_13 - 1]));
                    }
                    for (long long int i_15 = 1; i_15 < 19; i_15 += 3) 
                    {
                        var_31 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [(unsigned char)0]))))))) ? (((/* implicit */int) ((unsigned short) 2460226347U))) : (((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_42 [i_9]))))) | (((/* implicit */int) arr_34 [6] [i_10 - 3]))))));
                        /* LoopSeq 4 */
                        for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_35 [i_9]))));
                            arr_54 [i_9] [i_10 - 1] [i_10 - 1] [i_13] [i_16] [i_9] [i_13] = (-(arr_38 [i_13 - 1]));
                        }
                        for (unsigned char i_17 = 2; i_17 < 19; i_17 += 1) 
                        {
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) arr_43 [i_9] [i_9] [i_9]))));
                            arr_57 [i_9] [i_9] [i_9] [i_15] [(short)13] [(short)13] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (arr_38 [i_9])));
                            arr_58 [i_17] [i_13 - 4] [i_13 - 4] [i_10] = ((/* implicit */_Bool) (+((+((-(((/* implicit */int) (signed char)-59))))))));
                            var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 2460226333U))) & (((/* implicit */int) arr_45 [i_10 - 1] [i_15 + 1] [i_13 + 1] [i_10 - 1] [i_10] [i_10 - 1]))))) ? ((~(((unsigned long long int) (unsigned short)33025)))) : (((/* implicit */unsigned long long int) 35U))));
                            var_35 = ((/* implicit */signed char) arr_44 [i_17] [i_13] [i_13]);
                        }
                        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (+(min((arr_39 [i_9]), (((/* implicit */long long int) var_0)))))))));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (unsigned char)96))));
                        }
                        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
                        {
                            arr_65 [i_19] [i_19] [i_19] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_51 [i_10 - 2]))))) ? (((/* implicit */int) arr_51 [i_10 - 4])) : (((/* implicit */int) (unsigned char)214))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_10 - 1])) ? (((((/* implicit */int) (signed char)41)) << (((((/* implicit */int) arr_37 [i_10 - 4])) - (32))))) : (((/* implicit */int) max((arr_37 [i_10 - 1]), (((/* implicit */unsigned char) arr_63 [i_13 - 4] [i_19])))))));
                        }
                        var_39 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_44 [i_15] [i_15] [i_15 + 2])) ? (arr_44 [i_15] [i_15] [i_15 + 2]) : (arr_44 [i_15] [i_15 + 1] [i_15 + 1]))) >> (((((/* implicit */int) ((signed char) (unsigned short)58010))) + (162)))));
                    }
                    var_40 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(arr_47 [i_13 - 3] [i_10 + 1] [i_10 - 2] [i_10])))) & (((((/* implicit */_Bool) arr_56 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6068107132084019287ULL)) ? (((/* implicit */int) arr_56 [i_13 - 2] [i_13] [i_10 - 4] [i_10] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)15239))))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_44 [i_10 - 4] [(unsigned char)15] [i_13 + 2])))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_20 = 2; i_20 < 9; i_20 += 1) 
    {
        arr_68 [i_20] [i_20] &= ((/* implicit */signed char) var_0);
        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_53 [i_20] [i_20 - 1]))));
        arr_69 [i_20] [i_20] = ((/* implicit */_Bool) (unsigned short)15239);
        /* LoopNest 2 */
        for (unsigned short i_21 = 1; i_21 < 11; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 12; i_22 += 1) 
            {
                {
                    arr_75 [i_20 - 2] [i_21] [i_21] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_40 [i_21 - 1])), (arr_21 [i_20] [i_20 - 2] [i_20 + 3] [i_21 + 1] [i_21])))) ? (((/* implicit */unsigned long long int) min((262143U), (((/* implicit */unsigned int) (unsigned short)23388))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [18U] [i_21] [i_21 + 1] [18U] [i_21 + 1] [i_21]))) ^ (((((/* implicit */_Bool) arr_15 [i_22] [i_22] [(signed char)3] [i_20] [17U] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]))) : (arr_44 [i_22] [(unsigned char)15] [i_22])))))));
                    var_42 = ((/* implicit */unsigned char) arr_38 [i_22]);
                    var_43 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)159))))) ? (((/* implicit */unsigned long long int) arr_7 [i_20] [(unsigned short)12] [i_22] [i_20])) : (arr_55 [i_20 - 1] [i_20 - 1] [i_22] [i_22] [i_22])))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_21 + 1] [i_20] [i_22]))))))) : (((int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                    var_44 = ((/* implicit */unsigned short) ((unsigned char) (((~(((/* implicit */int) (unsigned short)61991)))) == ((~(((/* implicit */int) (unsigned short)64441)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_23 = 1; i_23 < 11; i_23 += 3) 
        {
            for (short i_24 = 0; i_24 < 12; i_24 += 3) 
            {
                for (unsigned char i_25 = 4; i_25 < 11; i_25 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_26 = 0; i_26 < 12; i_26 += 1) 
                        {
                            arr_87 [i_24] [i_24] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)50915))));
                            var_45 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1614003410U)) ? (((/* implicit */long long int) arr_78 [i_24])) : (max((((/* implicit */long long int) arr_43 [i_20] [i_20] [7])), (arr_7 [i_20] [i_25] [i_24] [i_25 - 3])))))) && ((_Bool)1)));
                            arr_88 [i_24] = ((/* implicit */signed char) arr_80 [i_23] [i_23] [i_23]);
                        }
                        for (unsigned short i_27 = 2; i_27 < 9; i_27 += 2) 
                        {
                            arr_91 [i_20] [i_23] [i_24] [i_24] [i_27] = ((/* implicit */short) (~((+(((/* implicit */int) var_0))))));
                            arr_92 [i_24] [i_27 + 3] [i_27] [i_27] [(unsigned char)11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) min((arr_90 [i_27] [i_27 + 3] [i_27] [i_27 + 1] [i_27]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 517080629U))))))))));
                            arr_93 [i_20 + 3] [i_20 + 2] [i_20] [i_24] [i_20 - 2] [i_20] = (((!(((/* implicit */_Bool) 1990951572U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [5] [i_23] [i_24] [5] [i_27 + 2]))))) : (var_4));
                            arr_94 [i_20] [i_20] [i_20] [i_24] [i_20] = ((/* implicit */short) arr_26 [(signed char)16] [i_23 + 1] [i_24] [10ULL] [i_27]);
                        }
                        var_46 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_4)) ? (1006599474180630201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (unsigned short)3)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((arr_90 [i_20] [i_25] [i_20] [i_20] [(signed char)10]), (var_2))))))));
                        /* LoopSeq 1 */
                        for (int i_28 = 0; i_28 < 12; i_28 += 3) 
                        {
                            arr_98 [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))) : (17440144599528921414ULL)))) ? ((-(((/* implicit */int) ((1834740970U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_24] [i_24] [i_28])))))))) : ((-(((/* implicit */int) (signed char)-85))))));
                            var_47 = ((/* implicit */int) (_Bool)1);
                            arr_99 [i_24] [i_25] [i_24] [(short)0] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_11))))))) && (((/* implicit */_Bool) var_10))));
                        }
                        var_48 |= ((/* implicit */unsigned long long int) ((arr_7 [i_20] [i_23] [i_24] [i_25]) % (((/* implicit */long long int) ((int) (short)29524)))));
                        arr_100 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-32)), (2460226333U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_25 - 3]))) : (max((arr_53 [i_20 + 3] [i_24]), (((/* implicit */long long int) 1371349043U))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_29 = 0; i_29 < 13; i_29 += 3) 
    {
        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) (~(((/* implicit */int) var_10)))))));
        var_50 = ((/* implicit */unsigned char) var_4);
        arr_104 [i_29] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_101 [i_29]))));
        var_51 |= ((/* implicit */long long int) arr_42 [i_29]);
    }
    for (unsigned char i_30 = 0; i_30 < 11; i_30 += 3) 
    {
        var_52 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8402))) * (min((min((arr_55 [i_30] [i_30] [i_30] [i_30] [i_30]), (((/* implicit */unsigned long long int) (short)-7200)))), (((/* implicit */unsigned long long int) min((arr_45 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30]), (((/* implicit */short) var_7)))))))));
        var_53 = ((/* implicit */long long int) arr_101 [(unsigned short)5]);
        /* LoopNest 2 */
        for (short i_31 = 1; i_31 < 10; i_31 += 2) 
        {
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                {
                    arr_113 [i_32] [(unsigned short)9] [i_32] = arr_42 [i_30];
                    /* LoopNest 2 */
                    for (unsigned int i_33 = 1; i_33 < 10; i_33 += 2) 
                    {
                        for (unsigned int i_34 = 1; i_34 < 10; i_34 += 1) 
                        {
                            {
                                var_54 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1371349043U)) ? (517080629U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-35)))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_1))) ? ((-(arr_49 [i_30] [i_30] [i_32] [i_33] [i_34] [i_31 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_30]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_30] [i_31 - 1] [i_32] [i_33] [i_34] [i_33])))));
                                arr_118 [i_33] [i_33] = ((/* implicit */unsigned long long int) arr_60 [i_32] [i_32] [i_32] [i_33] [i_33]);
                            }
                        } 
                    } 
                    arr_119 [i_32] [i_31 - 1] [i_31 - 1] [i_30] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_30])))))) % (((((/* implicit */_Bool) arr_36 [i_30])) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((arr_109 [i_30] [i_30] [i_30]) ? (arr_20 [0]) : (((/* implicit */int) (signed char)34)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_35 = 0; i_35 < 11; i_35 += 1) 
        {
            var_55 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_30])) ? (arr_52 [i_35] [i_35] [i_35] [i_35] [11U] [i_30] [i_30]) : (arr_52 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30] [i_30]))));
            arr_124 [i_30] = ((/* implicit */unsigned long long int) (signed char)32);
            var_56 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((var_3), (((/* implicit */int) (unsigned char)21))))))) ? ((+((+(((/* implicit */int) arr_80 [i_35] [i_35] [i_30])))))) : (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_0))))))));
        }
    }
}
