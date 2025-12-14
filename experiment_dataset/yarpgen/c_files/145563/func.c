/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145563
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
    var_12 = max((((((/* implicit */_Bool) min((var_3), (var_2)))) ? (((((/* implicit */_Bool) var_2)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) (~(var_4)))))), (((((((/* implicit */_Bool) -9223372036854775800LL)) ? (((/* implicit */long long int) var_4)) : (-2662083452860649371LL))) & (((/* implicit */long long int) var_4)))));
    var_13 = ((/* implicit */unsigned int) ((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53083)))));
    var_14 = ((/* implicit */unsigned long long int) -9223372036854775800LL);
    var_15 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) var_5);
                    var_17 = min((max((max((((/* implicit */unsigned long long int) 1073610752)), (var_9))), (((unsigned long long int) (unsigned short)43577)))), (((/* implicit */unsigned long long int) arr_3 [i_0])));
                }
            } 
        } 
    } 
}
