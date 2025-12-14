/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185829
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3688872971U)), (((var_12) / (var_12)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (9223372036854775783LL) : (9223372036854775783LL))), (max((((/* implicit */long long int) var_11)), (-7856165640747625148LL))))))));
                var_16 &= ((/* implicit */short) min((((/* implicit */int) ((signed char) (~(var_9))))), (min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (var_9))))))));
}
