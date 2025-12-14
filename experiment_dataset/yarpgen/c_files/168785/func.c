/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168785
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)229)) && (((/* implicit */_Bool) 17583596109824ULL))));
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */long long int) arr_0 [i_1])) != (arr_1 [i_1])))));
            var_21 = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */long long int) var_15)) : (arr_4 [i_2 + 2] [i_2 + 2])))))));
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_11 [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_3]))) - (arr_10 [i_1])))) ? (arr_8 [i_3]) : (4132930736U))) != (((/* implicit */unsigned int) (~(((((/* implicit */int) (short)0)) - (((/* implicit */int) var_7)))))))));
                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)149))));
                arr_12 [i_1] [i_2 + 1] [i_3] [i_1] = (-(((/* implicit */int) min((var_11), (((/* implicit */signed char) arr_6 [i_1] [i_2] [i_2 - 3]))))));
                var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_2])))) || (((/* implicit */_Bool) arr_8 [i_3])))))) : (var_13)));
            }
            for (short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                var_24 += ((((arr_0 [i_1]) == (arr_0 [i_1]))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2]))))) : (((/* implicit */int) var_0)));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        arr_21 [i_1] [i_2] [i_4] [i_5] [i_6] [i_2] |= ((/* implicit */unsigned int) var_6);
                        arr_22 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)23939)) < (((/* implicit */int) (unsigned char)72))))) >> (((var_9) + (7329168245898352658LL)))));
                        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 + 3])) ? (arr_4 [i_1] [(signed char)23]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1] [i_2 + 3])))))));
                        var_26 = ((/* implicit */unsigned int) arr_18 [i_1] [i_2] [i_1] [i_5] [i_2 + 2] [10] [i_4]);
                    }
                    var_27 = ((/* implicit */unsigned short) (-(min((arr_15 [i_4] [i_2 + 2]), (arr_15 [i_1] [i_2 + 1])))));
                    arr_23 [23U] [i_1] [i_5] [i_5] = min((((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 + 3] [i_2 + 3] [i_4] [i_5])))))), (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_5 [i_2 + 2] [i_5])))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_4 [i_1] [i_2]))));
                }
                for (long long int i_7 = 1; i_7 < 24; i_7 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((162036559U) != (4294967284U))))));
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_30 [14U] [2U] [4ULL] [i_4] = ((/* implicit */unsigned long long int) 5145051247774594271LL);
                        arr_31 [i_1] [i_4] [i_8] [i_7] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-495))) >= (arr_17 [i_1] [i_2 - 3] [i_4])));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((arr_26 [(short)24] [i_2] [i_4] [i_2]) & (((/* implicit */int) ((((((((/* implicit */int) arr_9 [i_4])) + (2147483647))) << (((((/* implicit */int) arr_24 [i_1] [i_2])) - (61))))) > (((/* implicit */int) ((var_9) != (((/* implicit */long long int) var_4)))))))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_28 [i_1] [i_1] [i_4] [i_2] [i_9])) == (((((/* implicit */_Bool) 65520U)) ? (arr_4 [i_1] [i_2]) : (((/* implicit */long long int) -1156483326))))))), (min((((/* implicit */unsigned long long int) arr_33 [i_1] [i_1])), (var_16)))));
                        arr_36 [i_1] [i_1] [i_7 + 1] [i_7] [i_9] = (~(((((/* implicit */int) var_3)) & (((var_15) + (((/* implicit */int) var_8)))))));
                        arr_37 [i_1] [15] [i_4] [i_7] [i_9] &= ((/* implicit */unsigned long long int) arr_1 [i_1]);
                    }
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    arr_41 [i_1] [(short)24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_2 - 3] [i_2] [i_4] [i_10] [i_2])) && (((/* implicit */_Bool) var_8))));
                    var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_32 [i_1])) >= (((/* implicit */int) var_0)))))));
                }
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (min((((/* implicit */unsigned int) arr_29 [i_1] [i_2] [i_2 + 1])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_4] [i_1]))) * (arr_38 [i_1] [i_2] [i_4] [i_4] [4])))))));
                    arr_44 [i_1] [i_2 - 3] [i_4] = ((/* implicit */unsigned long long int) var_4);
                }
                for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    var_34 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) 21U)) ? (((/* implicit */unsigned int) arr_29 [i_12] [i_2 + 1] [i_2 + 2])) : (arr_0 [i_2 + 2])))));
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)106)), (min((((/* implicit */short) (unsigned char)148)), ((short)6669)))))))))));
                    var_36 -= ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (22U))) << (((/* implicit */int) (unsigned char)1)));
                    var_37 = ((/* implicit */_Bool) max((var_37), ((((((~(((/* implicit */int) (unsigned short)15)))) & (((/* implicit */int) arr_16 [i_4] [i_2 - 3] [i_4] [i_12] [i_12] [i_2])))) != ((~(((/* implicit */int) arr_6 [i_1] [i_2 - 3] [i_4]))))))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    var_38 = ((/* implicit */unsigned char) (((-(arr_26 [i_1] [i_2 + 3] [i_4] [i_4]))) == (((/* implicit */int) (unsigned char)253))));
                    var_39 = ((/* implicit */short) ((arr_27 [23U] [i_13] [i_13]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                    arr_50 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((162036558U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_1))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) (!((_Bool)1)));
                        var_41 ^= (+(18446744073709551615ULL));
                    }
                    for (short i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        var_42 = ((/* implicit */int) arr_49 [i_1] [i_2] [i_4]);
                        var_43 |= ((/* implicit */int) arr_14 [i_1] [i_4] [i_2 + 2] [i_13]);
                    }
                    /* LoopSeq 4 */
                    for (int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        var_44 -= ((/* implicit */signed char) (-(((/* implicit */int) ((arr_17 [i_1] [16U] [i_4]) < (((/* implicit */long long int) var_4)))))));
                        var_45 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-10)))) * (((/* implicit */int) (short)13))));
                        var_46 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_39 [i_4] [i_2 - 3] [i_1] [i_13] [i_16])) != (16243745594009022697ULL))) ? (((18446744073709551615ULL) ^ (var_14))) : (((/* implicit */unsigned long long int) (~(var_9))))));
                        arr_57 [i_1] [i_1] [i_16] = ((/* implicit */unsigned short) arr_39 [i_1] [i_2] [i_4] [i_13] [i_16]);
                        arr_58 [i_1] [5] [i_1] [i_13] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_13])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12816)))))) : (((((/* implicit */_Bool) arr_43 [23U] [i_2])) ? (((/* implicit */int) arr_54 [i_1] [i_13] [17U] [i_13] [i_16])) : (((/* implicit */int) (short)224))))));
                    }
                    for (unsigned long long int i_17 = 3; i_17 < 22; i_17 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)21976)) != (((/* implicit */int) (unsigned short)43559)))))) != (((4132930727U) >> (((arr_20 [i_1] [(_Bool)1] [i_1] [i_2] [i_4] [i_1]) + (5994780395618088265LL))))))))));
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_35 [i_1] [i_2] [i_4] [13ULL])))))))));
                        arr_63 [i_1] [i_1] [i_1] [i_13] [i_17 - 3] [6ULL] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_20 [i_1] [i_13] [i_4] [9U] [i_17] [i_2])))) ? (arr_27 [i_17 + 1] [i_2 + 2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_13] [i_2]))));
                        arr_64 [i_13] [i_2] [i_4] [i_13] [i_17] = ((/* implicit */int) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                    }
                    for (int i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
                    {
                        arr_69 [i_1] [i_2] [i_1] [i_2] [(unsigned short)3] = ((/* implicit */int) ((arr_27 [4] [i_2 + 1] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        arr_70 [i_1] [i_2] [(short)6] [i_13] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (arr_46 [i_2] [i_4] [i_4] [i_13])));
                    }
                    for (int i_19 = 0; i_19 < 25; i_19 += 1) /* same iter space */
                    {
                        var_49 |= ((/* implicit */unsigned long long int) var_5);
                        var_50 -= ((/* implicit */_Bool) (short)-24243);
                    }
                }
                var_51 = ((/* implicit */unsigned short) 17583596109825ULL);
            }
            for (short i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                var_52 = ((/* implicit */short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_32 [i_1])))))))));
                arr_76 [i_20] = ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) (signed char)-2)))))) > (((var_4) >> (((((/* implicit */int) arr_60 [i_20] [i_20] [i_20] [i_1] [i_2])) - (55))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22947))))) < (((((/* implicit */_Bool) arr_65 [i_1] [i_20] [i_20] [i_20] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_2] [i_2] [i_20] [i_2] [i_2 - 2] [i_20]))) : (var_6)))))) : (arr_15 [i_1] [i_1]));
            }
            for (unsigned char i_21 = 2; i_21 < 23; i_21 += 1) 
            {
                arr_80 [i_21] [i_2 + 3] [i_21] = (i_21 % 2 == zero) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_1] [i_2]))) != (((arr_78 [i_21] [i_1] [i_21]) << (((arr_78 [i_21] [i_2 + 3] [i_2 + 3]) - (3691306843U))))))) ? ((+(((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43559)))))))) : (((/* implicit */int) (((-(5618417326164054484ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_33 [i_1] [17ULL])) : (((/* implicit */int) var_3)))))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_1] [i_2]))) != (((arr_78 [i_21] [i_1] [i_21]) << (((((arr_78 [i_21] [i_2 + 3] [i_2 + 3]) - (3691306843U))) - (1822212150U))))))) ? ((+(((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43559)))))))) : (((/* implicit */int) (((-(5618417326164054484ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_33 [i_1] [17ULL])) : (((/* implicit */int) var_3))))))))));
                var_53 = ((((/* implicit */int) (_Bool)1)) / ((+(((/* implicit */int) (short)32585)))));
                arr_81 [i_2] [i_2] [i_2 + 1] [i_21] = ((/* implicit */int) 5214564117664148685LL);
                var_54 = arr_18 [i_1] [i_2 + 1] [i_2] [i_2] [14LL] [(short)16] [i_21];
                arr_82 [i_1] [i_2 + 1] [i_21] [i_21] = ((/* implicit */unsigned int) (-(arr_29 [i_1] [i_2] [i_21 + 2])));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_22 = 2; i_22 < 22; i_22 += 2) 
            {
                var_55 |= arr_68 [i_1] [i_2] [(signed char)16] [i_1] [22ULL] [i_2];
                arr_87 [i_2 - 1] [i_2] [i_22] &= ((/* implicit */signed char) 1946442647U);
                arr_88 [i_1] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) var_3);
                var_56 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_83 [20ULL]))))) - (((((((/* implicit */_Bool) arr_56 [18] [i_2 + 3] [i_1] [i_2 - 2] [i_2] [i_2])) ? (536805376U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_1] [i_2] [(unsigned short)9] [i_2 + 2] [i_22 - 2]))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_45 [i_1])) >= (((/* implicit */int) var_0))))))))));
            }
            /* vectorizable */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                arr_92 [i_1] = ((/* implicit */int) (_Bool)1);
                /* LoopSeq 1 */
                for (int i_24 = 0; i_24 < 25; i_24 += 1) 
                {
                    arr_96 [i_1] [i_24] = ((/* implicit */long long int) arr_67 [i_1] [i_2] [i_2] [i_2] [i_24]);
                    arr_97 [i_1] [i_24] = ((/* implicit */signed char) ((((/* implicit */int) arr_55 [i_2 + 2] [i_2] [i_1] [i_24])) > (((((((/* implicit */int) var_8)) + (2147483647))) << (((arr_17 [i_2] [2ULL] [i_23]) - (7469336836749427549LL)))))));
                    var_57 = ((/* implicit */unsigned long long int) arr_94 [i_1] [(unsigned short)18] [1ULL] [1ULL] [i_2 + 3]);
                }
            }
        }
        var_58 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_13) : (3758161912U)))) * (8383905490393596565ULL)))) ? (2761163483U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
        arr_98 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (unsigned short)58525)) : (((/* implicit */int) (signed char)67))));
        var_59 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 8U)) * (17179869183LL)));
    }
    /* vectorizable */
    for (signed char i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
    {
        var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_94 [i_25] [i_25] [i_25] [i_25] [i_25])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_25] [i_25] [i_25] [i_25]))) : (var_13)))))))));
        var_61 = ((/* implicit */signed char) (~((-2147483647 - 1))));
        arr_101 [10LL] = ((/* implicit */signed char) arr_20 [i_25] [i_25] [i_25] [i_25] [i_25] [(signed char)2]);
        var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) ((arr_68 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]) * (arr_68 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]))))));
    }
    var_63 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) : (4274167753U)))));
    var_64 = var_8;
    var_65 = ((/* implicit */int) 4294967295U);
}
