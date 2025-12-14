/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116496
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
    var_18 *= ((/* implicit */_Bool) ((var_6) << (((var_16) - (14740653142234492685ULL)))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)-21166)) ? (((/* implicit */unsigned long long int) 1231414164)) : (var_16))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [2U] [i_1] [i_0])) ? (5641986038758444761ULL) : (min((var_10), (((/* implicit */unsigned long long int) min((arr_1 [i_1]), (var_15)))))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 8253067047690337430LL)) > (2957044413256742102ULL))))))) && (((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2 - 2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_3] [i_1])))) | (((((/* implicit */_Bool) 12804758034951106854ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (666319651U))))))))));
                            var_23 *= ((/* implicit */short) min((((int) ((((/* implicit */_Bool) (short)-21155)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [3ULL] [i_1] [3ULL]))) : (var_13)))), (min((((((/* implicit */int) (signed char)53)) * (((/* implicit */int) arr_6 [i_1] [i_3] [i_2] [i_3])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)21165)) : (((/* implicit */int) var_1))))))));
                            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [(signed char)21] [i_2 + 1] [i_2 + 1]))))) - (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)95)) : (arr_7 [i_1] [i_1] [i_2 + 1] [i_2 + 1])))));
                            arr_10 [i_0] [i_1] [i_0] [7LL] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_2 + 1] [i_2 + 1]))) ^ (arr_8 [i_3] [i_3] [i_3] [i_2 + 1]))), ((-(arr_8 [i_2 + 1] [(short)5] [i_3] [i_2 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
