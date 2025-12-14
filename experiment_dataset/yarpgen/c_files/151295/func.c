/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151295
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
    var_14 = ((/* implicit */unsigned char) max((min((var_10), (((/* implicit */unsigned long long int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) var_9))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) (-(max((arr_1 [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) var_9))))));
                arr_6 [2U] [i_1] &= ((/* implicit */unsigned short) max((((((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))) ? (((/* implicit */long long int) (~(var_7)))) : (min((-3352196844212335072LL), (-3352196844212335072LL))))), (((/* implicit */long long int) ((-3352196844212335054LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_12);
            }
        } 
    } 
}
