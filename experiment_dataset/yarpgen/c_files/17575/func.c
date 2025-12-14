/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17575
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_10), (var_1)))) - (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))) : (((((((/* implicit */int) var_14)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_16))))));
    var_18 = var_16;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1]))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [(signed char)18] [i_1 + 1])))))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_1])))))), (((((/* implicit */int) ((((/* implicit */int) arr_5 [(signed char)5] [i_1] [(signed char)5])) == (((/* implicit */int) (signed char)-43))))) | (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-2)))))))))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */signed char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_14))));
}
