/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115655
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) ((arr_1 [i_0]) > (((unsigned long long int) var_18))));
                arr_6 [i_1] = arr_3 [i_0] [i_0];
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))))) : (min((((long long int) (unsigned short)8064)), (((/* implicit */long long int) var_5)))));
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) max((var_18), (((/* implicit */short) var_17))))) : (((unsigned long long int) ((((/* implicit */_Bool) 1474261814U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))))));
}
