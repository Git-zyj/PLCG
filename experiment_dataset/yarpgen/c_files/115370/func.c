/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115370
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
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((int) (((_Bool)1) ? (4414737937391198828LL) : (((/* implicit */long long int) var_2)))));
        var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */long long int) 467363029)) - (1754995902836279335LL)))));
        arr_4 [i_0] [17ULL] = ((/* implicit */unsigned short) ((((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))))) / (18446744073709551615ULL)));
    }
    var_16 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) (unsigned char)0))));
    var_17 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_0)) ? (1151795604700004352LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) ((var_4) == (var_5)))))), (var_8)));
}
