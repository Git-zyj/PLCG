/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11217
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
    var_10 = ((unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (unsigned short)30389);
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (short)11366))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (short)-20180)) ? (((var_5) - (((/* implicit */int) (short)-14399)))) : (((/* implicit */int) var_9)))))));
}
