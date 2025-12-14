/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122113
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+((-(((((/* implicit */_Bool) 3480554226U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55337))) + (3480554238U)));
    var_18 = ((/* implicit */unsigned long long int) (-(((3480554234U) >> (((1479019275855856103ULL) - (1479019275855856082ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 3888817045810262437ULL)) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (814413075U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 3480554226U))))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3480554208U)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
    var_20 = ((signed char) 3480554224U);
}
