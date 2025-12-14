/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159005
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
    var_18 = ((/* implicit */signed char) var_6);
    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) : ((-(626531540U)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_16)), (var_17)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (0LL)))));
    var_20 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 626531556U))));
                arr_5 [i_0] [(short)8] &= ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)165))))));
            }
        } 
    } 
}
