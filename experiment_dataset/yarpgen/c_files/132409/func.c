/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132409
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
    var_18 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 524288)) ? (524277) : (524259))))));
                arr_6 [i_0] [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */unsigned int) -524295)) != (arr_2 [i_1 - 3])));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_13);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 524276)) ? (((((/* implicit */_Bool) 524276)) ? (-524295) : (((((/* implicit */_Bool) 524291)) ? (524274) : (524276))))) : ((-(((/* implicit */int) ((524275) > (-524275))))))));
}
