/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188371
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
    var_16 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((-1), (arr_1 [i_0] [i_0]))) / (((var_7) - (((/* implicit */int) var_10))))));
        var_17 = ((/* implicit */long long int) (signed char)-1);
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_10))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    for (signed char i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_7 [i_2 + 2] [i_2 - 1])))));
        var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_2 + 1] [i_2])))) / (min((arr_7 [i_2] [i_2]), (((/* implicit */long long int) var_12)))));
    }
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_15))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (2ULL))) >> (((((((var_13) + (9223372036854775807LL))) >> (((var_12) - (3501689378U))))) - (1387268557658582LL))))) : (var_5)));
    /* LoopSeq 4 */
    for (int i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        var_23 = var_15;
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
        {
            arr_12 [i_4] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned short) max((((/* implicit */short) arr_10 [i_4] [i_4] [i_4])), (var_8)))), ((unsigned short)56302)));
            arr_13 [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((-2472469913102589986LL), (((/* implicit */long long int) ((var_5) < (var_5))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (6632034149111903391ULL)))));
            var_24 = ((/* implicit */unsigned short) (((_Bool)1) ? ((+(((/* implicit */int) arr_11 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)148)))))));
            arr_14 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 11814709924597648225ULL))));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            var_25 -= ((/* implicit */signed char) var_0);
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) (short)24150)) >> (((((/* implicit */int) (signed char)-11)) + (33))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                var_27 = ((/* implicit */short) ((unsigned char) (+(var_1))));
                var_28 = ((/* implicit */unsigned char) -275050361);
                var_29 = ((/* implicit */int) ((unsigned short) ((((var_7) | (((/* implicit */int) var_3)))) <= (((/* implicit */int) arr_18 [i_3] [i_9] [i_9])))));
            }
            arr_26 [i_5] [i_5] = ((/* implicit */unsigned int) ((((min((35184372072448ULL), (((/* implicit */unsigned long long int) var_11)))) > (((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */long long int) var_11))))))) && (((/* implicit */_Bool) arr_9 [i_3]))));
        }
        for (int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                arr_33 [i_10] [i_11] = ((/* implicit */int) arr_28 [i_3] [i_3] [i_3]);
                var_30 = ((/* implicit */unsigned char) var_4);
                arr_34 [i_3] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)24155)), (var_15)))))) || (((/* implicit */_Bool) (((~(var_11))) - (arr_19 [i_3] [i_10]))))));
            }
            for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */short) ((arr_9 [i_12]) == (((((((/* implicit */int) var_9)) & (((/* implicit */int) var_9)))) >> (((((/* implicit */int) arr_30 [i_13])) + (88)))))));
                            var_32 = ((/* implicit */unsigned char) ((((var_1) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))))) << (((unsigned int) (_Bool)1))));
                            arr_41 [i_3] [i_10] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */int) (signed char)10)) - (((/* implicit */int) (signed char)-40)))), (((/* implicit */int) var_8))));
                            var_33 += ((((/* implicit */long long int) ((/* implicit */int) min((arr_20 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1]), (arr_20 [i_3 + 2] [i_3] [3] [i_3 + 1] [i_3] [i_3 + 2]))))) - (min((((/* implicit */long long int) var_11)), (var_2))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_15 = 1; i_15 < 16; i_15 += 2) 
                {
                    var_34 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_12])) - (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) | (var_4)))))) ? ((-(-2472469913102589973LL))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_10 [(short)16] [i_12] [i_15])) + (2147483647))) >> (((((/* implicit */int) var_10)) - (4982))))))));
                    arr_45 [i_3] [i_3 + 2] [12LL] [i_10] [i_3] = ((/* implicit */unsigned long long int) arr_38 [i_3] [i_3 + 2] [i_10] [i_3 + 3]);
                }
                for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 2; i_17 < 19; i_17 += 3) /* same iter space */
                    {
                        var_35 *= ((/* implicit */unsigned char) ((var_11) >> (((/* implicit */int) (_Bool)1))));
                        arr_52 [i_3 + 2] [i_10] [i_10] [i_16] = ((/* implicit */short) arr_9 [i_3 + 1]);
                    }
                    for (unsigned short i_18 = 2; i_18 < 19; i_18 += 3) /* same iter space */
                    {
                        var_36 -= ((/* implicit */short) var_3);
                        arr_55 [i_16] [i_16] &= ((/* implicit */unsigned int) 18446708889337479163ULL);
                        arr_56 [(unsigned short)3] [i_12] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)156)) - (129)))))) <= (arr_31 [i_3 + 4] [i_3] [i_3])));
                    }
                    for (unsigned short i_19 = 1; i_19 < 19; i_19 += 4) 
                    {
                        var_37 = ((/* implicit */signed char) ((35184372072448ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20401)))));
                        var_38 = ((/* implicit */int) min((var_38), ((-(((var_7) & (((/* implicit */int) arr_24 [i_3] [i_3]))))))));
                    }
                    /* LoopSeq 4 */
                    for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        arr_63 [i_3 - 1] [i_10] [i_10] [i_10] [i_20] = ((/* implicit */unsigned short) var_1);
                        arr_64 [i_3] [i_10] [i_12] [i_20] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_10]))));
                        arr_65 [i_10] [i_10] [i_12] [i_10] [i_3 + 3] = ((/* implicit */int) (short)-17828);
                        var_39 -= ((/* implicit */short) ((unsigned short) min((var_5), (((/* implicit */unsigned long long int) ((short) (unsigned char)82))))));
                    }
                    for (long long int i_21 = 3; i_21 < 18; i_21 += 4) 
                    {
                        arr_69 [i_3 + 3] [i_10] [i_10] [i_12] [i_12] [(unsigned char)17] [i_10] = ((/* implicit */unsigned char) var_8);
                        var_40 -= (+(((/* implicit */int) (short)-31571)));
                        var_41 = ((/* implicit */unsigned char) var_2);
                        var_42 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (signed char i_22 = 0; i_22 < 20; i_22 += 4) 
                    {
                        arr_72 [i_10] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) min((arr_24 [i_22] [i_12]), (var_3)))) - (41))))))));
                        var_43 = ((/* implicit */int) (-(35184372072449ULL)));
                    }
                    /* vectorizable */
                    for (long long int i_23 = 1; i_23 < 18; i_23 += 1) 
                    {
                        arr_77 [i_23 + 2] [i_16] [i_16] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) arr_44 [i_16])) : (((/* implicit */int) var_14))));
                        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_2))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (-1049488968))))))));
                    }
                    arr_78 [(short)8] [i_10] [i_10] [i_16] = ((/* implicit */unsigned int) arr_48 [16ULL] [i_10] [i_12] [i_16]);
                }
                for (unsigned short i_24 = 2; i_24 < 19; i_24 += 3) 
                {
                    var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_50 [i_3] [i_3] [i_12] [i_3])), (arr_57 [i_3] [i_10] [i_12] [19] [i_3 - 2] [i_12]))) - (((long long int) arr_38 [i_3] [i_3] [i_10] [i_24]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_10] [i_3]))) & (((unsigned int) var_11)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0)))))));
                    var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) (-(var_7)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_3]))))))));
                    var_47 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) / (35184372072448ULL)));
                }
                for (unsigned char i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    arr_85 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [12LL] [i_10] [i_10] [i_10])) ? (max((1078907492649353419LL), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (608253004) : (-1)))))))));
                    arr_86 [i_3] [i_12] [i_10] = ((/* implicit */unsigned short) arr_36 [i_3] [i_10] [i_3 + 1]);
                    arr_87 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_4)) <= (var_2)));
                }
            }
            for (unsigned short i_26 = 0; i_26 < 20; i_26 += 2) 
            {
                var_48 = ((/* implicit */unsigned int) max((((((arr_47 [i_10] [i_10] [i_10] [i_10] [i_10]) ? (arr_57 [i_3] [i_10] [i_10] [i_26] [i_3 - 1] [i_26]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10] [i_10]))))) >> (((((/* implicit */_Bool) (unsigned short)9230)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)78)))))), (((/* implicit */long long int) min((var_11), (((/* implicit */int) arr_40 [i_3] [i_10])))))));
                /* LoopSeq 1 */
                for (int i_27 = 4; i_27 < 19; i_27 += 4) 
                {
                    arr_93 [i_3] [i_10] [(unsigned char)18] [i_3] [i_10] = ((/* implicit */signed char) var_4);
                    arr_94 [i_3] [i_3] [i_10] [i_26] [i_10] = ((/* implicit */unsigned int) (-((-((+(((/* implicit */int) var_6))))))));
                    arr_95 [i_27 - 3] [i_10] [i_27 - 2] [i_27] = ((/* implicit */_Bool) var_8);
                    var_49 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_11 [i_10])))) & (((((/* implicit */int) arr_50 [i_3] [i_27 - 2] [i_3 + 2] [18LL])) ^ (((/* implicit */int) max(((unsigned short)56285), (((/* implicit */unsigned short) arr_42 [i_3] [i_3] [i_3] [i_27])))))))));
                    var_50 = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_10] [i_3 + 3] [14U] [i_10]))))) << (((((/* implicit */int) max((arr_18 [i_27] [i_10] [i_10]), (((/* implicit */short) arr_24 [(unsigned char)4] [i_27 - 4]))))) - (32351))))) >> (((((/* implicit */int) arr_30 [i_3 - 2])) / (((/* implicit */int) var_10))))));
                }
                arr_96 [i_3] [i_10] [i_26] [i_10] = ((/* implicit */signed char) var_11);
                arr_97 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_13)) / (((var_5) * (35184372072448ULL)))));
            }
            var_51 ^= ((/* implicit */unsigned char) var_4);
        }
        arr_98 [i_3 - 2] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))))));
    }
    /* vectorizable */
    for (unsigned short i_28 = 0; i_28 < 21; i_28 += 4) 
    {
        arr_101 [(unsigned short)0] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
        var_52 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_4)) * (((((/* implicit */_Bool) -1296938888578632589LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2)))));
    }
    for (unsigned char i_29 = 1; i_29 < 10; i_29 += 4) 
    {
        arr_105 [i_29] = ((/* implicit */long long int) var_7);
        arr_106 [i_29] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_13)));
        var_53 -= var_4;
    }
    for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_31 = 2; i_31 < 17; i_31 += 2) 
        {
            var_54 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_50 [i_30] [i_30] [i_31] [i_31])), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 1061272696078884974ULL)))))))));
            /* LoopNest 3 */
            for (unsigned char i_32 = 0; i_32 < 18; i_32 += 4) 
            {
                for (signed char i_33 = 0; i_33 < 18; i_33 += 4) 
                {
                    for (unsigned short i_34 = 2; i_34 < 17; i_34 += 1) 
                    {
                        {
                            arr_120 [i_30] [5] [i_32] [i_32] [i_34] [(unsigned char)4] |= ((/* implicit */int) max((3429749550U), (1929626567U)));
                            var_55 = ((/* implicit */short) var_15);
                            arr_121 [i_30 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32763)) ? (-1) : (((/* implicit */int) (unsigned char)51))));
                            var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_33])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (1377293405))))))) : (((/* implicit */int) max((arr_113 [i_34 - 1] [i_30 + 1] [i_32]), (((/* implicit */unsigned short) arr_21 [i_32])))))));
                        }
                    } 
                } 
            } 
            arr_122 [i_30] [i_30] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) -7605537342559792520LL)) ? (414621633U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56)))));
            arr_123 [i_30] [i_30] = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (min((((/* implicit */unsigned int) -1)), (2365340728U)))))), (var_12));
            arr_124 [i_30] [i_30] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_14))))) == (max((((/* implicit */unsigned long long int) var_6)), (18446708889337479163ULL))))))));
        }
        for (unsigned long long int i_35 = 2; i_35 < 15; i_35 += 3) 
        {
            var_57 = arr_115 [i_30] [i_35];
            var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) arr_84 [i_30 + 1] [i_35] [i_35 - 2]))));
        }
        for (unsigned short i_36 = 0; i_36 < 18; i_36 += 4) 
        {
            var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(9223372036854775798LL))) + (min((((/* implicit */long long int) arr_20 [i_30] [i_30] [i_30] [i_36] [i_30] [i_30])), (arr_129 [i_36])))))) ? ((((+(((/* implicit */int) var_14)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) arr_114 [i_30] [i_30]))));
            var_60 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (var_4)))) && (((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_14))))))))));
            var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_30 + 1]))) | (var_1)))))))));
            arr_130 [i_30 + 1] [i_36] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_126 [i_30] [i_36] [i_30])), (((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_62 = ((/* implicit */unsigned int) arr_23 [i_36]);
        }
        for (long long int i_37 = 1; i_37 < 14; i_37 += 2) 
        {
            var_63 = ((/* implicit */signed char) var_6);
            arr_134 [i_37] [i_30] = var_1;
            /* LoopSeq 1 */
            for (short i_38 = 0; i_38 < 18; i_38 += 3) 
            {
                /* LoopNest 2 */
                for (short i_39 = 3; i_39 < 15; i_39 += 4) 
                {
                    for (unsigned short i_40 = 1; i_40 < 17; i_40 += 4) 
                    {
                        {
                            var_64 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(-664826194))))));
                            var_65 -= ((/* implicit */_Bool) var_3);
                            arr_144 [i_38] [i_37 - 1] [i_38] [i_39 + 3] [i_37 - 1] = arr_17 [i_37] [i_38] [i_39] [i_40 + 1];
                        }
                    } 
                } 
                var_66 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (arr_143 [i_30] [i_38] [i_38] [i_30] [i_38] [i_30 + 1] [i_37]) : (((/* implicit */int) (unsigned short)11549)))), (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_38] [i_38] [i_37] [i_30]))) : ((+(var_12)))));
                var_67 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (((((/* implicit */_Bool) 18446708889337479167ULL)) ? (((/* implicit */int) arr_108 [i_30] [i_37])) : (var_11))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_25 [i_37] [i_37])))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 1972249020626937072LL)))), ((!(var_9))))))));
                arr_145 [i_30] [i_30] [i_38] = ((/* implicit */short) arr_125 [i_30] [i_30]);
            }
        }
        var_68 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((int) var_3)) >> ((((+(((/* implicit */int) var_3)))) - (27)))))) % (3077284681U)));
    }
}
