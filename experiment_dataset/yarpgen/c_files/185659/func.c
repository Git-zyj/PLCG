/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185659
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)11250)));
        var_16 ^= ((/* implicit */_Bool) max((arr_1 [i_0]), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)6)), (var_2)))), ((+(arr_0 [i_0])))))));
    }
    var_17 = ((/* implicit */int) (unsigned char)84);
}
