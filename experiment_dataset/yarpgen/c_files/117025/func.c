/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117025
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    var_19 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : ((~(var_6))))), (((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_1 [i_0 - 2]))));
        var_21 ^= ((/* implicit */int) var_9);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (var_14))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [(short)2])) ^ (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_17))));
    var_24 = ((/* implicit */long long int) var_3);
}
