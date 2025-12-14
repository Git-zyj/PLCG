/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129227
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
    var_14 = ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (signed char)-69)), (((((/* implicit */unsigned long long int) var_11)) ^ (var_8))))));
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) != (var_6))))) & (var_2)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_13);
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_2 [i_0] [13LL]))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (signed char)7)) / (arr_1 [i_0]))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */long long int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) var_10))))) * (min((7243388938616265778LL), (((/* implicit */long long int) var_13)))))))));
}
