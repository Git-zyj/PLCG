/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179883
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
    var_16 = ((/* implicit */int) 6071257703408587209LL);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_2] [i_1])) ? (var_1) : (((/* implicit */long long int) arr_4 [i_2] [i_2] [(short)20] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) min(((-(arr_1 [i_0 - 1] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_2] [i_2] [i_2]) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [(unsigned char)21] [(short)9])), (17827008918117088113ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1]))))) : (var_9))))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) (~(var_6))))), (((((/* implicit */_Bool) 17827008918117088131ULL)) ? (17827008918117088161ULL) : (((/* implicit */unsigned long long int) 15195955)))))))));
                                arr_14 [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [(_Bool)1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (17827008918117088131ULL));
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1])) && (((/* implicit */_Bool) arr_0 [i_2] [i_1]))))), (((619735155592463500ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) -217153631794273446LL)) : (619735155592463496ULL))) : (((/* implicit */unsigned long long int) (((+(492484072U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))))));
                                arr_15 [i_0] [i_3] [i_2] [i_0 + 1] [i_0] = ((/* implicit */long long int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_0 - 1] [i_2] [i_1] [i_0 - 1])) ? (max((31LL), (((/* implicit */long long int) arr_4 [i_0] [i_2] [15LL] [i_6])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 619735155592463526ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0]))) : (492484053U))))))), ((-(arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_5] [(_Bool)1])))));
                                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8769))))), ((((-(619735155592463502ULL))) & (17827008918117088116ULL)))));
                                arr_23 [i_0] [i_1] [i_2] [i_1] [i_5 + 1] [i_2] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483623))))), (max((9223372036854775793LL), (var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 40LL)) ? (619735155592463489ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29610)))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) -3746632047175295910LL))) - (619735155592463483ULL))))));
                            arr_34 [i_8] [i_0] [(short)11] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) arr_3 [i_0 - 1] [i_0 - 1]);
                        }
                    } 
                } 
            } 
            arr_35 [i_0] = ((/* implicit */long long int) ((unsigned short) -2147483647));
        }
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            for (unsigned int i_13 = 1; i_13 < 17; i_13 += 4) 
            {
                {
                    arr_43 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 17827008918117088188ULL)) ? (var_11) : (arr_27 [i_11] [(signed char)14] [i_11])))) + ((~(var_1)))));
                    arr_44 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3746632047175295909LL)) ? (((((/* implicit */int) arr_38 [i_11])) >> (((((/* implicit */int) arr_33 [i_11] [i_12] [i_13 + 2] [i_11] [(signed char)15])) - (237))))) : (((/* implicit */int) ((short) var_2)))));
                    arr_45 [i_11] [i_13 + 3] [i_13 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_12] [i_13 + 2] [i_12] [i_12] [i_11] [i_11])) ? (((/* implicit */int) arr_25 [i_11] [i_11])) : (((/* implicit */int) arr_6 [(unsigned short)19] [i_13 + 3]))))) ? (492484088U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [15] [i_13 - 1] [i_13 + 3])))));
                    var_23 = ((/* implicit */long long int) arr_42 [i_13 + 2] [i_13 + 3] [i_13 + 2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            {
                                arr_55 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [15] [i_15])) ? (arr_1 [i_17] [i_14]) : (arr_1 [i_16] [i_14])));
                                var_24 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                                var_25 = ((/* implicit */unsigned char) ((short) (_Bool)1));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 2; i_18 < 19; i_18 += 1) 
                    {
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_9))))));
                        var_27 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_18 - 2] [i_11] [i_11] [i_11] [11U]))) / (var_13))) - (((/* implicit */long long int) var_14))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_18 - 2])) ? (((/* implicit */int) arr_57 [i_18 + 1])) : (((/* implicit */int) arr_57 [i_18 - 1]))));
                        arr_58 [15LL] [15LL] [i_11] [15LL] [15LL] [i_18] = (((~(17827008918117088126ULL))) < (((((/* implicit */_Bool) 3802483223U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [(short)11] [(_Bool)1]))) : (17827008918117088116ULL))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((var_15) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_19] [i_15]))) : (var_1)));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_14] [i_15] [i_19])) && (((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((17827008918117088200ULL) - (17827008918117088200ULL))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 3; i_21 < 18; i_21 += 4) 
                        {
                            {
                                arr_67 [i_14] [i_15] [i_15] [i_20] &= ((/* implicit */_Bool) arr_29 [i_21 + 1] [22U] [i_11]);
                                var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_7))) || (((/* implicit */_Bool) ((long long int) var_4)))));
                                var_32 = ((/* implicit */long long int) (unsigned char)35);
                                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_11] [i_11] [i_11] [i_11])) ? (var_14) : (1635642861)))) ? (((/* implicit */int) ((signed char) arr_20 [i_11] [i_14] [i_15] [i_11] [i_11]))) : (((((/* implicit */int) arr_56 [i_11] [i_14] [i_11] [i_20])) - (2147483647)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_68 [i_11] [4LL] = ((var_1) << (((/* implicit */int) arr_31 [i_11] [i_11] [i_11] [i_11] [i_11])));
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_71 [i_22] = ((/* implicit */long long int) arr_29 [i_22] [i_22] [i_22]);
        arr_72 [i_22] = ((/* implicit */long long int) arr_52 [i_22] [(short)14]);
        arr_73 [i_22] = ((/* implicit */unsigned char) ((long long int) arr_3 [i_22] [i_22]));
        arr_74 [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_22] [(signed char)22] [i_22] [i_22] [i_22])) : (((/* implicit */int) arr_8 [i_22] [12ULL] [i_22] [12ULL] [i_22]))));
    }
    var_34 = ((/* implicit */long long int) 2147483647);
    /* LoopSeq 2 */
    for (short i_23 = 3; i_23 < 23; i_23 += 1) 
    {
        arr_78 [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((619735155592463445ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [(_Bool)1]))))))) ? ((-(492484091U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((17827008918117088116ULL), (((/* implicit */unsigned long long int) 3444564777U))))) ? (((/* implicit */int) ((_Bool) 2ULL))) : (((/* implicit */int) ((signed char) 17827008918117088116ULL))))))));
        var_35 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) * (((((/* implicit */_Bool) (unsigned char)0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((268383233), (((/* implicit */int) var_0)))))) ? ((-(min((3079242241U), (((/* implicit */unsigned int) arr_76 [i_23])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_23 - 3])))));
    }
    for (int i_24 = 0; i_24 < 25; i_24 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_25 = 0; i_25 < 25; i_25 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_26 = 3; i_26 < 24; i_26 += 2) 
            {
                for (short i_27 = 1; i_27 < 22; i_27 += 4) 
                {
                    for (long long int i_28 = 2; i_28 < 23; i_28 += 1) 
                    {
                        {
                            arr_95 [i_24] [i_26] [i_26 + 1] [(signed char)14] [i_28 + 2] = ((/* implicit */int) ((short) (~(arr_83 [(unsigned char)2]))));
                            arr_96 [i_24] [i_27] [i_26] = ((/* implicit */unsigned char) ((arr_90 [i_24] [i_24] [i_26 + 1] [i_24] [i_24]) == ((+(arr_83 [i_27])))));
                        }
                    } 
                } 
            } 
            arr_97 [i_24] [i_24] [i_24] = ((/* implicit */unsigned int) arr_93 [(unsigned short)4] [i_24] [i_25] [i_24] [(unsigned char)16] [i_25]);
            arr_98 [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */long long int) var_14)) : (arr_81 [i_25])))) || (((/* implicit */_Bool) var_10))));
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_86 [i_25] [(unsigned char)1])) ? (((/* implicit */unsigned long long int) var_10)) : (17827008918117088131ULL)));
        }
        arr_99 [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_91 [i_24] [i_24] [i_24] [i_24] [i_24]))))) ? ((+(((long long int) var_1)))) : (((/* implicit */long long int) ((int) arr_94 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))));
    }
}
