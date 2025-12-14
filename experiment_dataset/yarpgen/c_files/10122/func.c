/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10122
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
    var_16 ^= ((/* implicit */unsigned int) ((var_6) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-22310)) ^ (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (signed char)-7);
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44074)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))))));
    }
}
