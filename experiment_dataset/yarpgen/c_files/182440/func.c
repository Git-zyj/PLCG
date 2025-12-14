/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182440
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_9)))))) < (((3887320225U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))))))) < (min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((var_2) - (8260845754210893275LL)))))), (var_5))))))));
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_12 = arr_2 [i_0 + 2];
        var_13 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1]))))))));
    }
}
