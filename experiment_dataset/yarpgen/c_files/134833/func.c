/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134833
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_10 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5)) ? (27) : (33)));
        var_12 = ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-43)) % (((/* implicit */int) (signed char)35))));
        var_14 = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (var_3) : (((/* implicit */unsigned long long int) 2074990593U))))));
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1]))));
    }
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57)))))) ? (-27) : (((/* implicit */int) (signed char)107)))))));
    var_17 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)28))));
            var_19 = ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) min((1726087764), (((/* implicit */int) var_2))))) : ((-(var_0)))));
            var_20 = var_3;
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3 - 2] [i_4])) ? (((/* implicit */int) arr_9 [i_3 - 2] [i_3])) : (((/* implicit */int) arr_9 [i_3 - 1] [i_3]))))) == (min((((/* implicit */unsigned long long int) ((signed char) (unsigned char)235))), (((((/* implicit */_Bool) 17112300135930212831ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24))) : (arr_6 [i_3] [i_4])))))));
                var_22 = ((/* implicit */unsigned int) ((((-5) < ((~(((/* implicit */int) (short)4095)))))) ? (min((((((/* implicit */_Bool) arr_10 [i_2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3]))))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (-29)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 11520048570718927085ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_4])))))))));
            }
            for (int i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned int) var_1);
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_2] [i_3] [i_6]))) ? (((/* implicit */int) arr_15 [i_3 + 1] [i_3 - 1] [i_5 - 1] [i_6 - 1])) : (((/* implicit */int) ((short) arr_16 [i_2] [i_3] [i_5] [i_6]))))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_25 = ((1536970275) & (-931378879));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_26 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) & (arr_4 [12] [i_5 + 1])));
                        var_27 += ((/* implicit */short) ((((/* implicit */unsigned long long int) 27)) - (arr_16 [i_8] [i_5 + 1] [i_3 - 1] [i_7])));
                        var_28 = ((/* implicit */signed char) var_1);
                        var_29 = (+(((((/* implicit */_Bool) (unsigned short)14603)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-154)))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */short) ((unsigned long long int) var_0));
                        var_31 = ((/* implicit */long long int) (+(arr_20 [i_2] [i_3 + 1] [i_5 - 1] [i_7])));
                        var_32 = ((/* implicit */int) arr_20 [i_2] [i_3] [i_5] [i_9]);
                        var_33 = ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_5 + 1] [i_7])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3 - 2] [i_5 + 1] [i_5 + 1])));
                    }
                }
                var_34 = ((/* implicit */int) ((unsigned long long int) arr_10 [i_3]));
            }
        }
        for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 43)) ? (((/* implicit */unsigned long long int) 1907663036)) : (1073741816ULL))));
            var_36 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_10] [i_10 + 2] [i_10 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_10] [i_10 + 2] [i_10 + 1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-50))))) : (var_3));
            var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
        }
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                {
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_13 [i_2] [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))))) ? (max((var_0), (((/* implicit */long long int) arr_13 [i_2] [i_11] [i_2])))) : (((/* implicit */long long int) ((arr_13 [i_2] [i_11] [i_12]) + (arr_13 [i_2] [i_12] [i_12]))))));
                    var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (3674054110482665647ULL)));
                    var_40 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_13 [i_2] [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_11] [i_12] [i_12] [i_12])))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (1907663036)))) : (min((12U), (((/* implicit */unsigned int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
        {
            var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-19) < (((/* implicit */int) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_13] [i_14 + 3] [i_14]))) : (8273489242543572539LL)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_14 + 3])))));
            var_42 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_8)) <= (2618752626174579642ULL)))));
            var_43 = ((/* implicit */unsigned long long int) var_5);
            var_44 ^= ((((((/* implicit */_Bool) arr_37 [i_14 + 3] [i_14 + 1] [i_14 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-50)))));
        }
        for (int i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                var_45 = ((/* implicit */unsigned char) ((signed char) ((-1) == (((/* implicit */int) (signed char)-35)))));
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) arr_45 [i_13] [i_15] [i_15] [i_16])) ? (4472721956354654480ULL) : (((/* implicit */unsigned long long int) 3))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) : (arr_13 [i_16] [i_15] [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_13] [i_15] [i_16] [i_13]))) : (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-2)))))))));
            }
            /* vectorizable */
            for (short i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                var_47 -= ((/* implicit */unsigned char) (+((+(arr_43 [i_17] [i_15] [i_15] [i_17])))));
                var_48 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_17] [i_15] [i_15] [i_17]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 3; i_18 < 18; i_18 += 3) 
                {
                    var_49 = ((/* implicit */unsigned long long int) ((arr_42 [i_13]) - (arr_42 [i_17])));
                    var_50 = ((/* implicit */long long int) ((signed char) 28));
                    var_51 = ((/* implicit */int) ((long long int) ((unsigned long long int) (short)1090)));
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 2; i_19 < 19; i_19 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((arr_13 [i_17] [i_18] [i_19]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_17] [i_15] [i_17]))))))));
                        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((-1907663027) + (2147483647))) << (((((arr_11 [i_15] [i_15] [i_17] [i_18]) + (1231373746))) - (31)))))) ? (((/* implicit */int) (_Bool)1)) : (arr_51 [i_13] [i_13] [i_17] [i_17] [i_18] [i_19]))))));
                        var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) arr_28 [i_13] [i_17] [i_13]))));
                    }
                }
            }
            for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_21 = 0; i_21 < 22; i_21 += 3) /* same iter space */
                {
                    var_55 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)33)) >> (((-6073084213563695070LL) + (6073084213563695084LL)))))))) ? (arr_20 [i_13] [i_15] [i_20] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_23 [i_13] [i_15] [i_20] [i_21] [i_20] [i_13]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        var_56 ^= min((((((/* implicit */_Bool) arr_33 [i_22] [i_15] [i_20])) ? (-1907663037) : (-1))), (((/* implicit */int) max(((signed char)86), (arr_33 [i_15] [i_21] [i_22])))));
                        var_57 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_13])) * (((/* implicit */int) arr_53 [i_13] [i_20] [i_21] [i_22]))))) : (arr_25 [i_15] [i_21])))));
                    }
                    var_58 ^= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) max((3), (((/* implicit */int) (signed char)-87))))) & (18446744073709551594ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_23 = 1; i_23 < 19; i_23 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned long long int) ((short) (short)(-32767 - 1)));
                        var_60 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-122)))))));
                        var_61 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_12 [i_21] [i_15] [i_21]))))))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        var_62 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((((/* implicit */_Bool) arr_8 [(unsigned short)0])) ? (arr_13 [(signed char)20] [i_21] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_43 [(signed char)2] [i_15] [i_13] [i_20])))))) : (arr_28 [i_13] [(short)14] [i_21])));
                        var_63 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (~(-1206888297)))) ? (arr_47 [i_13] [i_20] [i_21] [i_24]) : (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))));
                        var_64 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) ((_Bool) 18446744073709551615ULL))))));
                    }
                    var_65 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [20ULL] [20ULL])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 0)) : (var_3))))))), (((((/* implicit */_Bool) arr_24 [(signed char)8] [i_13])) ? ((-(((/* implicit */int) var_5)))) : (-1)))));
                }
                /* vectorizable */
                for (int i_25 = 0; i_25 < 22; i_25 += 3) /* same iter space */
                {
                    var_66 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (unsigned char i_26 = 0; i_26 < 22; i_26 += 2) 
                    {
                        var_67 = arr_10 [i_15];
                        var_68 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_25])) & (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) | (arr_6 [i_20] [i_26])))));
                    }
                    var_69 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (arr_46 [i_13] [i_15] [i_15]) : (3)));
                }
                /* LoopNest 2 */
                for (long long int i_27 = 3; i_27 < 19; i_27 += 3) 
                {
                    for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_70 = ((/* implicit */_Bool) 6673567940094023435ULL);
                            var_71 *= ((((/* implicit */int) ((unsigned char) (signed char)17))) ^ (((/* implicit */int) var_5)));
                        }
                    } 
                } 
                var_72 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_13] [i_13] [i_15] [i_20]))) == (((unsigned long long int) min((var_7), (arr_25 [i_13] [i_20]))))));
            }
            var_73 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) < (18446744073709551615ULL))))) : ((((!(((/* implicit */_Bool) arr_24 [22U] [i_15])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)50)) << (((arr_28 [i_15] [(short)18] [i_13]) - (3380500672U)))))) : (min((((/* implicit */unsigned int) (signed char)65)), (565812118U)))))));
        }
        var_74 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */int) (signed char)-57)), (min((arr_46 [i_13] [i_13] [i_13]), (((/* implicit */int) var_1)))))));
        var_75 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) arr_27 [i_13] [16] [i_13])) : (((((((/* implicit */_Bool) (unsigned char)250)) && (((/* implicit */_Bool) (signed char)-34)))) ? (((/* implicit */unsigned long long int) ((int) 7785066273357480506ULL))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_62 [i_13] [i_13] [18ULL] [i_13] [i_13])))))));
    }
}
