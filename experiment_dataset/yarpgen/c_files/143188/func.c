/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143188
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min(((-(2949473355020327065ULL))), (((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [10]))));
                arr_4 [i_0] [i_0] [(signed char)12] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) 2LL)) && (((/* implicit */_Bool) (unsigned short)42055)))))));
                var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1988981559)) ? (705791037) : (((/* implicit */int) (unsigned short)14521))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_14 = ((/* implicit */signed char) -16LL);
                    arr_8 [(_Bool)1] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)-1)))) & (((/* implicit */int) min((arr_6 [i_0] [i_1 + 2]), (arr_6 [i_0] [i_1 + 2]))))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */int) arr_7 [i_0]);
                                var_16 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_3 - 1] [i_5] [i_0]))));
                                var_17 = (~((~(arr_1 [5ULL] [i_5]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) var_8);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    arr_17 [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (arr_0 [7ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    arr_18 [i_0] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) (signed char)-14);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_6] [i_1] [i_6] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) - (var_0))));
                                arr_27 [i_1 + 1] [i_1 + 1] [i_6] [i_7] [i_7] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)49))) : (-4163854919780134413LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-11))))) : (var_0));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */long long int) min(((_Bool)1), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1 - 2])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_28 [i_9] [i_9])) ? (arr_28 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9]))) + (-4163854919780134413LL))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (1468789554)))) / (arr_28 [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9])))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (unsigned short i_11 = 2; i_11 < 23; i_11 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                    arr_37 [i_10] = ((/* implicit */unsigned short) ((arr_34 [i_9] [(signed char)4] [i_11 + 2] [i_10]) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)114))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [1LL] [i_10] [i_11])) ? (((/* implicit */int) (signed char)-16)) : (var_6)))) ? (((arr_36 [i_9] [(short)21] [24LL]) ? (-4719559742716198010LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)65519)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 4; i_12 < 24; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                {
                    var_22 = (i_12 % 2 == zero) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_39 [i_12] [i_13] [i_12])) - (36))))) : (((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */int) arr_39 [i_12] [i_13] [i_12])) - (36))) + (19)))));
                    var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_43 [i_12 - 2] [i_12 - 3] [i_12 - 4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_12 - 4] [i_12 + 1] [i_12 - 4])) || (((/* implicit */_Bool) -820238584323864097LL))))) : (((((/* implicit */_Bool) arr_43 [i_12 - 1] [i_12 - 2] [i_12 - 3])) ? (((/* implicit */int) arr_43 [i_12 - 2] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_43 [i_12 - 4] [i_12 + 1] [i_12 - 2]))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 2; i_14 < 24; i_14 += 2) 
                    {
                        for (signed char i_15 = 3; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_9] [i_12] [(_Bool)1]))))) != (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))))) : ((~(((((/* implicit */int) (unsigned short)41324)) * (((/* implicit */int) (short)-13906))))))));
                                arr_51 [i_9] [i_9] [i_13] [i_9] [i_12] = ((/* implicit */long long int) ((unsigned long long int) arr_44 [i_15 + 1] [i_12] [4]));
                                arr_52 [i_12] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((arr_28 [i_12 + 1] [i_14 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_12 + 1] [i_12] [i_14 + 1]))))) : (((/* implicit */unsigned long long int) min((arr_40 [i_12] [i_12]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-19671)) : (((/* implicit */int) var_9))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (int i_17 = 2; i_17 < 24; i_17 += 1) 
            {
                {
                    arr_58 [i_9] [i_16] [i_9] [i_9] = ((/* implicit */long long int) (signed char)-2);
                    var_25 += ((/* implicit */long long int) arr_56 [i_16] [(short)0]);
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19648)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_41 [i_17] [i_16] [i_17]))))) ? (var_6) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    }
    for (signed char i_18 = 0; i_18 < 19; i_18 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 2; i_20 < 16; i_20 += 4) 
            {
                for (short i_21 = 0; i_21 < 19; i_21 += 3) 
                {
                    {
                        var_27 -= ((/* implicit */long long int) max((arr_14 [i_18] [i_18] [i_20] [i_21] [i_20]), ((!(((/* implicit */_Bool) var_3))))));
                        arr_73 [i_21] [i_20] [i_19] [i_18] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)0))));
                    }
                } 
            } 
        } 
        arr_74 [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) arr_14 [i_18] [i_18] [14LL] [i_18] [i_18])), (var_5))))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_18] [(signed char)3] [i_18])) || (((/* implicit */_Bool) arr_43 [i_18] [i_18] [(_Bool)1]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15)))))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-19671)) ? (var_10) : (((/* implicit */int) var_5))))))) ? (var_10) : (((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (long long int i_22 = 2; i_22 < 16; i_22 += 4) 
    {
        arr_78 [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_22 - 1] [i_22] [i_22])) ? (((/* implicit */unsigned long long int) arr_40 [i_22] [i_22])) : (((((/* implicit */_Bool) (unsigned short)43489)) ? (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_22] [23] [(short)19] [i_22]))))) : (((/* implicit */unsigned long long int) 0))))));
        /* LoopSeq 4 */
        for (int i_23 = 0; i_23 < 17; i_23 += 3) 
        {
            arr_82 [i_23] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) (short)19652)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35197))) : (6377078605784500590LL)));
            arr_83 [i_23] = ((/* implicit */unsigned long long int) (signed char)-81);
        }
        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
        {
            arr_86 [11LL] [4] [i_24 + 1] = ((/* implicit */short) min((arr_59 [i_24]), (((/* implicit */long long int) var_3))));
            arr_87 [i_22] [i_22] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) arr_38 [i_24])) : (((int) var_7))))) * (((((/* implicit */_Bool) min((var_9), ((signed char)1)))) ? (min((((/* implicit */long long int) var_10)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            var_30 = ((/* implicit */long long int) (_Bool)0);
            arr_88 [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (+(arr_25 [i_24] [i_24] [6ULL] [i_24] [i_22 - 2])))) ? (((/* implicit */int) arr_56 [i_22 - 1] [i_22 - 1])) : (((/* implicit */int) arr_53 [i_22 - 2] [i_22] [i_24 + 1]))))));
        }
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            arr_91 [(signed char)2] = ((/* implicit */long long int) var_2);
            arr_92 [i_25] [i_22] [i_22] = ((/* implicit */short) arr_42 [i_22] [i_22 + 1] [i_22] [i_22]);
            arr_93 [i_22] [i_25] [(short)11] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_22] [i_22 - 1] [i_22 - 1] [i_25 - 1])) || ((_Bool)1)))), (arr_75 [16ULL])));
        }
        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_27 = 0; i_27 < 17; i_27 += 1) 
            {
                for (unsigned short i_28 = 3; i_28 < 14; i_28 += 2) 
                {
                    {
                        var_31 = (!(((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_22 + 1] [i_26 - 1] [i_28 + 2]))) : (min((arr_90 [i_27]), (((/* implicit */long long int) arr_12 [(unsigned short)4] [i_22] [i_22] [(unsigned short)4]))))))));
                        var_32 = ((/* implicit */long long int) (signed char)-44);
                        arr_103 [i_22] [i_22] [i_22] [i_22 - 2] [i_22] [i_22] = ((/* implicit */unsigned long long int) -1468789552);
                        var_33 = ((/* implicit */short) min((((((/* implicit */_Bool) ((signed char) -8573023347931302563LL))) ? (((/* implicit */int) ((signed char) arr_21 [i_22] [i_22] [i_27] [i_22]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)123))))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (max((((/* implicit */int) arr_34 [3] [3] [i_27] [i_28])), (-1468789544))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_3)))))))));
                    }
                } 
            } 
            var_34 += ((/* implicit */signed char) (_Bool)1);
        }
        /* LoopSeq 2 */
        for (unsigned char i_29 = 2; i_29 < 15; i_29 += 4) 
        {
            var_35 = ((/* implicit */signed char) arr_102 [i_22] [i_22 - 1] [i_29] [i_29]);
            var_36 = ((/* implicit */long long int) arr_38 [i_29 - 2]);
        }
        for (unsigned long long int i_30 = 2; i_30 < 14; i_30 += 2) 
        {
            var_37 = ((/* implicit */short) ((unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_47 [i_22 - 1] [i_22 - 1] [i_22 - 2] [i_22] [i_22] [3LL])))));
            /* LoopNest 3 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                for (signed char i_32 = 2; i_32 < 16; i_32 += 3) 
                {
                    for (int i_33 = 0; i_33 < 17; i_33 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) min((arr_10 [i_31] [i_31]), ((_Bool)1)));
                            var_39 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_95 [i_32 + 1])))) ? (((/* implicit */long long int) -711712158)) : (63LL)));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            arr_119 [i_22] = ((/* implicit */long long int) arr_79 [i_22] [i_22]);
            var_40 = ((/* implicit */long long int) var_2);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_35 = 1; i_35 < 23; i_35 += 1) 
    {
        var_41 = ((/* implicit */short) (((!(arr_54 [i_35] [i_35] [i_35 + 1]))) || (((/* implicit */_Bool) (unsigned short)65535))));
        /* LoopNest 3 */
        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
        {
            for (unsigned short i_37 = 4; i_37 < 23; i_37 += 1) 
            {
                for (_Bool i_38 = 1; i_38 < 1; i_38 += 1) 
                {
                    {
                        var_42 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-85))));
                        arr_132 [i_35] [i_36] [i_37] [i_35] = ((/* implicit */signed char) arr_30 [i_38]);
                        /* LoopSeq 1 */
                        for (signed char i_39 = 0; i_39 < 24; i_39 += 1) 
                        {
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((unsigned short) arr_54 [(unsigned char)4] [i_38 - 1] [i_38 - 1])))));
                            arr_135 [i_35] [i_38] [i_37] [i_35] [i_35] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_128 [i_38 - 1] [i_37 - 4] [i_35])) ? (var_2) : (((/* implicit */int) (_Bool)1))));
                            var_44 = ((/* implicit */long long int) 0);
                        }
                    }
                } 
            } 
        } 
        var_45 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-27)) ? (11197720841596444695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned short i_40 = 0; i_40 < 11; i_40 += 2) 
    {
        var_46 = -5377967893014614048LL;
        arr_140 [i_40] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))));
        arr_141 [i_40] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        arr_142 [i_40] = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_40] [i_40] [i_40] [i_40] [i_40])) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)5549)) : (((/* implicit */int) (signed char)79)))) : ((-(((/* implicit */int) arr_7 [(_Bool)1]))))));
    }
}
