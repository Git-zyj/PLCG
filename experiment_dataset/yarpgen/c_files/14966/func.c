/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14966
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) (short)21147)))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 2])) : (var_9)))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_6);
}
