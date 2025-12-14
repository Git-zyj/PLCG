/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177718
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) min((arr_2 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 2]))))) ? (((/* implicit */int) max((arr_0 [i_1] [i_1]), (arr_0 [i_1 - 2] [i_1])))) : (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_9 [(unsigned char)8] [i_1] [4LL] [i_3 + 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 2] [i_2] [i_2] [i_3] [i_3 + 1])) ? (arr_8 [i_1 - 1] [i_1] [(signed char)7] [i_3 - 2] [(signed char)7] [i_3 - 2]) : (arr_8 [i_1 + 3] [i_1] [i_3 - 1] [i_3] [i_1] [i_3 + 1])))) >= (min((max((4291718290143958569ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2] [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [6LL])) <= (((/* implicit */int) var_8)))))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_19 ^= ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [i_1 + 4] [i_1 - 3] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 4] [i_1] [i_0]))) : (arr_7 [i_1 - 3] [i_0]))), (min((((/* implicit */long long int) arr_4 [i_1 + 4] [i_1] [i_1])), (arr_7 [i_1 - 1] [i_1])))));
                                arr_12 [(short)0] [i_4] [6LL] [(short)0] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1 - 1])), (var_11)))), (arr_6 [i_4] [i_1])))), (arr_7 [i_4] [i_4])));
                                var_20 = ((/* implicit */short) ((min((arr_8 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3] [3ULL]))) != (((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])) ? (arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [10LL] [i_3]) : (arr_8 [i_3 - 1] [0U] [i_3 - 1] [i_3 - 1] [i_3 + 1] [0U])))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                arr_16 [i_0] [(_Bool)1] [i_1] = arr_3 [i_0] [i_0] [i_0];
                                arr_17 [i_0] [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) arr_5 [i_0]);
                                var_21 = ((/* implicit */unsigned short) arr_5 [i_3]);
                            }
                            var_22 *= ((/* implicit */short) ((arr_13 [(signed char)4] [i_1] [2U] [i_1 + 1] [i_1]) == (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_1 [i_2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 |= 4048300129U;
}
