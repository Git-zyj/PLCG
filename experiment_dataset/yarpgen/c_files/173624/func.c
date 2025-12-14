/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173624
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */short) var_7);
                var_17 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) (short)20082)))) : ((+(var_8))))) >> (((/* implicit */int) ((((/* implicit */int) ((10500314159028191891ULL) > (((/* implicit */unsigned long long int) 2965449743U))))) != (((/* implicit */int) ((signed char) var_4))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26023)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))) : (1329517574U)))) ? ((+(((/* implicit */int) var_2)))) : (((var_5) + (((int) var_9))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_1);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((((+(var_0))) - (((/* implicit */int) ((var_8) == (var_1)))))) : ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) <= (var_4))))))));
}
