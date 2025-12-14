/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164685
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) var_5);
                var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47312))) : (max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_1 [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_9);
}
