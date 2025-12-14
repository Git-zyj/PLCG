/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123623
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
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((-6751396081761604142LL), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-29252)) : (((/* implicit */int) (short)32747)))) : (((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned char)33))));
    var_19 = (+((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43418))) * (2313377330U))))));
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(13507017029705215621ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned short)23303)))), (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((min((arr_2 [i_0 - 3] [9U]), (arr_2 [i_0 - 3] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (short)15)))))));
                var_22 ^= ((/* implicit */unsigned short) (-(((((/* implicit */long long int) arr_1 [i_0] [i_0])) ^ (min((((/* implicit */long long int) 2486839584U)), (32767LL)))))));
            }
        } 
    } 
}
