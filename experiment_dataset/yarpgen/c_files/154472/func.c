/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154472
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
    var_19 += ((/* implicit */unsigned int) 1970805180141527407LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_10);
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
        var_20 += ((((/* implicit */_Bool) 1U)) ? (var_13) : (((/* implicit */unsigned long long int) (+(3736413263U)))));
        var_21 += ((/* implicit */long long int) arr_0 [i_0] [1LL]);
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (!(((/* implicit */_Bool) 4294967292U)))))));
    }
    var_22 = ((/* implicit */short) var_5);
}
