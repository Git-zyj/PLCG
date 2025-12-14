/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17606
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
    var_20 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((3857973944297585467LL), (var_16))))));
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(1266261212U)))), (min((-3857973944297585468LL), (((/* implicit */long long int) (unsigned short)65535))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3857973944297585467LL), (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))) : (max((3857973944297585448LL), (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (min((((3857973944297585436LL) + (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) 2147483647))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_13);
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)43216)), (2274003192U)));
}
