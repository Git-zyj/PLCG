/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14378
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                arr_7 [i_1] = arr_4 [i_0] [i_0 - 1] [i_0];
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((var_6) + (((/* implicit */unsigned long long int) var_2))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) max((134217727), (-134217752)))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) % (var_7))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
}
