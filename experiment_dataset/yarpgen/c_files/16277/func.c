/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16277
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
    var_10 += ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 4; i_3 < 19; i_3 += 1) /* same iter space */
                    {
                        var_11 = ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2] [i_3 + 1]);
                        arr_9 [8LL] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 33554431)) ? (((/* implicit */int) (short)4149)) : (((/* implicit */int) (short)-32760)))) - (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4144))))))));
                        arr_10 [i_0] [i_2] [i_2] [i_3 - 1] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) (short)4172))))), (((unsigned long long int) (unsigned short)62724)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4144)))));
                        var_12 *= ((/* implicit */unsigned short) min((3055008454U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3564657507U)) ? (((/* implicit */int) var_5)) : (var_8))) + (((((/* implicit */int) (short)-9547)) - (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */short) arr_1 [19]);
                        arr_13 [i_2] [i_1 + 3] [i_2] [12ULL] = ((/* implicit */long long int) (+((~(((/* implicit */int) var_4))))));
                        var_14 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)0)))) - (((long long int) (+(5755247659947557098ULL))))));
                        var_15 = (-(1592341193U));
                    }
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-106)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [(_Bool)1] [i_5])))))) : (arr_1 [i_5])))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_6])) && (((/* implicit */_Bool) arr_6 [i_5] [(_Bool)1] [i_6]))))))))));
                arr_18 [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)4149)) - (((/* implicit */int) (short)-4151)))) | (((/* implicit */int) ((short) arr_0 [i_5])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_5])) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    arr_22 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */short) (((-(arr_1 [4ULL]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_21 [i_7] [(signed char)9] [i_5] [i_5]) : (((/* implicit */int) (short)-11631)))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 4) /* same iter space */
                    {
                        arr_31 [i_6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)32713)), (arr_0 [(signed char)15])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_9] [i_8] [i_6])) : (38578138))) : (((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_9 + 1] [i_9])) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_6] [10] [i_9 + 2])) : (((/* implicit */int) (unsigned short)6310))))))));
                        arr_32 [i_5] [i_6] [(unsigned short)2] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((max((arr_30 [i_5] [i_5] [13ULL] [i_5]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_25 [i_9 - 3] [i_9] [i_9] [i_5]))))) ^ (((arr_5 [i_9 + 2] [i_9 - 3] [i_9 + 1] [i_9 - 1]) << (((arr_5 [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 + 1]) - (5118593105055883667ULL)))))));
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) min((((((_Bool) arr_4 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6]))) - (0ULL))))), (((((/* implicit */unsigned long long int) max((2514950009U), (((/* implicit */unsigned int) (short)-4144))))) - (max((arr_34 [i_5] [i_5]), (((/* implicit */unsigned long long int) (short)-32714))))))));
                        arr_36 [i_5] [i_6] [i_6] [i_10 - 1] [13] = min((((((/* implicit */long long int) ((/* implicit */int) var_7))) & ((+(arr_14 [i_10]))))), (((/* implicit */long long int) ((((/* implicit */int) (short)4143)) - (((/* implicit */int) (unsigned short)26715))))));
                    }
                    for (unsigned long long int i_11 = 3; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_12 = 2; i_12 < 11; i_12 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_11 + 1] [i_11 - 1] [i_11 + 1])) ? (arr_37 [i_12] [i_12 + 1] [i_11] [i_11 + 1]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-1)), (3891569569U))))))) ? (max((((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (arr_2 [i_12] [(unsigned short)10] [(unsigned short)10]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32713))) / (2063665939U)))));
                            var_21 = ((/* implicit */signed char) var_2);
                        }
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            arr_47 [i_5] [i_5] [i_6] = ((/* implicit */short) max((((arr_14 [i_5]) | (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [6LL] [i_11]))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) 39005431)) == (arr_33 [i_5] [(unsigned short)9] [i_6])))), (var_7))))));
                            var_22 -= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) : (278362026U)));
                        }
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            arr_52 [i_5] [i_6] [0LL] [i_14] [9LL] [i_11] [i_6] = ((/* implicit */unsigned int) arr_14 [i_8]);
                            arr_53 [i_5] [i_6] [(unsigned char)14] = (-(((arr_48 [i_5] [i_6] [3] [i_11] [i_6] [i_5]) - (((/* implicit */unsigned long long int) arr_49 [i_8] [(short)7] [i_8] [i_8] [i_8])))));
                            arr_54 [i_5] [i_5] [(short)2] [i_6] [i_11 - 3] [i_14] = ((/* implicit */short) ((((arr_14 [i_11 - 3]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6296))))) + (((arr_14 [i_11 + 1]) - (arr_14 [i_11 - 3])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((((short) (_Bool)1)), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
                            var_24 *= ((/* implicit */unsigned char) var_2);
                            var_25 ^= ((/* implicit */short) var_8);
                            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4021548542U)))) ? ((~(273418770U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 1; i_16 < 14; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            {
                                arr_65 [i_6] [i_6] = ((/* implicit */short) 0U);
                                var_27 -= min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) / (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_5] [i_5] [8ULL] [i_5] [i_5]))))))), (((/* implicit */unsigned long long int) var_3)));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) ((unsigned long long int) arr_42 [i_8] [(unsigned char)14] [i_8] [10] [i_6]));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) max((max((((arr_27 [(unsigned short)0]) ? (((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [(unsigned char)0] [i_5])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_51 [(unsigned char)14] [i_5] [i_5])))), (((/* implicit */int) ((short) max((var_7), (((/* implicit */unsigned short) arr_45 [i_5])))))))))));
                    var_30 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)21096)), (7640593225196196444ULL)))) ? (((/* implicit */unsigned int) arr_21 [i_5] [i_5] [i_6] [i_8])) : (arr_4 [i_5] [i_6] [8U]))))));
                }
                arr_66 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((arr_11 [i_5] [i_5] [(signed char)11] [i_6]) & (arr_11 [i_5] [3ULL] [i_5] [i_6]))) << ((((~(arr_14 [i_5]))) - (7348647928381233654LL)))));
            }
        } 
    } 
}
