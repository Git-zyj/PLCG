/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189302
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_8))));
    var_11 = ((/* implicit */_Bool) ((unsigned short) var_6));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1806530929)) - (max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) ((-1) == (((/* implicit */int) var_5)))))))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)4657)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 2]))) : (((((/* implicit */unsigned long long int) var_9)) & (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
}
