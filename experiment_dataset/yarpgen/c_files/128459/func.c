/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128459
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
    var_10 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) 1137809381)) ? (((/* implicit */int) (_Bool)1)) : (var_9))))) | (((/* implicit */int) (_Bool)1))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) min((((/* implicit */int) ((var_9) != (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
}
