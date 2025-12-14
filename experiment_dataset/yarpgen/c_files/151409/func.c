/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151409
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
    var_18 = ((unsigned int) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (var_6)))) : (min((((/* implicit */unsigned long long int) var_12)), (var_16)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (1061649717)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) var_7);
                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))) != (((((/* implicit */int) var_7)) / (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_1))))))));
            }
        } 
    } 
}
