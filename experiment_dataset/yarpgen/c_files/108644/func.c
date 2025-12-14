/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108644
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
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (2826596988U)))) / (min((((/* implicit */unsigned long long int) var_8)), (var_13))));
                var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 1468370314U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) / (((((/* implicit */_Bool) 1003855534U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))));
}
