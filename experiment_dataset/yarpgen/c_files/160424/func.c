/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160424
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) var_8))))) ? (((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) (-(((var_11) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-84)), (((max((7606615323675897744LL), (((/* implicit */long long int) (_Bool)1)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_15)) : (var_1))))))));
                var_21 = ((/* implicit */int) (+(((arr_0 [i_1 - 2]) - (arr_0 [i_1 - 1])))));
            }
        } 
    } 
}
