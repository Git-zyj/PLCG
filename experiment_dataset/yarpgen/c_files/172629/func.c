/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172629
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
    var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)0)), (572333995U)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((min((3642331049259184512LL), (((/* implicit */long long int) 694349517)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0] [(_Bool)1]);
        var_13 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((arr_1 [8LL] [i_0]) ? (((/* implicit */int) var_8)) : (var_9)))))));
    }
}
