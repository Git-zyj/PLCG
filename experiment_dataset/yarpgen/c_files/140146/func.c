/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140146
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
    var_16 = ((/* implicit */short) min((((max((var_9), (((/* implicit */unsigned long long int) (signed char)16)))) - (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_7))))) ? (((var_14) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-51)), (var_4)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((/* implicit */int) arr_0 [i_1 + 1])) != (((/* implicit */int) ((short) var_9))));
                var_18 = ((/* implicit */unsigned short) min(((-((-(((/* implicit */int) var_7)))))), (((/* implicit */int) arr_2 [i_1 - 1] [(_Bool)1]))));
            }
        } 
    } 
}
