/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162216
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))) - (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (var_3) : (((/* implicit */unsigned long long int) (~(5814006376498041808LL))))))));
        var_15 ^= ((/* implicit */long long int) var_2);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_9))))))));
        var_17 += ((/* implicit */long long int) var_10);
    }
    var_18 = ((/* implicit */unsigned short) var_7);
    var_19 = ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */int) var_3);
}
