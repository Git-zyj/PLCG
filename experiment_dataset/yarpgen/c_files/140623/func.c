/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140623
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))), (((2595238362685073843ULL) + (((/* implicit */unsigned long long int) 4294967285U)))))))))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (short)(-32767 - 1)))));
    var_22 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_9)), (var_3)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 ^= ((/* implicit */int) 2108097172U);
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) * (((unsigned int) 0)))))));
    }
}
