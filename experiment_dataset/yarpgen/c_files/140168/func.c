/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140168
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((unsigned char) ((long long int) 2124177629U)));
                var_21 ^= ((/* implicit */long long int) (signed char)-35);
                var_22 &= ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) % (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))) : (arr_6 [i_2])))))));
        /* LoopSeq 1 */
        for (short i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            arr_11 [i_2] [i_3] = var_4;
            var_24 = ((/* implicit */unsigned int) max(((signed char)-72), (((/* implicit */signed char) (_Bool)0))));
        }
        var_25 = ((/* implicit */unsigned char) max((max((var_4), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1936422001U))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)-1))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_12)) < (var_14)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)74)) && (((/* implicit */_Bool) var_0))))))))));
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_2 [i_2]))));
                            arr_20 [i_5 + 1] [i_4 + 1] [i_5] [i_5] [i_7 - 1] [i_4 + 1] = ((/* implicit */unsigned char) (signed char)-40);
                            arr_21 [i_5] [i_6] [i_5] [i_4 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)-1))) ? (((((/* implicit */_Bool) 1523843254U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-111)))) : ((~(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((var_1) ? (((/* implicit */int) (short)-25)) : (((/* implicit */int) (_Bool)0)))) <= (var_18))))) : (max((((/* implicit */unsigned int) (!((_Bool)0)))), ((+(var_7)))))));
                        }
                        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
                        arr_22 [i_2] [i_2] [i_4] [i_5] [i_5] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_5])) ? (((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) == (max((((/* implicit */unsigned int) var_16)), (2771124041U)))));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 4; i_8 < 15; i_8 += 1) 
                        {
                            var_28 += ((/* implicit */unsigned char) ((long long int) (~(((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            arr_25 [i_8] [i_2] [i_5] [i_5] [i_4] [i_2] = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) ((var_18) == (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                        }
                        for (short i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) (_Bool)1);
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_12))));
                        }
                        for (short i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)44771))) ? (var_11) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_4 [i_2])))))))));
                            arr_30 [i_4] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (((long long int) (unsigned short)42733))))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) 2771124033U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_7))))))) : ((((!(((/* implicit */_Bool) 258637413U)))) ? (((unsigned int) var_0)) : (min((var_4), (((/* implicit */unsigned int) (_Bool)1)))))))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (-(((/* implicit */int) var_17)))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
    {
        arr_35 [i_11] = ((unsigned char) arr_9 [i_11]);
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 15; i_12 += 3) 
        {
            for (unsigned int i_13 = 1; i_13 < 14; i_13 += 1) 
            {
                for (signed char i_14 = 3; i_14 < 14; i_14 += 2) 
                {
                    {
                        arr_43 [(unsigned short)4] [i_13] [(unsigned short)4] [i_14 - 2] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_11]))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_8 [i_14]))));
                        var_34 += ((/* implicit */unsigned char) ((long long int) (((_Bool)1) ? (var_18) : (668044073))));
                        var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_11])))))));
                        arr_44 [i_11] [1] [i_12] [i_13] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
        } 
        var_36 -= (-(((/* implicit */int) var_15)));
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-97))))) : (((/* implicit */int) (_Bool)1))));
    }
    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) var_3))));
    /* LoopSeq 3 */
    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)48))));
                            arr_59 [i_15] [i_18] [i_15] [(unsigned char)6] = ((/* implicit */signed char) (+(((1523843254U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_60 [i_15] [i_15] [i_17] [i_15] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) * (((/* implicit */int) ((unsigned char) (unsigned char)179)))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            arr_64 [i_15] [1U] [i_20] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -668044073)) & (4294967295U)));
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) 1522143649U))));
                        }
                        arr_65 [i_15] [i_15] [i_17 - 1] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
                    }
                } 
            } 
            arr_66 [i_15] [i_15] = ((/* implicit */signed char) var_1);
        }
        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */int) min((660243322U), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_68 [i_15] [i_15] [i_21])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) var_0)))))))));
            arr_69 [i_15] [i_15] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_68 [i_21] [i_15] [i_15])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_68 [i_15] [i_15] [i_21]))))));
        }
        arr_70 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (1419021413941979371LL))))) ? ((+(((/* implicit */int) var_19)))) : (((/* implicit */int) (signed char)112))));
        /* LoopNest 2 */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            for (unsigned char i_23 = 1; i_23 < 20; i_23 += 1) 
            {
                {
                    arr_77 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)20))))))) || (((/* implicit */_Bool) (+((-(((/* implicit */int) arr_47 [5U])))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_42 = ((/* implicit */signed char) var_12);
                        arr_80 [i_15] [i_22 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))));
                        var_43 = ((/* implicit */unsigned short) ((((unsigned int) ((unsigned int) var_6))) == (((384788722U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)19666)))))));
                        arr_81 [i_15] [i_15] [(_Bool)1] [i_23 - 1] [i_24] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_18))) ? (((/* implicit */int) arr_50 [i_22 - 1] [i_22 - 1] [i_23] [i_15])) : (((/* implicit */int) var_10))));
                    }
                    for (long long int i_25 = 0; i_25 < 21; i_25 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19666))) : (137438953471LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)71))))))) : (max((((/* implicit */unsigned int) arr_71 [18LL] [i_22 - 1] [i_23])), (((var_19) ? (var_11) : (var_7)))))))));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_22 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (arr_54 [i_22 - 1] [i_22 - 1] [i_23] [i_23 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) & (2334853159U)))));
                        var_46 = ((/* implicit */signed char) 2097151);
                    }
                    for (signed char i_26 = 0; i_26 < 21; i_26 += 3) 
                    {
                        arr_87 [i_15] [(signed char)5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) <= (((((/* implicit */_Bool) ((long long int) var_14))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [(unsigned short)15] [i_22] [i_23 + 1] [i_15]))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-52))))))));
                        var_47 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_56 [i_15] [i_15] [i_15] [i_26])))) : ((((!(var_1))) ? (((((/* implicit */_Bool) var_18)) ? (4611686018427387903LL) : (((/* implicit */long long int) var_18)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 536870911LL))))))))));
                    }
                }
            } 
        } 
        arr_88 [i_15] [i_15] = ((/* implicit */short) (-(((((/* implicit */int) ((short) 0U))) | (((/* implicit */int) ((_Bool) -5034958328041314827LL)))))));
        arr_89 [i_15] = ((unsigned int) ((unsigned short) (_Bool)1));
    }
    for (signed char i_27 = 0; i_27 < 16; i_27 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_28 = 2; i_28 < 15; i_28 += 2) 
        {
            var_48 = ((/* implicit */signed char) ((long long int) (unsigned char)171));
            var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned char)68))) != (((/* implicit */int) arr_50 [i_27] [i_27] [i_27] [i_28]))));
        }
        /* vectorizable */
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            var_50 = ((((/* implicit */long long int) ((var_2) / (((/* implicit */int) (signed char)-43))))) < ((-(var_9))));
            /* LoopSeq 2 */
            for (unsigned char i_30 = 3; i_30 < 15; i_30 += 4) 
            {
                var_51 = ((/* implicit */long long int) min((var_51), ((+(((long long int) (signed char)79))))));
                /* LoopNest 2 */
                for (int i_31 = 3; i_31 < 14; i_31 += 4) 
                {
                    for (unsigned short i_32 = 0; i_32 < 16; i_32 += 1) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-71)) ? (652048436) : (((/* implicit */int) (unsigned char)255)))))));
                            var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) arr_47 [i_32]))));
                            arr_106 [i_30] [i_29] [i_30] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_29] [i_31 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)));
                            var_54 = ((/* implicit */unsigned int) ((unsigned short) ((short) (short)13)));
                        }
                    } 
                } 
                arr_107 [i_27] [9U] [i_30] = ((/* implicit */long long int) var_13);
                var_55 = (-(4294967295U));
            }
            for (unsigned int i_33 = 0; i_33 < 16; i_33 += 3) 
            {
                var_56 &= ((/* implicit */short) ((signed char) 4294967286U));
                var_57 = ((/* implicit */unsigned char) var_1);
            }
        }
        for (signed char i_34 = 1; i_34 < 13; i_34 += 1) /* same iter space */
        {
            var_58 = ((/* implicit */unsigned char) (unsigned short)51189);
            /* LoopNest 2 */
            for (unsigned char i_35 = 0; i_35 < 16; i_35 += 1) 
            {
                for (int i_36 = 0; i_36 < 16; i_36 += 1) 
                {
                    {
                        var_59 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_111 [i_35] [i_34 + 3])) > (((/* implicit */int) arr_105 [i_27] [i_34 + 2] [i_27] [i_34 + 2] [i_34 + 3] [i_34] [i_34 + 3]))))));
                        var_60 = ((/* implicit */unsigned short) ((((2109952533) == (((/* implicit */int) (unsigned char)254)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (var_18))))) : (((((/* implicit */_Bool) arr_92 [i_27] [i_27] [i_36])) ? (0U) : (arr_6 [i_35]))))) : ((+(((unsigned int) (_Bool)1))))));
                    }
                } 
            } 
            var_61 = var_11;
        }
        /* vectorizable */
        for (signed char i_37 = 1; i_37 < 13; i_37 += 1) /* same iter space */
        {
            var_62 = ((/* implicit */signed char) (unsigned char)255);
            var_63 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_40 [i_37] [(short)0])) && (((/* implicit */_Bool) (unsigned char)248)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-89)) > (((/* implicit */int) var_1))))) : (((/* implicit */int) ((_Bool) var_10)))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_38 = 0; i_38 < 16; i_38 += 3) /* same iter space */
        {
            arr_123 [i_27] [i_27] [i_27] = ((/* implicit */unsigned short) min(((!((!(var_1))))), (var_19)));
            /* LoopNest 2 */
            for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
            {
                for (unsigned short i_40 = 0; i_40 < 16; i_40 += 1) 
                {
                    {
                        arr_129 [i_27] [i_39] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_42 [i_27] [i_38] [i_38] [i_39] [(unsigned char)5]), (arr_42 [i_40] [i_39] [i_38] [i_27] [i_27])))) + (((/* implicit */int) arr_42 [i_27] [i_38] [i_39] [i_40] [i_40]))));
                        arr_130 [i_27] [i_27] [i_39] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? ((-(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_17)))))))));
                    }
                } 
            } 
            var_64 = ((/* implicit */signed char) ((unsigned short) ((long long int) arr_111 [i_38] [i_38])));
        }
        /* vectorizable */
        for (unsigned char i_41 = 0; i_41 < 16; i_41 += 3) /* same iter space */
        {
            arr_133 [i_41] [i_41] = ((((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_27] [i_41])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_16)));
            var_65 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) (short)-1)))));
        }
        for (unsigned char i_42 = 0; i_42 < 16; i_42 += 3) /* same iter space */
        {
            var_66 = ((/* implicit */unsigned char) min((var_66), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2988103175U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)160)) ? (arr_45 [16U]) : (arr_45 [2U])))))))));
            var_67 = (-(var_3));
        }
    }
    for (unsigned int i_43 = 0; i_43 < 12; i_43 += 1) 
    {
        /* LoopNest 2 */
        for (short i_44 = 0; i_44 < 12; i_44 += 2) 
        {
            for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
            {
                {
                    arr_148 [i_43] [i_44] [i_43] = ((/* implicit */unsigned int) ((signed char) var_12));
                    /* LoopNest 2 */
                    for (_Bool i_46 = 0; i_46 < 1; i_46 += 1) 
                    {
                        for (long long int i_47 = 1; i_47 < 8; i_47 += 2) 
                        {
                            {
                                var_68 = ((/* implicit */signed char) ((unsigned short) (~(var_9))));
                                var_69 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)13127)) % (((/* implicit */int) (_Bool)1))))));
                                var_70 = 15U;
                            }
                        } 
                    } 
                    var_71 = ((var_14) << ((((~(var_18))) - (100325131))));
                }
            } 
        } 
        var_72 = ((/* implicit */int) ((unsigned int) (((!(((/* implicit */_Bool) 3521383U)))) ? (((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (2298985324U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))))));
    }
}
