/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112485
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned char)8] [i_0 + 1] [i_0])) >= (((int) var_5)))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((var_8) >> (((((/* implicit */int) ((signed char) arr_2 [i_0] [i_1] [i_1]))) - (39)))));
                arr_6 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2104694033)) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_11);
    var_20 |= ((/* implicit */unsigned int) var_2);
    var_21 |= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((short) var_8))) ? (max((((/* implicit */int) (short)-16427)), (-2104694030))) : (((/* implicit */int) var_10)))));
    var_22 *= ((/* implicit */unsigned char) var_1);
}
