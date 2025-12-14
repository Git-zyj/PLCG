/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1489
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) arr_3 [i_0])) : ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [0ULL]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_4);
        var_16 ^= ((/* implicit */long long int) arr_1 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max(((!((_Bool)1))), (((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) < (4239259041U)))));
    }
    var_17 = ((/* implicit */unsigned int) var_7);
}
