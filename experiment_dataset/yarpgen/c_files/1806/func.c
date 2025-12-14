/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1806
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18116))) : (0ULL)))) ? (((/* implicit */int) arr_3 [i_2] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1] [i_1])))) : (min((((/* implicit */unsigned long long int) var_5)), (arr_6 [(unsigned char)12] [i_1] [i_2])))));
                    var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((unsigned long long int) 5631689229881321230LL)) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)8)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)14])) : (((/* implicit */int) (signed char)-18)))))))));
                    var_13 = var_1;
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((var_6), ((unsigned char)27)))), (max((((/* implicit */unsigned short) (unsigned char)118)), (arr_3 [2U] [i_2])))))) || (((/* implicit */_Bool) ((signed char) arr_1 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_10 [i_4 - 3] [i_0] [i_0])) ? (4197516611U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [4ULL])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_4 + 1])) : (((/* implicit */int) arr_10 [i_3] [i_1] [i_0])))))));
                                arr_14 [i_0] [i_4] [(unsigned char)14] [i_2] [i_3] [i_4] [i_4 - 3] = ((/* implicit */unsigned char) ((long long int) min((arr_4 [i_4 + 1] [i_4]), (arr_4 [i_4 - 3] [9ULL]))));
                                var_15 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_13 [2U] [i_1] [i_2] [i_4 - 2] [i_0] [i_3]), (((/* implicit */long long int) ((var_4) | (var_4))))))) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) ((unsigned char) arr_13 [i_4] [(unsigned char)13] [i_4 + 1] [i_4] [i_4 - 3] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_3))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-585949082960680742LL), (((/* implicit */long long int) (signed char)-98))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2806273475289433439ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)6959))))))))) : (var_7)));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((unsigned int) (unsigned char)8)) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min((var_1), (var_10)))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) -1075910865518208469LL))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
}
