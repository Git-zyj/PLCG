/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123825
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
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (signed char)-42)))) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0] [8]))))))));
        var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-((-(710568359U)))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-51)) || (((/* implicit */_Bool) (signed char)-29)))))) : (var_1)))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)22)) - (((/* implicit */int) (signed char)-3))))) && (((/* implicit */_Bool) ((unsigned long long int) (signed char)-52)))))), (((arr_0 [i_0] [(short)6]) / (arr_0 [i_0] [10]))))))));
    }
    var_15 = ((/* implicit */signed char) (~(max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) var_8))))));
    var_16 = var_2;
    var_17 = (((_Bool)1) ? (8941379657863989734ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))));
}
