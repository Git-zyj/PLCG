/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1008
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
    var_12 |= ((/* implicit */long long int) var_5);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */int) var_5)))))))) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [21U] [i_0] = ((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (-(((((/* implicit */int) var_3)) * (((/* implicit */int) var_9)))))))));
                arr_7 [18U] [(unsigned char)19] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : ((+(var_4)))))));
                var_14 &= ((((((/* implicit */_Bool) 3163305649U)) || (((/* implicit */_Bool) 2032028444U)))) ? (((((/* implicit */_Bool) var_7)) ? (min((var_10), (((/* implicit */unsigned int) var_8)))) : (min((3163305649U), (((/* implicit */unsigned int) 268435455)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_10))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min(((+(3163305649U))), (((/* implicit */unsigned int) var_5))));
    var_17 = ((/* implicit */int) var_6);
}
