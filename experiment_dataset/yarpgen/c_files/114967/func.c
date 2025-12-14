/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114967
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
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-96)), (var_15)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = 9223372036854775807LL;
        arr_3 [i_0] [(signed char)9] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (~(9223372036854775788LL)))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_14 [i_1] [4ULL] [i_1] &= (((-(((((/* implicit */_Bool) arr_9 [2ULL])) ? (arr_12 [0ULL] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)4] [(signed char)2] [(signed char)2] [i_1]))))))) | (((max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_15))) << (((max((((/* implicit */long long int) arr_9 [(short)2])), (var_17))) + (93LL))))));
                    var_19 *= ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_10 [i_3 + 1] [i_2 - 1] [i_3 + 1])) / (((/* implicit */int) arr_10 [i_3 - 1] [i_2 + 1] [i_3 + 1])))), (((((/* implicit */int) (signed char)-35)) - (((/* implicit */int) (signed char)119))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                arr_22 [7ULL] [i_2] [i_3 - 1] [(signed char)8] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((var_17) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [(short)5] [i_1] [i_4])))))), (var_9)));
                                var_20 = ((/* implicit */long long int) arr_18 [i_1] [7ULL] [i_3 + 1] [3ULL] [3ULL]);
                                var_21 ^= ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) -9223372036854775807LL)), (arr_20 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 3] [i_2]))), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2 + 1] [i_5] [i_5] [i_3 - 1]))));
                                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) max((arr_6 [i_1]), (-9223372036854775807LL))))))) ? (((unsigned long long int) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) <= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [(signed char)1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [(signed char)10]))))));
    }
    var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775806LL)) && (((/* implicit */_Bool) var_7))))), ((~(var_12)))))) > (var_15)));
}
