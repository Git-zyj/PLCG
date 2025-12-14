/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187220
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
    var_14 |= var_1;
    var_15 = ((/* implicit */_Bool) ((unsigned int) var_10));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((288195191779622912ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))));
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) var_12)) : (2302694257U)))) ? (min((min((arr_3 [0U]), (arr_3 [i_0]))), (min((arr_3 [i_0]), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) (~(arr_3 [i_0]))))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_0))) | ((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58655))))))), (max((((long long int) var_5)), (((/* implicit */long long int) var_13))))));
}
