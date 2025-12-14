/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163123
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
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) var_2)), (min((((/* implicit */unsigned int) var_4)), (890096849U)))));
    var_18 -= ((/* implicit */long long int) min((((/* implicit */unsigned short) var_5)), (var_2)));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((4323512466704421203ULL), (((/* implicit */unsigned long long int) var_16)))) > (((/* implicit */unsigned long long int) (+(3804124860151155040LL)))))))) + (max((((unsigned long long int) (unsigned char)32)), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_11)))))))))));
    var_20 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                            var_22 *= var_12;
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), ((_Bool)1)));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (((((/* implicit */_Bool) arr_9 [(short)4] [(short)4] [i_1] [i_2 - 3] [i_1] [i_4])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))))) << (((/* implicit */int) max(((unsigned char)30), ((unsigned char)15))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                arr_18 [i_3] [i_0] = ((/* implicit */unsigned short) min(((short)32767), (((/* implicit */short) (_Bool)1))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((max((((/* implicit */long long int) max((arr_5 [i_5] [i_1] [i_0]), (((/* implicit */unsigned short) var_16))))), (arr_16 [i_5] [i_5]))) > (var_15)));
                                var_25 -= ((/* implicit */short) max(((+(arr_2 [i_2 + 1]))), ((((~(3404870429U))) & (max((((/* implicit */unsigned int) var_11)), (3714728126U)))))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_8 [i_2] [i_2] [i_2] [i_2 + 2]))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                                var_28 &= ((unsigned char) arr_9 [1U] [i_1] [i_6] [i_7] [i_8] [i_1]);
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_6])) - (1327122931)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) (unsigned char)246);
                                arr_33 [i_1] [i_1] [i_1] [i_9] [i_10] [i_10] [i_1] = ((/* implicit */unsigned int) -834491836444698767LL);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    var_30 = ((unsigned int) (short)-22521);
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-120)) != (((/* implicit */int) (unsigned char)157)))))));
                    arr_36 [i_0] [i_1] [i_11] [i_11] = ((/* implicit */int) arr_30 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            {
                                arr_42 [(short)3] [i_12] [(signed char)1] [i_11] [i_1] [(unsigned char)0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_11] [i_12] [i_13] [i_11] [i_12])))) ? (((arr_24 [i_0] [i_1] [i_11]) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1])))) : (((/* implicit */int) (unsigned char)140))));
                                arr_43 [i_0] [i_1] [i_0] [i_1] [0U] = ((/* implicit */short) (~(((unsigned int) 561043377))));
                                arr_44 [i_0] = ((/* implicit */short) var_4);
                                arr_45 [5U] [i_0] [i_1] [i_11] [i_12] [i_1] [i_13] = ((/* implicit */long long int) ((arr_8 [i_0] [i_0] [i_0] [i_12]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                    {
                        var_32 = ((unsigned long long int) 294990196444298960LL);
                        arr_51 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((arr_20 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_14] [i_1])))) + (var_3)));
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) -294990196444298960LL))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            arr_57 [i_0] [i_14] [i_16] [i_17] = ((/* implicit */signed char) (unsigned char)223);
                            arr_58 [i_0] [4] = ((/* implicit */signed char) (unsigned short)4869);
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1003038142U)) + (arr_39 [i_0] [i_17] [i_0] [i_16] [i_17] [i_1] [i_0]))))));
                        }
                    }
                    for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) 294990196444298960LL);
                        var_37 = ((/* implicit */int) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_14] [i_18] [i_18] [i_14])) : (arr_39 [i_18] [i_18] [i_18] [i_14] [i_1] [i_1] [i_0])))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_34 [i_0]), (((/* implicit */long long int) 4116672845U))))) || (((/* implicit */_Bool) (unsigned char)23)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 1) 
                        {
                            var_39 *= ((/* implicit */short) ((((/* implicit */int) ((18446744073709551602ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48369)))))) == (((/* implicit */int) arr_5 [i_0] [i_1] [i_19]))));
                            arr_69 [i_0] [i_1] [i_1] [i_0] [i_0] [i_19] = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */unsigned long long int) 1695514934U)) : (arr_20 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3373629254880000623ULL)) ? (((/* implicit */int) arr_15 [6ULL])) : (((/* implicit */int) (unsigned char)23))))))), (((/* implicit */unsigned long long int) var_0))));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                        {
                            arr_72 [i_21] = ((/* implicit */int) ((unsigned short) ((unsigned int) 561043381)));
                            var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_71 [i_0] [i_19] [i_14])) ? (((/* implicit */int) (signed char)-106)) : (1844095227))), (((/* implicit */int) ((((/* implicit */unsigned long long int) -198494737)) > (var_7))))))) ? (((((arr_60 [i_0] [i_0] [i_14] [i_19] [(unsigned char)3]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6)))) + (((/* implicit */int) arr_53 [i_21] [i_19] [i_14])))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)193))))), (max((((/* implicit */unsigned char) (signed char)-50)), (arr_68 [i_0] [i_0] [i_14] [i_19] [i_21]))))))));
                        }
                        for (unsigned short i_22 = 0; i_22 < 11; i_22 += 1) 
                        {
                            var_41 ^= ((/* implicit */_Bool) (unsigned char)32);
                            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) != ((+(246539162U)))))));
                        }
                        arr_77 [i_0] [i_1] [i_14] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) (signed char)47))))) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-561043377) : (((/* implicit */int) (unsigned short)30023))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_54 [i_0] [i_1] [i_1] [i_14] [i_14] [10U])) == (((/* implicit */int) arr_35 [i_0] [(unsigned char)8] [i_19] [i_1]))))), (((((/* implicit */unsigned long long int) var_8)) + (arr_74 [i_0] [i_0])))))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))) % (304553638U)));
                    }
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_53 [i_14] [i_1] [i_0]), (var_10)))) << (((((unsigned long long int) (unsigned short)1023)) - (1000ULL)))));
                }
                /* LoopNest 3 */
                for (unsigned int i_23 = 0; i_23 < 11; i_23 += 2) 
                {
                    for (int i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((var_15) != (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_12)))))))))));
                                var_46 = ((/* implicit */unsigned char) arr_81 [i_0] [i_0] [i_0] [i_0]);
                                arr_87 [i_0] [i_0] [i_23] [i_24] [i_25] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)64513)) ? (26) : (((/* implicit */int) (signed char)-75))))));
                                var_47 = ((/* implicit */short) 22556558U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
