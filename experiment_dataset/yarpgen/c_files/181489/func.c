/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181489
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7167))))) ? ((~(arr_3 [i_0] [i_1 + 3]))) : ((~(arr_3 [i_0] [i_1 + 4]))));
                var_12 = ((/* implicit */long long int) (short)7169);
            }
        } 
    } 
    var_13 *= ((/* implicit */signed char) (short)255);
    var_14 = ((/* implicit */long long int) (+((+(((var_10) / (var_10)))))));
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)255))))), ((~(max((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}
