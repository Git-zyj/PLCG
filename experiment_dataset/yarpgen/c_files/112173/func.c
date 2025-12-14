/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112173
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 = arr_1 [i_0];
                arr_4 [i_1] = max(((signed char)50), ((signed char)-51));
            }
        } 
    } 
    var_17 = max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))))), (max((((/* implicit */signed char) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_11))))), (min((var_9), (var_2))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))))))));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) > ((-(((/* implicit */int) var_12)))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)-69)))), (((((/* implicit */_Bool) (signed char)-124)) && (((/* implicit */_Bool) (signed char)-1))))))) : (((/* implicit */int) var_12))));
    var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_7)) - (103)))))))));
}
