/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136133
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
    var_20 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned int) min(((!(arr_0 [i_0 + 1] [i_1]))), (var_2))))));
                var_22 = ((/* implicit */unsigned long long int) (!(min((arr_3 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 - 1] [i_0 + 1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (_Bool)0))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : (var_9))))) * (((/* implicit */long long int) ((/* implicit */int) var_19)))));
}
