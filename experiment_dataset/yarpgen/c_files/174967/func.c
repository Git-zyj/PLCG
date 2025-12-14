/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174967
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
    var_10 -= ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) var_5);
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((((((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_3 [i_2])))) ? (((((/* implicit */_Bool) (short)32764)) ? (arr_5 [6ULL] [i_1] [i_0] [i_1]) : (arr_5 [(_Bool)1] [i_1] [i_1] [i_2]))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_3)))))), (((/* implicit */int) arr_3 [i_0])))))));
                    var_13 *= (~(((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 - 1])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(var_6)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (4696192789064388154LL))))))) : (var_4)));
                            var_14 ^= max((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)25)) != (((/* implicit */int) (unsigned short)65303))))), (((long long int) (unsigned short)26)))), (var_5));
                            arr_14 [i_1] [i_3] [i_2] [8U] [i_4] [i_2] [i_3] = (+(-4335870169541726767LL));
                            var_15 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4335870169541726767LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_12 [i_1 + 3] [5ULL] [i_2] [i_1 + 3] [i_0])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47982))) : (arr_12 [i_0 - 1] [i_1] [i_2] [0LL] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_1)))))))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_16 = max((((/* implicit */int) (!((!(((/* implicit */_Bool) -4335870169541726767LL))))))), (((int) arr_17 [i_1] [i_1 + 3] [i_1] [i_1 + 1] [i_1 - 3])));
                            var_17 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -3008466593410560439LL)))) == (arr_16 [i_3]))) ? (((/* implicit */long long int) (+(((4192178350U) << (((var_4) - (5011986418511315048LL)))))))) : (min((502157511365419414LL), (((/* implicit */long long int) ((_Bool) (unsigned short)65531)))))));
                        }
                        for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            arr_21 [i_1] [i_1] [i_6] = ((/* implicit */_Bool) (+((-((~(((/* implicit */int) var_3))))))));
                            var_18 |= ((/* implicit */unsigned short) (-(4335870169541726739LL)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_3] [(_Bool)1] [i_7] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) != (arr_6 [i_0] [i_1])))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (arr_19 [i_0] [i_0]))))));
                            arr_26 [i_0] [i_1] [i_2] [i_3 - 2] [i_1] [7LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_3 + 2] [i_7] [i_7] [i_7] [i_7])) ? (arr_17 [i_3 + 2] [i_3] [i_7] [i_7] [i_7]) : (arr_17 [i_3 + 2] [i_7] [i_7] [i_7] [i_7])));
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_3] [i_7] [i_7] |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(-502157511365419410LL)))) : (((2ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7] [i_1])))))));
                            arr_28 [i_0 + 1] [i_1 - 3] [i_1] [1] [i_3] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -3792854720370365566LL)) : (arr_17 [i_0] [12U] [i_2] [i_2] [i_8])));
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((long long int) var_0)) ^ (arr_6 [(_Bool)1] [i_1])))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5834557870537475816ULL)) && (((/* implicit */_Bool) (-2147483647 - 1))))))) - (((((/* implicit */_Bool) (unsigned short)13701)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [(unsigned short)12] [i_0 - 1] [i_8]))))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+((-(((((/* implicit */int) arr_3 [i_2])) ^ (arr_5 [i_8] [i_2] [i_1] [i_8]))))))))));
                    }
                    for (int i_9 = 4; i_9 < 10; i_9 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_30 [i_1 + 3] [i_1] [i_0 - 1] [i_9 - 2])))) : (((((/* implicit */int) max(((unsigned short)25), (arr_29 [1ULL] [i_1 + 3] [i_1] [i_1])))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                        arr_36 [i_9] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((short) (!(((/* implicit */_Bool) (unsigned char)239))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 1; i_10 < 13; i_10 += 4) 
                        {
                            var_23 += ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) arr_40 [(signed char)0] [i_2] [(signed char)0])))), (((/* implicit */int) ((1107030923U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) == (((/* implicit */int) var_1))));
                            var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (min((arr_17 [i_10 + 1] [i_9] [i_0] [i_1] [i_0]), (arr_22 [2LL] [i_2])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_40 [(unsigned short)8] [i_10 - 1] [i_1 + 1])) ^ (((/* implicit */int) max((arr_24 [0ULL] [(_Bool)1] [i_2] [i_2 - 1]), (var_8))))))) : (((((/* implicit */_Bool) arr_30 [i_0] [4LL] [(short)4] [(short)4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_1 - 2])) ? (var_9) : (((/* implicit */int) var_8))))) : (arr_6 [i_0] [i_1])))));
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_2) : (var_2))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))))))));
}
