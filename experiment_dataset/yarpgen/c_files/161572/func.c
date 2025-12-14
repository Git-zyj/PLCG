/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161572
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = min((min((((/* implicit */unsigned long long int) var_1)), (var_3))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_8))));
                var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) var_2))))), (var_3)));
            }
        } 
    } 
}
