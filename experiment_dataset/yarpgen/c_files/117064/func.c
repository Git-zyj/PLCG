/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117064
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
        var_13 = (unsigned char)244;
        var_14 = ((/* implicit */signed char) ((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) (unsigned char)11))))));
    }
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned short)3573))));
}
