/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18877
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
    var_16 ^= ((/* implicit */unsigned long long int) var_2);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (signed char)-40))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_6)))) ? (arr_0 [i_0]) : (arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))) : (((unsigned int) arr_1 [i_0 + 2]))));
        var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) arr_1 [i_0 + 2])));
        var_19 ^= ((((/* implicit */_Bool) ((arr_0 [i_0 + 2]) & (arr_0 [i_0 - 2])))) ? (max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_13))));
    }
}
