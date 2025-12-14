/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167726
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_2 [(signed char)13] [(signed char)13] [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))))))) ^ (arr_4 [i_0] [i_0])));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_1] [(signed char)8] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-93)) ? (arr_4 [0U] [0U]) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_2 - 3] [i_2 - 2]), (((/* implicit */unsigned short) (signed char)-28))))))));
                            arr_14 [i_0] [6] [i_2 + 1] [i_2 - 4] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)172)), (4294967295U)))) ? ((+(0))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) >= (1048576U))))));
                            var_10 = ((/* implicit */signed char) ((((/* implicit */int) (short)32767)) & (((((/* implicit */_Bool) 651871604)) ? ((-(-834742930))) : (((/* implicit */int) (signed char)51))))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 - 3] [i_2 - 4])) : (((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 3] [i_2 + 1] [i_2 - 4] [i_2 + 1])) || (((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1] [i_2 - 4] [i_2 - 3] [i_2 - 3]))))) : (((((/* implicit */_Bool) 3264092419U)) ? (((/* implicit */int) arr_8 [i_2 - 3] [i_2 - 3] [i_2 + 1] [i_2 - 4] [i_2 - 3])) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1] [i_2 - 2] [i_2 - 2]))))));
                            var_11 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> ((((~(((/* implicit */int) arr_11 [i_0] [i_1] [(short)15] [(short)15] [(_Bool)1] [i_4 + 1])))) + (2)))))), (max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [(signed char)8] [i_4 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))) : (arr_5 [i_0] [i_0]))), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [(signed char)5]))))));
                        }
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -1171130319)), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)154))))) & ((-(18446744073709551615ULL)))))));
                    }
                    for (short i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_5 + 1])) ? (((/* implicit */int) arr_3 [16] [i_2] [16])) : ((~(((/* implicit */int) (unsigned short)2628)))))), (((/* implicit */int) arr_17 [i_0] [i_0] [0] [i_2 + 1] [10] [i_5]))));
                        arr_19 [i_0] = ((/* implicit */unsigned long long int) min((((8520971621924312222LL) << (((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_0])) - (162))))), (((/* implicit */long long int) var_4))));
                        arr_20 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (short)-15768);
                    }
                    for (short i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            var_13 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_17 [i_2] [i_2 - 1] [(_Bool)1] [i_2 - 4] [i_2] [i_2 - 3])) >= (((/* implicit */int) arr_21 [i_7 + 2] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_2 - 4] [i_2 - 4])))))));
                            arr_27 [i_0] [i_0] [(short)11] [i_0] [i_0] = arr_3 [17U] [17U] [i_2 + 1];
                        }
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            arr_31 [i_0] [(signed char)11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_22 [(signed char)13] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_2 - 2] [i_0])) : (((/* implicit */int) var_6))))))))) <= (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (arr_18 [(signed char)10] [i_2 - 1] [(signed char)4] [i_8]))) : (((/* implicit */unsigned long long int) ((1869647067) >> (((((/* implicit */int) arr_8 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_6] [i_6 + 1])) + (69))))))))));
                            arr_32 [i_0] [i_0] = ((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) max((var_4), (arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((((/* implicit */short) arr_9 [i_8] [i_1] [i_2] [2LL] [i_8])), ((short)13735)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8] [i_0] [i_6 - 1] [0ULL] [i_2 - 3] [i_0] [i_0]))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            arr_35 [i_0] [i_0] [i_2 + 1] [i_6] [i_9] [i_9] = ((/* implicit */int) var_0);
                            var_14 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
                            arr_36 [i_0] [(_Bool)1] [i_2] [i_2 - 4] [(_Bool)1] [i_6 + 1] [(signed char)11] = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)0)), (((((arr_28 [i_0] [i_2 - 4] [i_0] [i_6 + 1] [i_9]) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_1] [i_0] [i_9] [i_9])), (arr_33 [i_0] [i_0] [i_0] [i_0])))) - (1)))))));
                        }
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56812))) >= (-3718413827220278864LL))))));
                        var_16 = ((/* implicit */unsigned int) (short)11266);
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_42 [i_10] [i_0] [i_10] [i_10] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1049137134)), (arr_4 [i_0] [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)3549))))) : (((/* implicit */int) (unsigned short)47242))))) ? (max((((((/* implicit */_Bool) arr_30 [1U] [i_1] [8] [1U] [1U] [i_11])) ? (((/* implicit */int) arr_38 [i_0] [i_0] [i_11 - 1] [i_0] [1ULL])) : (((/* implicit */int) arr_38 [i_0] [(short)6] [i_2 - 2] [i_10] [i_11])))), (((/* implicit */int) ((((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [i_10])) != (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [12U] [i_0]))))))) : (((/* implicit */int) arr_38 [(unsigned short)9] [i_1] [i_2 - 1] [i_10] [i_10]))));
                                arr_43 [i_10] [(signed char)16] [i_0] [i_10] [i_11] = ((/* implicit */int) ((((711431374568539208ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) << (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (4188952833U) : (3815633459U))) < (1052727374U))))));
                                arr_44 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_0] [i_0] [i_2] [i_0] [i_11 - 1]))));
                                arr_45 [i_0] [i_1] [i_2 - 1] [i_2 - 4] [i_0] [(unsigned short)5] [i_11 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)91)) & (((((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) arr_24 [(unsigned short)3] [i_1] [i_1] [i_0] [0U] [i_1] [i_1])) : (-2078867207))) - ((~(((/* implicit */int) arr_0 [i_0] [(short)10]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_12 = 2; i_12 < 17; i_12 += 2) 
                    {
                        arr_49 [i_0] [i_1] [i_2 - 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 36028797018963456ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11100))) : (4001278559U)))) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) max(((unsigned short)0), ((unsigned short)46830))))));
                        arr_50 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_12 [i_2 - 3] [i_2 - 1])) + (((/* implicit */int) var_4)))), (((/* implicit */int) arr_12 [i_2 - 3] [i_2 - 3]))));
                        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_24 [i_2 - 1] [i_1] [i_2] [i_0] [i_2] [i_12 - 2] [i_0])), (min((9223372036854775807LL), (((/* implicit */long long int) var_6))))))), ((-(arr_18 [(unsigned char)16] [i_2 - 2] [(unsigned short)1] [i_0])))));
                        arr_51 [i_12 - 2] [i_0] [i_0] = ((/* implicit */signed char) (((!(((((/* implicit */int) arr_29 [i_12] [i_0] [i_2 - 3] [i_1] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 4] [i_2] [i_12 - 2])))))) ? (((/* implicit */int) arr_26 [i_0] [13LL] [i_0] [i_12 - 1] [i_0])) : ((-((+(((/* implicit */int) var_2))))))));
                        var_18 = ((/* implicit */_Bool) var_4);
                    }
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20822))))) ? (((/* implicit */long long int) max((((var_5) - (((/* implicit */int) (_Bool)0)))), (2147483647)))) : ((+(max((((/* implicit */long long int) var_0)), (var_1)))))));
}
