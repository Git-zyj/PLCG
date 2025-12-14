/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17507
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (signed char)90)))));
    var_11 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-91))))) ? (((((/* implicit */_Bool) (signed char)90)) ? ((~(((/* implicit */int) (signed char)-91)))) : ((~(((/* implicit */int) (signed char)90)))))) : (((/* implicit */int) (signed char)112))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)8] [i_1])))))) : (var_5))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 360636397U)) ? (((/* implicit */int) (unsigned short)20223)) : (((/* implicit */int) arr_5 [i_0] [(unsigned char)4] [(signed char)1]))))), (min((((/* implicit */unsigned int) (unsigned char)221)), (arr_2 [i_0])))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [8U] [i_0]))))), (36028796750528512LL))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))) : (4294967295U)))));
                        var_15 &= ((/* implicit */long long int) ((arr_0 [i_0] [i_0]) >> (((4294967295U) - (4294967280U)))));
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20489)) >> (((((/* implicit */int) (unsigned char)80)) - (79))))))));
                        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 8191ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [(signed char)9] [i_1] [i_1] [(unsigned short)8] [i_1] [0ULL])))) * (((/* implicit */int) ((arr_3 [i_2] [1LL]) >= (((/* implicit */long long int) arr_1 [(_Bool)1])))))));
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 4; i_5 < 11; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(short)1])) || (((/* implicit */_Bool) 8191ULL))));
                            arr_16 [i_2] [5ULL] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_6)), ((-(1249997013U))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8191ULL))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) 36028796750528512LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 52776558133248ULL))))) : (var_9)));
                            var_20 = (-(var_5));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_21 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_2)) ? (arr_15 [0U] [10LL] [i_0] [i_4] [i_4] [i_1]) : (arr_2 [i_2])))));
                            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [(unsigned char)6] [i_0] [i_4] [i_7])) ? (((/* implicit */unsigned long long int) ((3144402510U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (2028691229488991981ULL)))));
                            arr_23 [(unsigned char)10] [(unsigned char)10] [(unsigned short)9] [(unsigned short)11] [i_7] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-91)))))) || (((/* implicit */_Bool) arr_3 [(short)10] [5ULL]))));
                        }
                        var_23 = ((/* implicit */signed char) (+((((((~(((/* implicit */int) arr_12 [2LL] [(short)8])))) + (2147483647))) >> (((((((/* implicit */_Bool) var_9)) ? (arr_20 [1U] [(signed char)0] [i_1] [(short)9] [i_4]) : (((/* implicit */long long int) arr_1 [i_0])))) + (8020242094720745387LL)))))));
                        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_14 [11] [i_4] [(signed char)8] [0U] [(unsigned short)7]), (((/* implicit */short) var_0))))) ? (((/* implicit */int) (signed char)-20)) : ((-(((/* implicit */int) (unsigned short)14750)))))) * (((/* implicit */int) var_3))));
                    }
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [(unsigned char)9] [i_2] = ((/* implicit */unsigned int) min(((((_Bool)1) ? (144110790029344768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (signed char)90))));
                        var_25 = ((/* implicit */short) var_4);
                    }
                    for (unsigned char i_9 = 3; i_9 < 8; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (18446744073709543425ULL))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-126)), ((~(((/* implicit */int) (unsigned short)43166))))))) >= (((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)2))))) & (arr_18 [i_0] [i_2])))));
                    }
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((18446691297151418367ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (2149895310U)))))))));
                }
                for (signed char i_10 = 3; i_10 < 9; i_10 += 4) 
                {
                    arr_33 [i_0] [9LL] [4U] [i_10] = (unsigned short)0;
                    arr_34 [(signed char)4] [(unsigned short)1] [5ULL] &= ((/* implicit */short) 18446744073709543424ULL);
                    arr_35 [(unsigned short)1] [(signed char)6] [(unsigned short)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (unsigned short)43164)), (2145071983U)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) min((var_2), (((/* implicit */short) arr_30 [i_10] [(unsigned char)8]))))))))) : (((((/* implicit */long long int) min((2149895312U), (((/* implicit */unsigned int) (_Bool)0))))) / (((((/* implicit */_Bool) var_4)) ? (-36028796750528513LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0])))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_11 = 1; i_11 < 11; i_11 += 2) 
                    {
                        var_29 &= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_20 [2U] [(unsigned short)2] [i_10 - 2] [(unsigned char)2] [(unsigned short)0])), (17835463723020045596ULL))) >= ((~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (611280350689506020ULL)))))));
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((2149895317U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))))))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (unsigned short)65535)), (((var_4) >> (((((/* implicit */int) var_2)) + (12422))))))) + (((((/* implicit */_Bool) 2149895304U)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [5U] [i_10] [i_11] [3U] [i_11] [i_10])) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (signed char)81)))))))));
                            arr_41 [i_11] [(unsigned short)10] [(_Bool)0] [(unsigned short)8] [i_12] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2149895313U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2145071982U)))) == (34359738360ULL))) ? (((max((3377595293063300156ULL), (((/* implicit */unsigned long long int) (short)-745)))) >> ((-(((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)30582)), (var_4)))) ? (((((/* implicit */_Bool) (unsigned char)167)) ? (7602863255820040744ULL) : (((/* implicit */unsigned long long int) arr_22 [i_11] [i_1] [i_1] [3LL] [7LL] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_32 [(unsigned char)1] [(unsigned char)1] [(signed char)11] [(unsigned char)1])), ((short)11956))))))));
                            var_32 = ((/* implicit */unsigned short) (+(var_4)));
                            var_33 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 0U)))) ? (max((min((((/* implicit */long long int) var_8)), (arr_22 [i_0] [(_Bool)1] [2ULL] [i_11] [2ULL] [(unsigned char)2]))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) (unsigned short)10522))))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_34 = ((/* implicit */unsigned int) (short)11665);
                        }
                        arr_42 [(short)8] [2U] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_2))))));
                    }
                    for (signed char i_13 = 1; i_13 < 11; i_13 += 1) 
                    {
                        arr_47 [i_1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((15069148780646251459ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (var_5) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_2), (((/* implicit */short) (_Bool)0))))))))));
                        var_35 |= ((/* implicit */unsigned short) max((15069148780646251459ULL), (((/* implicit */unsigned long long int) (short)1566))));
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) -5303738796258117669LL)))) ? (((/* implicit */long long int) 134215680)) : (min((((/* implicit */long long int) (unsigned short)15320)), (var_1))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) -1914794007)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned char)88))))))))));
                    }
                    for (unsigned short i_14 = 3; i_14 < 10; i_14 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned short i_15 = 3; i_15 < 10; i_15 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)1023)), ((unsigned short)46969)))) ? (((((/* implicit */int) (short)1023)) / (var_9))) : (((/* implicit */int) (signed char)-4))))));
                        var_40 = (!(((/* implicit */_Bool) (short)-27574)));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 1; i_16 < 10; i_16 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned int) max(((~(arr_19 [i_15] [2U] [2U] [9U] [i_10 + 1] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)11665))))))))));
                            arr_57 [i_0] [(_Bool)1] [7U] [i_15] [i_16] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [11LL] [i_10 - 3] [i_10 - 3] [(unsigned short)8] [(short)3]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_10 + 1] [i_15 - 2] [i_16 + 2])) & (var_9)))) : (((((/* implicit */_Bool) var_0)) ? (arr_20 [1U] [i_15] [i_15] [i_15 + 1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_16 - 1] [i_16 - 1] [i_16 + 1]))))));
                            var_42 += (((-(0LL))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)4131)) || (((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [2ULL] [i_0] [2ULL]))))))));
                        }
                        arr_58 [i_0] [(signed char)8] [4U] [(_Bool)1] = ((/* implicit */long long int) (-(min((9223372036854775807ULL), (((/* implicit */unsigned long long int) var_1))))));
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8882593702036381127ULL)) ? (((/* implicit */int) (short)-1024)) : (1838822615)));
                    }
                    arr_59 [(_Bool)1] [(short)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) / (arr_40 [i_10 - 1] [(short)6] [6ULL] [1ULL] [4] [(unsigned short)6])))) ? (((((/* implicit */int) (short)8)) & (arr_55 [i_0] [i_0] [(short)4] [8U] [4U] [(short)8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_0] [i_1] [0] [(short)8] [(short)8] [(unsigned short)6])))))));
                }
                for (unsigned int i_17 = 1; i_17 < 9; i_17 += 4) 
                {
                    var_44 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [(signed char)9] [(unsigned short)2]))) & (((((/* implicit */_Bool) 2082055716U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4)))))));
                    var_45 = ((/* implicit */unsigned long long int) (-(min((272730423296LL), (((/* implicit */long long int) var_9))))));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)104)) ? ((-(((/* implicit */int) (unsigned char)167)))) : (((/* implicit */int) (short)744))))) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) (unsigned short)65523))));
                    var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7972745575125068002LL)) ? (-248187193) : (((/* implicit */int) (short)-22414))));
                    arr_62 [i_17] = ((/* implicit */unsigned short) (short)20985);
                }
            }
        } 
    } 
    var_48 = ((/* implicit */signed char) var_5);
}
