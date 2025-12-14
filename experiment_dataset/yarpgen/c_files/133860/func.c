/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133860
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) var_10)) ? (9593904064043686712ULL) : (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 16287133474037371307ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9593904064043686712ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_9)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (17592185913344ULL) : (9593904064043686696ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_0))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)78)) : (arr_0 [i_0] [i_0]));
    }
}
