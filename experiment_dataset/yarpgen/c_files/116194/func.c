/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116194
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
    var_11 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((7376749595132244871ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_12 = ((/* implicit */int) (+(min((11069994478577306745ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (+(7376749595132244871ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) var_2);
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) (-(var_6))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            arr_14 [6U] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) arr_4 [i_1]))))));
            arr_15 [i_4] = ((/* implicit */short) arr_4 [i_4 + 2]);
            var_15 = ((/* implicit */long long int) (((_Bool)1) ? (11069994478577306747ULL) : (((/* implicit */unsigned long long int) 4053558641U))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_4 - 1]))));
                var_17 = arr_1 [i_5];
                arr_19 [i_4] [8ULL] [i_4 + 2] [8ULL] = ((/* implicit */signed char) (~(((var_3) & (((/* implicit */int) (_Bool)1))))));
            }
            arr_20 [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) arr_1 [i_1]))) + (((unsigned long long int) arr_0 [i_4 - 1]))));
        }
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned char) ((var_3) + (((/* implicit */int) arr_10 [i_1] [(short)3] [i_1] [(short)3]))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_0 [i_6])), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_6])))))))) ? ((~(((/* implicit */int) arr_23 [i_6 + 3])))) : ((-(((/* implicit */int) arr_1 [i_6]))))));
        var_19 = ((/* implicit */int) max((var_2), (((/* implicit */unsigned long long int) ((long long int) 11069994478577306728ULL)))));
    }
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_7 - 1]))) <= (1555350215814740475ULL)))) == (((/* implicit */int) arr_24 [i_7] [i_7]))));
        var_20 = ((((/* implicit */_Bool) (short)-17941)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7]))))) : (((/* implicit */int) ((unsigned char) var_7))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        arr_30 [8LL] [(_Bool)1] = ((/* implicit */int) arr_1 [i_8]);
        var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17944))) : (var_4)))));
    }
    for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_10 = 1; i_10 < 7; i_10 += 4) 
        {
            arr_37 [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10 - 1]))) + (arr_3 [i_10 - 1])));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_41 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_10 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9] [i_10 + 1] [i_10 + 1]))) : (var_8)));
                var_22 = ((/* implicit */unsigned char) 2023511546);
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_11] [i_11])) ? (arr_39 [i_11] [i_11]) : (arr_39 [i_11] [i_11])));
                /* LoopNest 2 */
                for (short i_12 = 4; i_12 < 9; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_46 [i_11] [(unsigned short)6] [i_11] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) <= (7376749595132244892ULL))))) == (((((/* implicit */_Bool) arr_28 [i_12 - 2] [i_9])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9] [(short)9] [i_11])))))));
                            arr_47 [i_9] [i_11] [i_9] [i_10] [i_9] [(_Bool)1] [(short)7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_10 - 1] [i_10 - 1])) ? (arr_28 [i_10 - 1] [i_10 + 1]) : (arr_28 [i_10 + 1] [i_10 - 1])));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */short) (unsigned char)56);
            /* LoopSeq 4 */
            for (long long int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */_Bool) ((max((((arr_33 [i_14] [i_9]) | (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_9)))))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2362)) ^ (((/* implicit */int) arr_16 [i_9] [2]))))) | (((unsigned long long int) var_0))))));
                var_26 = ((/* implicit */long long int) arr_24 [10] [i_9]);
                var_27 = ((/* implicit */int) (+(min((11069994478577306772ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) <= (7376749595132244867ULL))))))));
            }
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */int) -8920997620233272126LL);
                var_29 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_36 [i_16])))));
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17955))) : ((-(3933528498U)))));
                arr_56 [i_9] [i_14] [i_16] = ((/* implicit */_Bool) (-(var_3)));
                arr_57 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [(unsigned char)0] [i_14] [(unsigned char)8]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11069994478577306748ULL)))))) : (arr_49 [i_9] [i_16])));
            }
            /* vectorizable */
            for (unsigned int i_17 = 2; i_17 < 7; i_17 += 1) 
            {
                arr_61 [i_9] [i_9] [i_14] [i_17 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */_Bool) 4294967295U)) ? (arr_40 [i_9] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_7)))))));
                arr_62 [i_17] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7376749595132244910ULL)) ? (var_6) : (2319290264U)));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (short i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_54 [i_17 + 1]))));
                            arr_70 [i_19] [i_18] [i_17 + 1] [i_18] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_17 + 1]))));
                            var_32 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 1923947788)) ? (7376749595132244909ULL) : (((/* implicit */unsigned long long int) arr_50 [i_9] [i_14] [i_17] [i_17])))));
                            var_33 = ((/* implicit */int) (~((-(arr_33 [i_19] [i_14])))));
                            arr_71 [i_18] = ((/* implicit */signed char) ((var_8) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (arr_0 [i_9]))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_77 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_49 [i_9] [i_9]) : (((/* implicit */long long int) var_8)))) >= (((((/* implicit */_Bool) 1717197632U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))))))) + (min((((/* implicit */unsigned long long int) arr_52 [i_21] [i_20])), (max((((/* implicit */unsigned long long int) var_7)), (11069994478577306748ULL)))))));
                    /* LoopSeq 1 */
                    for (short i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        arr_82 [i_20] = ((/* implicit */short) min((((/* implicit */int) ((arr_28 [i_20] [i_21]) != (arr_36 [i_14])))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 3737764060U)))))))));
                        arr_83 [(short)1] [i_20] [i_20] [(short)1] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_43 [(unsigned char)0] [i_21] [i_9])))) <= ((+((+(((/* implicit */int) var_0))))))));
                    }
                    arr_84 [i_21] [i_20] [i_20] [7ULL] [i_20] [1LL] = ((/* implicit */int) ((_Bool) (_Bool)1));
                    arr_85 [i_9] [i_9] [i_20] [i_20] = ((/* implicit */short) min((max((var_4), (((/* implicit */unsigned int) arr_75 [i_21] [i_20] [5ULL] [(short)3] [i_9] [i_9])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */int) (short)4623)), (-1049211718))) : (arr_18 [i_20] [i_14] [i_20] [i_21]))))));
                }
                arr_86 [i_20] [i_9] [i_14] [i_20] = ((/* implicit */unsigned char) min((min(((+(var_2))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) (unsigned char)62))))))), (((/* implicit */unsigned long long int) (+(707744015))))));
            }
        }
        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    {
                        var_34 = min((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), ((+(min((11069994478577306749ULL), (((/* implicit */unsigned long long int) var_7)))))));
                        arr_95 [i_24] [i_25] [i_24] [i_24] [i_23] [i_24] = ((/* implicit */unsigned int) max(((-(arr_92 [i_24] [3U] [i_23] [i_24]))), (((arr_92 [i_24] [i_23] [i_23] [i_24]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))))));
                        arr_96 [(short)1] [i_24] [(short)9] [i_24] [i_9] = ((int) ((min((((/* implicit */int) arr_55 [(short)8] [(short)8] [(short)8])), (arr_29 [i_9] [i_25]))) == (((/* implicit */int) (unsigned short)33880))));
                        arr_97 [i_24] = ((/* implicit */int) var_10);
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_27 = 1; i_27 < 7; i_27 += 1) 
                {
                    var_35 = ((/* implicit */signed char) ((unsigned int) var_7));
                    arr_104 [i_9] [1U] [i_23] [(signed char)4] [1U] = arr_88 [i_23];
                    arr_105 [5ULL] [i_27] [8LL] [i_26] [i_23] [i_9] = ((/* implicit */short) var_5);
                    arr_106 [i_9] [i_23] [i_26] [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(1049211718)))) + (((unsigned int) (_Bool)1))));
                    arr_107 [i_9] [(unsigned char)6] [i_26] [i_26] [i_27 + 3] = ((/* implicit */int) (-((~(14774093330778469368ULL)))));
                }
                arr_108 [i_9] [i_23] [i_23] [(short)4] = ((/* implicit */unsigned int) var_1);
            }
            /* LoopSeq 1 */
            for (short i_28 = 0; i_28 < 10; i_28 += 2) 
            {
                var_36 = ((((/* implicit */_Bool) max((arr_65 [i_9] [i_28]), (arr_65 [i_23] [i_28])))) ? (((/* implicit */int) ((unsigned short) 18446744073709551615ULL))) : ((~(((/* implicit */int) (signed char)-43)))));
                arr_111 [i_9] [i_9] [6] = ((/* implicit */signed char) ((arr_58 [5LL] [i_23] [2ULL]) == (((/* implicit */int) var_7))));
                /* LoopSeq 2 */
                for (unsigned short i_29 = 0; i_29 < 10; i_29 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */_Bool) (-((-((~(var_8)))))));
                    /* LoopSeq 1 */
                    for (int i_30 = 1; i_30 < 6; i_30 += 4) 
                    {
                        arr_117 [i_30 + 2] [i_9] [i_30] [(_Bool)0] [i_9] = ((/* implicit */long long int) arr_43 [i_29] [i_29] [i_23]);
                        arr_118 [i_30 + 2] [i_30] [i_28] [i_23] [i_30] [(_Bool)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_74 [(signed char)7] [i_28] [5U] [i_28]))));
                        var_38 = ((/* implicit */short) (~(((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_88 [i_30 + 4])) : (arr_92 [3U] [3U] [i_28] [i_30]))))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) <= ((-(((/* implicit */int) ((unsigned char) var_8)))))));
                    }
                }
                for (unsigned short i_31 = 0; i_31 < 10; i_31 += 4) /* same iter space */
                {
                    arr_122 [8] [5] [i_28] [i_31] [i_31] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) ((var_3) != (((/* implicit */int) arr_72 [i_31] [i_31] [i_28] [(short)8]))))), ((+(3672650742931082260ULL)))))));
                    arr_123 [i_9] [i_28] [(unsigned char)6] = arr_25 [i_28] [i_28];
                    /* LoopSeq 2 */
                    for (int i_32 = 3; i_32 < 9; i_32 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)225))));
                        var_41 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_0))))) <= (min((arr_94 [(_Bool)1]), (-7211263529122240109LL))))))));
                        var_42 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_72 [i_32] [i_32 - 2] [i_32 - 2] [i_32]))));
                        arr_126 [i_32] [i_31] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_49 [i_9] [i_23])))))), (min((((/* implicit */long long int) arr_50 [i_32 + 1] [i_32 - 3] [i_32 - 2] [i_32 + 1])), (min((arr_49 [i_9] [(unsigned char)0]), (((/* implicit */long long int) arr_54 [i_28]))))))));
                    }
                    for (short i_33 = 0; i_33 < 10; i_33 += 4) 
                    {
                        arr_129 [9U] [(signed char)1] [i_33] = ((/* implicit */_Bool) arr_65 [i_9] [7]);
                        arr_130 [i_33] = ((/* implicit */unsigned int) min(((~(((((/* implicit */int) arr_43 [i_9] [i_31] [i_9])) + (((/* implicit */int) var_5)))))), ((+(((/* implicit */int) var_7))))));
                        arr_131 [i_23] = ((int) (short)-682);
                    }
                }
            }
            var_43 = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_0)) != ((-(((/* implicit */int) (unsigned short)18323))))))));
        }
        arr_132 [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_88 [i_9]), (832374617))))))), (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_49 [i_9] [i_9]))))));
        arr_133 [i_9] = ((/* implicit */int) min(((+((+(arr_92 [i_9] [i_9] [i_9] [i_9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [(_Bool)1] [8])) ? (var_3) : (((/* implicit */int) var_7))))) + ((-(var_6))))))));
    }
}
