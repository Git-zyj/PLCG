/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146015
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */int) var_5)), ((-(((((/* implicit */int) var_7)) % (((/* implicit */int) (signed char)107))))))));
    var_12 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((/* implicit */int) ((arr_1 [i_0 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))))), (max(((+(var_4))), (((/* implicit */int) ((short) arr_0 [i_0] [i_0]))))))))));
        var_14 = min(((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (620373040U))))), (var_8));
        var_15 = ((/* implicit */_Bool) ((long long int) (signed char)(-127 - 1)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min((((unsigned short) var_9)), (((/* implicit */unsigned short) arr_4 [i_1]))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned int) var_7)))))));
        arr_7 [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
        var_17 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max(((short)-14375), (((/* implicit */short) (_Bool)0))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_18 *= ((unsigned int) max((((/* implicit */int) (_Bool)0)), (max((((/* implicit */int) arr_8 [i_2] [i_2])), (var_0)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            arr_12 [i_2 + 1] [i_3] [i_3] = ((((/* implicit */int) arr_9 [i_2 + 1])) / (var_4));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((arr_11 [i_2 + 1] [i_4 - 1]) - (arr_11 [i_2 + 1] [i_4 + 1]))))));
                arr_15 [i_2] [i_3] [i_4 + 1] = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
            }
            for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) /* same iter space */
            {
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (arr_17 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_2] [i_3] [i_5] [i_6] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */int) arr_21 [6U] [i_3] [i_5 + 2] [i_2 + 1] [(_Bool)1])) : (((/* implicit */int) arr_9 [i_2]))));
                    var_22 *= ((/* implicit */unsigned int) var_6);
                }
                for (signed char i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    arr_25 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) arr_24 [i_2 + 1] [i_3] [i_3] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 + 1]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_5] [i_7] [i_5])))));
                    arr_26 [i_3] [i_3] [i_3] [i_7] = ((/* implicit */unsigned int) (signed char)11);
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((unsigned int) arr_29 [i_5 + 2] [i_2 + 1]));
                            arr_32 [i_2 + 1] [i_3] [i_3] [i_8] [i_9 + 1] [i_9 - 1] [i_9] = ((/* implicit */unsigned short) var_1);
                            arr_33 [i_2] [i_2] [i_5] [i_8] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) (!(arr_8 [i_2 + 1] [i_9 + 1])));
                            var_24 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4147230000645957578ULL) : (((/* implicit */unsigned long long int) -9223372036854775801LL)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5 + 2])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        arr_40 [i_3] [i_3] [i_5 + 1] [i_10] = ((arr_39 [i_5 + 2]) ? (((/* implicit */int) arr_39 [i_5 - 1])) : (var_0));
                        arr_41 [i_2] [i_3] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < ((-9223372036854775807LL - 1LL))))) >= (((/* implicit */int) arr_38 [i_11] [i_3] [i_2 + 1] [i_5 + 1] [i_3] [i_3]))));
                        var_25 = ((/* implicit */int) ((arr_28 [i_5 - 1] [i_3] [i_5 + 2] [i_2 + 1]) ^ (arr_28 [i_5 - 1] [i_3] [i_5] [i_2 + 1])));
                        var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) arr_17 [i_2 + 1]);
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((((arr_29 [i_2] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_34 [i_2 + 1] [i_3] [i_5] [i_10]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])))))))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_3] [i_3] [i_5 - 1] [(unsigned short)3] = ((/* implicit */signed char) arr_24 [i_2] [i_3] [i_5] [i_5] [i_13]);
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_2 + 1] [i_13] [i_5]))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (_Bool)0))));
                        arr_49 [i_2 + 1] [i_3] [i_5 + 1] [i_5 + 1] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_13 [i_3] [i_3]);
                    }
                    arr_50 [i_3] [i_3] = ((/* implicit */signed char) ((arr_28 [i_2] [i_3] [i_5 + 1] [i_10]) - (((/* implicit */unsigned long long int) var_2))));
                    arr_51 [i_2] [i_2] [i_5] [i_3] [i_10] [i_2 + 1] = ((/* implicit */long long int) (-((-(1220041579U)))));
                    var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_5 + 2] [i_10] [i_2 + 1]))));
                }
                for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 2) 
                {
                    arr_54 [i_2 + 1] [i_2 + 1] [i_5] [i_3] [i_5] [i_5] = ((/* implicit */_Bool) var_3);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_52 [i_2] [i_3] [i_5 - 1]) : (var_4)));
                }
            }
            /* LoopSeq 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                var_34 ^= ((/* implicit */signed char) ((2222482530593820406LL) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_15] [i_15] [i_2] [i_2 + 1])))));
            }
            for (int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4147230000645957578ULL)) ? (arr_52 [i_2] [i_3] [i_2 + 1]) : (arr_52 [i_2] [i_3] [i_2 + 1])));
                var_36 ^= ((/* implicit */unsigned short) ((short) arr_27 [i_2] [i_2 + 1] [i_16] [i_16] [i_2]));
                /* LoopSeq 1 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    arr_63 [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_53 [i_2]))))));
                    /* LoopSeq 4 */
                    for (short i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        arr_66 [i_2] [i_2] [i_17] [i_2] [i_3] = ((/* implicit */unsigned int) (-(0ULL)));
                        arr_67 [i_2] [i_3] [i_3] [i_17 - 1] [i_2] [i_2] [i_16] |= ((/* implicit */short) arr_21 [i_16] [i_3] [i_17 - 1] [i_17 - 1] [i_2 + 1]);
                    }
                    for (int i_19 = 3; i_19 < 20; i_19 += 4) /* same iter space */
                    {
                        arr_71 [i_3] [i_3] [i_16] [i_3] [i_3] = ((/* implicit */int) (((+(arr_10 [i_2 + 1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_2 + 1])))));
                        var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_42 [i_2 + 1]))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) -1107774888)) ? (1699609758U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62)))));
                    }
                    for (int i_20 = 3; i_20 < 20; i_20 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) ((unsigned char) arr_65 [i_2] [i_3] [i_16] [i_17] [i_3]));
                        arr_74 [i_2] [i_3] [i_16] [i_3] [i_20 - 3] = ((/* implicit */int) (signed char)(-127 - 1));
                        arr_75 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_20 - 2] [i_20 - 2] [i_16] [i_3] [i_2 + 1])) ? (arr_19 [i_20 - 1] [i_3] [i_16] [i_3] [i_2 + 1]) : (arr_19 [i_20 - 1] [i_3] [i_17] [i_3] [i_2 + 1])));
                    }
                    for (signed char i_21 = 2; i_21 < 17; i_21 += 1) 
                    {
                        arr_80 [i_2] [i_3] [i_16] [i_17] [i_21] = ((/* implicit */unsigned int) var_5);
                        var_40 -= ((/* implicit */signed char) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_2] [i_21 + 1] [i_21 + 1] [10U] [i_16] [i_17 - 1])))));
                        var_41 = ((/* implicit */unsigned int) arr_20 [i_17 - 1]);
                        arr_81 [i_17] [i_3] [i_16] [i_3] [i_21] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_73 [i_2] [i_3] [i_16] [(unsigned char)20] [(unsigned char)20] [i_21] [i_17]))));
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [5U] [i_3] [5U])) ? (((/* implicit */int) arr_37 [i_2] [i_3] [i_16])) : (((/* implicit */int) arr_37 [i_2] [i_17 - 1] [i_16]))));
                    }
                    var_43 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    var_44 |= ((/* implicit */signed char) var_5);
                }
            }
            for (unsigned long long int i_22 = 4; i_22 < 18; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 21; i_23 += 4) 
                {
                    for (signed char i_24 = 0; i_24 < 21; i_24 += 3) 
                    {
                        {
                            arr_91 [i_2] [(_Bool)1] [i_22] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_3] [i_3] [i_22 + 3] [i_22 + 3] [i_2 + 1]))));
                            arr_92 [i_3] = ((/* implicit */unsigned long long int) ((arr_83 [i_22] [i_2 + 1] [i_22 - 3]) == (arr_83 [i_2] [i_2 + 1] [i_22 + 2])));
                            var_45 += arr_17 [i_2 + 1];
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_22 - 2] [(short)8] [i_22 - 2] [i_2 + 1])) ? (((/* implicit */int) arr_14 [i_22 - 3] [i_3] [i_22] [i_2 + 1])) : (((/* implicit */int) arr_14 [i_22 - 1] [i_3] [i_22] [i_2 + 1]))));
            }
            arr_93 [i_3] [i_2 + 1] = ((/* implicit */unsigned short) (~(arr_70 [i_2 + 1] [i_3] [i_3] [i_3] [i_3])));
        }
        /* vectorizable */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_97 [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_2 + 1])) ? (((/* implicit */int) ((short) 3393816939U))) : (((/* implicit */int) ((((/* implicit */_Bool) -907424192973359599LL)) || (((/* implicit */_Bool) (short)(-32767 - 1))))))));
            arr_98 [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) << (((18446744073709551615ULL) - (18446744073709551594ULL)))))) ? ((+(arr_83 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_2 + 1])))));
        }
        /* vectorizable */
        for (signed char i_26 = 0; i_26 < 21; i_26 += 4) 
        {
            arr_101 [i_2] [i_2] [i_2] = ((/* implicit */int) var_5);
            arr_102 [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_2 + 1] [i_26] [i_2 + 1])) ? (var_0) : (arr_52 [i_2 + 1] [i_26] [i_26])));
            arr_103 [(signed char)13] [(signed char)13] [(signed char)13] = ((/* implicit */_Bool) var_7);
        }
    }
    for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 1) 
    {
        var_47 += ((/* implicit */_Bool) arr_29 [i_27] [i_27]);
        var_48 = ((/* implicit */signed char) ((unsigned short) ((max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_73 [i_27] [(unsigned short)6] [i_27] [i_27] [(unsigned short)6] [12U] [i_27]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)105))))))));
        var_49 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)42))))), (((((/* implicit */_Bool) arr_77 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27])) ? (arr_77 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]) : (arr_77 [i_27] [i_27] [i_27] [1ULL] [i_27] [i_27])))));
    }
    var_50 ^= max(((((!(((/* implicit */_Bool) (signed char)-78)))) ? (((3862413290U) << (((((/* implicit */int) (signed char)(-127 - 1))) + (146))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) (signed char)(-127 - 1)))))));
    var_51 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) >= (15216387610187689435ULL)));
}
