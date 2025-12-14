/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108334
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
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 = ((/* implicit */unsigned short) var_15);
    var_22 = ((/* implicit */signed char) ((((unsigned int) var_15)) != (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)121), ((signed char)-104)))))));
    var_23 = ((/* implicit */unsigned long long int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((((/* implicit */_Bool) 1918270058)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32651))) - (3496227507U))));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) (signed char)97);
                arr_9 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)30))))) ? (min((var_5), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((long long int) var_16))))))));
            }
        } 
    } 
}
