/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123511
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_19 -= ((/* implicit */unsigned short) min((min((var_0), (arr_1 [i_0]))), (((/* implicit */short) ((var_7) <= ((-(((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((2827520706U) >> (((2827520706U) - (2827520677U)))));
        arr_3 [i_0] [i_0] = max((((/* implicit */int) var_8)), ((-(arr_0 [1LL] [i_0]))));
    }
    var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) -7731791825861672801LL))));
    var_21 += ((/* implicit */long long int) var_9);
    var_22 = ((((((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_12))))) > (((((/* implicit */_Bool) 2827520691U)) ? (((/* implicit */long long int) var_13)) : (var_18))))) ? (((var_18) ^ (((/* implicit */long long int) ((/* implicit */int) ((2827520706U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
}
