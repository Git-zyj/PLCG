/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123734
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) min((((signed char) arr_3 [i_0 + 1] [i_0])), (((signed char) (signed char)77))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
                arr_6 [i_0] [i_1] [i_1] = ((signed char) arr_1 [i_0] [i_1]);
            }
        } 
    } 
    var_17 *= ((/* implicit */signed char) ((((/* implicit */int) var_14)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((signed char) (signed char)54))) : (((/* implicit */int) var_8))))));
}
