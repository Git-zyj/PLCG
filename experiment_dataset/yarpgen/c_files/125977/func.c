/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125977
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (min((((/* implicit */unsigned int) var_6)), (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_17)))))))))));
    var_19 = ((/* implicit */long long int) var_5);
    var_20 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_21 = ((signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) & (((/* implicit */int) ((unsigned short) var_10)))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_2 [i_0])))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_16)) / (((/* implicit */int) var_7)))))))));
            }
        } 
    } 
}
