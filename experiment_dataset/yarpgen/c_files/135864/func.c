/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135864
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
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) var_5);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) max((var_3), (((/* implicit */int) arr_1 [i_1 - 3]))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (var_12))))) ? (((max((((/* implicit */unsigned long long int) var_4)), (14954165075363498877ULL))) / (((/* implicit */unsigned long long int) (+(-729534873)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_1]))))) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2])) : (((((/* implicit */int) var_2)) % (((/* implicit */int) arr_3 [i_0 - 3] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((14954165075363498866ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
}
