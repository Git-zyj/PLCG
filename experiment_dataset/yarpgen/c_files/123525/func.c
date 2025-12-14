/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123525
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
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned int) arr_0 [i_0]);
                var_13 = arr_3 [i_1 + 1] [i_0];
            }
        } 
    } 
    var_14 ^= ((/* implicit */int) ((min((((var_6) ? (var_10) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((short) (short)-1))))) != (((/* implicit */int) var_3))));
    var_15 = ((/* implicit */signed char) ((var_6) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-111))))) : (((/* implicit */int) var_8)))) : ((-(((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) (unsigned char)142))))))));
}
