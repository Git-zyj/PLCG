/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120697
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0 + 2]) - (arr_2 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0 - 1]) != (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) : (min((2983443373266248659ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1]))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_9))));
    }
    var_16 = (short)-1;
    var_17 *= var_14;
}
