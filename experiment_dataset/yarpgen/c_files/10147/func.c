/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10147
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */int) var_16)) << (((((/* implicit */int) var_17)) - (20418))))), (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) ((short) (unsigned char)11))) >= ((~(((/* implicit */int) (short)32760)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((signed char) max((((/* implicit */int) min((((/* implicit */unsigned short) var_14)), ((unsigned short)62248)))), ((-(var_15))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) >= (0U))))));
            var_21 -= ((1398042657U) >> (((arr_4 [i_1 + 2] [i_1]) - (1060328773))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)73)) >= ((-(((/* implicit */int) var_2))))));
                    arr_12 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_18)) ? (var_9) : (((/* implicit */int) (short)-12312))))));
                }
                for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
                {
                    var_23 = ((unsigned int) arr_0 [i_0]);
                    var_24 = ((/* implicit */short) var_6);
                    arr_17 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-390167133) : (((/* implicit */int) (short)8486))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_4] [i_1])) : (((/* implicit */int) var_5))))) : (((unsigned int) (unsigned char)190))));
                    arr_18 [i_4] [i_4] [i_2] [i_1] [i_4 - 2] [i_2 + 1] = ((/* implicit */unsigned int) (unsigned char)245);
                    var_25 = ((/* implicit */signed char) (unsigned char)103);
                }
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 4) 
                    {
                        var_26 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_2 - 2] [i_6 - 1])) + ((+(((/* implicit */int) var_17))))));
                        arr_24 [i_1] [i_5] = var_11;
                    }
                    for (short i_7 = 3; i_7 < 11; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */short) var_16);
                        arr_27 [i_7] [i_5] [i_5] [i_2] [i_1 + 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1 + 1] [i_0 - 1] [i_7 - 2])) + (arr_3 [i_2 - 2] [i_1 - 1] [i_0 + 1])));
                    }
                    var_28 = ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) (short)-32753)) + (((/* implicit */int) var_11)))) : (arr_4 [i_0 - 1] [i_1 + 2]));
                    var_29 = ((/* implicit */unsigned char) var_6);
                }
                for (short i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    arr_30 [i_8] [i_2] [i_1] [i_0] |= ((arr_15 [0] [0] [i_2 + 1] [i_8]) << (((((/* implicit */int) var_2)) - (20283))));
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (var_3))));
                }
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6)))))));
            }
            for (short i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                var_31 &= ((/* implicit */signed char) ((short) arr_21 [i_0 - 1] [i_1] [i_1] [i_0 - 1]));
                var_32 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_33 = ((/* implicit */short) ((var_7) >= (((((/* implicit */_Bool) 309220568U)) ? (((/* implicit */int) var_12)) : (var_13)))));
                    var_34 = ((/* implicit */short) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_17))));
                }
                for (unsigned char i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    arr_40 [i_0] [(short)5] [i_0] [(short)5] [(short)5] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)12994))));
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-8428))));
                        arr_43 [i_0] [i_0] [i_12] [i_11 + 2] [i_0] = ((/* implicit */short) var_18);
                    }
                    for (short i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                    {
                        var_36 += var_10;
                        arr_48 [i_0 - 1] [i_9] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_4))) >= (((/* implicit */int) arr_6 [i_0] [i_9 + 1] [i_0]))));
                        var_37 *= ((/* implicit */unsigned short) 0U);
                        arr_49 [i_9] [i_9] [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_0 + 1])) << (((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (short)32760)))) - (122)))));
                        var_38 += ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_18)) ? (3063628848U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_39 *= 721713819U;
                        arr_54 [(unsigned char)0] [i_1] [i_9] [i_9] [i_11] [i_11] [i_14] = ((/* implicit */unsigned char) (signed char)-105);
                    }
                    arr_55 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) var_7);
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((arr_15 [i_1 - 1] [i_1 + 2] [i_11 + 3] [i_1 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))));
                }
            }
        }
        for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) /* same iter space */
        {
            arr_58 [i_15 + 3] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_42 [i_15] [(unsigned char)12] [(unsigned char)12] [(short)12] [8U] [i_15 + 2] [i_15])) << (((((/* implicit */int) arr_37 [i_0] [i_0 + 1] [i_15 + 2] [i_15 + 1])) + (18181))))), (max((((/* implicit */int) (unsigned short)27673)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_37 [(signed char)12] [(signed char)12] [12U] [i_15 + 3])) : (((/* implicit */int) var_6))))))));
            var_41 = max(((+(max((((/* implicit */unsigned int) (unsigned char)109)), (492761954U))))), (((/* implicit */unsigned int) max((((/* implicit */short) var_11)), ((short)-22607)))));
        }
        for (unsigned char i_16 = 1; i_16 < 11; i_16 += 4) 
        {
            var_42 -= 419794639U;
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_17 = 2; i_17 < 12; i_17 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_18 = 0; i_18 < 13; i_18 += 3) /* same iter space */
                {
                    var_43 = var_10;
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) 1671910257)) - (arr_61 [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-105))))))));
                    var_45 -= ((/* implicit */unsigned int) var_18);
                }
                for (int i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
                {
                    var_46 = (short)-9222;
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)1)))))));
                    var_48 -= ((/* implicit */short) (~(var_0)));
                }
                /* LoopSeq 3 */
                for (short i_20 = 1; i_20 < 9; i_20 += 4) /* same iter space */
                {
                    arr_72 [i_0] [i_16] [i_17] [i_16] [i_16] [i_17] = ((/* implicit */signed char) ((int) var_13));
                    arr_73 [i_0] [i_0] [i_0] [i_0] [i_17] &= ((/* implicit */unsigned short) ((unsigned int) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 - 1] [i_0 - 1]))))));
                }
                for (short i_21 = 1; i_21 < 9; i_21 += 4) /* same iter space */
                {
                    var_49 = ((/* implicit */short) (unsigned char)243);
                    var_50 = ((/* implicit */signed char) arr_71 [i_0 + 1] [i_16] [i_0 + 1]);
                    var_51 += (~(13560308966048074591ULL));
                }
                for (short i_22 = 1; i_22 < 11; i_22 += 2) 
                {
                    var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((382016062128947647ULL) + (((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))));
                    arr_78 [i_0] [i_16] [i_17 - 2] [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-17339)) ? (((/* implicit */int) arr_59 [i_0] [i_0] [i_16])) : (var_13))) << (((arr_50 [i_0] [i_0] [i_0] [i_0]) - (18214263236715052955ULL)))));
                }
            }
            for (short i_23 = 1; i_23 < 10; i_23 += 3) 
            {
                var_53 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)3272))) ? (((var_13) >> (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) arr_33 [i_0 + 1])))));
                var_54 = ((/* implicit */unsigned int) ((unsigned char) var_10));
                arr_83 [i_16] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned long long int) var_13))))) + (max((((/* implicit */unsigned long long int) var_4)), (arr_82 [i_0 + 1] [i_16] [i_0] [i_0 - 1])))));
            }
            for (unsigned int i_24 = 2; i_24 < 10; i_24 += 4) 
            {
                var_55 *= ((/* implicit */unsigned char) (~(((/* implicit */int) max((((short) (unsigned char)228)), (((/* implicit */short) arr_66 [(short)2] [i_24])))))));
                /* LoopSeq 3 */
                for (short i_25 = 2; i_25 < 10; i_25 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_26 = 1; i_26 < 11; i_26 += 2) 
                    {
                        var_56 = ((/* implicit */short) var_14);
                        var_57 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_85 [i_25 - 2] [(unsigned char)2] [i_24 + 1] [i_25 + 3])), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_21 [i_26] [i_25] [i_16] [i_16])))) - (4123266299U)))));
                    }
                    /* vectorizable */
                    for (short i_27 = 0; i_27 < 13; i_27 += 2) 
                    {
                        var_58 = ((/* implicit */unsigned long long int) (~(var_13)));
                        arr_94 [i_0] [i_0] [i_0] [i_25] [i_0] [i_27] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) + (((/* implicit */int) var_12)))) >= (((/* implicit */int) arr_68 [i_16 - 1] [i_16] [i_0 + 1] [i_24 + 3] [i_25 - 1]))));
                    }
                    arr_95 [i_24] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_81 [10ULL] [i_16] [i_24] [i_24])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))) >> (((((((/* implicit */_Bool) arr_91 [i_0] [12] [i_0] [i_16] [i_25 + 3] [i_25 - 2])) ? (((((/* implicit */_Bool) (short)9608)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_5)))) : (2147483647))) - (124)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 1; i_28 < 10; i_28 += 2) 
                    {
                        arr_99 [i_0] [i_0] [i_16] [i_16] [i_24] [i_25 + 3] [i_28] = var_9;
                        var_59 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (unsigned char)222))), ((~(((int) var_9))))));
                        arr_100 [i_0] [i_16] [i_16] [i_16] [(unsigned char)0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -430847866)), (var_3)))) ? (((/* implicit */int) var_14)) : (-1306865620))));
                        var_60 = ((/* implicit */unsigned short) var_8);
                    }
                    var_61 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (short)16947))) ? (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (var_3))) : (((((/* implicit */_Bool) arr_45 [i_0 - 1] [i_0 + 1] [i_16 + 1] [i_16 + 1] [i_24 + 2] [i_24 - 1] [i_25 - 1])) ? (arr_45 [i_0 - 1] [i_0 + 1] [i_16 + 1] [i_16 + 1] [i_24 + 2] [i_24 - 1] [i_25 - 1]) : (arr_45 [i_0 - 1] [i_0 + 1] [i_16 + 1] [i_16 + 1] [i_24 + 2] [i_24 - 1] [i_25 - 1])))));
                    var_62 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) arr_5 [i_0])))));
                }
                /* vectorizable */
                for (short i_29 = 0; i_29 < 13; i_29 += 3) /* same iter space */
                {
                    arr_103 [i_24 + 1] [i_16] [i_0] [i_16] [i_0] = ((/* implicit */int) var_1);
                    /* LoopSeq 2 */
                    for (unsigned char i_30 = 1; i_30 < 9; i_30 += 1) 
                    {
                        var_63 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_77 [i_30 + 4] [i_24 + 1] [i_24 + 2] [i_16] [i_16 + 2] [i_16])) >> (((unsigned long long int) var_12))));
                        var_64 = var_0;
                        var_65 = ((/* implicit */unsigned int) arr_52 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]);
                        var_66 = ((/* implicit */int) min((var_66), ((~(((/* implicit */int) arr_68 [i_0 + 1] [i_0 + 1] [i_0] [i_24 + 1] [i_30 + 3]))))));
                    }
                    for (int i_31 = 4; i_31 < 11; i_31 += 2) 
                    {
                        var_67 = ((/* implicit */int) max((var_67), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_104 [i_0] [i_0 - 1] [i_24 + 2] [i_24 + 1] [i_31 + 2]))) + (arr_107 [i_31] [i_16 - 1] [i_29] [i_16 - 1]))))));
                        arr_111 [i_0] [(short)8] [i_16] [i_24] [i_29] [i_31 + 1] = ((/* implicit */int) ((unsigned char) var_2));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_32 = 3; i_32 < 11; i_32 += 4) 
                    {
                        var_68 = -19;
                        var_69 = ((/* implicit */int) var_14);
                        var_70 = ((/* implicit */short) (unsigned short)35224);
                    }
                    for (signed char i_33 = 0; i_33 < 13; i_33 += 2) 
                    {
                        var_71 = ((/* implicit */short) max((var_71), (var_2)));
                        var_72 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 2147483647)) : (0ULL)));
                        arr_119 [9U] [i_16] [i_29] [(unsigned short)7] = (~(((/* implicit */int) var_17)));
                        var_73 = ((/* implicit */unsigned int) var_14);
                    }
                }
                for (short i_34 = 0; i_34 < 13; i_34 += 3) /* same iter space */
                {
                    var_74 = ((/* implicit */short) min((var_74), (((short) ((min((((/* implicit */unsigned long long int) (unsigned char)231)), (13030355199584380639ULL))) << (((((/* implicit */int) (short)32764)) - (32763))))))));
                    /* LoopSeq 4 */
                    for (short i_35 = 2; i_35 < 12; i_35 += 2) 
                    {
                        var_75 = ((/* implicit */int) var_0);
                        var_76 = max((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (arr_87 [i_16] [12U] [i_16] [i_16])))), (((((/* implicit */_Bool) -1680200457)) ? (((/* implicit */int) (unsigned short)35222)) : (-119748422)))))), (((4294967291U) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                    }
                    for (unsigned int i_36 = 2; i_36 < 12; i_36 += 4) /* same iter space */
                    {
                        arr_126 [i_0 + 1] [i_0 + 1] [i_24] [i_16] [i_36] [i_16] = ((/* implicit */unsigned int) (unsigned short)53508);
                        arr_127 [i_0 - 1] [i_16] [i_16] [i_34] [i_36 + 1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_71 [i_16 + 2] [i_16] [i_36 + 1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_37 = 2; i_37 < 12; i_37 += 4) /* same iter space */
                    {
                        var_77 += ((/* implicit */short) ((unsigned int) var_7));
                        var_78 = ((/* implicit */short) min((var_78), (((/* implicit */short) 129626002U))));
                    }
                    for (unsigned char i_38 = 1; i_38 < 11; i_38 += 4) 
                    {
                        var_79 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)0)) ? (max((((/* implicit */int) arr_44 [i_0] [i_0] [i_24] [i_34] [i_38])), (var_15))) : (((/* implicit */int) arr_14 [6ULL] [i_24 + 1] [i_0])))) >= (((var_7) >> (((/* implicit */int) arr_9 [i_16 + 2] [i_24 + 2] [8ULL] [8ULL]))))));
                        var_80 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_16] [i_0] [i_34] [i_38])) ? (((/* implicit */int) ((short) var_17))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_93 [i_0 - 1] [i_0 - 1] [i_24 - 2] [i_24 + 2])), (var_18))))));
                    }
                }
            }
            arr_133 [i_16] [i_16] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_11))) < (((/* implicit */int) (short)16932)))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_39 = 0; i_39 < 13; i_39 += 1) 
        {
            var_81 = arr_52 [i_39] [i_39] [i_39] [i_39] [i_39];
            arr_137 [i_39] = var_6;
            arr_138 [i_39] = (unsigned short)65508;
        }
        var_82 = ((/* implicit */unsigned char) ((unsigned int) (short)-18217));
    }
    var_83 -= ((/* implicit */short) var_9);
    var_84 ^= ((/* implicit */unsigned short) -1490618929);
    var_85 = ((short) ((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)62946))))) ? (((/* implicit */int) max((var_18), (var_6)))) : (((/* implicit */int) var_18))));
}
