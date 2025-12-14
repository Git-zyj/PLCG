/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173526
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)7] [5] = ((/* implicit */int) (unsigned short)5770);
                arr_6 [i_0] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_1 [i_0] [4ULL])) : (((/* implicit */int) var_8))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 = var_5;
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    arr_14 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned int) var_16)), (arr_13 [i_4] [i_4 + 2] [i_4 + 1] [i_4 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-22)) && (((/* implicit */_Bool) (signed char)7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [20LL])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_19 [i_5] [6] = ((/* implicit */unsigned int) arr_9 [4] [i_4]);
                                var_19 = ((((/* implicit */_Bool) ((signed char) arr_11 [i_4 + 3] [i_4 + 3] [i_6]))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) max((((/* implicit */short) var_8)), (var_11)))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_6] [i_4]), (arr_1 [i_4 - 1] [i_5]))))) : (5519260365015346800ULL)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_9)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((signed char) -187571522));
                            var_23 = ((/* implicit */unsigned char) (-(var_0)));
                            var_24 = ((/* implicit */unsigned char) (-(var_13)));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 1; i_9 < 12; i_9 += 2) 
                        {
                            arr_28 [i_9] [(unsigned short)4] [i_9] = ((/* implicit */int) var_9);
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) ((_Bool) (unsigned char)70))) : (arr_27 [i_4] [(signed char)4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_9 - 1])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */short) (signed char)-26)), (var_11))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (~(min((min((((/* implicit */unsigned int) arr_10 [i_2])), (var_17))), ((~(var_17))))))))));
                            var_28 = ((/* implicit */unsigned int) var_16);
                        }
                        arr_31 [i_4] [i_4 + 2] [i_4 + 2] [i_4] = ((/* implicit */unsigned int) min((-187571531), (((/* implicit */int) (signed char)7))));
                    }
                }
            }
        } 
    } 
    var_29 = var_3;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 1) /* same iter space */
        {
            arr_40 [i_11] [i_12 + 2] [i_12] = ((/* implicit */unsigned int) ((unsigned char) 1505268887));
            var_30 = ((/* implicit */_Bool) arr_38 [i_11] [i_12] [(unsigned char)14]);
        }
        for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            var_31 = ((((/* implicit */_Bool) arr_37 [i_13 + 3] [i_15])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                            arr_54 [i_11] [i_13 + 2] [i_16] [i_15] [3ULL] [i_13 - 1] = ((/* implicit */unsigned char) (~(-187571531)));
                        }
                        var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)8817))));
                        var_33 = ((/* implicit */short) var_3);
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_45 [i_13] [i_13] [i_13 + 1]))));
            /* LoopSeq 2 */
            for (signed char i_17 = 1; i_17 < 18; i_17 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */short) arr_37 [i_13 + 1] [i_13 - 1]);
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        {
                            arr_62 [i_11] [i_17 + 2] [i_17] = ((/* implicit */long long int) ((unsigned char) var_14));
                            arr_63 [i_19] [3] [i_17] [i_17 + 1] [i_17] [i_11] [i_11] = (+(((((/* implicit */int) arr_46 [i_13] [i_17 + 1] [i_18])) >> (((((/* implicit */int) var_8)) - (80))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    var_36 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)1536))) < (var_3))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((~(12927483708694204806ULL))))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_22 = 0; i_22 < 20; i_22 += 1) 
                    {
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_8)) || (var_10)))))));
                        var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(1562875151))))));
                        var_40 = ((/* implicit */unsigned long long int) var_17);
                        var_41 = ((/* implicit */signed char) (+(((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned char)145))))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 20; i_23 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) (+(-1884627862)));
                        var_43 = ((/* implicit */int) ((unsigned long long int) (_Bool)0));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) arr_77 [i_11]);
                        arr_79 [i_11] [i_17] [i_11 + 3] [i_17] [i_11] = ((/* implicit */unsigned long long int) (-(var_17)));
                    }
                    arr_80 [i_13 - 1] [(signed char)9] [i_17] [2ULL] [2ULL] [i_13 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (718339361) : (((/* implicit */int) (unsigned short)55895))));
                }
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 20; i_25 += 3) 
                {
                    for (unsigned char i_26 = 0; i_26 < 20; i_26 += 3) 
                    {
                        {
                            var_45 = arr_83 [i_11 - 1] [i_13] [i_17] [i_25] [i_26] [i_26];
                            var_46 = ((/* implicit */int) (+(((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_17)))));
                            arr_85 [i_11 - 1] [i_13 + 3] [i_17 + 2] [i_11 - 1] [i_17] [i_17] [i_26] = ((/* implicit */unsigned char) ((_Bool) arr_34 [i_13 - 1]));
                        }
                    } 
                } 
            }
            for (signed char i_27 = 1; i_27 < 18; i_27 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_28 = 1; i_28 < 17; i_28 += 4) 
                {
                    for (unsigned char i_29 = 0; i_29 < 20; i_29 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) arr_70 [14ULL] [14ULL])) : (((long long int) var_5))));
                            arr_93 [8] [i_28 + 1] [i_27] [i_13 - 1] [5ULL] = (+(((/* implicit */int) var_16)));
                        }
                    } 
                } 
                arr_94 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_87 [i_11] [i_11 - 1] [i_11] [i_11])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) 3195191377U)) == (5501993252095102944LL))))));
            }
            /* LoopSeq 1 */
            for (int i_30 = 0; i_30 < 20; i_30 += 2) 
            {
                arr_99 [i_11] = var_16;
                /* LoopSeq 3 */
                for (int i_31 = 4; i_31 < 19; i_31 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_32 = 1; i_32 < 19; i_32 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_86 [i_31])) ? (((unsigned long long int) arr_75 [i_11] [(short)6] [i_13 + 2] [i_30] [i_31] [i_30])) : (((/* implicit */unsigned long long int) var_0))));
                        var_49 = ((/* implicit */short) arr_102 [i_11] [i_11] [i_11] [i_11 + 3] [i_11 + 3]);
                    }
                    for (int i_33 = 0; i_33 < 20; i_33 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned short) var_2);
                        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) 1099775919U)) ? (18412385888320690124ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
                        var_52 = ((/* implicit */signed char) (+(-1900991354)));
                    }
                    var_53 = ((/* implicit */unsigned char) (~(-2108621566)));
                }
                for (unsigned char i_34 = 0; i_34 < 20; i_34 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_35 = 2; i_35 < 19; i_35 += 1) 
                    {
                        arr_110 [i_35] [i_35 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_44 [i_35 + 1] [i_11 + 2] [i_11]))));
                        arr_111 [i_35] [i_35] [i_13 + 1] [i_13 + 1] [i_35 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-633658214) : (862676103)));
                        var_54 = ((short) 1855096928);
                    }
                    for (unsigned int i_36 = 2; i_36 < 17; i_36 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_1))))));
                        arr_114 [0U] [i_30] [8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_11 + 4] [i_34])) ? (((/* implicit */int) arr_45 [i_11] [i_11 - 1] [16ULL])) : (((/* implicit */int) (signed char)-11))));
                        var_56 = ((/* implicit */unsigned long long int) (~(1505268887)));
                    }
                    var_57 = ((/* implicit */signed char) var_0);
                }
                for (unsigned char i_37 = 0; i_37 < 20; i_37 += 2) /* same iter space */
                {
                    var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_13 - 1] [i_13 + 3] [i_13] [i_11 - 1] [i_11 + 4])) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)-100))));
                    var_59 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_112 [i_13 - 1] [i_11 + 2] [4U] [i_11] [i_11 + 1] [i_11])) ? (arr_112 [i_13 + 1] [i_11 + 2] [i_11] [0] [i_11 - 1] [0]) : (arr_112 [i_13 + 2] [i_11 + 2] [i_11 + 4] [i_11 - 1] [i_11 - 1] [(signed char)15])));
                    arr_117 [i_37] [13] [i_13 - 1] [(signed char)6] = ((/* implicit */signed char) ((_Bool) 862676112));
                    var_60 = ((/* implicit */unsigned char) var_2);
                    arr_118 [i_11 + 4] [i_13 - 1] [i_30] [i_37] = ((/* implicit */short) 862676103);
                }
                /* LoopNest 2 */
                for (unsigned char i_38 = 0; i_38 < 20; i_38 += 1) 
                {
                    for (unsigned int i_39 = 0; i_39 < 20; i_39 += 4) 
                    {
                        {
                            var_61 = ((/* implicit */signed char) ((arr_123 [i_13 - 1] [i_13 + 3] [i_13 + 3] [i_13 + 3] [i_13]) ? (var_12) : (((/* implicit */int) var_9))));
                            var_62 = (short)-22843;
                        }
                    } 
                } 
                var_63 = ((/* implicit */int) arr_1 [15] [i_11]);
                arr_124 [i_30] [(unsigned short)5] [i_11] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) : (var_0));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_40 = 2; i_40 < 19; i_40 += 2) 
            {
                for (unsigned long long int i_41 = 0; i_41 < 20; i_41 += 2) 
                {
                    {
                        var_64 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_98 [i_11] [i_11 + 2] [i_11] [(short)17]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_78 [i_41] [i_40 + 1] [i_13] [i_13 - 1] [i_11 + 3])) ? (((/* implicit */int) arr_52 [i_41] [i_40 + 1] [i_11] [i_11])) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) (short)22837)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1294))) : (var_0)))));
                        /* LoopSeq 1 */
                        for (signed char i_42 = 0; i_42 < 20; i_42 += 2) 
                        {
                            arr_134 [(signed char)12] [(signed char)12] [i_40] [i_40] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_91 [i_11] [i_11] [i_11 + 3] [i_40] [i_41] [i_41])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)186))));
                            arr_135 [i_42] [i_41] [i_40] [i_13] [i_11] = ((/* implicit */unsigned short) ((signed char) arr_34 [i_11]));
                            arr_136 [i_11] [i_13] [i_40] [i_41] [i_42] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_43 = 2; i_43 < 18; i_43 += 3) 
        {
            arr_139 [i_11 + 1] [i_43] [i_43] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))));
            /* LoopNest 2 */
            for (unsigned int i_44 = 0; i_44 < 20; i_44 += 3) 
            {
                for (short i_45 = 0; i_45 < 20; i_45 += 1) 
                {
                    {
                        arr_146 [i_11] [i_43] [i_44] [i_45] = ((((/* implicit */_Bool) arr_38 [i_11 + 1] [i_11] [i_11])) ? (arr_84 [i_11 + 2] [i_11 + 2] [i_43] [i_44] [(short)7] [i_44]) : (((/* implicit */int) (short)-17864)));
                        var_65 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-25611))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62540))) : (arr_36 [i_11 - 1] [i_45] [i_45])));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned int i_46 = 0; i_46 < 20; i_46 += 4) 
        {
            for (int i_47 = 0; i_47 < 20; i_47 += 4) 
            {
                for (unsigned long long int i_48 = 0; i_48 < 20; i_48 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_49 = 0; i_49 < 20; i_49 += 2) 
                        {
                            arr_160 [i_48] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_155 [i_11 - 1] [i_11 - 1] [i_11 - 1]))));
                            var_66 = ((/* implicit */unsigned int) arr_3 [i_11 + 2]);
                        }
                        for (_Bool i_50 = 0; i_50 < 0; i_50 += 1) 
                        {
                            var_67 &= ((/* implicit */unsigned long long int) ((_Bool) var_7));
                            var_68 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (signed char)105)) : (887177108)));
                        }
                        for (unsigned int i_51 = 3; i_51 < 16; i_51 += 4) 
                        {
                            var_69 = ((/* implicit */unsigned int) max((var_69), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (-1505268887))))));
                            arr_165 [i_48] [i_48] [(_Bool)1] [19ULL] [i_46] = ((/* implicit */short) (unsigned short)59737);
                            arr_166 [i_48] [i_48] [9LL] [i_48] [i_48] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53514)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(91760843U)))));
                        }
                        for (unsigned int i_52 = 0; i_52 < 20; i_52 += 2) 
                        {
                            arr_169 [i_48] [i_46] [i_47] [i_48] = ((/* implicit */long long int) ((short) var_15));
                            arr_170 [11LL] [i_46] [i_48] [i_46] [i_46] [15U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_122 [i_11 - 1] [i_11 + 3] [i_11 + 1])) ? (arr_122 [i_11] [i_11 - 1] [i_11 + 2]) : (var_12)));
                            var_70 = ((/* implicit */unsigned int) var_3);
                        }
                        var_71 = ((/* implicit */short) min((var_71), (((/* implicit */short) (+(((/* implicit */int) var_16)))))));
                        /* LoopSeq 1 */
                        for (int i_53 = 1; i_53 < 18; i_53 += 3) 
                        {
                            var_72 = ((/* implicit */signed char) ((_Bool) arr_52 [i_53 + 2] [19U] [i_47] [i_48]));
                            var_73 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (var_17) : (((/* implicit */unsigned int) arr_69 [i_11 + 2] [i_11 + 2] [i_11 + 3] [i_11 - 1] [i_11 + 2] [i_11 + 3] [i_11 + 3]))));
                        }
                        var_74 = ((int) ((var_13) >= (((/* implicit */int) var_8))));
                    }
                } 
            } 
        } 
    }
}
