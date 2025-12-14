/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166034
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62229)) - (((/* implicit */int) (signed char)43))))) ? ((+(((/* implicit */int) arr_2 [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -1)) & (0ULL))) >> (((((/* implicit */int) var_1)) - (173))))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)62220)) ? (((/* implicit */int) (short)29871)) : (((/* implicit */int) (unsigned short)3306))));
}
