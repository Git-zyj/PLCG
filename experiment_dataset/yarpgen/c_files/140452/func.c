/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140452
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
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)48758)) ? (((/* implicit */int) ((unsigned char) var_5))) : ((+(((/* implicit */int) var_11))))));
        var_18 -= ((/* implicit */long long int) ((unsigned char) ((unsigned char) (unsigned short)16384)));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [14ULL]))) >= (var_8)))));
    }
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_5))));
    var_20 -= ((/* implicit */unsigned long long int) (unsigned short)2048);
    var_21 = ((/* implicit */unsigned char) var_15);
}
