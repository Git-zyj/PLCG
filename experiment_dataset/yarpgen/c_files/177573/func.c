/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177573
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 += ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (~(3299505895U)))) ? (((/* implicit */int) ((short) -13))) : (((/* implicit */int) var_1)))));
                    arr_8 [i_0 + 2] [i_1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2129517487U), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) max((((/* implicit */short) var_6)), (var_8))))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */long long int) max((((/* implicit */short) var_7)), (var_8)));
    var_13 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_1))))));
}
