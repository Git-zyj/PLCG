/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137846
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
    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) (signed char)-105)))) : ((~(((/* implicit */int) (signed char)0)))))) < (((((/* implicit */int) max(((signed char)127), (var_0)))) / (((/* implicit */int) max((var_3), (var_6))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) max((var_2), (arr_4 [i_1])))))))));
                var_12 = ((/* implicit */signed char) max((((/* implicit */int) arr_2 [i_0])), ((+(((/* implicit */int) var_10))))));
                var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) (signed char)127)))) : (max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) min((var_1), (arr_0 [i_1]))))))));
            }
        } 
    } 
}
