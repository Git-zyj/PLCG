/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147407
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6681915791665566420LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        var_21 = (-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 2])) ^ (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) ((int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (((unsigned long long int) (unsigned short)28))))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned short) max((((((/* implicit */int) var_1)) & (((/* implicit */int) (signed char)57)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))))));
}
