/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143618
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
    var_19 = ((((/* implicit */_Bool) var_0)) ? (4294967295U) : (max((((/* implicit */unsigned int) (signed char)-1)), (954051222U))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) var_14)))));
    var_21 -= ((/* implicit */signed char) ((unsigned int) var_15));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_22 = arr_1 [i_1];
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [4U] [4U])) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))));
                arr_6 [(signed char)8] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))) & (((unsigned int) arr_0 [i_0])))));
            }
        } 
    } 
}
