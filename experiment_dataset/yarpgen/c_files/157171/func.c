/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157171
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((max((((/* implicit */int) var_16)), (max((var_5), (((/* implicit */int) var_7)))))), (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) var_10);
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_1 [i_0]))));
    }
}
