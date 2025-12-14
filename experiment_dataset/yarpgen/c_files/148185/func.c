/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148185
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
    var_11 = ((/* implicit */long long int) var_9);
    var_12 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) + (var_5))))));
                arr_7 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_3))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_3))))) / (((var_0) / (((/* implicit */unsigned long long int) var_5)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_4))))))))));
}
