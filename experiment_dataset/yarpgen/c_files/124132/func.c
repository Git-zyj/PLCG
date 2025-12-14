/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124132
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) arr_1 [3LL]);
        var_21 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned short)54782)) : (((/* implicit */int) var_15))))))) : (var_16)));
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_18)))))) == (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((var_1), (((/* implicit */unsigned long long int) var_4))))))));
}
