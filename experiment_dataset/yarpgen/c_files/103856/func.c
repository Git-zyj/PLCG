/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103856
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned int) ((var_2) & (((/* implicit */int) var_1))))) ^ (min((240630086U), (((/* implicit */unsigned int) var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (240630086U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5))))))))));
    var_12 = ((/* implicit */long long int) (~(min((var_4), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_2)) == (240630090U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((((/* implicit */unsigned int) (signed char)29)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) || (((/* implicit */_Bool) 4054337209U))))), (max((0U), (((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_0])))))))))));
                arr_5 [i_0] [i_1 + 1] [i_0] = ((/* implicit */int) arr_2 [i_0]);
            }
        } 
    } 
}
