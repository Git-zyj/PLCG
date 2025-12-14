/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162570
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */short) ((((/* implicit */int) (!(var_8)))) & (((/* implicit */int) (unsigned char)255))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned char)243))));
    }
    var_18 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (~(var_12)))), (min((((/* implicit */unsigned long long int) var_10)), (var_15))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)252)))))));
    var_19 = ((/* implicit */short) var_1);
}
