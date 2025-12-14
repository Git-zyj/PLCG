/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119782
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
    var_10 = ((/* implicit */unsigned long long int) (signed char)63);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) + (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (((((/* implicit */_Bool) (signed char)-63)) ? (11152626097404032135ULL) : (18446744073709551615ULL)))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (max((((((/* implicit */_Bool) 1873575267944972043ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (14713689376263101365ULL))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_7) : (18446744073709551615ULL)))))));
    }
}
