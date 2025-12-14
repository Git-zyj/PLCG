/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107532
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
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_3);
                var_18 = ((/* implicit */unsigned int) var_17);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)53562)) ? (((/* implicit */unsigned long long int) var_5)) : (var_0))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
}
