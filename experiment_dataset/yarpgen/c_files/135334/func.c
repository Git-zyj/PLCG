/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135334
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
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((var_6) < (var_0)))), ((signed char)-53)))) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_0 [i_0 + 1] [i_0 - 2])))))))));
        arr_2 [i_0] = ((/* implicit */short) (unsigned char)127);
    }
    var_13 &= ((/* implicit */int) var_5);
    var_14 = ((/* implicit */unsigned char) ((var_8) ? (max((((/* implicit */unsigned long long int) var_2)), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-(var_7))) : ((-(((/* implicit */int) var_2)))))))));
    var_15 = ((/* implicit */unsigned int) var_9);
}
