/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150201
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
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1])) : (var_13))));
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (var_18) : (arr_2 [i_0]))) << (((((/* implicit */int) arr_4 [i_1])) - (112)))));
            }
        } 
    } 
    var_21 = var_18;
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_19))));
    var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (-513606544)))) ? (((var_13) ^ (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -681561305)) >= (822745721U)))))))));
}
