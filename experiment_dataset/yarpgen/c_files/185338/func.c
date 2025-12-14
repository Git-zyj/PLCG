/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185338
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_6)))))))) : (var_5)));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((arr_0 [0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_2))))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) == ((-2147483647 - 1)))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_16)))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [(signed char)9] = ((/* implicit */unsigned short) ((signed char) arr_0 [i_0]));
                            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(arr_0 [i_0]))))));
                            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_4])) ? (var_15) : (((/* implicit */int) (unsigned char)0))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_3] [i_3] [(signed char)6] [i_0]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        }
                    } 
                } 
            } 
            arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [7] [0LL] [i_1 + 1] [1LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1 + 1] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (unsigned int i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))));
                        arr_20 [i_0] [i_1 - 2] [(signed char)9] [(unsigned short)6] = ((/* implicit */signed char) (~(arr_12 [i_6 - 2] [i_6 - 1] [i_1 + 1] [(signed char)6] [i_0])));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 += ((/* implicit */short) min((((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_11 [i_0] [(signed char)0] [4LL] [i_7] [i_7])) - (25))))), ((~(((/* implicit */int) arr_10 [(short)4] [i_7] [i_7] [i_7] [(unsigned char)2]))))));
            var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)-82)) ? (((((/* implicit */_Bool) var_3)) ? (2147483645) : (((/* implicit */int) (_Bool)1)))) : (max((2147483645), (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
            var_25 = ((/* implicit */signed char) var_15);
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(max((arr_3 [(signed char)4]), (((/* implicit */long long int) (unsigned short)65535)))))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_10)))))) ? (((((/* implicit */_Bool) arr_6 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_6 [i_9 - 1] [0LL] [i_9 - 1] [i_9])) : (var_15))) : (((/* implicit */int) var_7))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) -2147483646))));
                    }
                } 
            } 
        }
        var_29 = max((((((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)))) + (arr_19 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_11))))))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 8; i_10 += 4) 
        {
            for (unsigned short i_11 = 1; i_11 < 8; i_11 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        arr_36 [i_0] [(signed char)4] [i_0] [i_11] [i_12] = ((/* implicit */int) ((_Bool) (unsigned char)1));
                        var_30 = ((/* implicit */int) var_16);
                    }
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                    {
                        arr_40 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_13] [(unsigned short)3] = (!(((/* implicit */_Bool) arr_6 [i_0] [7LL] [(_Bool)1] [(unsigned short)6])));
                        var_31 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((min(((-2147483647 - 1)), (((/* implicit */int) var_4)))), (((/* implicit */int) arr_26 [i_0]))))) & ((~(var_13)))));
                        arr_41 [i_0] [(unsigned short)8] [(unsigned short)0] [i_13] = ((/* implicit */signed char) max((2147483647), (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_32 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (var_15) : ((~(((/* implicit */int) arr_43 [(signed char)8] [(short)4] [i_14] [i_10])))))) != ((+(((((/* implicit */_Bool) arr_44 [6ULL] [(signed char)0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_37 [i_0] [(unsigned short)6] [(unsigned short)8] [(unsigned short)8] [i_15]))))))));
                            var_33 = ((/* implicit */unsigned short) var_2);
                            arr_47 [(unsigned char)1] [i_14] [i_0] = ((/* implicit */unsigned short) var_4);
                        }
                        for (signed char i_16 = 2; i_16 < 7; i_16 += 1) /* same iter space */
                        {
                            arr_52 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((-1) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)40042)) != (((/* implicit */int) (signed char)95)))))))) : (max((3285055565680085820ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                            arr_53 [i_14] [i_0] [1ULL] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-108)), (var_14)))) == (((/* implicit */int) ((signed char) arr_11 [i_16] [i_0] [(_Bool)1] [i_0] [i_11 - 1])))));
                        }
                        for (signed char i_17 = 2; i_17 < 7; i_17 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_57 [i_0] [i_11 + 2] [8LL] = ((/* implicit */signed char) -2121947776);
                            arr_58 [(signed char)4] [(signed char)4] [1ULL] [i_0] [i_17] = ((/* implicit */signed char) (~(max((arr_12 [i_0] [i_10 - 1] [i_11 - 1] [i_17 + 2] [i_11 - 1]), (arr_12 [i_10] [i_10 + 2] [i_11 + 2] [i_17 - 1] [i_17])))));
                        }
                        for (signed char i_18 = 2; i_18 < 8; i_18 += 3) 
                        {
                            var_35 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_32 [i_18 - 1] [9ULL] [i_11 - 1] [(signed char)3])) ? (((/* implicit */int) arr_35 [i_18 + 1] [i_18 + 1] [i_14] [i_18 + 1])) : (((/* implicit */int) arr_35 [i_18 - 2] [(unsigned short)4] [i_10] [i_14])))));
                            var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (1272273273U)));
                        }
                        arr_63 [i_14] [i_10 - 1] |= ((/* implicit */signed char) var_6);
                        var_37 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [2U] [2U] [i_10 - 1] [i_0])) ? (((/* implicit */int) arr_26 [(unsigned short)1])) : (var_9))), (((/* implicit */int) arr_23 [i_0]))));
                    }
                    arr_64 [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15161688508029465795ULL)) ? (1835533585) : (((/* implicit */int) (signed char)18))))) ? ((+(arr_38 [i_0] [i_10 + 2] [i_11 + 1] [(_Bool)1]))) : (((/* implicit */int) ((((/* implicit */int) arr_59 [i_0] [i_10 - 1] [i_11 + 1] [(unsigned char)1] [i_10])) == (((/* implicit */int) (unsigned short)56498)))))));
                    var_38 = ((/* implicit */signed char) arr_30 [0U] [0U]);
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */int) arr_18 [(unsigned short)6] [i_0] [6LL])) ^ (arr_38 [i_10 - 1] [i_10] [i_11 - 1] [i_11]))), (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_3))))))) & (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_23 [i_0]))))) + (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10)))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_20 = 0; i_20 < 14; i_20 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_21 = 0; i_21 < 14; i_21 += 2) 
            {
                for (long long int i_22 = 2; i_22 < 13; i_22 += 3) 
                {
                    {
                        arr_77 [i_20] [(signed char)8] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (signed char)-122)) : (-1969319355)))));
                        /* LoopSeq 3 */
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) + ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)31121)) : (((/* implicit */int) var_12))))))));
                            var_41 = ((/* implicit */_Bool) ((((arr_79 [(signed char)2] [i_20] [i_20] [(signed char)2] [i_20] [i_20]) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            arr_81 [i_20] = ((/* implicit */long long int) (((+(((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)40042)))))) + (min((((/* implicit */int) arr_65 [i_19 - 1])), ((~(((/* implicit */int) arr_66 [i_19]))))))));
                        }
                        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_72 [i_20])) ? (max((arr_69 [i_20] [i_22 + 1] [i_19 - 1]), (((/* implicit */long long int) arr_70 [13U] [i_22 + 1] [i_19 - 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_22])) ? (((/* implicit */int) arr_66 [i_19 - 1])) : (((/* implicit */int) arr_66 [i_19 - 1])))))));
                            arr_86 [i_20] [(signed char)7] [i_21] [i_22] [i_22] = ((/* implicit */signed char) (_Bool)0);
                            var_43 = ((/* implicit */signed char) min((var_43), (var_7)));
                            arr_87 [i_20] [i_19 - 1] [(signed char)1] [9ULL] [9ULL] [i_24] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (signed char)-54))) >> (((((((/* implicit */_Bool) (signed char)98)) ? (-7482932186903652526LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) + (7482932186903652551LL)))))), (arr_69 [i_20] [(_Bool)1] [(short)11])));
                        }
                        for (unsigned short i_25 = 2; i_25 < 13; i_25 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned char) var_11);
                            arr_90 [i_20] [7] [7] [7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_75 [i_20] [(unsigned short)9] [1LL] [i_25 - 1])) ? (arr_75 [i_20] [i_20] [i_20] [i_25 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) / (((((/* implicit */_Bool) arr_75 [i_20] [i_19] [i_25 + 1] [i_25 - 2])) ? (arr_75 [i_20] [i_21] [i_25 + 1] [i_25 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            var_45 = (i_20 % 2 == zero) ? (((/* implicit */unsigned short) min((max((((/* implicit */int) min((var_3), (var_3)))), (((((/* implicit */int) var_14)) << (((arr_79 [i_25] [i_20] [i_21] [i_21] [i_20] [i_19]) - (4119570485U))))))), (((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned short) min((max((((/* implicit */int) min((var_3), (var_3)))), (((((/* implicit */int) var_14)) << (((((arr_79 [i_25] [i_20] [i_21] [i_21] [i_20] [i_19]) - (4119570485U))) - (3362371097U))))))), (((/* implicit */int) (signed char)-1)))));
                            var_46 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_88 [i_19] [(_Bool)1] [i_20] [(_Bool)1] [(signed char)0])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_78 [5] [i_20] [5] [i_22] [i_25]) >= (((/* implicit */long long int) 12)))))) : (min((9223372036854775807LL), (((/* implicit */long long int) 4294967295U)))))) != (((/* implicit */long long int) var_11))));
                            arr_91 [i_19] [i_20] [0] [2U] [i_20] [i_21] &= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)124)) & (13)))), (arr_78 [(signed char)8] [(unsigned short)3] [i_21] [i_22] [i_25])));
                        }
                        arr_92 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) (~(4294967295U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_21])) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (signed char)44))))) ? ((+(arr_80 [(short)12] [i_20] [i_20] [7ULL] [i_20] [(signed char)9]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))))));
                    }
                } 
            } 
            arr_93 [i_20] [(signed char)2] [i_20] = ((/* implicit */unsigned long long int) var_4);
            /* LoopNest 2 */
            for (unsigned char i_26 = 0; i_26 < 14; i_26 += 1) 
            {
                for (int i_27 = 0; i_27 < 14; i_27 += 1) 
                {
                    {
                        var_47 = ((/* implicit */long long int) ((unsigned char) 1817539730));
                        arr_98 [i_20] [(unsigned short)10] [2U] [i_26] [i_27] = ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (-2095096105338029281LL) : (((/* implicit */long long int) var_15))))) : (((((/* implicit */unsigned long long int) arr_88 [i_27] [i_20] [i_20] [(_Bool)1] [i_19])) ^ (11082725282589408255ULL))))) > (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3122438603619432707LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_28 = 0; i_28 < 14; i_28 += 4) 
                        {
                            var_48 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_73 [i_19 - 1] [i_19 - 1] [i_19 - 1]), (arr_73 [i_19] [(signed char)6] [i_19 - 1]))))));
                            arr_102 [i_19] [(unsigned char)0] [i_26] [i_27] [i_20] = ((/* implicit */signed char) max((((((/* implicit */int) arr_85 [(unsigned short)10] [0])) >> (((arr_84 [i_19] [i_20] [i_26] [i_27] [i_28]) - (12986486696541975658ULL))))), (((/* implicit */int) arr_70 [i_19 - 1] [i_19 - 1] [(_Bool)1]))));
                            arr_103 [i_20] [i_20] [i_26] [i_27] = ((/* implicit */signed char) ((((arr_76 [i_28] [i_27] [6ULL] [i_27] [i_19 - 1] [(unsigned short)6]) ^ (arr_76 [i_28] [(signed char)3] [i_27] [(short)10] [i_19 - 1] [12U]))) + ((~(arr_76 [i_28] [i_28] [i_28] [(unsigned short)3] [i_19 - 1] [(unsigned short)3])))));
                        }
                        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 7966686168300301536LL)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) arr_71 [i_19 - 1] [i_26])) - (43589))))))));
                        arr_104 [i_19] [i_20] [i_27] [12LL] [i_20] = ((/* implicit */unsigned long long int) arr_71 [(_Bool)1] [i_27]);
                    }
                } 
            } 
        }
        for (unsigned short i_29 = 1; i_29 < 11; i_29 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_30 = 0; i_30 < 14; i_30 += 3) 
            {
                for (unsigned char i_31 = 0; i_31 < 14; i_31 += 1) 
                {
                    {
                        var_50 = ((/* implicit */unsigned short) ((long long int) var_11));
                        arr_113 [13] [(short)11] [i_29] [(short)11] [6LL] [i_29] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) - (min((arr_84 [8U] [8U] [i_29 - 1] [i_29 - 1] [i_31]), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) min(((unsigned short)48221), (((/* implicit */unsigned short) (_Bool)1)))))));
                    }
                } 
            } 
            var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) : (9223372036854775797LL)));
            var_52 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_89 [i_19 - 1])) ? (arr_89 [i_19 - 1]) : (arr_89 [i_19 - 1]))));
            arr_114 [(_Bool)1] [i_29] [i_19] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_68 [i_19])), (var_2)));
        }
        arr_115 [(signed char)0] [10U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_80 [i_19] [9LL] [i_19] [i_19 - 1] [i_19] [(signed char)10]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) * (4294967295U))))));
    }
    for (long long int i_32 = 2; i_32 < 18; i_32 += 4) 
    {
        var_53 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) max((-7966686168300301536LL), (((/* implicit */long long int) (unsigned short)8192))))) ? (((/* implicit */int) arr_118 [i_32 - 2])) : (((/* implicit */int) ((short) 4294967286U))))) : (max((((((/* implicit */int) (signed char)124)) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (signed char)4))))));
        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_15) / (var_11))) ^ (((/* implicit */int) ((var_10) == (((/* implicit */long long int) var_15)))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_116 [i_32 + 1]))))));
    }
    var_55 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1835533586))))) & (((((((/* implicit */int) var_12)) ^ (var_6))) - ((~(((/* implicit */int) var_7))))))));
    var_56 ^= ((/* implicit */int) var_0);
    var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) var_6))));
}
