/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102088
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)112)), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)127))))));
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) var_9))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = var_8;
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((unsigned char) var_0)), (((unsigned char) var_3))))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0]))))));
            }
        } 
    } 
}
