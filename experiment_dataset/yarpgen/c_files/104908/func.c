/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104908
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((min((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))) & (((long long int) var_10)))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        arr_4 [i_0 - 1] [i_0] = (+(min((((/* implicit */long long int) (unsigned short)21123)), (2097151LL))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) (signed char)127))));
        var_15 = ((/* implicit */_Bool) var_14);
    }
    var_16 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_3)) ? (((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32764)))))));
}
