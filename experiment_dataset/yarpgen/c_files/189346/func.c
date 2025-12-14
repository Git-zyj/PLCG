/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189346
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
    var_16 |= ((/* implicit */short) ((long long int) var_0));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (short)-14218)) : (((/* implicit */int) var_14))))))) * (((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) << (((var_13) - (1223996029))))))))));
                var_18 = var_4;
                arr_6 [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(short)20] [(short)20]))))) ? (min((arr_5 [i_0] [i_1] [i_1]), (9ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (arr_5 [(unsigned char)15] [12U] [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_12)))) : (var_0))), (var_9))))));
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)48))));
}
