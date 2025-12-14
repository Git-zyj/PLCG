/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133270
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) var_1);
                arr_5 [(signed char)5] [i_1] [11] = ((/* implicit */unsigned short) (((-(arr_1 [i_0]))) - (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned short)51511))))), (min((923487900U), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0])))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((var_0) - (((/* implicit */long long int) var_2)))) : (((((/* implicit */_Bool) (unsigned short)58524)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_5))))) : (var_11)))));
}
