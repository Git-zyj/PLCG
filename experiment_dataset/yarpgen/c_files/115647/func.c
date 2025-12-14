/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115647
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
    var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((max((((/* implicit */unsigned int) var_16)), (var_1))), (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8184))) % (209678553U)))) ? (((/* implicit */int) (unsigned short)63251)) : (((/* implicit */int) (unsigned short)8184)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(arr_1 [i_0])));
        var_18 = ((/* implicit */int) ((((((var_13) * (arr_1 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (_Bool)0))) * (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_19 = ((/* implicit */short) var_14);
    }
}
