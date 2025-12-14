/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14926
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (463638550U))) * (463638550U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_10)))))))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_4 [i_1 + 1] [i_1 + 1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((((3831328727U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))))) * (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) * (((/* implicit */int) (signed char)1)))) / (((/* implicit */int) var_0)))))));
    var_15 *= ((/* implicit */unsigned int) var_6);
}
