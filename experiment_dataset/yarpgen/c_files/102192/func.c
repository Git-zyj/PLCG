/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102192
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) var_2)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [(short)15])) >> (((((/* implicit */int) arr_1 [i_0])) - (66))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [14LL])))))));
        var_11 += ((/* implicit */short) arr_0 [1]);
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */int) var_1);
    var_14 = ((/* implicit */short) var_0);
}
