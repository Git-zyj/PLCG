/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176845
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))))));
                var_19 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (short)-23031)) : (((/* implicit */int) (signed char)-18))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))), (((var_1) ? (((/* implicit */int) (short)27775)) : (((/* implicit */int) (short)23047)))))), (((/* implicit */int) ((short) ((var_10) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_12)))))) ? (((unsigned int) ((((/* implicit */_Bool) (short)27801)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)27549))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1596982247U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (79379272U)))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) max((var_2), (((/* implicit */signed char) var_13))))))))));
}
