/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120639
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
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_2 [i_0 + 1]);
        arr_4 [i_0] = (!((!(((/* implicit */_Bool) (short)32745)))));
        var_11 -= ((/* implicit */signed char) ((unsigned int) var_0));
        var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((max((((/* implicit */long long int) -334268475)), (arr_1 [i_0 - 3]))) != (((((/* implicit */_Bool) (short)32763)) ? (var_6) : (((/* implicit */long long int) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121)))))));
    }
    var_13 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? (((/* implicit */long long int) var_8)) : (((long long int) var_4)))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    arr_15 [i_1] = ((/* implicit */unsigned char) ((_Bool) var_4));
                    var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? ((~(var_3))) : (((/* implicit */int) (unsigned char)127))));
                    arr_16 [i_1] [i_1] [i_1 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_1] [i_1] [i_1]))))));
                    arr_17 [i_3] [(unsigned char)16] [i_3] [(unsigned char)16] = ((/* implicit */unsigned char) ((arr_7 [i_1 + 1]) << (((arr_7 [i_1 + 4]) - (14501263993813026940ULL)))));
                    arr_18 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_14 [i_1 + 3]));
                }
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (((-(var_2))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1] [i_1 + 3]))))))))) ? (max(((-(18446744073709551612ULL))), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32745)))))))))));
                    var_17 = ((/* implicit */signed char) (~((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26274))) != (14744776707432071123ULL))))))));
                    arr_23 [i_2] [12LL] [i_2] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_0))))));
                    arr_24 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((-334268498) + (2147483647))) << (((9223372036854775807LL) - (9223372036854775807LL)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 4; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            arr_29 [i_6] [(signed char)9] [i_4] [i_2] [i_2] [i_6] = ((/* implicit */long long int) ((var_9) - (((/* implicit */unsigned long long int) arr_19 [i_2 - 1] [i_2 - 1] [i_6]))));
                            var_18 = ((/* implicit */long long int) var_8);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 4; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */unsigned int) var_5);
                            var_20 = ((/* implicit */int) ((unsigned char) var_0));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (short)32748))));
                        }
                        arr_33 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */long long int) var_0);
                        arr_34 [i_5] [i_4] = ((/* implicit */unsigned int) arr_28 [i_4] [i_2] [i_4] [i_4] [i_5] [i_5] [i_5]);
                        arr_35 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32878))) != (min((4294967295U), (3269506579U)))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_39 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 334268481)) % (1775397561U)));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) << (((var_10) - (1358282550U)))))) && (((/* implicit */_Bool) arr_5 [i_8]))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_1)))))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((unsigned int) var_3)) % ((~(var_8))))))));
                    }
                }
                for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    arr_43 [i_1] [i_9] = ((/* implicit */unsigned int) ((var_9) << (((((((/* implicit */_Bool) arr_27 [i_1] [i_2 + 1] [15LL])) ? (var_10) : (var_7))) - (1358282514U)))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-12)) ^ (((/* implicit */int) (signed char)98)))))));
                    var_26 = ((/* implicit */long long int) max((var_4), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) : (3525268925U)))));
                    arr_44 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) <= ((-(arr_19 [i_1] [i_2 - 1] [i_1])))));
                }
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    arr_47 [15U] [15U] [i_2] [i_1 + 4] = ((unsigned int) arr_5 [i_1]);
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            arr_54 [i_2] [12LL] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_5 [i_1 + 1]))));
                            arr_55 [i_11] [i_11] [i_12] [i_11] [i_10] [i_2] [i_1 - 2] &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) var_3)) ^ (var_10))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((16383U) - (16381U))))))));
                            arr_56 [i_12] [i_11] [(signed char)2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1]))));
                            arr_57 [i_12] [18] = ((/* implicit */short) var_6);
                        }
                        arr_58 [5ULL] [i_2] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_1] [(unsigned short)18] [i_1] [i_11])) % (((/* implicit */int) var_1))))) | (var_2)));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        arr_61 [i_1] [i_2] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294950927U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2]))) : (1125899906842623LL)));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        var_30 += ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 - 2])) >> (((((/* implicit */int) var_1)) + (19686)))));
                        var_31 ^= ((/* implicit */long long int) arr_6 [i_1 - 2]);
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((int) -1352715749)) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (var_7)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            arr_66 [16U] [i_15] [i_2 + 1] [i_10] [i_2] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((int) (unsigned char)235));
                            arr_67 [i_1] [i_2 - 1] [i_10] [i_1] [i_15] = ((/* implicit */long long int) ((unsigned long long int) arr_19 [i_1 + 3] [i_2 + 1] [i_2 - 1]));
                            var_33 = ((/* implicit */long long int) var_9);
                            var_34 = ((/* implicit */int) (!((_Bool)1)));
                        }
                        arr_68 [i_1] [i_1] = ((/* implicit */unsigned int) (short)32718);
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (-(-334268475))))));
                        var_36 = ((/* implicit */int) 36334152350910639ULL);
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
                    {
                        arr_75 [i_1 + 1] [i_1] [i_1] [i_1] |= ((-334268475) ^ (((/* implicit */int) arr_65 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_2 - 2] [i_17])));
                        var_37 = ((/* implicit */int) var_8);
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((int) var_3)))));
                        var_39 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7)) && (((/* implicit */_Bool) arr_32 [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 - 1]))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
                    {
                        arr_81 [(unsigned short)13] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2040683113U)) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) (short)0))));
                        arr_82 [i_1] [i_1 + 3] [4] [i_1 + 2] = ((/* implicit */int) ((144115188075855871ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        arr_83 [i_1 - 1] [i_2 - 2] [i_10] [i_19] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_2 - 2]))));
                        arr_84 [(signed char)19] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2139095040)) + (7507232248401570640LL)));
                    }
                }
                arr_85 [i_2] [i_2] [i_1] = ((/* implicit */int) max((((unsigned long long int) ((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) (short)27675)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 21; i_20 += 1) 
    {
        for (short i_21 = 2; i_21 < 20; i_21 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    var_40 = ((/* implicit */long long int) ((arr_89 [i_21 - 1] [i_21 - 1]) == (((/* implicit */unsigned long long int) var_3))));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 21; i_23 += 3) 
                    {
                        for (signed char i_24 = 0; i_24 < 21; i_24 += 4) 
                        {
                            {
                                arr_98 [i_20] [i_21] [i_20] [i_20] [i_23] [i_23] [i_21] = ((/* implicit */unsigned short) var_4);
                                arr_99 [i_23] [i_20] = ((/* implicit */unsigned char) (-(var_10)));
                            }
                        } 
                    } 
                }
                for (int i_25 = 0; i_25 < 21; i_25 += 1) 
                {
                    arr_104 [i_20] [(unsigned char)10] [i_25] &= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((unsigned char) -4016381347608275853LL))), (arr_94 [i_21 - 2] [i_21 - 1] [16U] [16U] [i_21 - 1] [i_21]))) - (((/* implicit */unsigned long long int) var_6))));
                    arr_105 [i_20] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_10)) <= (max((4294967281U), (var_10))))))) % (3157333486U));
                }
                var_41 = ((/* implicit */int) min((var_10), (((/* implicit */unsigned int) ((unsigned char) arr_88 [i_20])))));
            }
        } 
    } 
}
