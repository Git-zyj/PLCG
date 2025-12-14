/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171803
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) arr_2 [i_0]);
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_2 [i_0])))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_5))))) & (((((/* implicit */long long int) var_9)) ^ (min((arr_2 [i_0]), (((/* implicit */long long int) var_5))))))));
    }
    var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_0)) + (132))))), ((~(((/* implicit */int) var_5))))))) ? (min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_12)))))) : (((/* implicit */int) ((short) var_8)))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_0)))))) | (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
}
