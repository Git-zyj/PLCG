/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126074
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
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) var_9);
                var_16 = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) min((var_8), (var_4)))))))));
    var_18 = ((/* implicit */int) (-(var_1)));
    var_19 = ((/* implicit */unsigned char) ((((((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (var_7)))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) var_3)))))));
}
