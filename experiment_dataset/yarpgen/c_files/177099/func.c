/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177099
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
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) var_3)), (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_13))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1] [14U] [i_0 - 2] = ((((unsigned int) (-(((/* implicit */int) (unsigned short)64082))))) > (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)64102))))))));
                var_16 = ((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0])), ((signed char)34)));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)64082), (var_6)))) ? ((~(((/* implicit */int) (unsigned short)1454)))) : (((/* implicit */int) (unsigned short)1466))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (2075069815351774449LL))) : (((/* implicit */long long int) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned short)1023)))))));
}
