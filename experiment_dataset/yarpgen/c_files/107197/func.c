/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107197
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
    var_17 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_9), (min((((/* implicit */int) max((((/* implicit */signed char) var_2)), ((signed char)74)))), ((~(((/* implicit */int) var_13))))))));
                var_19 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_3 [i_1 + 2] [9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))), (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_3 [i_1] [i_0 + 1])))))), (((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (1754086596) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
