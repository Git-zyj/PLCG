/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169935
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30537)) ? (var_5) : (((/* implicit */int) (unsigned short)28366))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2682)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62188))) : (0ULL)));
                arr_7 [i_0] [i_1] [8LL] = ((/* implicit */short) (!(((/* implicit */_Bool) 6694602556595860099LL))));
                var_15 ^= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                /* LoopSeq 2 */
                for (short i_3 = 3; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_1 + 2] [i_2 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [(signed char)0] [i_2] [i_3] [i_1 - 1] [i_2 - 1]) == (arr_8 [(unsigned short)10] [1ULL] [i_2] [i_3] [i_1 + 1] [i_2 + 2]))))) : (min((985092833886534508LL), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2]))))));
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_3] [i_3] = (+(var_2));
                        var_17 += ((/* implicit */unsigned int) var_11);
                        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1] [i_3 + 2])) ? (min((((((/* implicit */_Bool) (short)-25457)) ? (((/* implicit */long long int) 3436349306U)) : (-5298517666444142698LL))), (((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_1] [(signed char)2])), (var_1)))))) : (((/* implicit */long long int) ((((_Bool) arr_0 [i_0] [i_1])) ? ((~(2334748664U))) : (arr_4 [i_3] [i_3] [i_3]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        var_19 *= ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 3]))));
                        arr_15 [i_0] [i_1 + 1] [i_3] [i_3] [i_1 + 1] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_1 + 2]);
                        arr_16 [i_3] [i_1] = (~(33538048));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) 15284976892233061256ULL)))))));
                    }
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)32751)), (((var_7) ^ (var_7)))));
                }
                for (short i_6 = 3; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8087720396614728725ULL))));
                        var_23 = ((/* implicit */unsigned char) var_6);
                        var_24 = ((/* implicit */int) ((signed char) var_3));
                        var_25 = ((/* implicit */unsigned char) ((0U) % (4294967295U)));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 4; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) arr_10 [i_0] [i_1 + 2] [i_8] [i_6 - 2] [i_8]);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)20145)))))));
                        var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1 + 3] [i_6 - 1] [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (7ULL)));
                        var_29 = (signed char)49;
                    }
                    for (unsigned char i_9 = 4; i_9 < 11; i_9 += 2) /* same iter space */
                    {
                        var_30 ^= var_7;
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0])), (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 833295756)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) / (126100789566373888LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-28004)))))) : (((((/* implicit */_Bool) max(((signed char)-106), (arr_17 [i_0] [i_0] [i_2 + 2] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22630))) : (0ULL))))))));
                        arr_26 [i_1] [(unsigned short)11] [(short)1] [i_6] = ((/* implicit */unsigned short) arr_19 [i_9] [i_6] [i_0] [i_1 - 1] [i_0]);
                    }
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (_Bool)1))));
                }
            }
            for (short i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                arr_31 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_1 + 2] [i_1 + 2]), (arr_4 [i_0] [i_1 + 2] [i_10])))) ? (((unsigned int) arr_25 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (short)0)))))));
                var_33 -= ((/* implicit */short) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)31555))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)52)))))));
                    var_35 = ((/* implicit */unsigned long long int) var_6);
                    arr_34 [i_11] [i_10] [i_10] [i_10] [(unsigned short)11] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_13 [(signed char)12] [i_1] [(signed char)12] [i_1 + 3] [i_10] [7ULL])) ? (((/* implicit */unsigned int) min((var_1), ((-2147483647 - 1))))) : (2067702410U))));
                    var_36 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) 1625818347U)) <= (((((/* implicit */_Bool) 1025159167)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (9223372036854775807LL))))));
                }
                for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    var_37 *= ((/* implicit */unsigned long long int) (!(min((((1686432880) == (((/* implicit */int) (unsigned short)22242)))), (var_10)))));
                    var_38 = ((/* implicit */signed char) max((((/* implicit */short) (signed char)124)), ((short)-2057)));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_13 = 3; i_13 < 12; i_13 += 1) 
                {
                    var_39 += ((/* implicit */signed char) 1515534163647591654ULL);
                    arr_39 [8] [i_10] [i_10] [8] = ((/* implicit */long long int) ((arr_25 [i_1 + 1] [i_1 + 2] [i_13 - 3] [i_13 - 3] [i_13]) * (((/* implicit */unsigned long long int) arr_38 [i_1 + 2] [i_1 + 1] [i_13 - 2] [3LL]))));
                }
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) 4294967295U))));
            }
            for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 1) 
            {
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_19 [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1 + 2]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    var_42 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_15]))));
                    arr_45 [(signed char)11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)32484)), (4294967295U))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) 616590437U))))))))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    var_43 |= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]);
                    arr_50 [i_0] [i_16] [i_0] [i_16] = (!(((/* implicit */_Bool) 12488375332270348437ULL)));
                }
                /* vectorizable */
                for (signed char i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    var_44 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_14] [i_1 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_14])))));
                    var_45 += ((/* implicit */signed char) (+(((/* implicit */int) arr_32 [i_17] [i_14 - 1] [i_14] [i_1 + 3] [i_1 - 1] [i_1 + 3]))));
                    var_46 = ((/* implicit */long long int) arr_0 [i_14 + 2] [i_1]);
                }
            }
            arr_55 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) > (((long long int) 524160U))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) 
        {
            var_47 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 17797008457816293954ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min((var_4), (var_4))))))) % (((((/* implicit */_Bool) arr_33 [i_18] [i_18] [i_18] [(short)4])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_18] [(signed char)4] [i_18] [i_18])))))));
            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned short)1] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_18] [6ULL] [i_18])) : (var_7))), (((((/* implicit */_Bool) (signed char)28)) ? (8884026021459478760ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13519))))))))));
            arr_58 [i_18] = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)4723)));
        }
    }
    for (signed char i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
    {
        var_49 = ((/* implicit */int) min((((arr_52 [i_19] [i_19] [i_19] [i_19]) & (((15848618774207302487ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))))))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)1938)))));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
            {
                {
                    var_50 -= ((/* implicit */int) min(((unsigned short)65529), (((/* implicit */unsigned short) (signed char)-116))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_22 = 0; i_22 < 13; i_22 += 2) 
                    {
                        var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_19] [i_20]))))) < (((((/* implicit */_Bool) (signed char)118)) ? (0ULL) : (((/* implicit */unsigned long long int) 1471724380)))))))));
                        arr_67 [i_19] [i_19] [i_19] [i_19] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13934)) ? (arr_19 [i_19] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))));
                        arr_68 [i_19] [i_19] [i_21] [i_22] = ((/* implicit */_Bool) var_2);
                        var_52 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-2147483647 - 1))) / (2923194534U)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 26LL)) : (12271923533845356725ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125)))));
                    }
                    for (int i_23 = 0; i_23 < 13; i_23 += 2) 
                    {
                        arr_71 [6U] [(unsigned short)3] [i_21] [i_21] = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)17)), (((((/* implicit */_Bool) arr_32 [i_19] [i_19] [i_21] [i_21] [(unsigned char)1] [i_23])) ? (((/* implicit */int) arr_32 [i_19] [i_21] [i_21] [i_23] [(signed char)11] [i_21])) : (((/* implicit */int) arr_32 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))))));
                        arr_72 [i_19] [(signed char)0] [i_20] [(signed char)4] [(signed char)3] [i_23] |= ((/* implicit */short) ((int) ((short) 554668857U)));
                        arr_73 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_13 [i_19] [i_20] [i_21] [i_20] [i_23] [i_23])))) ? (((/* implicit */int) ((_Bool) 902073494U))) : (((((/* implicit */_Bool) var_0)) ? (-1916763937) : (((/* implicit */int) var_6))))));
                        arr_74 [i_19] [1ULL] &= (~(var_7));
                    }
                    var_53 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_21] [i_20] [i_19] [i_21] [i_19])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) + (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                    var_54 = ((((/* implicit */_Bool) 4294967295U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47778)) ? (((/* implicit */int) (_Bool)0)) : (-1807462863)))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) ((signed char) arr_20 [i_19] [i_19] [i_21] [i_19] [i_19])))))));
                }
            } 
        } 
    }
    for (signed char i_24 = 0; i_24 < 13; i_24 += 1) /* same iter space */
    {
        arr_77 [i_24] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 1948401781))));
        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_6))))), (min((arr_40 [i_24] [i_24] [i_24] [i_24]), (((/* implicit */int) (short)32763))))))) || (((/* implicit */_Bool) ((signed char) min((18446744073709551590ULL), (((/* implicit */unsigned long long int) 1959373671652938569LL)))))))))));
    }
}
