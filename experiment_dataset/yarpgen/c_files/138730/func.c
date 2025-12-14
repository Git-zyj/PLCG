/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138730
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((11212668933838033315ULL) * (7234075139871518301ULL))) : (max((((11212668933838033304ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (max((7234075139871518291ULL), (((/* implicit */unsigned long long int) var_10))))))));
        arr_2 [i_0] |= ((/* implicit */unsigned char) (_Bool)1);
    }
    var_15 = ((/* implicit */unsigned short) var_11);
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((var_6) ? (var_11) : (((/* implicit */int) var_1))))) : ((+(7234075139871518295ULL))))))));
}
