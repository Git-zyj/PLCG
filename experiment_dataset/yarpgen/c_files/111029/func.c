/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111029
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_2 [i_0])), (arr_3 [i_1])))) ? (((/* implicit */int) arr_5 [(short)5] [i_0] [i_0])) : (((/* implicit */int) ((short) arr_0 [i_0]))))), (((/* implicit */int) ((unsigned char) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_0 [i_0]))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((arr_3 [i_0 + 1]), (arr_3 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) ((_Bool) arr_3 [i_0])))))));
                arr_7 [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) arr_5 [i_1] [i_0] [(unsigned char)5]);
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_1) ? (((/* implicit */int) var_17)) : (var_16)))))) : (((unsigned long long int) ((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))));
}
