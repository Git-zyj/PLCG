/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16616
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
    var_12 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((var_11) ? (var_10) : (((/* implicit */int) var_5))))) : (min((((/* implicit */long long int) 1572644084)), (-1970343022153746022LL))))), (((/* implicit */long long int) (unsigned short)12283))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12283)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) arr_0 [i_0])), (var_0)))));
                var_14 ^= ((/* implicit */short) arr_3 [i_1]);
            }
        } 
    } 
}
