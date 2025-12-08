/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/4
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) ((_Bool) (unsigned char)125)))) : (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (1006632960U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) var_9);
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_4 [i_1] [i_0]))) < (((/* implicit */int) arr_4 [i_0] [i_1]))));
                arr_5 [i_0] = var_15;
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (4115711148349067572LL) : (((/* implicit */long long int) var_14))))) ? (var_18) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))))));
}
