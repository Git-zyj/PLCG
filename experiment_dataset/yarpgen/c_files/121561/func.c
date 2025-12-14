/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121561
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
    var_19 += ((/* implicit */short) ((((/* implicit */long long int) ((((var_11) <= (-2105329272))) ? (((int) var_9)) : (((/* implicit */int) var_17))))) - (((((/* implicit */_Bool) var_16)) ? (min((var_5), (-2232485328827608851LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) / (((((/* implicit */_Bool) 588591111)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (min((var_16), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (5735481161887629221LL)))) ? (((((/* implicit */_Bool) var_13)) ? (-2232485328827608856LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) min((((/* implicit */int) var_14)), (var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) arr_1 [i_0])) >= (arr_0 [i_1]))) ? (2232485328827608835LL) : (((arr_4 [i_1]) / (((/* implicit */long long int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                var_21 = ((/* implicit */signed char) var_16);
            }
        } 
    } 
}
