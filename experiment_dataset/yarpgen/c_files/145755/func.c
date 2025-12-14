/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145755
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
    var_18 = ((((/* implicit */_Bool) (short)-17355)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(var_9))) != (min((2273934710U), (2273934710U))))))) : (var_0));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_12)))))))))));
    var_20 = ((/* implicit */unsigned short) (~(2021032578U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [(signed char)11] = ((/* implicit */unsigned char) arr_2 [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)54230)) >= (((/* implicit */int) var_15))))) < (((/* implicit */int) arr_2 [i_0 - 3])))));
            }
        } 
    } 
}
