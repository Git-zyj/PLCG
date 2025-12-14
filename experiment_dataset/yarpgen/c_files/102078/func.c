/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102078
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = min(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((unsigned char) var_3))))));
                var_14 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) var_2)), (var_9))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((min((var_1), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_2);
    var_17 |= ((/* implicit */unsigned char) var_5);
}
