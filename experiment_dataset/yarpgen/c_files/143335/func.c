/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143335
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_5))));
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)96)) || (var_0)))), ((signed char)4)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_11))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_15 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (((-(((/* implicit */int) (short)-5663)))) + (((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) var_0))))));
        var_17 |= var_5;
    }
}
