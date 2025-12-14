/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187979
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
    var_19 = ((/* implicit */int) var_18);
    var_20 = ((/* implicit */long long int) var_3);
    var_21 |= ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_22 &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_0] [i_1 + 1] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (((arr_2 [i_0]) / (arr_2 [i_0])))))));
                var_23 |= ((/* implicit */_Bool) var_16);
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
}
