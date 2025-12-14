/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139433
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_11))));
        var_19 = ((/* implicit */long long int) ((_Bool) var_5));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (var_2)));
}
