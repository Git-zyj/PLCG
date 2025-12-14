/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187768
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
    var_14 += ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)28905))) / (var_1)))) ? (var_4) : (min((var_7), (((unsigned long long int) var_1)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16))) * (var_4)))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_9))))))) : (arr_1 [i_0])));
        var_16 ^= ((/* implicit */int) var_5);
    }
    var_17 = ((((/* implicit */unsigned long long int) var_0)) * (var_13));
}
