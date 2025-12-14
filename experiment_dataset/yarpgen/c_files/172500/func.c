/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172500
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
    var_15 ^= ((((/* implicit */_Bool) ((long long int) ((unsigned int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((var_2) || (((/* implicit */_Bool) (unsigned short)40066)))))))) : ((+(var_14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0 + 2]);
        var_17 = ((/* implicit */int) var_5);
    }
}
