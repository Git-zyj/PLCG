/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140295
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((long long int) var_8)) / (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) (short)32746))) : (3325404312730058431LL)))))))))));
    var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (max((var_10), (((/* implicit */long long int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                var_20 = ((/* implicit */signed char) var_8);
            }
        } 
    } 
}
