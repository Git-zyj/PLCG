/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121078
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
    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23096)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22569))) : (512152298U)));
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */short) var_11)), (((short) var_5))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = (~(512152304U));
                    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) ? (arr_5 [i_1 + 2] [i_1 + 2]) : (arr_5 [i_1 + 3] [i_1 + 3]))))));
                    arr_7 [i_0] [i_1] [i_1] [9ULL] |= ((/* implicit */signed char) var_0);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_11))))) : ((-(512152295U))))))))));
}
