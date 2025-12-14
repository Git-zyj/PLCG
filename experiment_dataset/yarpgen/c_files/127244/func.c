/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127244
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
    var_10 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) ((int) var_7))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) var_1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_4)) - (var_2)));
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned short) var_2)))));
            var_14 -= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)13379)) < (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52157))) : (((var_3) << (((((/* implicit */int) arr_1 [i_0])) - (14373)))))));
        }
        var_15 = ((/* implicit */unsigned short) ((((var_4) > (var_4))) ? (((/* implicit */int) ((unsigned short) arr_0 [0] [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)13393)) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (unsigned short)13393);
        arr_6 [10ULL] &= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) ((signed char) (unsigned short)5035)))) : (max((var_4), (((/* implicit */int) (unsigned short)52144)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_16 = ((/* implicit */long long int) max((max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5742)) && (((/* implicit */_Bool) (unsigned char)227))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [i_3])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_8) : (((/* implicit */long long int) -1)))))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [(short)16])), (((unsigned char) (unsigned char)255))))) ? (((/* implicit */int) var_5)) : (1299916170)));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    var_18 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) var_0))))) * (0ULL))) > (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-15211)) : (((/* implicit */int) (unsigned char)227))))) : (var_3)))));
                    arr_20 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_2 [7ULL])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))) ? (var_1) : (var_3)));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) ((var_7) != (((/* implicit */long long int) var_4))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)126)) > (((/* implicit */int) var_6)))))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (signed char)-37)), (var_8))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                {
                    arr_24 [i_6] [i_4] [i_4] [i_6] = 1697015354;
                    var_20 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6]))) > (var_8)));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) var_4)))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))))) : (((/* implicit */long long int) ((/* implicit */int) ((-669317528) < (((/* implicit */int) var_6)))))))))));
                    }
                    var_23 = ((((/* implicit */_Bool) ((unsigned int) var_4))) ? ((+(31LL))) : (var_8));
                    arr_28 [16] [i_4] [16] = ((/* implicit */signed char) -6141104783383060775LL);
                }
                arr_29 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) 1158619249U);
                var_24 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
            for (unsigned char i_8 = 2; i_8 < 17; i_8 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    arr_36 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-669317524)))) ? (-7732771617388566080LL) : ((-(var_2)))));
                    var_25 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -133300712)) ? (1154263558) : (((/* implicit */int) (unsigned short)59102))))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_9))));
                }
                for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 1) 
                {
                    arr_40 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                    arr_41 [i_3] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((var_4) / (((/* implicit */int) var_0))))) : ((+(var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -669317524)))) : (max((max((((/* implicit */unsigned long long int) 3545591409U)), (var_3))), (((/* implicit */unsigned long long int) ((0ULL) <= (((/* implicit */unsigned long long int) var_7)))))))));
                }
                var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((-9223372036854775792LL), (9223372036854775807LL)))), ((((+(var_3))) * (((/* implicit */unsigned long long int) var_8))))));
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_28 ^= ((/* implicit */unsigned long long int) 9223372036854775807LL);
            arr_44 [i_11] = ((/* implicit */short) 17645625918909782513ULL);
        }
        for (int i_12 = 1; i_12 < 15; i_12 += 4) 
        {
            arr_47 [i_2] [i_2] = ((/* implicit */signed char) (-(max((max((((/* implicit */long long int) (_Bool)1)), (var_2))), (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) (unsigned short)14851)))))))));
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_14 = 3; i_14 < 14; i_14 += 3) 
                {
                    var_29 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -6483904325099780135LL)) ? (arr_17 [i_2] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_6), ((unsigned short)4862)))))), (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_45 [i_12 + 2] [i_12 + 1] [i_14 - 2]))))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_2)), (max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))))))))));
                }
                arr_54 [i_2] [i_2] = min((((((/* implicit */_Bool) ((arr_23 [i_13]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_13])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 8ULL)) ? (var_1) : (var_1))))), (((/* implicit */unsigned long long int) var_6)));
                /* LoopSeq 1 */
                for (short i_15 = 1; i_15 < 14; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        var_31 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) ((unsigned char) var_4)))))));
                        arr_61 [i_2] [i_2] [i_13] [i_13] [i_15 + 2] [(short)13] [i_13] &= ((/* implicit */unsigned char) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((4177120390889097455ULL) != (((((/* implicit */unsigned long long int) var_8)) | (var_3)))))))));
                        var_32 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6))))), (((unsigned int) var_5)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_15 + 3] [i_12 + 2])) || (((/* implicit */_Bool) arr_16 [i_12 + 2] [i_12 + 2] [i_15 + 1] [i_15]))))))));
                    }
                    for (int i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (-(var_8)))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) var_9)))))))));
                        var_34 &= ((/* implicit */signed char) var_5);
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > ((-9223372036854775807LL - 1LL))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) arr_64 [i_2] [i_2])), (var_6)))))))));
                    }
                    var_36 = ((/* implicit */unsigned int) ((min(((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) arr_35 [i_13])))) > (((((/* implicit */_Bool) 352192698U)) ? (min((((/* implicit */long long int) var_0)), (9223372036854775807LL))) : (min((9223372036854775791LL), (((/* implicit */long long int) var_0))))))));
                    arr_65 [i_2] [i_12] [i_13] [i_15] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : ((-2147483647 - 1)));
                }
            }
            for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                var_37 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */long long int) ((int) var_7))) : (var_7)))));
                var_38 ^= ((/* implicit */int) var_5);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    arr_70 [i_2] [i_18] [i_18] [i_19] = ((/* implicit */short) (unsigned short)60661);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_2))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (var_3))) - (14133525960553535494ULL)))));
                        var_41 = ((/* implicit */int) var_0);
                    }
                    for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
                    {
                        arr_77 [i_2] [i_12 - 1] [i_21] [i_19] [i_21] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6483904325099780135LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18526))) : (var_1)))) && (((/* implicit */_Bool) arr_4 [i_21])));
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) 0))))));
                    }
                    arr_78 [13ULL] [13ULL] [i_19] [13ULL] [i_19] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (((long long int) var_3))));
                    arr_79 [(signed char)3] [(signed char)3] [i_18] [(_Bool)1] = ((/* implicit */unsigned char) (+(var_2)));
                }
                for (unsigned char i_22 = 0; i_22 < 18; i_22 += 3) /* same iter space */
                {
                    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (short)23899))));
                    var_44 -= 2192169655366870064ULL;
                    var_45 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (var_3)))))))) > (var_3)));
                    /* LoopSeq 4 */
                    for (int i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)23899))) < (var_8)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)3)), (var_6))))))), ((+(min((((/* implicit */long long int) arr_57 [(unsigned char)5] [i_22] [i_22] [i_18] [i_12 + 2] [i_2])), ((-9223372036854775807LL - 1LL)))))))))));
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) (unsigned short)65401))))) & ((-(max((((/* implicit */unsigned long long int) var_4)), (var_3)))))));
                        var_48 = ((/* implicit */unsigned char) ((short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (var_8)))));
                        var_49 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) (+(var_3))))), (4222124650659840LL)));
                    }
                    for (unsigned int i_24 = 0; i_24 < 18; i_24 += 1) 
                    {
                        var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) max((((((/* implicit */unsigned long long int) var_7)) / (12555132929884367051ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_8)))) ? ((-(var_7))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))))))))));
                        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_83 [(_Bool)1] [i_24] [(short)8] [i_22] [i_18] [i_12 + 2] [i_12 - 1]))) ? (((/* implicit */int) ((arr_83 [i_18] [i_12 - 1] [(unsigned short)7] [i_12 + 1] [(unsigned short)3] [i_12 + 1] [i_12 - 1]) == (((/* implicit */unsigned int) arr_21 [i_12 + 3] [i_24] [i_12] [i_12] [i_12 + 3] [i_2]))))) : (((int) (_Bool)1)))))));
                        var_52 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((short) var_0))), (var_6)))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        var_53 = ((/* implicit */int) ((unsigned int) (~(var_1))));
                        var_54 = (unsigned short)42265;
                    }
                    for (unsigned short i_25 = 0; i_25 < 18; i_25 += 1) 
                    {
                        var_55 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 4026531840U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3))));
                        var_56 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (((((var_2) + (9223372036854775807LL))) << (((((var_4) + (1525367597))) - (41))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 4) 
                    {
                        arr_91 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_2] [i_2])) % (((/* implicit */int) arr_43 [i_2] [i_12]))));
                        arr_92 [i_2] [i_2] [i_18] [i_22] [i_2] = ((/* implicit */unsigned short) ((long long int) var_2));
                        var_57 = ((/* implicit */signed char) (-(((var_2) + (((/* implicit */long long int) (-2147483647 - 1)))))));
                        var_58 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) & (3765211311U)));
                    }
                }
                /* vectorizable */
                for (unsigned char i_27 = 0; i_27 < 18; i_27 += 3) /* same iter space */
                {
                    var_59 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_4))))));
                    var_60 &= ((/* implicit */unsigned char) var_7);
                    var_61 &= ((/* implicit */_Bool) 2131007888U);
                }
            }
        }
        var_62 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((var_4) + (((/* implicit */int) (unsigned short)26826)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) var_5)) ? (6483904325099780134LL) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_90 [i_2] [i_2] [(short)1] [i_2] [(unsigned short)0]))))))))));
    }
    for (unsigned long long int i_28 = 0; i_28 < 18; i_28 += 1) /* same iter space */
    {
        arr_100 [i_28] [i_28] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_2)) ? ((((_Bool)0) ? (var_3) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 54043195528445952LL)) != (11029130722073491764ULL))))))));
        var_63 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : ((((!(arr_30 [i_28] [i_28] [i_28] [i_28]))) ? (((/* implicit */int) ((((/* implicit */long long int) -2130500757)) <= (-5518333618171840295LL)))) : (((/* implicit */int) ((_Bool) (short)8239)))))));
    }
}
