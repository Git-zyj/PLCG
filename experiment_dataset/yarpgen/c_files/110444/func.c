/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110444
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) var_6))))) || (((/* implicit */_Bool) 1322810375U)))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (short)-9443)) ? (((/* implicit */long long int) arr_3 [i_0] [i_1])) : (1085713139830934528LL)))))) ? (((((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) -1369166831)) : (arr_3 [i_0] [i_1]))) | (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) && (((((/* implicit */_Bool) 8083742430185546974LL)) && (((/* implicit */_Bool) 3434299868712821333ULL))))))))));
                var_17 = ((/* implicit */unsigned int) max(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) max((((arr_3 [i_0] [16ULL]) << (((((/* implicit */int) var_4)) - (44270))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))))));
                arr_5 [i_0] = (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1923540717U))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (2593771823U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_3)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-26983)) : ((+(((/* implicit */int) (_Bool)1)))))))))));
}
