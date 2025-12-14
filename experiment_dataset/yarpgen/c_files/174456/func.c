/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174456
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 -= arr_1 [i_1 + 1];
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 3])) : (((/* implicit */int) arr_1 [i_1 + 4]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), ((-(((/* implicit */int) var_15))))))) : ((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_1))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_11))))), ((-(((unsigned long long int) var_4))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), (var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
