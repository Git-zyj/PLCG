/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172575
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
    var_11 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), (max((var_6), (((/* implicit */unsigned long long int) var_9))))));
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_5))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) : (268435455U)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)23393))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (short)23393);
}
