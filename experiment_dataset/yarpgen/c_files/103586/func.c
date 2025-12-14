/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103586
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
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) (_Bool)1))), ((-(var_14)))));
        var_21 *= (+(((/* implicit */int) max((arr_3 [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 + 1] [i_0 - 1])))));
    }
    var_22 = ((short) (_Bool)1);
}
