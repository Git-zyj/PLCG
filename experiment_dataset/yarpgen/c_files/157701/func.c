/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157701
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-38)), (((unsigned long long int) 832114139U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((unsigned int) ((var_12) ? (var_2) : (((/* implicit */long long int) var_14))))) : (((/* implicit */unsigned int) 1816613393))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (+((+(max((((/* implicit */int) (unsigned short)16723)), (arr_4 [i_0] [i_2])))))));
                    var_23 = ((/* implicit */short) (-(832114162U)));
                }
            } 
        } 
    } 
}
