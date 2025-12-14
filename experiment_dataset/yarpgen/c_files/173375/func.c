/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173375
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
    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) - (((((/* implicit */_Bool) var_4)) ? (2983276724965607861ULL) : (2983276724965607861ULL))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [(unsigned char)13] [i_1] [(unsigned char)13] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)48)) ? (((var_14) ? (15463467348743943728ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_6)))) ? (((var_4) / (((/* implicit */int) (short)-25325)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 120623045543172731ULL))))))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) 4408073140326544461LL)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8))))) & (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))))));
            }
        } 
    } 
}
