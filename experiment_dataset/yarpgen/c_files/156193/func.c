/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156193
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
    var_20 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) ((arr_3 [i_1]) << (((((/* implicit */int) var_9)) - (170))))))) * (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)38)) / (((/* implicit */int) (signed char)-73))))), (max((((/* implicit */unsigned int) var_5)), (var_17)))))));
                var_22 = ((/* implicit */short) max((((unsigned short) ((unsigned long long int) var_1))), (((/* implicit */unsigned short) ((arr_4 [i_0] [i_1] [i_1]) <= (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))));
            }
        } 
    } 
}
