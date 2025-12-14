/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128822
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
    var_19 = ((/* implicit */_Bool) ((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_3)), (var_12))) <= (((/* implicit */unsigned int) ((int) var_7))))))) : (((((1113915489U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43849))) <= (0ULL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_0 [i_1]))))));
                var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1920)) ? (((((/* implicit */_Bool) (short)-21607)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1748988909U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [7])) <= (((/* implicit */int) var_0)))))))), ((-(2359994627U)))));
                var_22 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((8265075078786738919ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45960)))))), (min((((((/* implicit */_Bool) var_3)) ? (9028718992138245825ULL) : (arr_3 [i_1] [(short)1]))), (((((/* implicit */_Bool) (unsigned short)24)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26764)))))))));
            }
        } 
    } 
}
