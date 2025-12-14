/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10970
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_11)));
    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-6)), ((short)-1)))) ? (((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32753))) : (20ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (((_Bool)0) && (((/* implicit */_Bool) (short)32753))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(var_7)))) / (arr_1 [i_0])));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 13; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((_Bool) (unsigned short)48826)))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((long long int) (unsigned short)16717)))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) ((signed char) arr_5 [1LL] [i_1]))) : (((/* implicit */int) ((unsigned short) var_0)))));
    }
}
