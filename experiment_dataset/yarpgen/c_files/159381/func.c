/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159381
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
    var_10 = ((/* implicit */int) (signed char)12);
    var_11 = ((/* implicit */long long int) min((var_11), (var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((arr_5 [i_0] [i_1 + 3]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1266968085U))))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)29906)) : (((/* implicit */int) (unsigned short)14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 2])))))) : (((arr_1 [i_0 + 3] [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_1 - 1])))) : (var_2)))));
                var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)114)) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)23))))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_1])))))));
                var_15 = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
}
