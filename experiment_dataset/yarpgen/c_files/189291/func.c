/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189291
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) && (((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((((/* implicit */int) var_4)) != (((/* implicit */int) var_3)))), ((!(((/* implicit */_Bool) arr_2 [i_0])))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2)));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)6] [(unsigned char)6]))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((arr_3 [i_1] [13ULL]) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((((/* implicit */int) var_1)) >> (((var_8) - (12804976232796356234ULL)))))));
            arr_10 [i_1] [i_2] [1U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
        }
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3])) / (arr_12 [(short)13]))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */long long int) arr_12 [i_3])) : (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_3]))))) : (var_9)));
    }
    var_24 = ((/* implicit */unsigned int) (-(var_9)));
}
