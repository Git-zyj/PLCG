/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123146
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((var_0), (((/* implicit */int) var_8)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((-240233420), (var_12)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (var_2)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_2 [i_0])))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (8918938739192959527ULL) : (9527805334516592089ULL)));
                            arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8918938739192959527ULL)) ? (((/* implicit */int) var_10)) : (var_7)));
                        }
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            arr_19 [(signed char)12] [i_1] [i_2] [0] [0LL] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)192))) : (((((/* implicit */_Bool) 8918938739192959527ULL)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_2 [i_3])))))) ? (min((var_2), (((/* implicit */long long int) (unsigned char)201)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5] [i_5 + 3])) ? (var_6) : (((/* implicit */unsigned int) var_12)))))));
                            var_15 = ((/* implicit */short) min((min((((((/* implicit */_Bool) 1132299325)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)192))) : (17163783573708018269ULL))), (9527805334516592088ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [10LL] [i_2] [i_0])) ? (3010266657U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5808)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */long long int) var_6)) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_0] [20ULL] [i_2] [i_3] [i_6]), (arr_13 [i_0] [i_6] [i_6] [i_1] [i_6]))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0ULL) : (max((17234438600849559790ULL), (((/* implicit */unsigned long long int) 1009406674532439365LL))))))));
                            arr_23 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_15 [i_6] [i_1] [i_2] [i_3] [i_6]) : (arr_15 [i_0] [i_1] [i_2] [i_3] [i_6])))) ? (min((((/* implicit */unsigned int) arr_15 [i_0] [17U] [i_0] [i_0] [i_0])), (var_6))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)23679)))))));
                        }
                        arr_24 [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10167360627021980573ULL)) ? (((/* implicit */long long int) var_12)) : (var_2)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_3]) : (((/* implicit */unsigned long long int) var_11)))) : ((((_Bool)1) ? (8918938739192959527ULL) : (((/* implicit */unsigned long long int) -1))))));
                    }
                } 
            } 
        } 
        arr_25 [(short)15] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5201044649157679176LL)) ? (11459398209774369002ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) ? (max((min((17311250020907594176ULL), (((/* implicit */unsigned long long int) (unsigned short)36257)))), (15832655606522444087ULL))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))), (min((11459398209774369002ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) var_9))))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) (unsigned char)125)))))))) ? (((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0])), (16568728226155202902ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(unsigned short)21] [i_0] [(unsigned short)21] [(unsigned short)18] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60867)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [7LL])) ? (((((/* implicit */_Bool) arr_6 [i_0] [10])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29278)) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        arr_29 [i_7] [i_7] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_28 [i_7])), (max((arr_4 [i_7] [2U]), (((/* implicit */unsigned long long int) arr_27 [i_7]))))))) ? (((((/* implicit */_Bool) -1083464044825367841LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [(short)0]))) : (arr_0 [i_7]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7] [i_7])) ? (1926566008U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7])))))) ? (((/* implicit */long long int) ((arr_9 [i_7]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [i_7]))))) : (arr_0 [i_7]))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7])) ? (((/* implicit */unsigned int) arr_28 [i_7])) : (var_6)))) ? (((((/* implicit */_Bool) arr_28 [i_7])) ? (arr_28 [i_7]) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (unsigned char)76)) : (arr_28 [i_7])))));
    }
}
