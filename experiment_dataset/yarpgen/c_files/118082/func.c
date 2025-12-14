/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118082
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */int) var_8)) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0)))) - (149))))) | (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) (signed char)-1);
            arr_5 [i_0] [i_1] = ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 24; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)24] [i_2])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)248)))));
                    arr_14 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) var_10);
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 3; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_2] [(unsigned short)18] [i_2] [(short)23] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (21LL)));
                        arr_20 [i_0] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */int) arr_12 [i_2] [i_2] [i_3 - 1] [i_4] [(unsigned char)18] [i_4]);
                        var_21 = ((/* implicit */_Bool) ((arr_7 [i_3 + 1] [i_0]) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_7 [i_3 - 2] [i_2]))));
                        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3] [i_3] [i_3 - 1] [i_3 - 2])) < (((/* implicit */int) arr_10 [(short)10] [i_3] [i_3 - 2] [i_4]))));
                        var_23 -= ((/* implicit */short) arr_11 [i_0] [i_3]);
                    }
                    for (unsigned char i_6 = 3; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */int) ((23LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))) < (((/* implicit */int) arr_6 [i_6 - 1] [i_3 - 1] [i_2]))));
                        arr_23 [i_0] [i_2] [i_3 - 1] [i_2] [i_6] = ((/* implicit */long long int) var_10);
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_21 [i_0] [i_3 - 2] [i_3] [i_4] [i_6]))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned short) arr_11 [(short)10] [i_3])))));
                    }
                    for (short i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_12 [i_3] [(_Bool)1] [i_3 + 1] [i_4] [20] [16]))));
                        arr_27 [i_2] [i_0] [i_3 - 1] [i_4] [i_7 + 2] [i_3 + 1] [i_7] = (!(((/* implicit */_Bool) arr_12 [i_2] [i_7] [i_3 - 1] [i_4] [i_7 + 1] [i_0])));
                    }
                    var_28 = ((((/* implicit */_Bool) ((arr_17 [i_0] [i_2] [i_4]) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_2)) - (123))))) : (((/* implicit */int) var_5)));
                }
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_29 = ((/* implicit */short) ((23LL) << (((1033872981204149685ULL) - (1033872981204149650ULL)))));
                    arr_31 [18ULL] [i_2] [i_3] [i_2] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (-3624128490542610804LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(unsigned char)5] [i_2] [i_3])))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (signed char)78);
                        var_31 = ((/* implicit */unsigned char) (signed char)1);
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (3465503447U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_0] [i_2] [i_3 - 1] [i_8] [12])))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned char i_10 = 3; i_10 < 24; i_10 += 1) /* same iter space */
                {
                    arr_37 [i_2] [i_3] [i_2] [i_0] [i_2] = (i_2 % 2 == zero) ? (((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) << (((((arr_8 [i_2]) + (8533991191272223768LL))) - (53LL)))))) : ((-(17412871092505401930ULL))))) : (((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) << (((((((((arr_8 [i_2]) + (8533991191272223768LL))) - (53LL))) + (84378529152463222LL))) - (54LL)))))) : ((-(17412871092505401930ULL)))));
                    var_33 = ((/* implicit */long long int) ((unsigned short) (unsigned char)255));
                }
                for (unsigned char i_11 = 3; i_11 < 24; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        arr_46 [i_0] [i_2] [i_3 + 1] [(unsigned char)5] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)66)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [10U]))) : (30LL)));
                        var_34 = (+(((((/* implicit */_Bool) arr_4 [i_0] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_15 [(unsigned char)17] [15] [(signed char)14] [i_11] [i_12])))));
                        arr_47 [i_0] [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)78))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_45 [i_0] [i_2] [i_3 - 2] [i_3 - 2] [i_11 + 1] [i_3])));
                        arr_48 [i_0] [i_2] [(_Bool)1] [i_2] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) + (var_10)));
                        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)254)) < (((/* implicit */int) arr_7 [16] [i_11 - 3]))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        arr_52 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0] [i_3 - 1] [i_11] [i_2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [1LL] [i_3] [i_2])))));
                        arr_53 [i_0] [i_2] [i_3] [0LL] [i_2] [i_13] = ((/* implicit */unsigned char) var_10);
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))));
                    }
                    arr_54 [i_0] [(_Bool)1] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) (short)-7416)))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) ^ (14650125527684111075ULL))) - (14650125527684110932ULL)))));
                }
                for (unsigned char i_14 = 3; i_14 < 24; i_14 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */_Bool) max((var_37), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_29 [i_14 - 1] [i_3] [i_3] [i_3] [(_Bool)1] [i_0])) : (((/* implicit */int) (signed char)94))))) && (((/* implicit */_Bool) ((long long int) 213832749U)))))));
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) var_12)))))));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        arr_59 [i_14] [i_2] [i_2] [i_14 + 1] [i_15] [i_14 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) (unsigned char)127))));
                        arr_60 [i_0] [i_2] [i_2] [i_3] [6LL] [i_15] = (unsigned char)75;
                        arr_61 [(unsigned char)8] [4ULL] [i_2] [i_14 - 2] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_14 - 1] [i_2] [i_14 - 1] [i_14 - 3])) ? (((/* implicit */int) (unsigned char)56)) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_55 [i_15] [i_2] [i_2] [i_2]))))));
                        var_39 = ((/* implicit */unsigned int) arr_16 [i_2] [i_2] [i_15]);
                        arr_62 [i_2] [i_2] = (short)0;
                    }
                }
                arr_63 [i_2] [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)190)) ? (2047LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3] [20U] [(unsigned char)11] [(short)1]))))) + (((/* implicit */long long int) (-(((/* implicit */int) (short)-15157)))))));
            }
            for (signed char i_16 = 3; i_16 < 23; i_16 += 3) 
            {
                var_40 = ((/* implicit */short) (+(((/* implicit */int) arr_41 [i_2]))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_72 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) arr_42 [i_0] [i_16 - 3] [i_2] [i_16 + 1] [i_16 - 1]));
                            var_41 = ((/* implicit */signed char) (_Bool)0);
                            arr_73 [i_0] [i_2] [i_2] [i_16] [i_16 - 1] [i_17] [i_2] = ((/* implicit */signed char) ((((long long int) 366658639U)) / (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1)))))));
                            var_42 = ((/* implicit */short) (unsigned char)75);
                        }
                    } 
                } 
            }
            arr_74 [i_2] [i_2] = ((/* implicit */unsigned char) var_11);
            arr_75 [i_2] = ((/* implicit */unsigned char) ((int) 0ULL));
            var_43 -= ((/* implicit */_Bool) (unsigned char)148);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_44 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))));
            arr_80 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)199))));
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4081134546U)) || ((_Bool)1)));
        }
        for (short i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            arr_83 [(signed char)20] [(unsigned char)13] [i_20] = ((/* implicit */unsigned char) arr_0 [i_20]);
            arr_84 [i_0] [i_20] = ((/* implicit */signed char) ((unsigned char) (+(arr_32 [5LL] [i_20] [i_20]))));
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15160)) ? (895049602U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_20] [i_0] [i_0] [i_20] [i_20])))))) ? (((/* implicit */unsigned long long int) arr_34 [i_0] [i_20])) : (arr_38 [i_0] [i_0] [(short)18] [i_0] [i_0] [i_0])));
            var_47 = ((/* implicit */_Bool) (+(((long long int) 3409476010174184523LL))));
        }
        var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((14650125527684111061ULL) > (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* LoopSeq 3 */
    for (int i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
        {
            var_49 = ((/* implicit */unsigned char) arr_8 [i_22]);
            var_50 = (i_22 % 2 == zero) ? (((/* implicit */_Bool) ((((min((((((/* implicit */_Bool) (signed char)94)) ? (-92941251) : (((/* implicit */int) arr_30 [i_21] [i_21] [i_21] [i_22])))), (((((/* implicit */int) arr_55 [i_21] [i_21] [i_22] [8ULL])) << (((((/* implicit */int) arr_10 [(_Bool)1] [i_22] [(unsigned char)15] [i_22])) - (23551))))))) + (2147483647))) << (((((((((/* implicit */int) (short)-1)) < (((/* implicit */int) (unsigned short)44545)))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned char)139)))) - (16)))))) : (((/* implicit */_Bool) ((((min((((((/* implicit */_Bool) (signed char)94)) ? (-92941251) : (((/* implicit */int) arr_30 [i_21] [i_21] [i_21] [i_22])))), (((((/* implicit */int) arr_55 [i_21] [i_21] [i_22] [8ULL])) << (((((((/* implicit */int) arr_10 [(_Bool)1] [i_22] [(unsigned char)15] [i_22])) - (23551))) + (44050))))))) + (2147483647))) << (((((((((/* implicit */int) (short)-1)) < (((/* implicit */int) (unsigned short)44545)))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned char)139)))) - (16))))));
            arr_89 [i_22] = ((/* implicit */_Bool) arr_45 [i_21] [i_22] [(signed char)4] [i_22] [i_22] [(_Bool)1]);
            arr_90 [(_Bool)0] |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_22])) ? (arr_77 [i_22]) : (var_7)))))));
            var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) (((+(arr_38 [i_21] [i_21] [i_21] [13ULL] [i_22] [i_22]))) > (((/* implicit */unsigned long long int) var_4)))))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            arr_93 [i_23] [(unsigned char)6] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_43 [(signed char)11] [i_21] [i_23] [i_23] [i_23] [i_23])))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_21] [i_21])) ? (arr_86 [i_23]) : (((/* implicit */long long int) ((/* implicit */int) arr_69 [14] [i_23] [i_23] [i_23] [i_21] [i_21]))))))) : (((/* implicit */int) arr_45 [i_21] [i_21] [i_21] [i_21] [i_23] [i_23]))));
            var_52 |= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_21] [i_23] [i_23])) ? (((/* implicit */int) arr_6 [0] [(short)16] [i_23])) : (((/* implicit */int) arr_6 [i_21] [i_21] [i_23])))));
        }
        var_53 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_64 [4LL])) ? (((/* implicit */int) arr_64 [(unsigned char)24])) : (((/* implicit */int) arr_41 [14])))));
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 3) 
        {
            var_54 |= ((/* implicit */unsigned char) ((signed char) -203039370));
            arr_98 [i_24] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_24]))) : (arr_67 [i_24] [i_25] [i_25])));
        }
        for (unsigned short i_26 = 3; i_26 < 7; i_26 += 2) 
        {
            arr_102 [i_24] [i_26] [i_26] = ((/* implicit */unsigned int) arr_86 [i_26 + 2]);
            var_55 = ((/* implicit */unsigned long long int) (unsigned char)119);
            arr_103 [i_24] [i_24] [i_24] = ((/* implicit */int) arr_44 [i_26 + 1] [(unsigned char)15] [i_26] [(short)16] [i_26 + 2]);
        }
        arr_104 [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */int) (signed char)-33)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))))));
    }
    for (int i_27 = 0; i_27 < 25; i_27 += 1) 
    {
        var_56 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_71 [i_27] [(short)0] [i_27] [(signed char)14] [i_27])), (arr_4 [i_27] [i_27])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_43 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]) : (((/* implicit */unsigned long long int) -206897742))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_2 [i_27])))))))) : (((/* implicit */int) (_Bool)1))));
        var_57 += ((/* implicit */signed char) arr_8 [18LL]);
    }
}
