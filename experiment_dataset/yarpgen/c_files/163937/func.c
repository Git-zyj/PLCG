/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163937
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (-643782900)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_7);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))) : (2466728082U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)63)))))));
        var_14 *= min((((/* implicit */unsigned long long int) ((_Bool) 9ULL))), (((((/* implicit */_Bool) var_0)) ? (140736414613504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
}
