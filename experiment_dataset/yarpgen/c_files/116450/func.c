/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116450
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3928)) / (((/* implicit */int) (signed char)(-127 - 1)))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (-(((long long int) var_16))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        var_19 = ((long long int) (!(((/* implicit */_Bool) var_13))));
                        var_20 = ((/* implicit */int) 10859901263609132677ULL);
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3935)) || (((/* implicit */_Bool) 3288727541U))));
                            arr_16 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) var_4));
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) (-(arr_14 [i_3 + 3] [i_3 + 2] [i_3] [i_3] [i_3 - 2] [i_3 - 2])));
                            arr_21 [i_0] [i_1] [i_3 + 3] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_17)) * (((/* implicit */int) var_9))));
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_25 [i_0] [(unsigned short)16] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)3934))) ? ((~(((/* implicit */int) arr_1 [i_1] [18])))) : (((/* implicit */int) var_11))));
                        var_23 = ((/* implicit */unsigned short) var_2);
                    }
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) + (((long long int) arr_7 [1LL] [1LL] [i_2]))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((unsigned int) var_0));
                        arr_31 [i_0] [i_7] = ((/* implicit */short) (~((-(var_8)))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) arr_20 [i_1] [i_1] [i_9] [i_8]);
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_7]))));
                            arr_34 [i_0] [i_1] [i_9] [i_7] [i_8] [(_Bool)1] [4] = ((/* implicit */unsigned long long int) ((((-8319160551909829833LL) + (9223372036854775807LL))) >> (((8319160551909829826LL) - (8319160551909829806LL)))));
                            var_28 = ((/* implicit */unsigned int) ((int) 3378098145U));
                            arr_35 [i_9] [i_1] = ((/* implicit */long long int) (+((~(var_18)))));
                        }
                    }
                    var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                    var_30 = var_17;
                    var_31 = ((int) var_5);
                }
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    arr_40 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_1)) - (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_10] [i_0])) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 3) 
                        {
                            {
                                arr_46 [i_11] [i_1] [i_11 + 1] [i_11] [i_12 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_4)) | (((/* implicit */int) var_4))))))) ? ((+(((((/* implicit */unsigned long long int) var_16)) - (arr_30 [(unsigned char)11] [i_1] [0] [i_11] [(unsigned short)11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_24 [i_11 + 1] [i_11 - 1] [i_12 + 2] [i_12 + 3] [i_12 + 1] [i_11]))))));
                                var_32 += ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)236))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_0] [i_1] [i_10] [i_13] [i_1]))))))))));
                                arr_51 [(_Bool)1] [i_10] [i_10] [i_10] [i_14] [i_14] = ((/* implicit */long long int) var_17);
                            }
                        } 
                    } 
                    arr_52 [(short)5] [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                    var_34 = ((/* implicit */long long int) var_17);
                }
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_16 = 3; i_16 < 19; i_16 += 3) /* same iter space */
                    {
                        arr_61 [i_16] [2] [i_15] [i_15] = ((/* implicit */unsigned int) arr_57 [i_0] [i_1] [i_15] [i_16]);
                        arr_62 [i_0] [i_1] [i_0] [i_16] = ((/* implicit */_Bool) (-(var_18)));
                    }
                    for (unsigned short i_17 = 3; i_17 < 19; i_17 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) 1106455327)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) (short)3935))))))) : (arr_12 [i_15] [i_18])));
                            var_36 = ((/* implicit */short) var_3);
                            arr_70 [i_0] [i_1] [i_15] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((8319160551909829826LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 1106455327)))))))) < (arr_43 [i_0] [i_1] [i_17 - 3] [i_15] [i_18] [i_18])));
                        }
                        arr_71 [i_0] [i_1] [i_15] [i_17] [i_1] [i_1] = ((/* implicit */long long int) var_9);
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                            arr_75 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) arr_50 [i_19] [i_19] [i_19] [i_17 - 1] [i_17] [i_17]))) / (((arr_50 [i_17] [i_17 - 3] [i_17 - 1] [i_17 - 2] [i_17] [i_15]) / (arr_50 [i_19] [i_19] [i_19] [i_17 - 3] [i_0] [i_0])))));
                        }
                        var_38 = ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
                        var_39 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_18)), (3361005312166457584ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51735)))));
                    }
                    for (unsigned short i_20 = 3; i_20 < 19; i_20 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_15] [i_15] [(short)12] [16U]);
                        var_41 = ((/* implicit */unsigned short) max((var_2), (((/* implicit */long long int) arr_37 [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (short i_21 = 1; i_21 < 19; i_21 += 2) 
                        {
                            var_42 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max(((short)-1), ((short)32767)))), (arr_54 [i_21 + 1] [i_21 + 1] [i_20 - 2] [i_20 + 1])));
                            arr_80 [i_0] [i_0] [i_0] = arr_39 [8LL] [i_1];
                        }
                        arr_81 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32702)) == (((/* implicit */int) (short)32764))));
                    }
                    arr_82 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) 8489945322952292289LL));
                    arr_83 [i_0] = ((/* implicit */_Bool) (((+(((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_17))))))) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_43 = ((/* implicit */unsigned long long int) arr_39 [i_0] [i_0]);
                }
                var_44 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_76 [17LL] [(short)5] [i_1] [i_1])), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_17)), (var_5)))) ? (arr_43 [9] [9] [i_1] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_22 = 0; i_22 < 14; i_22 += 2) 
    {
        var_45 = ((/* implicit */signed char) arr_32 [i_22] [i_22] [i_22] [i_22] [i_22]);
        var_46 &= ((/* implicit */short) ((int) var_16));
        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8319160551909829825LL)) ? ((~(631561934))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)22))))));
    }
    for (short i_23 = 2; i_23 < 18; i_23 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_26 = 0; i_26 < 20; i_26 += 1) 
                {
                    for (int i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        {
                            var_48 = ((long long int) (unsigned char)79);
                            arr_99 [i_23] [i_23] [i_25] [i_26] [i_27] [i_27] [i_27] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 405476288U)), (((((/* implicit */_Bool) ((unsigned int) -1928695848943625950LL))) ? (-8319160551909829830LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                            arr_100 [i_23] [i_24] [i_25] [i_26] [i_25] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [14LL])))))) + (((arr_18 [10LL] [10LL]) / (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_91 [i_23 - 2] [i_23 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                            arr_101 [i_27] [(unsigned short)1] [i_26] [i_24] [i_24] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3895)) >> (((arr_18 [(_Bool)1] [i_24]) - (3876737847U)))))))))) % (min((((/* implicit */unsigned int) (short)8231)), (arr_6 [i_23 + 2] [i_23 - 2] [i_23 + 2] [i_23 + 2])))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_23 - 2] [i_23] [i_23 - 2] [i_23 + 2]))) ? (var_8) : (((/* implicit */long long int) ((int) (unsigned char)80)))));
            }
            for (unsigned long long int i_28 = 3; i_28 < 18; i_28 += 3) /* same iter space */
            {
                arr_104 [i_23] [i_24] = min((arr_78 [i_28] [14U] [i_28] [i_28] [i_23] [i_23]), (((/* implicit */short) ((((/* implicit */long long int) 33656266)) < (max((((/* implicit */long long int) (short)16380)), (var_2)))))));
                var_50 = ((/* implicit */unsigned int) var_16);
            }
            for (unsigned long long int i_29 = 3; i_29 < 18; i_29 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    arr_109 [i_23] [(short)14] [i_29] [i_30] [i_30] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_108 [i_23] [i_29] [i_29 + 1] [i_29] [i_29] [i_29])) >> (((/* implicit */int) var_17))))))) ? (((/* implicit */int) arr_78 [i_23] [(_Bool)1] [i_24] [i_29] [i_30] [i_30])) : ((~((~(((/* implicit */int) (unsigned char)20))))))));
                    var_51 = ((/* implicit */unsigned short) (~(((int) (unsigned char)194))));
                    var_52 = ((/* implicit */long long int) ((3140186477U) < (((/* implicit */unsigned int) (+(1606804189))))));
                }
                var_53 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)61641)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-16385))))) : ((~(arr_65 [i_24] [i_24] [i_29])))))));
                /* LoopNest 2 */
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    for (long long int i_32 = 0; i_32 < 20; i_32 += 3) 
                    {
                        {
                            arr_114 [i_23] [i_23] [i_23 + 1] [i_29] [i_23] = ((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned long long int) ((unsigned int) var_4))), (((unsigned long long int) 4845928433462212418ULL)))));
                            arr_115 [i_23] [i_24] [i_29] [i_31] [i_32] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 605762001)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61633))) : (5492386900528849906LL))))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)19265)), (max(((+(3111714115202237157LL))), (((/* implicit */long long int) var_17))))));
            }
            /* vectorizable */
            for (unsigned long long int i_33 = 3; i_33 < 18; i_33 += 3) /* same iter space */
            {
                var_55 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)255))));
                /* LoopNest 2 */
                for (unsigned short i_34 = 3; i_34 < 16; i_34 += 4) 
                {
                    for (unsigned int i_35 = 2; i_35 < 19; i_35 += 2) 
                    {
                        {
                            var_56 = ((/* implicit */short) (-(6801921468277916951LL)));
                            var_57 = ((/* implicit */short) var_2);
                        }
                    } 
                } 
            }
            arr_124 [i_23] [i_24] = ((/* implicit */int) var_5);
        }
        arr_125 [i_23] [i_23] = ((/* implicit */short) var_6);
    }
    for (short i_36 = 2; i_36 < 18; i_36 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_37 = 0; i_37 < 20; i_37 += 2) 
        {
            for (_Bool i_38 = 0; i_38 < 0; i_38 += 1) 
            {
                {
                    arr_133 [i_36] [i_37] [i_37] [i_38 + 1] = ((/* implicit */unsigned char) arr_22 [i_36] [i_37] [i_38] [i_36 - 1] [i_37] [i_36]);
                    arr_134 [(_Bool)1] [i_36] [i_37] [(signed char)10] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4294967295U)))) ? (-3111714115202237158LL) : (((/* implicit */long long int) ((/* implicit */int) min(((short)16380), (((/* implicit */short) (signed char)-1))))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_36 + 2] [i_36 - 1] [i_38 + 1] [i_38 + 1] [i_38 + 1]))) - (arr_105 [i_36]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_36 - 1])), (var_10))))))))));
                    var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) var_4))));
                    /* LoopSeq 2 */
                    for (unsigned char i_39 = 0; i_39 < 20; i_39 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8225))) - ((~(((((/* implicit */_Bool) arr_93 [i_36] [i_36] [i_36] [i_36])) ? (arr_87 [i_37] [10LL]) : (((/* implicit */unsigned long long int) -3365398298348092012LL))))))));
                        arr_137 [i_36] [i_37] [i_38 + 1] [i_39] = ((/* implicit */short) var_6);
                    }
                    for (long long int i_40 = 0; i_40 < 20; i_40 += 1) 
                    {
                        arr_140 [i_36] [i_40] [(unsigned short)13] [i_38] [i_36] [i_36] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -3628487682399613587LL)), (249854434328275229ULL)));
                        arr_141 [(unsigned char)7] [i_37] [i_36] [i_37] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_97 [(unsigned char)8] [i_38] [i_40]))))));
                        var_60 = ((/* implicit */int) ((unsigned int) ((((unsigned long long int) arr_54 [i_36 - 1] [i_36 - 1] [i_38] [i_40])) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)19))))))));
                    }
                    arr_142 [i_36] [i_37] [i_36] [i_36] = ((/* implicit */unsigned int) min((max((arr_95 [i_36 - 1] [i_36 + 2] [i_36 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_136 [i_36 + 1] [i_36] [i_36 - 2])) || (((/* implicit */_Bool) -5584380294801740453LL))))))), (((/* implicit */short) arr_106 [8U] [i_37]))));
                }
            } 
        } 
        arr_143 [i_36] = ((/* implicit */unsigned long long int) (-(3111714115202237149LL)));
    }
    for (short i_41 = 2; i_41 < 18; i_41 += 1) /* same iter space */
    {
        var_61 = (short)-13033;
        arr_146 [i_41] = ((/* implicit */long long int) var_4);
        var_62 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_77 [i_41 + 1] [i_41 - 1] [i_41 - 2] [7LL] [i_41 + 2] [i_41]))))));
    }
}
