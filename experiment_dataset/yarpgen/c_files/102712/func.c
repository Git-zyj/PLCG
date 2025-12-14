/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102712
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((-1506273490) + (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1))))))), (((((/* implicit */_Bool) var_11)) ? ((+(12383994061175521575ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 262143U)))))));
                var_21 = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned short) ((unsigned char) (!(var_19)))));
    var_23 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (min((((/* implicit */unsigned long long int) var_0)), (var_2))))), (var_2)));
    var_24 = ((/* implicit */long long int) min((var_10), (var_2)));
}
