/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129072
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
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) var_0)), (arr_2 [i_0] [i_0] [i_2 + 1]))))), (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_2 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_2 + 1] [i_0] [i_0 + 4]))))));
                        arr_10 [i_0 + 3] [i_0 + 2] [i_1] [i_0] = ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)0)))), (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_7 [i_1] [i_2 + 1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))) & (9050417900868694321ULL)))) ? (arr_5 [i_0 + 2]) : (((5162524058678167668ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_14 = ((/* implicit */unsigned char) arr_5 [i_1]);
                        arr_11 [i_0] [i_2 + 1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) (signed char)-111));
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((1732300509728410566LL), (((/* implicit */long long int) var_10))))) * (0ULL)))) ? (((/* implicit */int) min(((signed char)-117), ((signed char)-127)))) : (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_3] [(_Bool)1] [i_0 + 4]))))));
                    }
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_2 + 1] [i_1] [i_2]) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)110)), (arr_5 [i_2 + 1]))))));
                    arr_13 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (~(((arr_9 [i_0] [(short)10] [i_2]) ? (2756103994U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3]))) : (arr_0 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_2])) : (((/* implicit */int) (short)255))))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0] [i_2])) != (((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_2])))))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        arr_17 [i_1] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (signed char)110))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)255))) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (signed char)111)))) : (((/* implicit */int) (signed char)113)))))));
                        arr_18 [i_0] [i_0 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 + 1] [i_1] [2ULL])) * (((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-117)) + (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 4060549896238797233LL)) ? (arr_14 [i_2 + 1] [i_1] [i_1] [i_4 - 1]) : (arr_14 [i_2 + 1] [i_1] [i_2 + 1] [i_4])))));
                        arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1])) | (((/* implicit */int) arr_3 [i_0 + 4]))))) ? (((/* implicit */long long int) ((arr_9 [i_2 + 1] [i_2 + 1] [i_4]) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_4])) : (((/* implicit */int) (signed char)116))))) : (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) : (((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))))));
                        arr_20 [i_0] [i_1] [i_2] [i_0] [i_1] [i_4 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3734293364869739180LL)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (short)-255)))))));
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_16 += ((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) arr_15 [i_2 + 1])))) ? (((((/* implicit */int) (short)-256)) ^ (((/* implicit */int) arr_21 [i_5] [i_2] [i_1] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [(unsigned char)4]))) / (arr_15 [(_Bool)1])))) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((((/* implicit */int) arr_4 [i_0] [i_1])) * (((/* implicit */int) var_9))))))));
                        arr_24 [i_0] [i_1] [i_2 + 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_2 + 1] [i_5]))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (1173327901469994841ULL)))) ? (((((/* implicit */_Bool) arr_16 [i_2])) ? (arr_15 [(short)7]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [(unsigned char)11]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117)))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_11))));
                        var_18 = arr_0 [i_0];
                    }
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((((_Bool)1) ? (-8999870523335025202LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)117)))))))) || (((/* implicit */_Bool) var_2))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_0 + 2] [i_0 + 3] [i_0] [i_0]))))), (min((((((/* implicit */_Bool) 990575761U)) ? (1983110333320737559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
    }
}
