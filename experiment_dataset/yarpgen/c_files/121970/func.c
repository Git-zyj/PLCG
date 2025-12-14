/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121970
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
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_12)), (6))))));
    var_14 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) var_12);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_8 [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned int) (~(max((arr_2 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 + 1]))))));
                arr_9 [i_0 - 1] [i_0] [(unsigned char)2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? (4005882097U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -12)) ? (((/* implicit */int) arr_7 [i_2] [0U] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [7]))))))))));
            }
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) arr_11 [i_1])) ? (((((/* implicit */unsigned long long int) (-(-16)))) * (max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))))));
                        arr_16 [i_3] [i_1] [i_0] = ((/* implicit */int) (unsigned char)51);
                    }
                } 
            } 
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)127)), (arr_11 [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((1865378203U), (((/* implicit */unsigned int) var_3)))))))) : (((/* implicit */int) ((signed char) (-(var_2)))))));
            arr_17 [i_0 - 1] = ((/* implicit */short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))))), (((unsigned short) (+(((/* implicit */int) var_7)))))));
            var_18 += ((/* implicit */int) ((signed char) (-(((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) var_12);
            var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) (-(var_2)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-24753)))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
        {
            arr_23 [(unsigned short)5] [i_6] |= ((/* implicit */long long int) (_Bool)1);
            arr_24 [i_0] [i_6] = ((int) ((((/* implicit */_Bool) -1451608365)) ? (arr_14 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1]) : (arr_14 [i_0] [i_0 - 1] [i_0 - 1] [0] [i_0 - 1] [i_0 - 1])));
            arr_25 [i_0] [i_6] = ((_Bool) min((arr_2 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 + 1])));
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                arr_29 [i_0] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(-502495131))))));
                var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) 14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0 - 1])))));
                arr_30 [i_7] [i_6] [i_6] [i_0 - 1] = ((/* implicit */unsigned char) var_6);
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    arr_34 [i_0] [i_6] [11] [i_7] [i_8 + 1] [(_Bool)0] = ((/* implicit */unsigned int) var_7);
                    arr_35 [i_0] = ((/* implicit */unsigned short) (+(((var_6) | (((/* implicit */long long int) -457741205))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        arr_38 [i_0 - 1] [i_6] [(short)11] [i_9] [i_9] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)0))))));
                        arr_39 [i_9] [i_8 + 1] [i_8] [i_7] [i_6] [i_6] [i_0 + 1] = ((/* implicit */int) var_2);
                    }
                    arr_40 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [2ULL] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                    arr_41 [i_8 + 1] [i_7] [i_6] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned int) 1601164590)) : ((-(var_8)))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) (+((+(((((/* implicit */unsigned long long int) -57097938)) + (arr_2 [i_0] [i_6])))))));
                    arr_45 [i_0 - 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) max((5618100478393284929LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (short)3)))))));
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)4))))) ? (max((1440896723), (-1210863410))) : (((((/* implicit */_Bool) 57097942)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(short)6] [(_Bool)1] [i_10] [i_10])))))))));
                }
                for (unsigned char i_11 = 1; i_11 < 11; i_11 += 1) 
                {
                    var_24 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((var_6) / (((/* implicit */long long int) 2982379057U)))) : (4503462188417024LL))));
                    var_25 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) min(((short)13), (((/* implicit */short) arr_22 [i_0] [i_6] [i_7]))))) > ((+(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        arr_50 [i_0] [i_6] [i_11] = ((/* implicit */short) (+((~(((/* implicit */int) arr_10 [i_0 + 1] [i_11 + 1] [(unsigned short)5] [i_12]))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_15 [i_0] [(short)11] [i_7] [i_11 - 1] [(short)7]))));
                        arr_51 [i_0 - 1] [i_6] [i_7] [i_11 + 1] [i_12 + 2] = ((/* implicit */int) (~(-960502899075934528LL)));
                    }
                    arr_52 [i_0] [i_6] [i_11 - 1] [i_11] = ((/* implicit */unsigned long long int) (unsigned short)10);
                }
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_27 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_6] [i_7] [4U])) : (((int) (+(((/* implicit */int) var_12)))))));
                    arr_55 [i_13] [i_7] [i_7] [i_6] [i_6] [i_0 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 - 1]))));
                }
                arr_56 [i_7] = ((/* implicit */_Bool) (((((~(((/* implicit */int) ((short) (unsigned char)184))))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_7] [3U] [i_7] [i_7] [i_7] [i_7])) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32793))) - (18)))))) ? (((/* implicit */unsigned int) -1573182773)) : ((-(var_9))))) - (2721784523U)))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                var_28 = (!((!((_Bool)1))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */_Bool) var_4)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)232)))))));
                arr_61 [i_0] [i_6] [i_6] [i_14] = ((/* implicit */unsigned short) (+(arr_47 [10] [i_6] [i_0] [i_6] [i_0 - 1] [i_0])));
            }
            for (short i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                var_31 = ((/* implicit */unsigned short) (!((!(arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                arr_65 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 3779875740067404446LL))) ? (((max((arr_1 [i_0 + 1]), (((/* implicit */int) var_0)))) + (((/* implicit */int) ((unsigned char) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max(((_Bool)1), (var_12)))) : (((/* implicit */int) (_Bool)1))))));
            }
            arr_66 [i_0] [i_0 - 1] [i_0] = arr_46 [(signed char)1] [i_6] [i_0 + 1];
        }
        for (long long int i_16 = 1; i_16 < 11; i_16 += 2) 
        {
            arr_69 [8LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_67 [i_16] [i_16]))));
            arr_70 [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */int) var_12);
            var_32 = ((/* implicit */unsigned int) (unsigned short)6470);
            /* LoopSeq 4 */
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_18] [i_17] [(signed char)8] [i_0 - 1] [(unsigned short)4]))));
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) var_7))))) ? ((-(3324771468U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) ? (((/* implicit */long long int) (~(((int) var_0))))) : (((((/* implicit */_Bool) (~(arr_32 [i_18] [(_Bool)1] [i_17] [i_16] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) : (9223372036854775807LL)))));
                    arr_77 [i_0 - 1] [(short)5] [9ULL] [i_18] = ((/* implicit */_Bool) -1977751121023517702LL);
                }
                var_35 ^= ((/* implicit */_Bool) (-(970195820U)));
                var_36 = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) var_12))), ((~(((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_17] [0LL]))))));
                /* LoopSeq 1 */
                for (unsigned char i_19 = 2; i_19 < 11; i_19 += 2) 
                {
                    var_37 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) != (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (short)12363))))))));
                    var_38 &= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) ((_Bool) (unsigned char)255))))));
                    arr_80 [i_17] [4] = ((/* implicit */unsigned short) ((signed char) ((int) arr_58 [i_16 + 1])));
                    arr_81 [i_0] [i_16 - 1] [i_17] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_16 - 1] [i_16 + 1])) ? (arr_68 [i_0] [i_16 + 1]) : (arr_68 [1U] [i_16 + 1])))) ? (((/* implicit */unsigned int) ((int) -57097938))) : ((-(4294967295U)))));
                    arr_82 [i_0] = ((/* implicit */short) 18446744073709551615ULL);
                }
            }
            /* vectorizable */
            for (long long int i_20 = 1; i_20 < 9; i_20 += 1) 
            {
                arr_87 [i_0] [i_20] [i_20] [i_20] = ((((/* implicit */_Bool) (short)-31873)) ? (var_2) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_10))));
                arr_88 [i_0 + 1] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-127)) && (((/* implicit */_Bool) (unsigned char)239))))) & (((/* implicit */int) arr_85 [i_0 - 1]))));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((unsigned int) (_Bool)1)))));
                arr_93 [i_0] [i_16 + 1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (2147483635) : (((/* implicit */int) arr_74 [i_16 + 1] [i_0 + 1]))))));
                var_41 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_16] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_64 [i_0] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (max((var_9), (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)26931)) >> (((((/* implicit */int) var_1)) - (219))))) >> (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_4))))))))));
                var_42 = ((((/* implicit */_Bool) ((arr_49 [i_21] [i_16 - 1] [(short)0] [i_16] [i_0 - 1]) ? (-879372736) : (((/* implicit */int) arr_3 [i_0] [i_16]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_3 [i_16 + 1] [i_0])) ? (((/* implicit */int) arr_49 [i_21] [i_16] [i_16] [i_0 + 1] [10ULL])) : (((/* implicit */int) var_0)))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                /* LoopSeq 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_99 [7U] [i_16] [i_22] [i_23] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (1977751121023517729LL) : (((/* implicit */long long int) ((/* implicit */int) arr_89 [i_0] [i_0] [i_0]))))))) << (((var_2) - (2402357697U)))));
                    var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((short) ((((/* implicit */_Bool) ((int) (unsigned char)214))) ? (((((/* implicit */_Bool) arr_73 [i_0 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (var_9))))))))));
                }
                for (long long int i_24 = 0; i_24 < 12; i_24 += 1) 
                {
                    arr_103 [i_16 - 1] [(unsigned char)9] [i_22] [i_24] [i_24] [i_24] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-43))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32756)))))) : ((~(403939503U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_98 [i_0 - 1])) ? (arr_98 [i_16 + 1]) : (((/* implicit */int) var_0)))))));
                    arr_104 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_7)))));
                }
            }
        }
    }
    var_45 -= (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_11)))))))));
}
