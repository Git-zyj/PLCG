/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144377
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9))))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (371785124U)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 - 2]))) && (((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (short)-31563)))))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_11)))) ? (((unsigned long long int) ((868709306237302502ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31563)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned int) var_12)))))));
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_5))));
}
