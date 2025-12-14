/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171932
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(3046412243U)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = (short)-17004;
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) 1248555052U)) ? (2815428063U) : (2147483648U)));
        var_22 = ((/* implicit */unsigned long long int) (short)17004);
        arr_9 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        arr_10 [i_1] [i_1] = ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 6428491248264807169ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16979))) : ((+(8685683781316060987ULL)))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max(((~(2148065036U))), (var_16)))) != (var_15)));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_12), ((short)-29221)))) || (((/* implicit */_Bool) var_14))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
}
