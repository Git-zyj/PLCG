/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155866
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_12), (((/* implicit */signed char) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (562881233944576ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) / (min((((/* implicit */unsigned long long int) arr_3 [i_0] [3ULL] [3ULL])), ((~(var_8)))))));
                var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_4)), (arr_2 [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_17 -= (((-(12044390376983463868ULL))) & (((((2296835809958952960ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))))));
}
