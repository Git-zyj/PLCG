/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138225
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (-1)));
    var_21 = (_Bool)1;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) (_Bool)1)))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)20125))))) ^ ((+(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) var_1)) - (13337)))))))) : (((min((var_6), (var_6))) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_0 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0]);
    }
    var_24 = ((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)33452)))))));
    var_25 = ((/* implicit */short) min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) -1)) * (0U)))))));
}
