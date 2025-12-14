/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161103
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
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_16);
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((-6818875537944097161LL) ^ (arr_1 [i_0 + 1])))) ? (((unsigned long long int) arr_0 [i_0 - 3] [i_0 - 2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) var_15))))) ? (min((var_5), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) arr_3 [i_0])))))))));
    }
}
