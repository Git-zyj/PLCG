/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157232
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
    var_20 *= ((/* implicit */short) ((((/* implicit */int) var_13)) != (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_17))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)0)), (4294967295U))) >= (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))))))) : (min((-4853331327649231976LL), (((long long int) (-2147483647 - 1)))))));
        var_23 = ((/* implicit */unsigned char) arr_0 [(short)19]);
    }
    var_24 *= ((/* implicit */unsigned int) var_17);
    var_25 = var_10;
}
