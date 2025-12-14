/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10538
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
    var_14 = ((/* implicit */unsigned char) ((2804032045U) & (1490935254U)));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) arr_0 [i_0 - 3])), (min((2804032045U), (1490935250U)))))))));
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (min((2140323457U), (16700265U))) : (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))) : (2688603224U)))))) ? (max((1606364071U), (((/* implicit */unsigned int) (signed char)-110)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_1 - 3]), (((/* implicit */unsigned char) (_Bool)1))))))));
                    var_17 = ((/* implicit */unsigned int) ((unsigned short) ((short) 183540805)));
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)113)), (-1830916320)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        arr_12 [i_3 - 2] = ((/* implicit */short) ((signed char) (unsigned char)254));
        var_19 = ((/* implicit */unsigned int) ((signed char) (short)12543));
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        arr_15 [i_4 + 4] = ((((/* implicit */_Bool) 1780817172340247613LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2231379821U)) ? (2688603224U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 + 4] [(unsigned short)12])))))));
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) (signed char)-121)) / (((/* implicit */int) (unsigned char)255))))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                var_21 = ((/* implicit */unsigned char) -6268951685237162741LL);
                var_22 -= ((/* implicit */int) ((unsigned char) arr_4 [i_4 - 1]));
            }
            for (int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                var_23 -= ((/* implicit */short) var_2);
                arr_25 [i_7] [i_7] = ((/* implicit */int) arr_4 [i_4 + 4]);
                arr_26 [i_4 + 3] [i_5] [(unsigned char)13] = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)127));
            }
            for (int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
            {
                arr_29 [(unsigned char)12] [(_Bool)1] [(unsigned char)12] [i_5] = ((/* implicit */unsigned short) ((short) arr_16 [i_4 + 3] [i_4]));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((_Bool) (short)-10574));
                            var_25 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)230));
                        }
                    } 
                } 
                arr_35 [i_4 - 1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (2231034281054310453LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (unsigned short i_12 = 1; i_12 < 15; i_12 += 4) 
                    {
                        {
                            arr_41 [15] [i_5] [i_8] [i_12] [(signed char)15] [(unsigned char)8] [(short)11] = ((/* implicit */unsigned int) ((short) ((short) 7570246957426785920ULL)));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 17210848536408486791ULL)) ? (((/* implicit */int) (unsigned char)221)) : (-1830916320)));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [2U] [i_5])) ? (-8428459509574626055LL) : (var_4))))));
            }
            for (int i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_28 += ((/* implicit */int) ((unsigned int) (_Bool)1));
                            arr_53 [(unsigned char)8] [8U] [i_15] [i_14] [i_15 - 1] = (!(((/* implicit */_Bool) 4294967295U)));
                            var_29 = ((/* implicit */unsigned char) (-((+(4283809850U)))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(arr_49 [i_4 + 2] [i_4] [i_4] [i_5] [2]))))));
                        }
                    } 
                } 
                arr_54 [i_4] [i_5] [i_13] [9] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)-121)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)9696))))) : (((((/* implicit */_Bool) 3956779398U)) ? (((/* implicit */long long int) arr_48 [i_4 + 3] [i_5] [i_13] [i_13])) : (arr_21 [i_4 + 1] [i_5] [i_13])))));
                arr_55 [i_4 + 2] [12U] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_4 - 1])) ? (((/* implicit */long long int) 4294967295U)) : (5030218975542834166LL)));
                /* LoopSeq 4 */
                for (signed char i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                {
                    var_31 = ((unsigned char) 1490935250U);
                    arr_59 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19902)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)125))));
                    var_32 = (((~(-219887635))) ^ (((/* implicit */int) ((unsigned char) 2752044329U))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((unsigned int) arr_19 [i_4 - 2])))));
                }
                for (signed char i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
                {
                    arr_62 [i_4 + 4] [i_5] [i_13] [i_13] = ((/* implicit */unsigned char) arr_16 [i_17] [i_17]);
                    arr_63 [i_17] [i_13] [(unsigned char)12] [i_4 - 1] [i_4] [i_4 + 3] = ((/* implicit */short) ((unsigned char) arr_10 [i_4 + 2] [i_4 + 3]));
                    arr_64 [i_4] [i_5] [i_5] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)1254)) + (-999412964)));
                    var_34 = ((/* implicit */_Bool) ((int) (_Bool)1));
                }
                for (signed char i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                {
                    arr_68 [(_Bool)1] [(_Bool)1] [i_13] [i_18] = ((/* implicit */long long int) (-(((int) (signed char)127))));
                    var_35 -= ((((/* implicit */_Bool) var_0)) ? (arr_67 [i_4 - 1] [i_4 + 3] [i_4 + 4] [i_4 + 4] [i_4 - 2]) : (((/* implicit */unsigned int) arr_9 [i_4 + 3])));
                }
                for (signed char i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                {
                    arr_71 [i_4 + 4] [5] [i_5] [i_13] [i_19] = ((/* implicit */signed char) ((unsigned int) arr_8 [i_4 + 1]));
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -801468728991998800LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3041283593649022160LL))))));
                    arr_72 [i_4] [i_5] [i_13] [i_19] [i_5] = ((/* implicit */int) ((unsigned char) arr_65 [i_4 + 1] [i_4 + 1]));
                }
                var_37 *= ((/* implicit */_Bool) ((int) var_0));
            }
            arr_73 [i_5] = ((/* implicit */long long int) ((int) 18014399345582916618ULL));
        }
        for (int i_20 = 3; i_20 < 14; i_20 += 4) 
        {
            arr_76 [i_20] [i_20] [i_20 - 2] = arr_20 [i_20] [i_4 + 2] [i_4];
            /* LoopSeq 1 */
            for (unsigned int i_21 = 1; i_21 < 13; i_21 += 4) 
            {
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (unsigned short)54926))) <= (((/* implicit */int) arr_58 [i_4] [i_4 + 1] [i_4 + 4] [i_20 - 2] [i_20 - 1] [i_21 + 3])))))));
                arr_79 [i_20] [i_20] [9U] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (1542922966U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            }
            var_39 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_4 + 3] [i_4 + 2])) ? (((/* implicit */int) arr_38 [i_4 + 3] [i_4 - 1] [i_20 + 1] [i_4 + 3])) : (((/* implicit */int) arr_56 [i_20 - 3] [i_20 + 2] [i_20 - 1] [i_4 + 2]))));
            arr_80 [i_4] [i_4 + 2] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (7570246957426785920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4])))));
            var_40 = ((/* implicit */unsigned char) var_4);
        }
        for (unsigned char i_22 = 0; i_22 < 16; i_22 += 4) 
        {
            var_41 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1170837721)) ? (2147483623) : (((/* implicit */int) (unsigned short)45626)))) - (((/* implicit */int) (unsigned short)59217))));
            arr_83 [i_22] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)23641))));
            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) arr_46 [i_4 - 2] [i_22] [i_22] [i_22] [i_4] [i_22]))));
        }
        var_43 -= ((/* implicit */unsigned int) (-(((long long int) 2392509813051222991LL))));
        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((unsigned int) -2392509813051222991LL)))));
    }
    /* LoopNest 2 */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        for (signed char i_24 = 1; i_24 < 9; i_24 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_25 = 0; i_25 < 10; i_25 += 4) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned int) arr_9 [i_23]);
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((51604166), (((/* implicit */int) (unsigned short)6319))))) ? (max((((/* implicit */unsigned int) max((arr_78 [i_25] [i_24] [11]), ((unsigned char)125)))), (((((/* implicit */_Bool) arr_17 [i_25] [i_23])) ? (arr_89 [i_24] [7U] [i_24 - 1] [i_24]) : (837033510U))))) : (((((/* implicit */_Bool) arr_27 [i_25] [i_24 - 1] [i_24 + 1] [i_24 - 1])) ? (((/* implicit */unsigned int) -1867077614)) : (arr_20 [i_24] [i_24 + 1] [i_24])))));
                    var_47 = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (2124864620)));
                }
                for (unsigned short i_26 = 0; i_26 < 10; i_26 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_27 = 0; i_27 < 10; i_27 += 3) 
                    {
                        arr_96 [i_23] [i_24] = ((/* implicit */short) arr_6 [i_23] [i_24 + 1]);
                        var_48 = ((/* implicit */int) ((((/* implicit */long long int) 1487212162U)) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2392509813051222990LL)))));
                        arr_97 [i_23] [i_24] [i_26] [i_24] = ((/* implicit */short) (-(722493196881189195LL)));
                    }
                    var_49 |= ((((min((2147483647), (-1387454302))) + (2147483647))) << (((((((((/* implicit */long long int) 2987515767U)) - (9223372036854775807LL))) + (9223372033867260048LL))) - (8LL))));
                    var_50 = ((/* implicit */_Bool) arr_30 [(unsigned short)7] [i_24] [i_24 + 1] [i_24 + 1] [i_24]);
                }
                for (unsigned short i_28 = 0; i_28 < 10; i_28 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_29 = 0; i_29 < 10; i_29 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) (signed char)-79)) ? (4294967295U) : (2106233205U)))) >> (((((/* implicit */int) ((signed char) 1387454302))) - (56)))));
                        var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)163)), (((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) : (8524462420401383278LL)))))) ? (((/* implicit */long long int) min((((((/* implicit */int) (signed char)-110)) / (-517750776))), (((/* implicit */int) (_Bool)1))))) : (-476783816866267664LL))))));
                        var_53 = ((/* implicit */unsigned int) arr_37 [i_24 + 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]);
                        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 9223372036854775787LL)), (2586252182779959551ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (3599051564U)));
                    }
                    var_55 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) -476783816866267664LL)) ? (15860491890929592064ULL) : (((/* implicit */unsigned long long int) 8524462420401383284LL)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_24 + 1] [i_24 - 1])) ? (arr_10 [i_24 - 1] [i_24 - 1]) : (((/* implicit */unsigned int) 2147483647)))))));
                    var_56 = ((/* implicit */short) arr_42 [i_28]);
                    var_57 |= ((/* implicit */unsigned int) (~(min((((/* implicit */int) (signed char)-110)), (2147483647)))));
                }
                /* LoopNest 3 */
                for (unsigned int i_30 = 0; i_30 < 10; i_30 += 3) 
                {
                    for (short i_31 = 0; i_31 < 10; i_31 += 3) 
                    {
                        for (int i_32 = 3; i_32 < 8; i_32 += 4) 
                        {
                            {
                                arr_111 [i_23] [i_24] [(short)0] [i_24] [i_32] = min((max((arr_27 [i_23] [i_24 - 1] [i_30] [i_32 - 3]), (arr_27 [i_23] [i_24 + 1] [i_30] [i_32 + 2]))), (((((/* implicit */_Bool) arr_27 [12] [i_24 + 1] [i_30] [i_32 - 1])) ? (arr_27 [i_23] [i_24 + 1] [i_32 + 1] [i_32 + 2]) : (arr_27 [(_Bool)1] [i_24 - 1] [i_30] [i_32 - 2]))));
                                arr_112 [i_23] [i_24] [i_30] [i_24] [i_30] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (722493196881189195LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_23] [i_24] [i_23])))))) ? (((unsigned int) arr_110 [i_23] [i_24 + 1] [i_23] [i_31] [i_32 - 1] [i_32])) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_33 = 1; i_33 < 8; i_33 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        for (unsigned char i_35 = 3; i_35 < 9; i_35 += 3) 
                        {
                            {
                                var_58 = ((/* implicit */_Bool) ((int) 9223372036854775807LL));
                                var_59 = ((/* implicit */short) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_60 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_90 [i_24 - 1] [i_24] [i_33 + 1])))));
                    var_61 = ((/* implicit */short) min((max((arr_22 [i_24 + 1] [i_24]), (((/* implicit */int) (signed char)-78)))), (((/* implicit */int) ((15860491890929592061ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))))));
                    var_62 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-109)))), ((~(9223372036854775807LL)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_36 = 0; i_36 < 10; i_36 += 4) 
                {
                    for (int i_37 = 0; i_37 < 10; i_37 += 3) 
                    {
                        {
                            arr_123 [i_24] [3] [i_24] [i_36] [i_36] [i_37] = ((/* implicit */short) arr_81 [i_23]);
                            arr_124 [(signed char)8] [(signed char)8] [i_24] [i_37] = ((/* implicit */int) ((((/* implicit */long long int) var_8)) > (((long long int) (_Bool)1))));
                            var_63 = ((long long int) max((min((((/* implicit */unsigned int) (unsigned char)253)), (2330062831U))), (((/* implicit */unsigned int) (short)-32757))));
                            arr_125 [i_23] [i_23] [i_23] [i_23] [i_23] [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_8)) : (((arr_31 [i_24 - 1] [i_24] [i_24] [i_24 + 1] [i_24 - 1]) - (arr_31 [i_24 + 1] [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_37])))));
                            var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_99 [i_24 - 1] [i_24 - 1] [i_36] [i_37])), (((unsigned short) arr_99 [i_24 - 1] [i_24] [2] [i_24 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_65 = max((((((long long int) var_11)) << (((((2147483647) >> (((2147483647) - (2147483642))))) - (67108815))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
}
