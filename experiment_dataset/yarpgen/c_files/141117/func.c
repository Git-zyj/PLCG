/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141117
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
    var_20 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) var_1);
                var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((unsigned long long int) var_17))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((unsigned char) var_1))))), (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_4)))))));
}
