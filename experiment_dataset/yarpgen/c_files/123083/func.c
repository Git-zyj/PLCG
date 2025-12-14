/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123083
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
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((/* implicit */int) arr_0 [2ULL])) >> (((var_4) - (12384363194696535949ULL))))) + (arr_5 [i_0]))))));
                var_16 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [9])) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_0 [10])) >> (((arr_5 [i_0]) + (1725218910))))))) + (2147483647))) << (((((min(((~(((/* implicit */int) var_11)))), (arr_5 [i_0 - 1]))) + (1725218918))) - (30)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9)))) : (((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) - (22590)))))))) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 4] [i_0 + 1] [i_0 + 4] [i_0 + 2])) : (((((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_3 - 2] [i_4] [i_4])) % (((/* implicit */int) var_5)))));
                                var_17 *= ((/* implicit */unsigned long long int) arr_4 [i_4]);
                                arr_18 [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_13 [i_0] [8] [i_0] [i_2] [i_3] [i_4])) ? (arr_3 [i_1 + 2] [i_3] [i_4]) : (var_12))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))))) >> ((((~((~(((/* implicit */int) arr_11 [i_4] [i_4] [i_2] [i_3] [i_2])))))) + (49)))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 - 2])) ? (((/* implicit */int) arr_10 [i_0 + 2] [i_0] [i_1] [i_1 + 3] [i_0])) : (((/* implicit */int) var_5))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_1] [i_0] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [1ULL] [i_0] [i_0]))) : (var_0)))), (max((((/* implicit */unsigned long long int) var_8)), (var_4)))))));
                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0] [(unsigned char)1] [(unsigned char)1] [i_0] [i_0] [i_0])) ? (var_7) : (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [11LL] [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((var_4), (((/* implicit */unsigned long long int) var_1))))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))))), ((~(8470570539374502611LL))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_13 [i_1 + 3] [i_1] [6U] [i_1] [i_0] [i_0])))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_11)) ? (arr_14 [i_0 + 3] [i_0 + 3] [5LL] [i_0] [i_0 + 3] [i_0 + 3] [i_0]) : (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_19 = (+(((((/* implicit */int) var_11)) / (((/* implicit */int) var_1)))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_4))) + (((/* implicit */unsigned long long int) var_9))))) ? ((~(max((((/* implicit */long long int) var_5)), (var_2))))) : (((/* implicit */long long int) ((unsigned int) ((var_2) / (var_0)))))));
    var_21 = ((/* implicit */short) min((((unsigned long long int) ((var_14) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((/* implicit */unsigned long long int) var_2))));
}
