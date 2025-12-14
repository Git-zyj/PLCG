/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113559
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
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0]));
        var_19 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_0 [i_0])), (max((var_8), (((/* implicit */unsigned int) arr_1 [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (1052308934039324330LL)))))))));
    }
}
