/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107578
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((2097088ULL), (((/* implicit */unsigned long long int) arr_1 [i_1 + 3] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_1 + 2] [i_1 + 1]), (arr_1 [i_1 + 1] [i_1 - 1])))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 + 3]))))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19752))) : (max((2097088ULL), (arr_3 [i_0] [(unsigned short)9] [1U]))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2097088ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((arr_4 [1ULL] [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_13 [i_3] [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_12 = ((/* implicit */_Bool) arr_15 [17ULL] [i_5]);
                arr_17 [i_3] [(unsigned short)8] [i_3] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5267)) ? (2097088ULL) : (var_0)))) ? (arr_14 [i_3]) : (((/* implicit */unsigned long long int) ((arr_9 [i_4] [i_4]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_3] [i_3]))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_20 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_12 [i_3] [(short)15] [i_3])))));
                arr_21 [i_3] [i_4] [7U] [i_4] = ((/* implicit */long long int) arr_10 [i_6] [i_3] [i_3]);
            }
            for (unsigned char i_7 = 3; i_7 < 18; i_7 += 2) 
            {
                arr_24 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) arr_15 [i_4] [i_7])))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 2; i_8 < 19; i_8 += 3) 
                {
                    arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_7 + 1] [i_4] [i_8 - 2])) ? (((((/* implicit */_Bool) arr_19 [(_Bool)1] [19ULL] [18U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (13510798882111488ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8 - 2] [i_3] [i_7 - 2])))));
                    arr_28 [i_3] [i_4] [i_7] [i_8] = ((/* implicit */signed char) ((_Bool) arr_22 [i_4] [i_4] [i_7 - 1]));
                }
            }
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_9 + 1] [i_9 + 1] [i_9 + 1])) ? (arr_22 [i_9 + 1] [i_9] [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
            /* LoopNest 3 */
            for (long long int i_10 = 3; i_10 < 18; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (int i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        {
                            arr_39 [i_3] [(_Bool)1] [i_3] [i_3] [i_3] [8ULL] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)2])) ? (var_0) : (((/* implicit */unsigned long long int) 5127526242327484683LL))))) ? (((((/* implicit */int) arr_12 [12U] [12U] [i_10])) * (((/* implicit */int) arr_12 [(unsigned short)0] [(unsigned short)0] [i_11])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
                            arr_40 [i_3] [i_10] [(unsigned char)13] = ((/* implicit */short) ((((int) var_7)) / (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_9 [i_3] [15ULL]))))));
                        }
                    } 
                } 
            } 
            arr_41 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_6))) ? (18433233274827440127ULL) : (((/* implicit */unsigned long long int) ((long long int) var_9)))));
            arr_42 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & (((/* implicit */int) arr_36 [i_9 + 1] [(short)12] [i_9 + 1] [i_3]))));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                for (unsigned char i_14 = 2; i_14 < 19; i_14 += 1) 
                {
                    {
                        arr_49 [i_3] [i_3] [i_3] [i_14 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 9223372036854775808ULL))) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) ((short) var_10)))));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(18446744073707454527ULL)))) ? (arr_23 [i_3] [i_3] [i_13]) : (((/* implicit */int) arr_46 [i_3] [i_9 + 1] [i_14 - 2] [i_9 + 1]))));
                        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_9 + 1] [i_14 - 1] [i_14 - 2])) ? (((/* implicit */int) arr_19 [i_9 + 1] [i_14 - 1] [i_14 - 2])) : (((/* implicit */int) var_4))));
                        arr_50 [i_3] [i_9 + 1] [i_13] [12U] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3])) ? (var_6) : (arr_8 [i_3]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (arr_23 [i_3] [i_3] [i_3]))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned short i_17 = 2; i_17 < 19; i_17 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (short)32767))));
                            arr_61 [i_3] [i_3] = ((((/* implicit */_Bool) arr_32 [i_3] [i_18])) || (((/* implicit */_Bool) arr_22 [i_18] [i_15] [i_3])));
                        }
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 1897637154))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */short) arr_53 [(unsigned char)15] [i_3] [i_3]);
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 2) 
        {
            for (int i_20 = 0; i_20 < 20; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (signed char i_22 = 2; i_22 < 19; i_22 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) arr_65 [i_19] [i_19])) > (((/* implicit */int) (_Bool)1))))));
                                arr_72 [i_3] [i_19] [(unsigned short)2] [i_20] [i_21] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_20] [i_3] [(unsigned char)6])) ? (((((/* implicit */_Bool) arr_70 [17LL] [i_19] [i_20] [(short)19] [i_22])) ? (((/* implicit */int) arr_29 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_29 [i_3] [i_3]))));
                                arr_73 [(unsigned short)12] [i_19 + 1] [i_3] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2305843009213693952ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32753))));
                                arr_74 [i_3] [i_19] [i_20] [i_21] = ((/* implicit */unsigned short) ((((arr_64 [i_3] [i_19]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [13ULL] [i_19] [7LL]))))) ? (2097066ULL) : (((/* implicit */unsigned long long int) arr_47 [i_19 - 2] [i_19 - 1] [i_22 - 1] [i_22]))));
                                arr_75 [i_3] [i_3] [(unsigned short)15] [1ULL] [i_3] = (+(arr_64 [i_3] [i_21]));
                            }
                        } 
                    } 
                    arr_76 [i_3] [i_3] [i_3] [3] = ((/* implicit */unsigned short) ((long long int) arr_31 [i_3] [i_19 - 2]));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 3) 
                    {
                        arr_80 [i_23] [i_3] [i_20] [i_19] [i_3] [i_3] = arr_11 [i_3];
                        arr_81 [i_3] [(unsigned short)9] [(signed char)4] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_54 [i_3] [i_23 + 1] [i_3] [i_19 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) -5127526242327484683LL))));
                            arr_84 [7U] [i_23 - 1] [i_3] [(unsigned char)17] [i_3] = ((((/* implicit */_Bool) arr_25 [i_20] [i_23 - 1] [i_20] [i_23] [i_24] [i_3])) ? (arr_35 [(_Bool)1] [i_23 - 1] [i_23] [i_23 + 1] [i_19 - 2] [i_19 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(short)8] [i_19] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_3] [i_3]))) : (-5127526242327484696LL)))));
                        }
                        for (long long int i_25 = 0; i_25 < 20; i_25 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_58 [i_19] [i_23] [i_23 + 1] [i_25] [i_19]))));
                            arr_89 [(short)14] [i_3] [i_20] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) arr_78 [i_19 - 2] [i_19 - 1]));
                        }
                        for (unsigned long long int i_26 = 2; i_26 < 18; i_26 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) var_6);
                            var_23 += ((/* implicit */_Bool) arr_67 [i_3] [i_19 - 1] [1ULL] [i_23 + 1]);
                        }
                        arr_92 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned long long int) arr_91 [i_3] [6ULL] [i_23 + 1] [i_23 - 1] [i_20] [i_20]));
                        /* LoopSeq 1 */
                        for (unsigned int i_27 = 0; i_27 < 20; i_27 += 1) 
                        {
                            var_24 += ((/* implicit */signed char) var_0);
                            arr_95 [i_3] [i_19] [(unsigned short)5] [(unsigned char)15] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (arr_57 [i_3] [i_19 + 1] [i_19 + 1] [i_3])));
                            arr_96 [14ULL] [i_19] [i_3] [i_3] [i_23] [i_27] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 65536)) ? (((/* implicit */int) var_8)) : ((+(arr_88 [i_3] [i_3] [i_19 - 2] [11ULL] [i_23 - 1] [i_3])))));
                        }
                    }
                    for (unsigned long long int i_28 = 1; i_28 < 19; i_28 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_29 = 1; i_29 < 17; i_29 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)13065))) ? (((/* implicit */int) (unsigned short)41057)) : (((((/* implicit */_Bool) (short)-5703)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (_Bool)1))))));
                            arr_102 [i_3] [i_19] [i_19] [i_19 - 2] [i_19] [i_19] = (~(((/* implicit */int) arr_32 [i_28 - 1] [i_19])));
                            var_26 = ((/* implicit */unsigned int) var_0);
                            arr_103 [i_3] [i_19] [i_19] [i_19] [i_3] [i_19 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_19] [(_Bool)1] [i_19 - 2] [i_19 - 2] [i_19 - 2] [i_28 - 1] [i_29 + 3])) ? (((/* implicit */int) (unsigned short)41057)) : (((/* implicit */int) var_10))));
                        }
                        for (int i_30 = 3; i_30 < 19; i_30 += 1) 
                        {
                            arr_108 [i_3] [i_3] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_3] [(short)3] [(short)2] [19LL] [i_3])) ? ((+(arr_8 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_19 - 2] [i_19] [i_20] [i_28 - 1])))));
                            var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_19 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_19 + 1]))) : (arr_82 [i_19] [i_3] [i_28 - 1])));
                            arr_109 [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned short) arr_93 [i_3] [i_3] [i_20] [(_Bool)1] [i_30 + 1]));
                            arr_110 [i_3] [i_3] [2LL] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_106 [i_19 - 1] [i_28 - 1] [i_30 - 3] [i_30] [i_3]))));
                        }
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            arr_113 [i_3] [i_3] [i_20] [15] [i_31] [8ULL] [(unsigned char)2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_90 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_3] [i_19 + 1] [i_20] [i_31])) ? (arr_94 [i_3] [i_19] [i_28] [i_31]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32763)))))) : (arr_78 [i_28] [i_31])));
                            var_28 += ((/* implicit */long long int) ((unsigned short) 260046848U));
                            arr_114 [i_3] [i_19 - 1] [i_31] [i_3] [(unsigned short)10] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 260046848U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_3] [i_3]))))));
                        }
                        for (unsigned short i_32 = 3; i_32 < 19; i_32 += 1) 
                        {
                            arr_117 [i_20] [i_20] [i_3] [i_20] [i_20] = ((/* implicit */unsigned int) ((unsigned long long int) 1073741824U));
                            arr_118 [i_3] [i_3] [i_20] [i_28] [i_32 - 3] = ((/* implicit */unsigned short) (-(2262002347845648537ULL)));
                        }
                        /* LoopSeq 3 */
                        for (int i_33 = 1; i_33 < 19; i_33 += 1) 
                        {
                            arr_121 [i_19] [i_19] [i_19] [i_19 + 1] [i_3] = ((/* implicit */unsigned char) 5127526242327484691LL);
                            var_29 = ((/* implicit */_Bool) ((short) ((unsigned short) -5127526242327484672LL)));
                        }
                        for (unsigned short i_34 = 0; i_34 < 20; i_34 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [(short)18] [i_19] [(short)0] [i_34])))))));
                            arr_125 [i_3] [i_28] [i_20] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_66 [i_28 + 1] [i_20] [i_19 - 1] [i_19 - 1]);
                            arr_126 [(unsigned short)0] [i_19] [i_20] [i_28] [i_3] = -5127526242327484683LL;
                        }
                        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                        {
                            var_31 = (~(((((/* implicit */_Bool) 127U)) ? (16184741725863903079ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))))));
                            var_32 -= ((/* implicit */unsigned char) arr_69 [i_35] [i_3] [(_Bool)1] [7LL] [i_3] [i_3]);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_36 = 1; i_36 < 1; i_36 += 1) 
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))));
                            arr_131 [(unsigned char)1] [i_3] [i_20] [i_3] [i_3] = ((/* implicit */long long int) (unsigned short)248);
                            arr_132 [i_3] [i_3] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7443862858868353985ULL)) ? (7705422579940939083ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763)))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3])) ? ((+(1872457245))) : (((/* implicit */int) arr_83 [i_3] [i_3]))));
                        }
                        arr_133 [i_3] [i_19] [i_3] [i_19] [i_28 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_28 + 1] [(unsigned short)14])) && (((/* implicit */_Bool) var_6))))) - (((arr_30 [i_19]) ? (((/* implicit */int) arr_120 [(signed char)7] [i_3] [i_20] [17LL] [i_3])) : (((/* implicit */int) arr_93 [i_3] [i_19] [i_20] [15ULL] [i_28]))))));
                    }
                    for (unsigned short i_37 = 0; i_37 < 20; i_37 += 3) /* same iter space */
                    {
                        arr_136 [i_3] [i_3] = ((/* implicit */long long int) (signed char)-81);
                        arr_137 [i_3] [i_19] [i_20] [i_37] |= ((/* implicit */unsigned char) var_5);
                        arr_138 [i_19] [i_19] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) var_4));
                    }
                    for (unsigned short i_38 = 0; i_38 < 20; i_38 += 3) /* same iter space */
                    {
                        arr_143 [7ULL] [i_3] = ((/* implicit */unsigned long long int) (+(arr_48 [i_19] [i_19] [(short)3] [i_19 - 2])));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [(unsigned short)15] [(unsigned short)15]) ? (16184741725863903090ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55400))) : (16184741725863903100ULL)));
                    }
                }
            } 
        } 
    }
    var_36 = ((/* implicit */int) ((unsigned short) (+(var_11))));
}
