/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142052
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
    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_10))))) : (var_11))), (var_11)));
    var_14 = ((/* implicit */unsigned char) (unsigned short)4667);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) (signed char)-1))))), (max((((/* implicit */unsigned long long int) (unsigned char)178)), (var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)60864)) : (((/* implicit */int) (short)511))))) : (arr_4 [i_1] [i_0]))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (unsigned short)51960))));
            }
        } 
    } 
}
