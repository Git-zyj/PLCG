/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172984
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
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((arr_0 [i_0 - 3]), (((/* implicit */unsigned int) (~(var_11))))));
        arr_2 [i_0 - 3] = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        arr_3 [i_0 + 2] = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))), (arr_1 [i_0])))));
        var_18 = ((long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_14))));
    }
    for (unsigned char i_1 = 4; i_1 < 9; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_19 += ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2026183980U)) ? (arr_0 [i_1]) : (3640350892U)))), (min((((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [i_2])), (16253994194547125425ULL))))) != (((unsigned long long int) var_11))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) (!(arr_12 [i_1 + 2] [i_2] [4])));
                        var_21 += ((/* implicit */unsigned int) (((+(arr_14 [i_1] [i_2] [i_3] [i_1 - 4] [i_2] [10U]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [10LL] [i_3] [i_1 + 2] [i_5] [i_3])))))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) 654616403U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) : (((((/* implicit */_Bool) arr_1 [7])) ? (2268783316U) : (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) (~(1693647669)))))))));
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) ((2026183980U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 3]))) : (8943225692660741764LL)))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_8 [i_1 - 3] [i_4])))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2268783335U)) < (0ULL))))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_1] [(unsigned char)8] [i_4] [i_5])), (17716678796484477201ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [i_2] [i_2] [i_3] [(_Bool)1])))) : (((1021743025149517181ULL) << (((((/* implicit */int) arr_16 [i_1 + 1] [i_2] [i_1 + 1] [i_4] [i_1 + 1])) - (91)))))))));
                    }
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_17 [i_6] [i_6] [i_2])), (min((arr_14 [i_1] [i_2] [i_2] [(signed char)9] [i_6] [i_1 + 2]), (arr_14 [i_1 - 1] [i_6] [i_3] [i_4] [i_6] [i_1 + 1])))));
                        var_26 = ((/* implicit */signed char) max((max((((/* implicit */int) (signed char)-10)), (var_11))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1304199386)), (14108658486945879928ULL)))) ? (((/* implicit */int) arr_18 [i_1 - 2] [5ULL] [i_1 - 2] [i_1 - 3])) : (((arr_1 [i_3]) ^ (((/* implicit */int) var_15))))))));
                        arr_20 [i_6] [i_2] [i_6] = ((/* implicit */unsigned short) min((-1693647669), (((/* implicit */int) (unsigned short)30013))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_24 [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1 - 4] [i_7] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [i_1 + 1] [i_2] [i_1 - 3] [(unsigned char)3] [i_7] [i_2])))) ? ((-(arr_14 [i_1 - 2] [i_7] [i_3] [(unsigned short)1] [10ULL] [i_7]))) : (arr_14 [i_1 - 4] [i_2] [i_4] [i_4] [i_7] [i_2])));
                        var_27 = ((/* implicit */long long int) ((((17425001048560034416ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4338085586763671688ULL)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_2]))) : (arr_22 [i_1 - 1] [i_2] [i_7] [i_4] [i_7] [i_4] [i_3])));
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(16459573345778056925ULL))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (~(4390887215549877479ULL))))));
                    }
                    var_30 = ((/* implicit */signed char) 134201344U);
                }
                arr_28 [i_2] [(unsigned char)8] = ((/* implicit */unsigned short) min(((~(1047552))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_35 [(unsigned char)5] [i_2] = ((/* implicit */int) var_16);
                        arr_36 [i_1] [i_1] [i_2] [i_9] [i_10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 - 4])) ? (arr_7 [i_1 + 1] [i_1]) : (arr_7 [i_1 - 3] [i_1 - 1])));
                        arr_37 [i_1] [i_2] [i_3] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (14108658486945879928ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1 - 4]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_40 [i_1] [i_11] [i_3] [(signed char)8] [i_9] [(signed char)8] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_8 [i_1] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 - 4] [i_1 + 2]))));
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_25 [i_1] [i_2] [i_1] [i_9] [10]))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        arr_44 [7] [i_1] [i_2] [i_3] [i_9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_29 [i_1 - 4] [i_1 - 4] [i_1 + 2])) - (55448)))));
                        var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1 + 2]))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (654616403U)))));
                    }
                    for (unsigned int i_13 = 3; i_13 < 9; i_13 += 1) 
                    {
                        var_34 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_13 + 2]))));
                        arr_48 [i_1 + 1] [i_13] [i_13] [i_9] [i_9] [i_9] [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))) <= (((-1862348115) / (((/* implicit */int) (unsigned short)65385))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
                    {
                        arr_52 [(unsigned char)6] [i_3] [i_9] [(unsigned char)6] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
                        var_35 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50008))) < (var_0))) ? (((arr_43 [i_1] [i_1]) - (((/* implicit */int) (unsigned char)92)))) : (((/* implicit */int) arr_49 [i_1] [i_2]))));
                        var_36 = ((/* implicit */long long int) var_5);
                        var_37 -= ((/* implicit */signed char) var_15);
                        var_38 *= ((/* implicit */unsigned char) ((signed char) arr_26 [i_1] [i_14] [i_9]));
                    }
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        var_39 += ((/* implicit */unsigned long long int) arr_43 [i_1 - 2] [7U]);
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_0))) ? ((~(((/* implicit */int) (unsigned char)13)))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [(unsigned short)5] [i_2])) ? (((/* implicit */int) var_16)) : (arr_43 [i_15] [i_1 - 3]))))))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */signed char) ((unsigned short) arr_32 [i_1 - 4] [i_16] [i_16] [i_16] [i_16] [i_16]));
                        var_42 *= ((/* implicit */int) ((_Bool) 16459573345778056916ULL));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        var_43 = (unsigned short)15527;
                        arr_61 [i_9] [i_3] [i_1 - 4] = ((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1 - 3] [i_1 + 2] [i_1] [i_2]);
                    }
                    for (short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        var_44 = ((/* implicit */signed char) -1279084644);
                        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_18] [i_9] [i_3] [i_3] [i_1] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (arr_9 [i_2] [i_3] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((17425001048560034434ULL) == (((/* implicit */unsigned long long int) 2268783316U))))))));
                        var_46 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2268783316U)))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)40774)) : (((/* implicit */int) arr_25 [i_1 - 4] [i_2] [i_3] [i_9] [i_19]))))) ? (((/* implicit */int) arr_49 [i_19] [(signed char)1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4160749568U)))))));
                        var_48 *= ((/* implicit */unsigned char) ((9235491505478448242ULL) / (((/* implicit */unsigned long long int) 3539747132U))));
                        arr_68 [i_1] [(signed char)1] [i_19] [i_1 + 2] [i_1] [i_1 + 2] = ((/* implicit */long long int) ((4160749568U) >= (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_9])))))));
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (!(((4390887215549877479ULL) == (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1 - 1] [i_1])))))))));
                    }
                }
            }
            var_50 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_10 [i_2] [i_1 - 4] [i_1]) ? (66846720) : (1480991216)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 2] [i_1 - 1] [4ULL]))) ^ (1U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_20 = 0; i_20 < 11; i_20 += 1) /* same iter space */
            {
                var_51 ^= ((/* implicit */unsigned int) var_7);
                /* LoopSeq 1 */
                for (short i_21 = 0; i_21 < 11; i_21 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_1 - 2] [i_1 - 4] [i_1 - 4] [i_1 - 1] [i_1 - 1] [i_1 + 2])) % (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                        var_53 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))));
                    }
                    var_54 = ((/* implicit */unsigned short) ((arr_13 [i_1 + 1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_1 + 2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 0; i_23 < 11; i_23 += 3) 
                    {
                        var_55 = ((/* implicit */unsigned char) 3223889900691352720ULL);
                        var_56 = ((/* implicit */unsigned short) (short)-18261);
                        var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) 16459573345778056916ULL))));
                    }
                    var_58 = ((/* implicit */long long int) arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_1] [(unsigned short)10]);
                }
                var_59 = ((/* implicit */long long int) (signed char)58);
            }
            for (short i_24 = 0; i_24 < 11; i_24 += 1) /* same iter space */
            {
                arr_85 [i_24] [i_24] [i_24] [i_1 - 3] = (+(min((arr_22 [5] [i_1 + 1] [5] [i_1 - 1] [i_2] [i_1 + 1] [i_2]), (arr_22 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_2] [8LL] [i_24]))));
                var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_1 - 2] [(short)0] [(unsigned short)4] [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3610))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_1 - 4] [i_2] [(unsigned char)6] [i_24])) ? (((/* implicit */int) var_3)) : (1086236851)))))))));
            }
            var_61 = ((/* implicit */_Bool) min((var_61), (((/* implicit */_Bool) ((short) (((((-2147483647 - 1)) < (-1531746779))) ? (arr_71 [i_1 + 1] [i_2] [i_1 + 1] [4U]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))))));
        }
        var_62 = ((/* implicit */unsigned char) ((arr_47 [(short)5] [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 4] [i_1 - 1]) ? (min((((/* implicit */unsigned long long int) 654616404U)), (arr_71 [i_1] [i_1] [i_1 - 4] [i_1 + 2]))) : (((/* implicit */unsigned long long int) var_2))));
    }
    for (unsigned char i_25 = 4; i_25 < 9; i_25 += 4) /* same iter space */
    {
        arr_89 [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 654616404U)) ? (((((/* implicit */_Bool) ((signed char) arr_12 [i_25] [2LL] [i_25 + 2]))) ? (((((/* implicit */_Bool) arr_22 [0ULL] [i_25] [i_25] [i_25 - 1] [i_25] [i_25] [i_25])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min((((/* implicit */signed char) var_6)), (arr_65 [i_25] [i_25 - 3] [i_25] [i_25] [i_25 - 2] [i_25] [i_25])))))) : (((/* implicit */int) arr_51 [i_25 - 1] [i_25 - 1] [i_25] [i_25 - 3] [i_25 - 4] [i_25] [(unsigned short)4]))));
        arr_90 [i_25] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max((((/* implicit */signed char) arr_32 [i_25 + 1] [i_25 - 3] [i_25 + 1] [(unsigned short)0] [5] [i_25])), (arr_46 [i_25] [i_25 - 3] [(unsigned short)8] [i_25] [i_25] [i_25] [i_25]))), (max((((/* implicit */signed char) arr_88 [i_25] [i_25])), (arr_51 [i_25] [7U] [i_25] [i_25] [i_25] [i_25 + 2] [i_25])))))), (3223889900691352728ULL)));
    }
    var_63 = ((/* implicit */int) min(((+(1021743025149517180ULL))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)38652))))), (((((/* implicit */_Bool) 15222854173018198888ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (17425001048560034434ULL)))))));
}
