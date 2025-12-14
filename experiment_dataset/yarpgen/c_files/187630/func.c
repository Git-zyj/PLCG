/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187630
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_10 *= arr_4 [i_0];
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1655833018057652700ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_2))))))))) : (((((/* implicit */_Bool) ((5304806156766285269ULL) ^ (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_4)) : (var_3))) : (((/* implicit */long long int) var_0)))))))));
}
