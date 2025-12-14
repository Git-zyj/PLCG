/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100092
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((var_8) % (562949953413120LL))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) var_15)) : (((int) var_5))))) : ((-(var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) (_Bool)1))))) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [22] [i_1] [i_1])))))))));
                arr_6 [i_1] = ((/* implicit */signed char) ((long long int) max((arr_5 [i_1] [(short)23] [i_0]), (arr_5 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
}
