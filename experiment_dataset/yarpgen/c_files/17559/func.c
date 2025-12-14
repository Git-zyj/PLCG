/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17559
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
    var_18 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) max((((unsigned long long int) max((arr_3 [i_0]), (arr_1 [i_0])))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2]))));
        var_19 |= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_0 + 1])))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (-747030182)))), (2775906948U))));
    }
    var_20 ^= min((((((_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_16))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
}
