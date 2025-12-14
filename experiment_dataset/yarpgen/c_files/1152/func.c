/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1152
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
    var_18 = var_1;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = var_9;
                var_20 ^= ((/* implicit */short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (2430916797U)))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (max((max((4269891585U), (arr_2 [i_0]))), (max((((/* implicit */unsigned int) (signed char)127)), (arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */long long int) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_0)))))))));
}
