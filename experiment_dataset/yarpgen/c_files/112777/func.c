/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112777
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
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_20 |= ((/* implicit */short) ((((/* implicit */long long int) var_9)) / (arr_1 [i_0 - 1] [0])));
        var_21 += ((/* implicit */unsigned long long int) ((_Bool) max((((((/* implicit */_Bool) (signed char)45)) ? (6082748731499696746LL) : (((/* implicit */long long int) 678522817)))), (arr_1 [i_0] [i_0]))));
    }
    var_22 += ((/* implicit */signed char) (~(var_8)));
    var_23 = ((/* implicit */short) min((var_23), (min(((short)5816), (((/* implicit */short) var_5))))));
    var_24 = ((/* implicit */unsigned long long int) var_6);
}
