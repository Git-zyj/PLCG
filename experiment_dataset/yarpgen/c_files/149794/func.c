/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149794
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
    var_19 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */signed char) min((((/* implicit */int) max((var_12), (((/* implicit */short) var_5))))), (((((/* implicit */_Bool) var_15)) ? (var_18) : (((/* implicit */int) var_6))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (var_5)))) ? ((+(var_7))) : (var_13)))))))));
                var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (min((min((((/* implicit */unsigned long long int) var_0)), (var_9))), (((/* implicit */unsigned long long int) var_4))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2))), (min((var_2), (var_2)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_13)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_4)))))))))));
    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned long long int) var_0)))))))));
}
