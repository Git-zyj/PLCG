/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173025
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1])))))) || (((/* implicit */_Bool) (~(arr_5 [i_0] [i_0] [i_0]))))));
                var_18 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))), (max((min((var_2), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) > (max((2146959360U), (((/* implicit */unsigned int) var_16))))));
    var_20 = ((/* implicit */unsigned char) var_9);
}
