/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119883
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(signed char)10] &= (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_15) : (((/* implicit */int) arr_0 [i_1]))))) ? (((arr_3 [i_0] [10] [4ULL]) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [4] [i_1] [i_1])))))))) : (min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)21)))), (((/* implicit */unsigned long long int) var_2)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) (_Bool)1);
                            var_20 = ((/* implicit */unsigned int) (signed char)-65);
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 1315631056U)) : (var_7))))), (((((/* implicit */_Bool) min(((short)-2806), (((/* implicit */short) (signed char)78))))) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) << (((var_16) - (1286965999U))))))))));
                var_21 = ((/* implicit */unsigned long long int) (unsigned short)26627);
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (min((((/* implicit */unsigned long long int) var_1)), (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_16))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_10))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -12))))) != (((((/* implicit */int) var_0)) - (((/* implicit */int) var_1)))))))));
    var_24 = ((/* implicit */long long int) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((short) var_3))) < (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_14))))))))));
}
