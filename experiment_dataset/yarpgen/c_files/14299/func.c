/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14299
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
    var_17 = ((/* implicit */unsigned short) ((long long int) ((min((8371864752039556662ULL), (((/* implicit */unsigned long long int) (unsigned char)114)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) : (0U)))) && (((/* implicit */_Bool) var_13))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_19 = arr_0 [i_0];
        var_20 -= ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)62))))));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
    {
        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (arr_4 [(short)1] [(short)1])))) && (((var_10) == (((/* implicit */int) (signed char)-31))))));
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)1))))) & ((+(var_2)))));
    }
}
