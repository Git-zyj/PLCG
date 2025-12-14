/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106059
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))) : (min((((/* implicit */unsigned int) arr_1 [i_1])), (arr_3 [i_0] [i_0] [i_0]))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) ((signed char) (+(arr_3 [i_0] [i_0] [i_1]))))) : (arr_0 [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((var_15) ^ (((/* implicit */int) var_3))))) ? (((var_12) % (var_1))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_15))))));
    var_17 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((signed char) var_1))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_12))))));
    var_18 = ((/* implicit */unsigned short) ((int) var_8));
}
