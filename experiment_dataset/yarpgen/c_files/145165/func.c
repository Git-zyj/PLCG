/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145165
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) var_6)) : (((unsigned int) ((((/* implicit */_Bool) 33554176)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)127)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_3 [i_0]))));
                var_22 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                var_23 = ((/* implicit */unsigned int) (signed char)-110);
                arr_7 [i_1] = ((/* implicit */short) (~(1235134329)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((var_2) ? (((((_Bool) 1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((var_16) ? (var_13) : (var_17))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-126))))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) / (((/* implicit */int) var_12))))))))));
}
