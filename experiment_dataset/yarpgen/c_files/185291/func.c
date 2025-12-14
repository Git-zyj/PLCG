/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185291
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((9223372036854775807LL) * (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(unsigned short)6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5762532796072627771LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_16)));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) != ((-9223372036854775807LL - 1LL))))) < ((~(((/* implicit */int) (unsigned short)43594)))))))));
    }
}
