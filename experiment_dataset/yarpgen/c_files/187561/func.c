/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187561
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((int) arr_0 [i_0]));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((_Bool) (signed char)85))))))));
    }
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((var_10) != (var_10)))) : (((int) 9790837U)));
    var_17 += ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    var_18 = ((/* implicit */signed char) var_11);
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((((/* implicit */_Bool) 816475718)) ? (2650998163U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_1)))))));
}
