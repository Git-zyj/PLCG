/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157143
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [7ULL] [i_0] = ((_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (48)))));
        var_16 -= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)118))));
    }
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((signed char) var_7))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (6708968214283177302ULL)))) ? ((~(var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-118)) ? (-75) : (((/* implicit */int) var_0)))))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min((((/* implicit */unsigned int) 48)), (1683873846U))))));
    var_19 = ((/* implicit */signed char) 5476160099064889292ULL);
    var_20 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (-52)))) || ((_Bool)1)))), ((~(59)))));
}
