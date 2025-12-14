/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181839
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_4)))) && (((/* implicit */_Bool) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_9))), (arr_1 [i_0] [i_0])));
    }
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_11))))) / (max((((/* implicit */long long int) (signed char)43)), (var_4)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned long long int) var_9)), (6207236737900600979ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
}
