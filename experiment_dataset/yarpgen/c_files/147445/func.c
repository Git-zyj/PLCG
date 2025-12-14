/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147445
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_20 |= ((_Bool) (+(-217188669)));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2])))));
    }
    var_21 = var_0;
    var_22 = ((/* implicit */_Bool) min((max(((~(var_5))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
}
