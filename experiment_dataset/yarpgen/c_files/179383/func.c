/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179383
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned int) (-(((0LL) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [8U] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) (+((+((-2147483647 - 1))))));
    }
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(16777216)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min((var_8), ((_Bool)1))))))));
    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)36)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) -2147483630)))))) : ((+(36028522141057024LL))))))));
}
