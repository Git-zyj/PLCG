/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113887
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
    var_20 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned short) var_6))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-24472)) : (((/* implicit */int) (short)-24472))))))) ? (var_13) : (((((/* implicit */int) var_6)) % (((((/* implicit */int) (short)24486)) << (((((/* implicit */int) (unsigned short)8663)) - (8655)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1])))), (((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_1 [i_0] [i_1]), (var_9)))) + (((/* implicit */int) var_1))));
                var_24 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (short)24490)))), (((((/* implicit */int) arr_2 [i_0] [i_1])) & (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                var_25 = ((short) (~(((/* implicit */int) var_16))));
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)24486)) ? (((((((/* implicit */int) (short)-24472)) + (2147483647))) << (((((/* implicit */int) min((var_5), (arr_5 [2ULL])))) - (66))))) : (((/* implicit */int) (signed char)-4)))))));
            }
        } 
    } 
}
