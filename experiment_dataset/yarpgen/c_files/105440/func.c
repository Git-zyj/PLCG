/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105440
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
    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (9223372036854775807LL) : (402057186713496560LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) ((_Bool) -402057186713496560LL))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((402057186713496560LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)67))))) : ((((((_Bool)1) ? (-8139902993318950355LL) : (((/* implicit */long long int) 2147483622)))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)1))))))));
            }
        } 
    } 
}
