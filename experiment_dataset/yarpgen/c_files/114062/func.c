/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114062
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
    var_11 = ((/* implicit */signed char) ((long long int) ((var_1) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-1LL))) : (((/* implicit */long long int) var_7)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((((var_2) << (((((((/* implicit */int) arr_0 [i_0] [i_1])) + (12))) - (6))))) <= (((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) arr_1 [i_0] [(signed char)3]))))));
                var_12 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (signed char)-78)), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_7))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_1])))))));
            }
        } 
    } 
    var_13 = var_6;
}
