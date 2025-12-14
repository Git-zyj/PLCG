/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150130
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) ((arr_1 [i_0 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((unsigned long long int) var_5)) == (18446744073709551615ULL))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        arr_6 [i_1] [(signed char)4] = (~(((arr_0 [i_1]) << (((arr_4 [i_1]) - (1683803027843952989LL))))));
    }
    var_13 = ((/* implicit */int) var_1);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(var_6)))) >= (var_9)));
    var_15 = ((/* implicit */unsigned long long int) 4294967295U);
}
