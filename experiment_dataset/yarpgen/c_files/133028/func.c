/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133028
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
    var_16 = ((/* implicit */long long int) ((((((((/* implicit */int) var_10)) | (((/* implicit */int) var_4)))) + (2147483647))) >> (((var_14) + (3132974383416724407LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (4172868841U)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_14)) : (var_12))) : (((/* implicit */unsigned long long int) ((var_11) ^ (var_8))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4172868841U)) ? (15036118010950103514ULL) : (min((3614657414212174348ULL), (18446744073709551615ULL)))))) ? (((((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (((/* implicit */long long int) (+(var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_2)))), (min((var_3), (((/* implicit */short) var_4))))))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_14))));
            }
        } 
    } 
}
