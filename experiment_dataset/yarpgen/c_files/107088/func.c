/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107088
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_11))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) / (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (short)7731))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (short)-8825)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)114)), ((short)-8825)))))), ((+(((((/* implicit */_Bool) 3569687406U)) ? (((/* implicit */int) (short)7731)) : (((/* implicit */int) (unsigned char)33)))))))))));
                var_20 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3]))));
            }
        } 
    } 
}
