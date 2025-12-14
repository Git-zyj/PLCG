/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164117
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
    var_10 = ((/* implicit */unsigned int) ((((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) * (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_7)))))) ^ (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (min((((1813576310145470995ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24846))))), (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)883)) : (((/* implicit */int) var_3))))) ? (((16633167763564080621ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64653)) ? (-344457594) : (((/* implicit */int) (signed char)41))));
                var_13 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 4] [i_0 + 4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) + (((arr_3 [i_0]) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_1))))));
            }
        } 
    } 
}
