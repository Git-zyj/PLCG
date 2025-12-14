/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15745
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
    var_17 = 18446744073709551586ULL;
    var_18 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15423)) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (short)15423)))))))));
        var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4294967295U)) ? (((long long int) arr_1 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) 3854465394U))));
        var_21 *= arr_1 [i_0] [i_0];
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2854385734U)) && (((/* implicit */_Bool) 18446744073709551615ULL))));
        var_23 = (!(((/* implicit */_Bool) ((int) max(((unsigned char)37), ((unsigned char)228))))));
    }
    var_24 = min((var_4), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (short)-5308))))) ? (var_5) : (((/* implicit */unsigned long long int) ((var_9) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
}
