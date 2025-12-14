/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182598
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
    var_16 = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), ((short)-26525)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_10)) : (var_13))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5))) == (arr_1 [i_0])))), (((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) (short)30601))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) : (1885510374U)))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(((/* implicit */int) max(((short)-64), (((/* implicit */short) (signed char)124))))))))));
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)63))) + (9046705355796691089LL)));
    }
}
