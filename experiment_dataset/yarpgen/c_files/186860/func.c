/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186860
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
    var_18 = ((/* implicit */unsigned int) (signed char)-107);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19528)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) : ((((_Bool)1) ? ((-(5156994916122669446LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_20 -= ((/* implicit */signed char) arr_1 [i_0]);
        arr_4 [i_0] |= ((/* implicit */unsigned int) ((signed char) var_7));
        arr_5 [i_0] = ((/* implicit */int) ((long long int) 6143207349231307541LL));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_2])))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] [(_Bool)1] [i_3] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_1] [i_3 + 1])))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_0 [i_2] [(_Bool)1])))) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_3 + 1])) : (((/* implicit */int) var_13)))))));
                arr_13 [i_1] [(signed char)0] [i_2] [i_1] &= ((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1]);
            }
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
            {
                arr_17 [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))));
                    arr_20 [i_1] [i_2] = ((/* implicit */long long int) (short)32767);
                }
                arr_21 [i_1] [i_2] [(unsigned char)0] = ((/* implicit */unsigned short) (signed char)-49);
            }
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) < (((/* implicit */int) arr_18 [i_2]))));
                var_25 = ((/* implicit */signed char) ((((long long int) arr_22 [i_2] [i_2] [i_6] [i_6])) >= (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
            }
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [8U]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_7])) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_22 [i_1] [(unsigned short)2] [i_7] [i_7])))));
            arr_27 [i_7] [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_1]))));
            arr_28 [i_7] [i_7] [10U] = ((/* implicit */long long int) (signed char)95);
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_1])), (arr_9 [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    arr_33 [i_1] [i_8] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) var_12);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [i_1] [i_8] = ((/* implicit */unsigned long long int) ((long long int) arr_19 [i_1]));
                        var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1] [i_9] [i_8] [i_10])) ? (-6143207349231307542LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_9] [i_9] [i_8] [i_9])))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) -6143207349231307541LL);
                        arr_39 [i_11] |= ((/* implicit */int) var_5);
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_7] [i_1])) * (((/* implicit */int) var_10)))))));
                        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1408882366711080005ULL))));
                    }
                }
                var_32 ^= ((/* implicit */signed char) ((unsigned short) var_17));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_4)))) ? (((var_10) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1] [i_7] [i_7] [i_8] [i_13] [i_1] [i_14]))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((arr_30 [i_1] [i_8]) ? (((/* implicit */int) arr_2 [i_14])) : (((/* implicit */int) arr_25 [i_7])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_8])))))))));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (683270167U)));
                            arr_47 [6U] [i_8] [i_8] [i_8] [0U] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5156994916122669446LL)) ? (var_11) : (((/* implicit */long long int) 1048575U))));
                            arr_48 [i_1] [i_8] [i_8] [i_13] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) ((_Bool) 6143207349231307541LL)))))) ? (((((/* implicit */_Bool) 4489548488112182738LL)) ? (-1LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_14]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_14] [i_13] [6ULL] [i_7] [i_7] [10LL] [i_1])) ? (((/* implicit */int) ((unsigned short) arr_23 [i_8] [5U] [i_8]))) : (((/* implicit */int) ((unsigned short) arr_30 [i_7] [i_8]))))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (signed char)25))));
                        }
                    } 
                } 
                var_36 ^= ((/* implicit */unsigned short) ((short) (signed char)1));
            }
            /* LoopSeq 1 */
            for (unsigned char i_15 = 1; i_15 < 10; i_15 += 1) 
            {
                arr_51 [i_1] [i_7] [i_15 - 1] = (signed char)70;
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        {
                            arr_58 [9ULL] [9ULL] [i_7] [0LL] [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_11 [i_7] [i_1] [i_17]), (arr_11 [i_16] [i_16] [i_7]))))));
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (~(6143207349231307541LL))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_0 [i_1] [i_1]))));
                    var_39 = ((/* implicit */signed char) var_7);
                }
            }
        }
        arr_62 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_56 [(_Bool)1] [i_1])), (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_14 [i_1] [(_Bool)1] [i_1])) : (var_11)))));
    }
    var_40 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 3 */
    for (short i_19 = 2; i_19 < 21; i_19 += 3) 
    {
        arr_66 [i_19] = ((/* implicit */_Bool) max((max((var_5), (((/* implicit */short) ((_Bool) (signed char)-36))))), (((short) ((_Bool) var_12)))));
        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_19 - 1] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))) : (((((/* implicit */_Bool) max((4489548488112182739LL), (((/* implicit */long long int) arr_63 [(short)4]))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_65 [(short)7] [i_19]) : (((/* implicit */unsigned long long int) 1869398918U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -960315494))))))));
        /* LoopSeq 1 */
        for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
        {
            var_42 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_67 [i_20] [(signed char)4] [(signed char)4])) > (((/* implicit */int) arr_67 [i_20] [i_19 - 1] [i_19 + 2]))))), (arr_68 [i_19] [i_20])));
            var_43 = ((/* implicit */unsigned short) var_14);
        }
    }
    for (signed char i_21 = 0; i_21 < 17; i_21 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 2) 
        {
            for (int i_23 = 0; i_23 < 17; i_23 += 4) 
            {
                for (unsigned short i_24 = 0; i_24 < 17; i_24 += 2) 
                {
                    {
                        arr_78 [i_21] [(unsigned short)1] [i_23] [i_23] [(unsigned char)6] [i_24] = ((/* implicit */int) max((max((arr_64 [i_21]), (arr_64 [i_21]))), (((/* implicit */unsigned int) (signed char)49))));
                        /* LoopSeq 1 */
                        for (long long int i_25 = 0; i_25 < 17; i_25 += 2) 
                        {
                            var_44 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4489548488112182752LL)) ? (4489548488112182739LL) : (((/* implicit */long long int) ((/* implicit */int) (short)31417)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_79 [(signed char)9] [i_25] [i_25] [i_25] [i_25]))) + (-9110070805367928199LL))) : (((/* implicit */long long int) ((arr_73 [i_21]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((arr_77 [i_21]), (((/* implicit */short) var_6))))))))));
                            arr_81 [i_21] [i_22] = ((/* implicit */unsigned char) arr_64 [i_21]);
                            arr_82 [i_21] [i_21] [(_Bool)1] [i_21] [(_Bool)1] [i_21] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned short) arr_71 [i_21])), (arr_80 [i_25] [i_24] [i_23] [i_23] [i_22] [i_21])))) ? (((((/* implicit */_Bool) arr_64 [i_21])) ? (var_11) : (4489548488112182738LL))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_72 [i_21] [i_23] [i_24])) : (((((/* implicit */_Bool) arr_79 [i_25] [i_24] [(short)15] [i_21] [i_21])) ? (8124393976645177811LL) : (((/* implicit */long long int) ((/* implicit */int) arr_79 [i_21] [i_21] [i_21] [i_21] [i_21])))))))));
                            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) var_8))), (max((arr_64 [i_21]), (arr_64 [i_21]))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 3) 
                        {
                            arr_85 [i_26] [i_26] [i_23] [i_22] [i_26] [0LL] = ((/* implicit */_Bool) var_9);
                            var_46 = ((/* implicit */short) ((((arr_84 [i_26] [i_24] [i_23] [i_23] [i_23] [(signed char)12] [i_21]) * (arr_84 [i_24] [i_22] [i_23] [i_24] [i_26] [i_26] [i_26]))) | (((/* implicit */unsigned long long int) (-(-6143207349231307530LL))))));
                            arr_86 [i_26] [i_26] [i_23] [i_26] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_73 [i_26])) : (((/* implicit */int) max((var_15), (((/* implicit */short) arr_73 [i_21])))))));
                        }
                        /* vectorizable */
                        for (int i_27 = 4; i_27 < 15; i_27 += 3) 
                        {
                            arr_90 [i_21] [i_21] [i_21] [(_Bool)1] [i_21] [i_24] &= ((/* implicit */_Bool) arr_63 [1ULL]);
                            arr_91 [i_21] [2U] [2U] [i_27] [i_24] [i_27] = ((/* implicit */unsigned int) var_16);
                        }
                        var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (+(arr_64 [i_21]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)65530))))) ? ((-(arr_74 [(short)1] [i_22] [i_23]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_68 [i_21] [i_22]))))))) : (((/* implicit */long long int) ((/* implicit */int) max((max((arr_77 [i_22]), (((/* implicit */short) (_Bool)1)))), (arr_67 [i_22] [i_22] [i_23]))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_28 = 2; i_28 < 14; i_28 += 2) 
                        {
                            var_48 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_77 [i_28 - 2])))), (((((/* implicit */_Bool) (short)-1)) ? (-1568025489) : (-1568025482)))));
                            var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) max((((((/* implicit */_Bool) ((2499975817464699969LL) / (((/* implicit */long long int) 1568025493))))) ? (((((/* implicit */_Bool) arr_72 [(signed char)15] [(signed char)15] [6U])) ? (7271462420705138248LL) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_21] [i_22]))))) : (var_4))), (((/* implicit */long long int) (signed char)79)))))));
                        }
                    }
                } 
            } 
        } 
        var_50 = (!(((/* implicit */_Bool) max((arr_83 [i_21] [i_21] [i_21] [(signed char)2] [i_21] [i_21]), (arr_83 [i_21] [i_21] [i_21] [(short)6] [(short)15] [i_21])))));
    }
    for (long long int i_29 = 0; i_29 < 20; i_29 += 3) 
    {
        var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 949005702U)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_29] [i_29])) ? (arr_64 [i_29]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) * (arr_65 [i_29] [i_29]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_95 [i_29])))))));
        arr_97 [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_68 [i_29] [i_29]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_94 [i_29])) ? (-4489548488112182738LL) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_29] [i_29])))))) : (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_94 [i_29])))));
    }
}
