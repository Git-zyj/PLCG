/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156097
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_11))))) ? (var_6) : (((684288695644739756ULL) - (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (max((var_3), (((/* implicit */unsigned int) var_13)))) : (var_10)))) : (140737488322560ULL)));
    var_19 &= min((var_16), (var_10));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((17762455378064811860ULL) + (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        var_20 = ((/* implicit */short) (_Bool)1);
    }
    var_21 = ((/* implicit */int) ((unsigned char) max((17762455378064811847ULL), (((/* implicit */unsigned long long int) min((24U), (((/* implicit */unsigned int) var_8))))))));
}
