/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188403
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_2 [i_0] [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) 0U))))) : (arr_3 [i_1]))))));
                var_17 *= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned short) (short)28365))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) < (((/* implicit */int) arr_2 [(unsigned short)13] [i_0])))))) : (var_14)))) * (((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)16] [(short)16]))) : (var_2))) * (((/* implicit */long long int) ((arr_1 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2]))))))))));
                var_18 = ((/* implicit */signed char) max((((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 1]))), (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_14)))), (var_15))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 21; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)10] [(unsigned short)10]))) & (4294967295U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (+(arr_0 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) ((var_15) + (((/* implicit */unsigned long long int) var_4))))) ? (((var_2) / (((/* implicit */long long int) arr_5 [i_3])))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_3])), (2726102798U))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_7);
    var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_15)) ? (min((17758158189885695325ULL), (((/* implicit */unsigned long long int) (unsigned short)42384)))) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_0))));
}
