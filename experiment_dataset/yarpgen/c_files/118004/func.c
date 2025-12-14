/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118004
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
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((-7697637797125414286LL) | (((/* implicit */long long int) 1588610885U))));
        var_21 *= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) var_5)) - (var_14))), (((/* implicit */unsigned long long int) var_1))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 12; i_1 += 1) 
    {
        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_17)) > (((unsigned long long int) var_16))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) & (var_14))))));
    }
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0)))))));
}
