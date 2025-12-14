/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154560
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_4))))), (max((var_10), (((/* implicit */long long int) var_4))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0))) : (min(((-(var_10))), (((/* implicit */long long int) min((var_3), (var_3))))))));
                var_11 = ((/* implicit */short) (((+(var_5))) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1)))))));
                arr_8 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))) && (((/* implicit */_Bool) var_1))))), (min((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_12 += ((/* implicit */signed char) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))))));
    var_13 |= ((/* implicit */_Bool) ((max((var_10), (var_10))) - (((/* implicit */long long int) (~(var_5))))));
}
